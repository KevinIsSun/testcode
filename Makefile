all:
	$(MAKE) main

main: main.c
	clang -c main.c -o main

