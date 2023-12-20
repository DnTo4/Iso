add_library(director-actividad director-actividad.h)
target_link_libraries(director-actividad PUBLIC persona)
target_include_directories(director-actividad PUBLIC ${CMAKE_CURRENT_LIST_DIR})
