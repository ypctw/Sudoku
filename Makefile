generate:generate.o sudoku.o
	g++ -o generate generate.o sudoku.o

transform:transform.o sudoku.o
	g++ -o transform generate.o sudoku.o

solve:solve.o sudoku.o
	g++ -o solve solve.o sudoku.o

sudoku.o:sudoku.cpp sudoku.h
	g++ -c sudoku.cpp

generate.o:generate.cpp sudoku.h
	g++ -c generate.cpp

transform.o:transform.cpp sudoku.h
	g++ -c transform.cpp

solve.o:solve.cpp sudoku.h
	g++ -c solve.cpp

clean:
	rm *.o
	rm *.exe
