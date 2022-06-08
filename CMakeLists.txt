cmake_minimum_required(VERSION 3.22)
project(books)

set(CMAKE_CXX_STANDARD 14)

add_executable(books main.cpp AbstractAuthor.h AbstractName.h AbstractEditon.h AbstractNumber.h Book.h BookEdition.h ISBN.h RussianName.h Author.h)
