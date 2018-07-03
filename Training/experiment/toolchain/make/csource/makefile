exe:main.o sum.o diff.o div.o mul.o
	gcc -o exe ./../object/main.o ./../object/diff.o ./../object/mul.o ./../object/sum.o ./../object/div.o
sum.o:
	gcc -c sum.c -o ./../object/sum.o -I ./../header
mul.o:
	gcc -c mul.c -o ./../object/mul.o -I ./../header	
div.o:
	gcc -c div.c -o ./../object/div.o -I ./../header
diff.o:
	gcc -c diff.c -o ./../object/diff.o -I ./../header
main.o:
	gcc -c main.c -o ./../object/main.o	-I ./../header

