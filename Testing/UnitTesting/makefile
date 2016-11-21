CC=gcc

test: unitTest 
	unitTest

unitTest: unitTest.c cunit.c
	${CC} -o unitTest unitTest.c cunit.c -lm
