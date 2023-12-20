# GTest include code for fetch content over the internet 
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main gmock_main)
# End GTest include code

# Testing persona library
#add_executable(persona-test persona-test.cc)
#target_link_libraries(persona-test
# PRIVATE GTest::GTest persona)
#add_test(persona-gtests persona-test)

# Testing systema library
add_executable(systema-test systema-test.cc)
target_link_libraries(systema-test
 PRIVATE GTest::GTest systema foro actividades persona usuario admin director)
add_test(product_gtests systema-test)

# Testing actividad library
add_executable(actividades-test actividades-test.cc)
target_link_libraries(actividades-test
 PRIVATE GTest::GTest actividades)
add_test(tv_gtests actividades-test)

# Testing foro library
add_executable(foro-test foro-test.cc)
target_link_libraries(foro-test
 PRIVATE GTest::GTest foro actividad)
add_test(computer_gtests foro-test)

# Testing usuario library
#add_executable(usuario-test usuario-test.cc)
#target_link_libraries(usuario-test
# PRIVATE GTest::GTest usuario persona)
#add_test(basket_gtests usuario-test)

# Testing admin library
#add_executable(admin-test admin-test.cc)
#target_link_libraries(admin-test
# PRIVATE GTest::GTest admin persona)
#add_test(client_gtests admin-test)

# Testing director library
#add_executable(director-test director-test.cc)
#target_link_libraries(director-test
# PRIVATE GTest::GTest director persona)
#add_test(seller_gtests director-test)
