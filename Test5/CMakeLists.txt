# CMake最低版本需求
cmake_minimum_required (VERSION 2.8)

# 项目名称
project (Test4)

# 设置版本号
set(Tutorial_VERSION_MAJOR 10)
set(Tutorial_VERSION_MINOR 5)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

# 配置一个头文件用于传递一些CMake中的配置到源代码中
configure_file("${PROJECT_SOURCE_DIR}/TutorialConfig.h.in" "${PROJECT_BINARY_DIR}/TutorialConfig.h")

#aux_source_directory(<dir> <variable>) 收集指定目录中所有源文件的名称，并将列表存储在提供的<variable>变量中
aux_source_directory(. ALL_SRCS)

if (USE_MYMATH)
  add_subdirectory(calc)
endif (USE_MYMATH)

# 指定生成可执行文件，需要类
add_executable(Test_Exe ${ALL_SRCS})

# 添加链接库
target_link_libraries(Test_Exe Calc_Exe)

target_include_directories(Test_Exe PUBLIC "${PROJECT_BINARY_DIR}")


#默认路径cmake --install . 
#设定路径cmake --install . --prefix "/Users/zhouxiao/data/ddd"
install(TARGETS Test_Exe DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)