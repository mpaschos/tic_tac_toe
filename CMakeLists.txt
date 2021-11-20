cmake_minimum_required(VERSION 3.20)
project(tic_tac_toe)

set(CMAKE_CXX_STANDARD 17)

add_executable(tic_tac_toe app/src/main.cpp app/include/Game.h app/include/Symbol.h app/include/Player.h app/src/Player.cpp app/src/Game.cpp app/include/Utils.h app/src/Utils.cpp app/include/Cell.h app/src/Cell.cpp)
