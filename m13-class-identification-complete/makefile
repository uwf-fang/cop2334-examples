driver: driver.o restaurant.o menu.o order.o item.o menuitem.o
	g++ -o $@ $^

test: test.o restaurant.o menu.o order.o item.o menuitem.o
	g++ -o $@ $^

%.o: %.cpp
	g++ -std=c++11 -Wall -g -c -o $@ $<

clean:
	rm -f driver *.o
	