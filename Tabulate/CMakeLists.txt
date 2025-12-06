cmake_minimum_required(VERSION 3.21 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 26)

project(Tabulate)
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -pthread")
set(PROJECT_VERSION 1.0.0.0)
project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} LANGUAGES CXX)

# add_compile_options(-c -Wall -Wextra -O3 -std=c++26)
add_compile_options(-c -Wall -O3 -std=c++26)

# include all components
add_executable(${PROJECT_NAME}
        main.cpp
)

include_directories(${THIRD_PARTY_DIR}/tabulate/include)
# message("Libs: ${THIRD_PARTY_DIR}/tabulate/include")

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
        pthread
        ${EXTRA_LIBS}
)