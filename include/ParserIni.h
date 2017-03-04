#ifndef PARSERINI_H
#define PARSERINI_H

#include <string>
#include <fstream>

class ParserIni
{
    public:
        ParserIni();
        ParserIni(std::string fileName);
        ~ParserIni();

        bool open(std::string fileName);
        void close();

        bool setupLine();

        std::string getCurrentKey();
        std::string getCurrentValue();

    private:
        std::string getKey(std::string line);
        std::string getValue(std::string line);

        std::fstream file;

        std::string currentKey;
        std::string currentValue;

        bool opened;
};

#endif // PARSERINI_H
