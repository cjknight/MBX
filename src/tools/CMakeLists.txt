set (TOOLS_SOURCES math_tools.cpp
                   properties.cpp
                   mt19937.cpp   
                   variable.cpp
                   water_monomer_lp.cpp
                   random-rotation.cpp)

add_library(tools OBJECT ${TOOLS_SOURCES})
target_include_directories(tools PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(tools PRIVATE ${CMAKE_SOURCE_DIR}/../external/kdtree/)
