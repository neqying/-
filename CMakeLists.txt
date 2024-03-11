cmake_minimum_required(VERSION 3.0)

project(Addressbooks)

aux_source_directory(. src)

set(CXX_STANDARD 20)

add_executable(Addressbooks ${src})

