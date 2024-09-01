cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyApp)

# Add the executable
add_executable(MyApp test.cpp)

# Set the C++ standard
set_property(TARGET MyApp PROPERTY CXX_STANDARD 20)

