add_library(director director.h)
target_link_libraries(director PUBLIC persona)
target_include_directories(director PUBLIC ${CMAKE_CURRENT_LIST_DIR})
