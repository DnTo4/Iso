add_library(foro foro.cc foro.h)
target_link_libraries(foro PUBLIC actividades)
target_link_libraries(foro PUBLIC persona)
target_include_directories(foro PUBLIC ${CMAKE_CURRENT_LIST_DIR})