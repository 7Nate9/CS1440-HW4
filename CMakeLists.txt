cmake_minimum_required(VERSION 3.6)
project(HW4___Bingo)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp UserInterface.cpp UserInterface.h Menu.cpp Menu.h MenuOption.cpp MenuOption.h Deck.cpp Deck.h Card.cpp Card.h)
add_executable(HW4___Bingo ${SOURCE_FILES})