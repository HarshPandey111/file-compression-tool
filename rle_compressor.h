// rle_compressor.h
#ifndef RLE_COMPRESSOR_H
#define RLE_COMPRESSOR_H

#include <string>

std::string rleCompress(const std::string &data);
std::string rleDecompress(const std::string &data);

#endif // RLE_COMPRESSOR_H