cmake_minimum_required(VERSION 3.21)
project(ThirdPartyProjects)

set(CMAKE_CXX_STANDARD 26)
set(THIRD_PARTY_DIR "${CMAKE_SOURCE_DIR}/libs")

# Gcc-15 Experimental library symbols: 'Stacktrace'
list(APPEND EXTRA_LIBS stdc++exp)

add_subdirectory(Tabulate)