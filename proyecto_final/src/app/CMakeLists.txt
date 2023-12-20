add_library(app app.cc)
target_link_libraries(app PUBLIC actividades)
target_link_libraries(app PUBLIC systema)
target_link_libraries(app PUBLIC admin)
target_link_libraries(app PUBLIC director-actividad)
target_link_libraries(app PUBLIC foro)
target_link_libraries(app PUBLIC persona)
target_link_libraries(app PUBLIC usuario)
target_link_libraries(app PUBLIC menus)

target_include_directories(app PUBLIC ${CMAKE_CURRENT_LIST_DIR})

add_executable(app-main app.cc)
target_link_libraries(app-main PUBLIC app)