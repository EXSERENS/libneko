all: realstring

realstring.o:
	gcc -c src/realstring.c -I ./include -o realstring.o

clean:
	-rm realstring.o
