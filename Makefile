all: realstring

realstring:
	gcc src/realstring.c -I ./include -o realstring.o

clean:
	-rm realstring.o
