 boarding.bin : main.o read.o list1.o output.o
        gcc -o boarding.bin main.o read.o list1.o output.o
main.o: main.c header.h
        gcc -c main.c
read.o: read.c header.h
        gcc -c read.c
list1.o: list1.c header.h
        gcc -c list1.c
output.o: output.c header.h
        gcc -c output.c
