cmake_minimum_required(VERSION 3.10)
project(vector VERSION 0.1.0 LANGUAGES CXX)
add_executable(main vector1.cc vector2.cc main.cc)
target_compile_features(main PUBLIC cxx_std_11)
