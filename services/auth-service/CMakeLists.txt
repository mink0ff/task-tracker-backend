cmake_minimum_required(VERSION 3.14)
project(auth_service)

find_package(userver REQUIRED)

add_executable(auth_service
    src/main.cpp
    src/auth_service.cpp
    src/handlers/login.cpp
)

target_link_libraries(auth_service
    userver-core
)
