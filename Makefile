Exercise: test.o 3Dvector.o
	gcc -o Exercise test.o 3Dvector.o
	
test.o: test.c
	gcc -c test.c -o test.o
	
3Dvector.o: 3Dvector.c 
	gcc -c 3Dvector.c -o 3Dvector.o 
	
install: Exercise
	install -D Exercise /home/anton/1/Exercise
	
clean:
	rm -f *.o Exercise
	
.PHONY: clean
