cmake_minimum_required(VERSION 3.16)
project(assignment-11 VERSION 0.1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(FetchContent)

FetchContent_Declare(
		Catch2
		GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  		GIT_TAG        v3.6.0 # Newest release as of 12-10-2024
)

FetchContent_MakeAvailable(Catch2)

add_library(fib STATIC fib.c)
add_library(sum STATIC sum.c)
add_library(sumn STATIC sumn.c)

set(libs fib sum sumn)

# Force compiler to output in color when you use ninja as generator
# https://stackoverflow.com/questions/73349743/ninja-build-system-gcc-clang-doesnt-output-diagnostic-colors
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdiagnostics-color=always")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fdiagnostics-color=always")

foreach(lib ${libs})
	target_compile_options(${lib}
		PUBLIC
		$<$<OR:$<CXX_COMPILER_ID:GNU>,$<CXX_COMPILER_ID:Clang>>:-Wall -Wpedantic>
	)
endforeach()

add_executable(unit-tests tests/tests.cpp)
target_include_directories(unit-tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(unit-tests ${libs})
target_link_libraries(unit-tests Catch2::Catch2WithMain)
target_compile_options(unit-tests PRIVATE -Wno-comment)
