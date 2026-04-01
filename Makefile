# Makefile
CC=g++
CFLAGS=-c -Wall

all: FileCompressionTool

FileCompressionTool: main.o file_io.o rle_compressor.o huffman_compressor.o
	$(CC) -o FileCompressionTool main.o file_io.o rle_compressor.o huffman_compressor.o

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@