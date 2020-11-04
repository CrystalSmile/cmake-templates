# CMake最低版本需求
cmake_minimum_required (VERSION 2.8)

# 项目名称
project (Calc)

#aux_source_directory(<dir> <variable>) 收集指定目录中所有源文件的名称，并将列表存储在提供的<variable>变量中
aux_source_directory(. Calc_SRCS)

# 指定生成可执行文件，需要类
add_library(Calc_Exe ${Calc_SRCS})
