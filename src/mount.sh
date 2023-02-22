#!/usr/bin/env bash

nasmarq="main.asm"
cpparg="main.cpp"
nasmobj="main.o"
libobj="/home/gabriel/Desktop/WorkSpace/Lucy-0X3/build/libR.o"

nasm -f elf64 $nasmarq 
#nasm -f elf64 $LIBR
g++ $nasmobj $cpparg $libobj -o execultable.ex


echo "Arquivo 'execultable.ex' gerado."
echo "Para execultar o arquivo digite './execultable.ex'."

mv *.o /home/gabriel/Desktop/WorkSpace/Lucy-0X3/build
cp *.ex /home/gabriel/Desktop/WorkSpace/Lucy-0X3/bin