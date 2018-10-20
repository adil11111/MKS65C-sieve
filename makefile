all: sieve.o driver.o
		gcc sieve.o driver.o -lm
run:
			./a.out $(args)

sieve.o: sieve.c sieve.h
		gcc -c sieve.c

driver.o: driver.c sieve.h
		gcc -c driver.c
