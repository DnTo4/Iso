add_library(systema systema.cc systema.h)
target_link_libraries(systema PUBLIC persona)
target_include_directories(systema PUBLIC ${CMAKE_CURRENT_LIST_DIR})