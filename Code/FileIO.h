#ifndef HUFFMAN_FILEIO_H
#define HUFFMAN_FILEIO_H

#include <string> 
#include <deque> 
#include <fstream> 
#include <iostream> 
#include <cstring> 
using namespace std;


class FileIO{
	
public:
    bool readFile(string path,char **bufferOut, size_t *sizeOfFile);
    bool writeEncodedFile(string path,string fileExtension,deque<int> frequencies,deque<char> symbols,int padding);
    void writeEncodedByte(const char bits[],unsigned long bufferSize);
	bool readerHeader(string path,deque<int> *frequencies, deque<char> *symbols,int *padding);
    void readSymbols(deque<char>*symbols);
    bool writeDecodedFile(string path);
    void writeDecodedByte( const char bits);
    void closeFile();

private:
    size_t getFileSize(string path);
    fstream stream; //stream is the name of variable & it's datatype is fstream, fstream is used for reading & writing to a file

};

#endif //used to close the '#ifndef' block

