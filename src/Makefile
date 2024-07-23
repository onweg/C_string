CC = gcc
FLAGS = -std=c11 -Wall -Wextra -Werror

all: 
	$(CC) $(FLAGS) string.c

static_analysis:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c
	cppcheck -v *.c

