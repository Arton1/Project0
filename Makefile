#Memory bugs
CC = g++
CFlags = -c -g -Wall

exec: main.o
	$(CC) main.o -o $@
main.o: main.cpp
	$(CC) $(CFlags) $< -o $@
.PHONY: remove valgrind
remove:
	rm -r -f exec main.o 
valgrind: 
	valgrind --leak-check=full ./exec
