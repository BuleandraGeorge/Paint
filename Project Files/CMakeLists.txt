cmake_minimum_required(VERSION "3.14.0")

project("Paint")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#find_package(SFML 2.5.1 COMPONENTS graphics REQUIRED)
add_executable("${PROJECT_NAME}" "main.cpp" "Arc.cpp" "Circle.cpp" "Dot.cpp" "DrawerEngine.cpp" "Hexagon.cpp" "Interface.cpp" "Line.cpp" "Line.cpp" "Message.cpp" "Octagon.cpp" "Shapes.cpp" "Square.cpp" "Triangle.cpp" "Arc.h" "Circle.h" "Dot.h" "DrawerEngine.h" "Hexagon.h" "Interface.h" "Line.h" "Line.h" "Message.h" "Octagon.h" "Shapes.h" "Square.h" "Triangle.h")

set(SFML_DIR "SFML-2.5.1/lib/cmake/SFML")

#look for SFML and add it
find_package (SFML 2.5.1 REQUIRED graphics)

target_link_libraries(Paint PRIVATE sfml-graphics)


#include_directories(${SFML_INCLUDE_DIR})

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "main.cpp"  DESTINATION src)

if ("${FILE}" MATCHES ".*\\.cpp")
  set(GROUP "src${GROUP}")
elseif("${FILE}" MATCHES ".*\\.h")
  set(GROUP "include${GROUP}")
endif()

	
set(CMAKE_SUPPRESS_REGENERATION true)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
