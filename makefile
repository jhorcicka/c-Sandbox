CC=g++
# -g pro debugger
FLAGS=-std=c++11 -W -Wall -pedantic

NAME=main

all: clear build run

build: *.cpp
	$(CC) $(FLAGS) *.cpp -o $(NAME)

run: $(NAME)
	./$(NAME)

val: $(NAME)
	valgrind ./$(NAME)

clean: 
	rm -rf $(NAME) *.o

clear:
	clear

pack: clean
	zip $(NAME).zip *.cpp *.h makefile

ddd:
	ddd $(NAME)

edit:
	gvim -p *.cpp *.h
