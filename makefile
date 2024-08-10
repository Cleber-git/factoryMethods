CXX = g++

CXXFLAGS = -o

SRC = sources/square.cpp sources/triangle.cpp sources/circle.cpp sources/factoreShape.cpp  main.cpp 

TARGET = ./main

all:
	$(CXX) $(SRC) $(CXXFLAGS) $(TARGET)
	$(TARGET)