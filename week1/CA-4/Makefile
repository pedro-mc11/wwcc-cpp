CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = makefile_demo

all: $(TARGET)

$(TARGET): $(TARGET).cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp

clean:
	rm -f $(TARGET)

.PHONY: all clean