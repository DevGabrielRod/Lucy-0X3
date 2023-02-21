TARGET=libR main
CC=g++
DEBUG=-g
OPT--O0
WARN=wall
CCFLAGS=$(DEBUG) $(OPT) $(WARN) -pipe
LD=g++
OBJS= $(TARGET).o

all: $(NOME).o
	ld -s -o $(NOME) $(NOME).o
	rm -rf *.o

%.o: %.asm
	nasm -f elf64 $<