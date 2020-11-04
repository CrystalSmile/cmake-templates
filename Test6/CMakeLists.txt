# CMake最低版本需求
cmake_minimum_required (VERSION 2.8)

# 项目名称
project (Test6)

# 指定生成可执行文件，需要类
add_executable(Test_Exe main.cc Calc.cc)

enable_testing()

# does the application run
add_test(NAME Runs COMMAND Test_Exe 25 1)

# does the usage message work?
add_test(NAME Usage COMMAND Test_Exe)
set_tests_properties(Usage PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*number")

# define a function to simplify adding tests
function(do_test target arg result)
  add_test(NAME Comp${arg} COMMAND ${target} ${arg})
  set_tests_properties(Comp${arg}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endfunction(do_test)

# do a bunch of result based tests
do_test(Test_Exe 1 1 "2")
do_test(Test_Exe 2 2 "4")