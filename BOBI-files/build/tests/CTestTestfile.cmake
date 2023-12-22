# CMake generated Testfile for 
# Source directory: /home/rafa/Escritorio/Iso/BOBI/tests
# Build directory: /home/rafa/Escritorio/Iso/BOBI/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(persona-gtests "persona-test")
set_tests_properties(persona-gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;18;add_test;/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;0;")
add_test(product_gtests "systema-test")
set_tests_properties(product_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;24;add_test;/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;0;")
add_test(tv_gtests "actividades-test")
set_tests_properties(tv_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;30;add_test;/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;0;")
add_test(computer_gtests "foro-test")
set_tests_properties(computer_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;36;add_test;/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;0;")
add_test(basket_gtests "usuario-test")
set_tests_properties(basket_gtests PROPERTIES  _BACKTRACE_TRIPLES "/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;42;add_test;/home/rafa/Escritorio/Iso/BOBI/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
