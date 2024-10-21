import os

# Definir la ruta del archivo
file_path = "clientes_cuentas.txt"

# Intentar abrir el archivo
try:
    with open(file_path, 'r') as input_file:
        # Imprimir el encabezado con formato
        print(f"{'Account':<10}{'Name':<13}{'Balance':>7}")

        # Leer cada registro del archivo y mostrarlo
        for line in input_file:
            parts = line.split()
            if len(parts) == 3:
                account = parts[0]
                name = parts[1]
                balance = float(parts[2])
                
                # Imprimir cada registro con el formato especificado
                print(f"{account:<10}{name:<13}{balance:>7.2f}")
except FileNotFoundError:
    print("No se pudo abrir el archivo")
    exit(1)
