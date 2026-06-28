cmake_minimum_required(VERSION 3.10)

project(MyApp LANGUAGES CXX)

# Get the parent directory (TOP folder)
get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)

# Add D and E as subdirectories (only if not already added)
if(NOT TARGET liba)
    add_subdirectory(${PARENT_DIR}/liba ${CMAKE_BINARY_DIR}/liba)
endif()
if(NOT TARGET libb)
    add_subdirectory(${PARENT_DIR}/libb ${CMAKE_BINARY_DIR}/libb)
endif()
if(NOT TARGET libc)
    add_subdirectory(${PARENT_DIR}/libc ${CMAKE_BINARY_DIR}/libc)
endif()
if(NOT TARGET libf)
    add_subdirectory(${PARENT_DIR}/libf ${CMAKE_BINARY_DIR}/libf)
endif()

# Create the executable
add_executable(myapp main.cpp)

# Link the library (CMake automatically knows about it from add_subdirectory)
target_link_libraries(myapp PRIVATE liba libb libc libf)