CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: task1a task1b task2 task4

task1a: task1a.c
	$(CC) $(CFLAGS) -o task1a task1a.c

task1b: task1b.c
	$(CC) $(CFLAGS) -o task1b task1b.c

task2: task2.c
	$(CC) $(CFLAGS) -o task2 task2.c

task4: task4.c
	$(CC) $(CFLAGS) -o task4 task4.c

run_task1a: task1a
	./task1a

run_task1b: task1b
	./task1b

run_task2: task2
	./task2

run_task4: task4
	./task4

run: run_task1a run_task1b run_task2 run_task4

