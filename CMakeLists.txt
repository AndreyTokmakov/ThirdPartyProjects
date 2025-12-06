cmake_minimum_required(VERSION 3.21)
project(ThirdPartyProjects)

set(CMAKE_CXX_STANDARD 26)

list(APPEND EXTRA_LIBS)
if (CMAKE_SYSTEM_VERSION MATCHES "5.15") # 5.15 - My home Ubuntu-20.04
    set(THIRD_PARTY_DIR /home/andtokm/DiskS/ProjectsUbuntu/third_party)
    list(APPEND EXTRA_LIBS tbb)
else()
    set(THIRD_PARTY_DIR /home/andrei/Projects/third_party)
endif()

# Gcc-15 Experimental library symbols: 'Stacktrace'
list(APPEND EXTRA_LIBS stdc++exp)

add_subdirectory(Tabulate)