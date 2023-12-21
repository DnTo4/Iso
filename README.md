¡IMPORTANTE! El ejecutable del programa se llama app-main (build/src/app/app-main)

El presente proyecto se divide en 3 carpetas: "build", "src" y "tests"

El directorio "build" contiene los makefiles y archivos temporales del proyecto. En caso de problemas con las rutas o pérdidas de los archivos se pueden rehacer eliminando cualquier archivo que pueda quedar dentro del directorio y ejecutando el comando "cmake .." dentro del mismo (necesidad de tener instalado cmake).

El directorio src contiene todo el código fuente del sistema, dividido en ficheros de cabecera (.h) y ficheros de funciones (.cc).

Finalmente, el directorio "tests" contiene las pruebas del sistema, realizadas mediante Google Test. Los ejecutables se encuentran dentro del directorio build/test.

