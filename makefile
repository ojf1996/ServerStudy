server : server.o
	g++ -o server server.o
server.o : server.cpp
	g++ -g -c server.cpp

clean :
	rm server.o server
