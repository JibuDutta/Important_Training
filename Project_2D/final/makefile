.PHONY : clean

Project :BrickBreaker
	./exec/BrickBreaker

BrickBreaker : main.o menu.o
	g++ -o BrickBreaker menu.o main.o -lglut -lGLU -lGL
	mv *.o ./object/
	mv BrickBreaker ./exec

main.o:
	g++ -c ./source/main.cpp
menu.o:
	g++ -c ./source/menu.cpp

clean:
	rm -rf ./object/*.o
	rm -rf ./exec/*

