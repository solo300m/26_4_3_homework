cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (task_3 "task_3.cpp" "${MY_INCLUDE_DIR}/task_3.h" "${MY_INCLUDE_DIR}/window.h")
target_include_directories(task_3 PUBLIC ${MY_INCLUDE_DIR})