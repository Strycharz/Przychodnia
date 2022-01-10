cmake_minimum_required(VERSION 3.20)
project(PROJEKT_ZROBIONY)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PROJEKT_ZROBIONY
        dodaj.hpp
        edytuj.hpp
        main.cpp
        menu.hpp
        usun.hpp
        wczytaj.hpp
        zapisz.hpp
        zobacz.hpp)
