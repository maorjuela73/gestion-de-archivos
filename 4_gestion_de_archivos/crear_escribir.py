import os

# Definir el nombre del archivo de salida
file_path = "clientes_cuentas.txt"

# Abrir el archivo de salida
try:
    with open(file_path, 'w') as out_file:
        print("Ingrese los datos de los clientes (número de cuenta, nombre, balance). Ingrese -1 para finalizar.")

        while True:
            try:
                cuenta = int(input("Número de cuenta (o -1 para finalizar): "))
                if cuenta == -1:
                    break

                nombre = input("Nombre del cliente: ")

                balance = float(input("Balance: "))

                # Escribir la información en el archivo
                out_file.write(f"{cuenta} {nombre} {balance}\n")

                print("Registro guardado.")
            except ValueError:
                print("Entrada inválida, por favor intente nuevamente.")
except IOError:
    print(f"Error al abrir el archivo {file_path} para escribir.")

print(f"Datos guardados en el archivo {file_path}")
