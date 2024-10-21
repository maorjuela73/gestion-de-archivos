# Función de utilidad para mostrar el resultado de comparación
def display_result(description, result):
    if result == 0:
        print(f"{description} == 0")
    elif result > 0:
        print(f"{description} > 0")
    else:
        print(f"{description} < 0")

# Función principal
def main():
    # Declaración de cadenas constantes
    s1 = "Testing the comparison functions."  # s1 con valor inicial
    s2 = "Hello"  # s2 con valor "Hello"
    s3 = "stinger"  # s3 con valor "stinger"
    s4 = s2  # s4 se inicializa con el valor de s2 ("Hello")

    # Imprimir los valores iniciales de s1, s2, s3 y s4
    print(f"s1: {s1}\ns2: {s2}\ns3: {s3}\ns4: {s4}\n")

    # Comparación de s1 y s4
    if s1 > s4:
        print("s1 > s4")
    else:
        print("s1 <= s4")

    # Comparación de s1 y s2
    display_result("s1.compare(s2)", (s1 > s2) - (s1 < s2))

    # Comparación de una subcadena de s1 (elementos 2-6) con una subcadena de s3 (elementos 0-4)
    sub_s1 = s1[2:7]  # Desde la posición 2, tomar 5 caracteres
    sub_s3 = s3[0:5]  # Desde la posición 0, tomar 5 caracteres
    display_result("s1.compare(2, 5, s3, 0, 5)", (sub_s1 > sub_s3) - (sub_s1 < sub_s3))

    # Comparación de s2 y s4
    display_result("s4.compare(0, len(s2), s2)", (s4[:len(s2)] > s2) - (s4[:len(s2)] < s2))

    # Comparación de s2 y s4 (primeros 3 caracteres)
    display_result("s2.compare(0, 3, s4)", (s2[:3] > s4[:3]) - (s2[:3] < s4[:3]))

# Ejecutar la función principal
if __name__ == "__main__":
    main()
