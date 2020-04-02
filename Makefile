all:generate.o sudoku.o transform.o solve.o
	g++ -o generate generate.o sudoku.o
	g++ -o transform transform.o sudoku.o
	g++ -O3 -o solve solve.o sudoku.o

sudoku.o:sudoku.cpp sudoku.h
	g++ -c sudoku.cpp

generate.o:generate.cpp sudoku.h
	g++ -c generate.cpp

transform.o:transform.cpp sudoku.h
	g++ -c transform.cpp

solve.o:solve.cpp sudoku.h
	g++ -O3 -c solve.cpp

clean:
	rm *.o
	rm *.exe
