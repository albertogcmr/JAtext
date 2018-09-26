# JAtext
Colaborative C project: Text editor

##################################
##            Autores           ##
##################################

garcia.cobo.alberto@gmail.com
jesus alvarez


##################################
## Contenido del menú principal ##
##################################

Menú principal: 
==============
(1) Cargar archivo
(2) Datos y metadatos del archivo
(3) Edición del archivo de texto
(4) Operaciones sobre archivo 
(0) Salir

Elige opción (1,2,3,4,0): _

############################################################
## Contenido del sub menú "Datos y metadatos del archivo" ##
############################################################

Datos y metadatos del archivo:
=============================
(1) Número de caracteres/Palabras/Lineas
(2) Número de vocales/Consonantes
(3) Número apariciones de una palabra 
(0) Salir

Elige opción (1,2,3,0): _

###########################################################
## Contenido del sub menú "Edición del archivo de texto" ##
###########################################################

Edición del archivo de texto:
============================
(1) Muestra texto
(2) Sustituir palabra
(3) Añadir linea al final del documento
(4) Insertar linea en posición X
(5) Eliminar linea
(0) Salir:

Elige opción (1,2,3,4,5,0): _

########################################################
## Contenido del sub menú "Operaciones sobre archivo" ##
########################################################

Operaciones sobre archivos:
==========================

(1) Guardar archivo
(2) Renombrar archivo
(3) Copiar archivo
(0) Salir 

Elige opción (1,2,3,0): _

##############################################
## Despliegue del árbol de opciones de menú ##
##############################################

Menú principal:
│
├───(1) Cargar archivo
│
├───(2) Datos y metadatos del archivo
│   └───(1) Número de caracteres/Palabras/Lineas
│   └───(2) Número de vocales/Consonantes
│   └───(3) Número apariciones de una palabra
│   └───(0) Salir
│
├───(3) Edición del archivo de texto
│   └───(1) Muestra texto
│   └───(2) Sustituir palabra
│   └───(3) Añadir linea al final del documento
│   └───(4) Insertar linea en posición X
│   └───(5) Eliminar linea
│   └───(0) Salir
│
├───(4) Operaciones sobre archivo
│   └───(1) Guardar archivo
│   └───(2) Renombrar archivo
│   └───(3) Copiar archivo
│   └───(0) Salir
└───(0) Salir


#####################
## Funcionalidades ##
#####################

(1) Cargar archivo -> Solicita al usuario introducir el nombre del archivo que vamos a tratar. Si el archivo no existe se carga uno vacio con ese nombre, si se pulsa ENTER ("") se vuelve a pedir nombre de archivo hasta que la cadena no esté vacia.

(2) Datos y metadatos del archivo -> si la variable nombre_de_archivo es NULL, se comunica al usuario que antes hay que cargar el archivo. el usuario pulsa ENTER para confirmar que ha leido el mensaje y volvemos al menú principal. Si nombre_de_archivo NO es NULL Despliega sub menú "Datos y metadatos del archivo"". 

(3) Edición del archivo de texto -> si la variable nombre_de_archivo es NULL, se comunica al usuario que antes hay que cargar el archivo. el usuario pulsa ENTER para confirmar que ha leido el mensaje y volvemos al menú principal. Si nombre_de_archivo NO es NULL Despliega sub menú "Edición del archivo de texto". 

(4) Operaciones sobre archivo -> si la variable nombre_de_archivo es NULL, se comunica al usuario que antes hay que cargar el archivo. el usuario pulsa ENTER para confirmar que ha leido el mensaje y volvemos al menú principal. Si nombre_de_archivo NO es NULL Despliega sub menú "Operaciones sobre archivo". 
(0) Salir del programa




(2.1) Número de caracteres/Palabras/Lineas: -> muestra número de caracteres alfanuméricos , palabras y líneas. el usuario pulsa ENTER para confirmar que ha leido el mensaje. Volvemos al mismo submenú
# NOTA: int isalnum(int c);

(2.2) Número de vocales/Consonantes: -> muestra número de letras vocales y consonantes. el usuario pulsa ENTER para confirmar que ha leido el mensaje. Volvemos al mismo submenú 

(2.3) Número apariciones de una palabra: -> muestra número de veces que una palabra (cadena de caracteres) aparece en el documento. el usuario pulsa ENTER para confirmar que ha leido el mensaje. Volvemos al mismo submenú 
p.e: cadena = xyxyxyxyxy
contar "xyxy" dentro de la cadena "xyxyxyxyxyxy" = 3
contar "xyxy" dentro de la cadena "xyxyxy" = 1

(2.0) Salir: -> Vuelve al menú principal


(3.1) Muestra texto: -> muestra el contenido del archivo linea por linea. el usuario pulsa ENTER para confirmar que ha leido el mensaje. Volvemos al mismo submenú 
pe: 
[0]	 Contenido del archivo
[1]	 fdasdfasfasdfsafas
[2]	 sadfasfdasf
[3]  asdfasdfa
.
.
[56] asdfasdfasfd

(3.2) Sustituir palabra: -> solicita palabra y sustituye todas sus apariciones del texto por la nueva palabra. Mostramos al usuario en número de cambios que ha habido. el usuario pulsa ENTER para confirmar que ha leido el mensaje. Volvemos al mismo submenú 

(3.3) Añadir linea al final del documento: -> solicita linea de caracteres y la añade al final del texto. el usuario pulsa ENTER para confirmar que ha leido el mensaje de "añadida linea". Volvemos al mismo submenú 

(3.4) Insertar linea en posición X: -> solicita linea de caracteres y posicióne inserta en esa posición la nueva linea. el usuario pulsa ENTER para confirmar que ha leido el mensaje "lina insertada" o "no existe esa linea". Volvemos al mismo submenú 

(3.5) Eliminar linea: -> solicita índice de linea a eliminar. el usuario pulsa ENTER para confirmar que ha leido el mensaje de "linea eliminada" o "linea no existe". Volvemos al mismo submenú 

(3.0) Salir: -> Vuelve al menú principal 


(4.1) Guardar archivo: -> salva archivo cargado previamente con su mismo nombre y Volvemos al mismo submenú

(4.2) Renombrar archivo: -> solicita al usuario un nuevo nombre y salva archivo con ese nuevo nombre eliminando el documento previo. y Volvemos al mismo submenú

(4.3) Copiar archivo: -> solicita nuevo nombre y salva archivo con ese nuevo nombre manteniendo el documento previo. y Volvemos al mismo submenú

(4.0) Salir: -> Vuelve al menú principal
