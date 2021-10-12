# Aplicación para registros escolares!

Esta aplicación ha sido diseñada para poder facilitar el arduo trabajo de registrar y actualizar las informaciones de los alumnos de cualquier establecimiento educativo durante el periodo escolar. 

# Derechos de autor

Este programa fue realizado por *Fernando Omar López Morales con numero de carné: 7690-21-20755* de la facultad de Ingeniería de la Universidad Mariano Gálvez, sede Boca del Monte del departamento de Guatemala, con fecha de 11/10/2021

## Sobre el sistema administrativo de los estudiantes

En todo establecimiento educativo de tipo publico o privado tiene la obligación de llevar registros reales y actualizados de cada uno de sus alumnos especialmente sobre su desempeño académico y el estado (entre aprobado o reprobado).

# Lenguaje de programación utilizado

La aplicación ahorcado fue elaborada en el lenguaje  C++, en el programa se pueden encontrar variables en tres idiomas (inglés, español y portugués), sin embargo, estos comparten el significado según su uso.

## Sobre la ejecución del programa

El programa se puede ejecutar en 	C++ y en el interpretador Visual Studio Code.
El programa tiene una condicional inicial, ya que esta depende de archivos previamente creados da la oportunidad al usuario de crear un nuevo archivo (en caso de este no haber sido creado aún) o de poder manipular un usuario previamente creado.

## Para comenzar a ejecutar el programa
Desde Dev C++
*Clica en la opción de compilar y ejecutar, que se encuentra en la barra superior de herramientas.*

**Nota** Se puede copiar el programa y pegarlo en una nueva hoja (o archivo) en el lenguaje, o se puede abrir desde las aplicaciones de *Visual Studio Code* o de *Dev C++* en la opción *Open file* (en inglés) o en la opción *Abrir archivo* (en español).

## Para adicionar un nuevo alumno
La aplicación trabaja con registros que poseen 5 campos:
-Nombre
-Carné
-Correo
-Sección
-Ciclo escolar
-Estado (A= aprobado y R= reprobado).
-Promedio
- A continuación se llena el campo correspondiente y se presiona la tecla *Enter* después de ingresar cada dato.

**Nota** No se puede repetir el número del carné.

**Menú**
Las opciones del menú deben ingresarse por medio de texto, la aplicación permite las siguientes tres opciones:
-buscar.
-agregar.
-alterar.
## Para buscar a un alumno

Solo se puede buscar a un alumno por medio del carné y luego se debe escoger la opción de **buscar** en el menú.
- Si el usuario ingresa un carné incorrecto el sistema marcará un pequeño error.
- Si el carné es ingresado correctamente el sistema buscará la información del alumno y la presentará en la pantalla.

## Para alterar las informaciones del alumno
Después de ingresado un nuevo alumno la aplicación permite que se editen los campos de *estado* y *promedio*, seleccionando la opción de **alterar**.
Los otros campos permanecerán de la misma forma en la que se encuentran y el registro será actualizado automáticamente.
## Para adicionar un nuevo alumno
Por medio de la aplicación es posible agregar más alumnos, para poder optar a esta opción se utiliza la opción **agregar** del menú de la aplicación.
Está opción está sometida a cumplir con los requerimientos normales de no poder adicionar un carné existente. 
# ¿Cómo acaba?

Después de la ejecución del programa se le da al usuario de continuar utilizándolo o de encerrarlo si desear.
Para continuar con el programa el usuario tendrá que escoger el número 5, de lo contrario el programa se cerrará.
>Durante la ejecución del programa los archivos serán manipulados automáticamente según las opciones seleccionadas y así al final del programa el usuario no tendrá que preocuparse con la perdida de la información.

## Material de apoyo

-{lwp},Dev - C++ - Comprobar si un archivo .txt está vacio. Sitio Web:
https://www.lawebdelprogramador.com/foros/Dev-C/1775372-Comprobar-si-un-archivo-txt-esta-vacio.html

-DelftStack. Cómo añadir texto a un archivo en C++. Sitio Web:
https://www.delftstack.com/es/howto/cpp/how-to-append-text-to-a-file-in-cpp/

-Programación ATS. # 123. Programación en C++ || Archivos || Escribir en un archivo de texto. Video de Youtube:
https://www.youtube.com/watch?v=GaqgqQL3wnQ

-DelftStack. Cómo concentrar dos cadenas de caracteres en C++. Sitio Web:
https://www.delftstack.com/es/howto/cpp/how-to-concatenate-two-strings-cpp/
-it-swarm-es.com. borrar datos dentro del archivo de texto en c ++. Sitio Web:
https://www.it-swarm-es.com/es/c%2B%2B/borrar-datos-dentro-del-archivo-de-texto-en-c/1073191714/
