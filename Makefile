all: main.o
	gcc -Wall -Wextra -Werror main.o -o app.app

main.o: main.c
	python3 materials/linters/cpplint.py *.c *.h
	gcc -Wall -Wextra -Werror -c main.c -o main.o