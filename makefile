All: Pizza.o
	gcc Pizza.o

Pizza.o: Pizza.c
	gcc -c Pizza.c

run:
	./a.out

clean:
	rm *.o
	rm *.out
