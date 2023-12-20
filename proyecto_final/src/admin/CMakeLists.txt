add_library(admin admin.h)
target_link_libraries(admin PUBLIC persona)
target_include_directories(admin PUBLIC ${CMAKE_CURRENT_LIST_DIR})
