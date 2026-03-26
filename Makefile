CXX = g++
CC = gcc
CXXFLAGS = -std=c++20 -Wall -Wextra

SRC = $(wildcard src/*.cpp)

.PHONY: all clean test compiler

all: bin/compiler

bin/compiler: $(SRC) 
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)
	@./bin/compiler 


runtime: runtime/runtime.clean	
	$(CC) -o $@ runtime/runtime.c

test: bin/compiler bin/runtime
	@bash tests/run_tests.sh

clean:
	@rm -f bin/* output/*