
#
find_package(PkgConfig REQUIRED)

pkg_check_modules(GTKMM gtkmm-4.0 REQUIRED)

#
add_definitions(${GTK4_CFLAGS_OTHER})

# target 
set(target "XenoideGTK")
set(sources "main.cpp")
add_executable(${target} ${sources})

#
target_include_directories(${target} PUBLIC ${GTK4_INCLUDE_DIRS} ${GTKMM_INCLUDE_DIRS})
target_link_directories(${target} PUBLIC ${GTK4_LIBRARY_DIRS})
target_link_libraries(${target} ${GTK4_LIBRARIES} ${GTKMM_LIBRARIES})
