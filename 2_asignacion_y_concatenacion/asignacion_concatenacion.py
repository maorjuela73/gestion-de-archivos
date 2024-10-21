# Inicialización de cadenas
s1 = "cat"  # s1 se inicializa con la cadena "cat"
s2 = ""     # s2 se inicializa a una cadena vacía
s3 = ""     # s3 se inicializa a una cadena vacía

# Asignaciones
s2 = s1          # asignar s1 a s2
s3 = s1          # asignar s1 a s3

# Imprimir valores iniciales de s1, s2 y s3
print(f"s1: {s1}\ns2: {s2}\ns3: {s3}\n")

# Modificación de caracteres específicos
s2 = 'r' + s2[1:]  # modificar el primer carácter de s2
s3 = s3[:2] + 'r' + s3[3:]  # modificar el tercer carácter de s3

# Imprimir valores después de los cambios
print(f"Después de los cambios:\ns2: {s2}\ns3: {s3}\n")

# Concatenación de cadenas
print("\nDespués de las concatenaciones:")
s4 = s1 + "apult"  # concatenar "apult" a s1 y asignar a s4
s1 += "acomb"      # crear "catacomb" al añadir "acomb" a s1
s3 += "pet"        # crear "carpet" usando el operador sobrecargado +=

# Imprimir valores de s1, s3 y s4 después de la concatenación
print(f"s1: {s1}\ns3: {s3}\ns4: {s4}\n")

# Añadir una porción de s1 a s5
# Crear cadena "comb" (s5 inicialmente está vacía)
s5 = s1[4:]  # Añadir desde la posición 4 hasta el final de s1

# Imprimir valor de s5
print(f"s5: {s5}\n")