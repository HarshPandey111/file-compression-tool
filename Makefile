CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2
SRC = src/main.cpp src/file_io.cpp src/rle_compressor.cpp src/huffman_compressor.cpp
TARGET = compressor

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)

.PHONY: all clean
