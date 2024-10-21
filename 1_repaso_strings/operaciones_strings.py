# Declaración de cadenas
s1 = "happy"
s2 = " birthday"
s3 = ""

# Longitud de las cadenas
print(f's1: "{s1}"; longitud: {len(s1)}')
print(f's2: "{s2}"; longitud: {len(s2)}')
print(f's3: "{s3}"; longitud: {len(s3)}')

# Comparación de cadenas
print("\nEl resultado de comparar s2 y s1:")
if s2 == s1:
    print("s2 == s1: true")
else:
    print("s2 == s1: false")

if s2 != s1:
    print("s2 != s1: verdadero")
else:
    print("s2 != s1: falso")

# Verificar si s3 está vacío
print("\nProbando s3.empty():")
if not s3:
    print("s3 está vacío; asignando a s3;")
    s3 = "feliz cumpleaños"
print(f's3: "{s3}"')

# Verificación de prefijos y sufijos
print("\nVerificando inicio y fin de cadenas:")
if s1.startswith("ha"):
    print('s1 empieza con "ha": verdadero')
else:
    print('s1 empieza con "ha": falso')

if s2.startswith("ha"):
    print('s2 empieza con "ha": verdadero')
else:
    print('s2 empieza con "ha": falso')

if s1.endswith("ay"):
    print('s1 termina con "ay": verdadero')
else:
    print('s1 termina con "ay": falso')

if s2.endswith("ay"):
    print('s2 termina con "ay": verdadero')
else:
    print('s2 termina con "ay": falso')
