# CMake最低版本需求
cmake_minimum_required (VERSION 2.8)

# 项目名称
project (Test3)

#aux_source_directory(<dir> <variable>) 收集指定目录中所有源文件的名称，并将列表存储在提供的<variable>变量中
aux_source_directory(. ALL_SRCS)

add_subdirectory(calc)

# 指定生成可执行文件，需要类
add_executable(Test_Exe ${ALL_SRCS})

# 添加链接库
target_link_libraries(Test_Exe Calc_Exe)