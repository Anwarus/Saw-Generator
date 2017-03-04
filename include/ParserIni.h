#ifndef PARSERINI_H
#define PARSERINI_H

#include <string>
#include <fstream>

class ParserIni
{
    public:
        ParserIni() {}
        ParserIni(std::string fileName);

        void open(std::string fileName);


        std::string getParameter(std::string line);
        std::string getValue(std::string line);
        void setParameter(std::string parameter, std::string value);

    protected:

    private:
        std::fstream file;
};

#endif // PARSERINI_H
