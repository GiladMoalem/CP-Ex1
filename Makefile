CC=gcc
FLAG=-Wall
AR=ar
OBJECT_POW_BASIC=basicMath.o power.o
fPIC=-fPIC
all: mains maind

myMathd:libmyMath.so 
myMaths:libmyMath.a

mains: main.o libmyMath.a
# mains: myMaths main.o
	$(CC) $(FLAG) -g -o mains main.o libmyMath.a
maind: main.o libmyMath.so
# maind myMathd main.o
	$(CC) $(FLAG) -g -o maind main.o ./libmyMath.so
libmyMath.a: $(OBJECT_POW_BASIC) 
	$(AR) rcs -o libmyMath.a basicMath.o  power.o  
libmyMath.so: $(OBJECT_POW_BASIC) 

	$(CC) -shared $(OBJECT_POW_BASIC)  -o libmyMath.so
power.o:power.c myMath.h
	$(CC) $(FLAG) -g $(fPIC) -c power.c
basicMath.o:basicMath.c myMath.h
	$(CC) $(FLAG) -g -c basicMath.c
main.o:main.c myMath.h
	$(CC) $(FLAG) -g -c main.c
# .PHONY: mymaths mymathd clean all
clean:
	rm -f *.o *.a *.so mains maind