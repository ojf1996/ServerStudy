build : server.o
	g++ -o build server.o
server.o : server.cpp
	g++ -g -c server.cpp

clean :
	rm server.o build
