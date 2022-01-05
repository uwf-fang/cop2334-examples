test: test.o myclass1.o
	g++ -o test test.o myclass1.o

test.o: test.cpp myclass1.hpp
	g++ -std=c++11 -c test.cpp

myclass1.o: myclass1.cpp myclass1.hpp
	g++ -std=c++11 -c myclass1.cpp

clean:
	rm -f *.o test
