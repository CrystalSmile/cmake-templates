# CMake最低版本需求
cmake_minimum_required (VERSION 2.8)

# 项目名称
project (Test1)

# 指定生成可执行文件，需要类
add_executable(Test_Exe main.cc Calc.cc)
