# CMakeList.txt: Makima 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project (Makima)

set (CMAKE_C_STANDARD 11)
set (CMAKE_CXX_STANDARD 11)

# 将源代码添加到此项目的可执行文件。
add_executable (MakimaExe "Makima.cpp" "Makima.h")

include_directories("${PROJECT_SOURCE_DIR}/Framework/Common")
include_directories("${PROJECT_SOURCE_DIR}/Framework/Interface")
add_subdirectory(Framework)
add_subdirectory(Empty)
