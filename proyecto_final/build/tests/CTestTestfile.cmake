# CMake generated Testfile for 
# Source directory: /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests
# Build directory: /mnt/c/Users/Andres/Desktop/Iso/proyecto_final/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(persona-gtests "persona-test")
set_tests_properties(persona-gtests PROPERTIES  _BACKTRACE_TRIPLES "/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;18;add_test;/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;0;")
add_test(product_gtests "systema-test")
set_tests_properties(product_gtests PROPERTIES  _BACKTRACE_TRIPLES "/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;24;add_test;/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;0;")
add_test(tv_gtests "actividad-test")
set_tests_properties(tv_gtests PROPERTIES  _BACKTRACE_TRIPLES "/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;30;add_test;/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;0;")
add_test(computer_gtests "foro-test")
set_tests_properties(computer_gtests PROPERTIES  _BACKTRACE_TRIPLES "/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;36;add_test;/mnt/c/Users/Andres/Desktop/Iso/proyecto_final/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
