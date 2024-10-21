## Taller: Desafíos de Programación en C++

### 1. **Ejercicio 1: Cálculo del Promedio de Números Mayores a 50**
- **Nombre del archivo**: `f_data41.2-1.txt`
- **Descripción**: Contiene 10 números enteros de 2 dígitos separados por un espacio.
  
#### Ejemplo del contenido del archivo:
```
13 55 12 61 12 19 80 91 15 16
```

#### Tarea:
Escribe un programa en C++ que:
- Lea los números enteros desde el archivo.
- Calcule y muestre el promedio de los números que son mayores a 50.

---

### 2. **Ejercicio 2: Cálculo del Promedio en un Rango**
- **Nombre del archivo**: `f_data41.2-2.txt`
- **Descripción**: Contiene números enteros de 3 dígitos separados por comas.
  
#### Ejemplo del contenido del archivo:
```
130,501,322,415,527,191
```

#### Tarea:
Escribe un programa en C++ que:
- Lea los números enteros desde el archivo.
- Calcule y muestre el promedio de los números que están entre 300 y 500.

---

### 3. **Ejercicio 3: Encontrar el Mejor y Peor Estudiante**
- **Nombre del archivo**: `f_data41.2-3.txt`
- **Descripción**: Contiene las calificaciones y los nombres completos de los estudiantes de una clase. Cada registro está separado por una coma.
  
#### Ejemplo del contenido del archivo:
```
96,George Papas
100,Anna Maria Garcia
89,Peter Smith
```

#### Tarea:
Escribe un programa en C++ que:
- Lea las calificaciones y los nombres desde el archivo.
- Encuentre y muestre el nombre completo del estudiante con la calificación más alta y el estudiante con la calificación más baja.

---

### 4. **Ejercicio 4: Extracción y Cálculo de Información sobre Artículos Transportados**

- **Nombre del archivo**: `f_data41.2-4.txt`
- **Descripción**: Contiene detalles de los artículos transportados, incluyendo ancho, largo, alto y una descripción de cada artículo. Las dimensiones de los artículos están en pulgadas y cada dimensión ocupa 4 caracteres (2 para la parte entera, 1 para el punto decimal y 1 para el dígito decimal).

#### Ejemplo del contenido del archivo:
```
110.5 011.2 020.9 Box No 37 (Plastic bottles)
022.6 023.1 040.2 Container No 23 (6 glasses)
009.5 156.6 020.0 Package No 12 (Fragile items)
024.2 020.1 030.1 Container No 29 (Glass bottles)
```

#### Tarea:
Escribe un programa en C++ que:

1. **Buscar por palabra clave**: Solicita al usuario que ingrese una palabra clave, busca dicha palabra en la descripción de los artículos y muestra las descripciones correspondientes.

   - **Ejemplo de salida**:
     Si el usuario ingresa la palabra `glass`, la salida debería ser:
     ```
     Palabra clave 'glass' encontrada!

     Container No 23 (6 glasses) - Dimensiones: 22.6 x 23.1 x 40.2
     Container No 29 (Glass bottles) - Dimensiones: 24.2 x 20.1 x 30.1
     ```

2. **Calcular y mostrar volumen**: Calcula el volumen de cada artículo en pies cúbicos (donde 1 pie cúbico = 1728 pulgadas cúbicas), y lo muestra en el siguiente formato:

   - **Ejemplo de salida**:
     ```
     Volumen de cada artículo:
     
     Box No 37 (Plastic bottles): Volumen = 14.9686 pies cúbicos
     Container No 23 (6 glasses): Volumen = 12.1451 pies cúbicos
     Package No 12 (Fragile items): Volumen = 17.2187 pies cúbicos
     Container No 29 (Glass bottles): Volumen = 8.472940 pies cúbicos
     ```

3. **Calcular volumen total**: Calcula y muestra el volumen total de todos los artículos.
   
   - **Ejemplo**:
     El programa debería mostrar la suma de los volúmenes individuales calculados en el paso 2.

4. **Encontrar el artículo más grande**: Encuentra y muestra la descripción del artículo con el mayor volumen.
   
   - **Ejemplo de salida**:
     ```
     Package No 12 (Fragile items) tiene el mayor volumen: 17.2187 pies cúbicos
     ```

> **Nota**: Un pie cúbico equivale a 1728 pulgadas cúbicas.

---

### 5. **Ejercicio 5: Concatenación de Archivos**
- **Tarea**: Escribe un programa en C++ que:
  - Solicite al usuario que ingrese los nombres de dos archivos.
  - Lea el contenido de ambos archivos y los concatene en un nuevo archivo llamado `final.txt`.
  - Si los nombres de archivo proporcionados no tienen la extensión `.txt`, el programa debe mostrar un mensaje de error.

---

## Próximos Pasos
1. Comienza creando una función básica de lectura de archivos para cada ejercicio.
2. Implementa la lógica para las condiciones, como el filtrado por rangos de valores o el cálculo de volúmenes totales.
3. Prueba los programas con los datos de ejemplo proporcionados para asegurar la corrección.

Si tienes alguna duda o necesitas ayuda con la depuración, ¡no dudes en preguntar!