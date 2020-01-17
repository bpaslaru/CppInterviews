CC=g++

CFLAGS=-c -Wall -std=c++11
TARGET=observer

all: $(TARGET)

observer: Main.o Client.o WeatherData.o
	$(CC) -o $@ Main.o Client.o WeatherData.o

Main.o: Main.cpp
	$(CC) $(CFLAGS) Main.cpp

Client.o: Client.cpp
	$(CC) $(CFLAGS) Client.cpp 

WeatherData.o: WeatherData.cpp
	$(CC) $(CFLAGS) WeatherData.cpp

clean:
	rm -rf *o observer
