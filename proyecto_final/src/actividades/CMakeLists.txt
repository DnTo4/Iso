add_library(actividades actividades.cc actividades.h)

target_include_directories(actividades PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(actividades-main actividades-main.cc)
target_link_libraries(actividades-main PUBLIC actividades)