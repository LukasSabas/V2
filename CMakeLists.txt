cmake_minimum_required(VERSION 3.20)
project(v2_0)

set(CMAKE_CXX_STANDARD 14)

include_directories(v2.0)

add_executable(v2_0
	v2.0/laikmatis.h
	v2.0/skirstymas.h
	v2.0/skirstymas.cpp
	v2.0/studentas.h
	v2.0/Studentas.cpp
	v2.0/teigiamas.h
	v2.0/teigiamas.cpp
	v2.0/vectorantra.cpp
	v2.0/vectorpirma.cpp
	v2.0/v2.0.cpp)