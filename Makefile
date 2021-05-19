binary: ui.o libworld.a
	g++ -o binary ui.o -L. -lworld

ui.o: ui.cpp
	g++ -c ui.cpp
	
libworld.a: schoolclass.o database.o
	ar cr libworld.a schoolclass.o database.o

database.o: database.cpp
	g++ -c database.cpp
	
schoolclass.o: schoolclass.cpp
	g++ -c schoolclass.cpp
	
clean:
	rm -f *.o* .a binary
