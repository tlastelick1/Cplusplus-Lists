default: hope

hope: LinkedList.h mainLists.o
	g++ LinkedList.h mainLists.o -std=c++11 -o hope
mainLists.o: mainLists.cpp
	g++ -std=c++11 mainLists.cpp  -c 
clean: 
	rm -rf *.o hope
