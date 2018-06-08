#include <string>
#include <map>
#include "SymbolInfo.h"

#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

using namespace std;

class SymbolTable{

    public:
        SymbolTable();
        void insert(string symbol, int locInMemory);
        SymbolInfo search(string symbol);
        map<string, SymbolInfo> hashtable;


    private:
        map<string, bool> inserted;
        bool isFirst = true;
        void writeInFile(string symbol, int locInMemory);
};

#endif // SYMBOLTABLE_H
