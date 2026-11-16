cmake_minimum_required(VERSION 3.20)
project(learn_makefile VERSION 1.0 LANGUAGES C)
add_compile_options(-Wall -Wextra -std=c17 -pedantic)   
add_executable(make makefile.c)