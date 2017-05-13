cmake_minimum_required(VERSION 3.7)
project(learn)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Section2/PtrLnode.cpp Section2/Stack.cpp Section2/Stack2.cpp Section2/Queue.cpp Section3/BinTree.cpp)
add_executable(learn ${SOURCE_FILES})