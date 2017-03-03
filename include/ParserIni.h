#ifndef PARSERINI_H
#define PARSERINI_H

#include<string>

class ParserIni
{
    public:
        ParserIni();

        void loadSettingsFromFile();
        std::string getParameter(std::string line);
        std::string getValue(std::string line);
        void setParameter(std::string parameter, std::string value);

    protected:

    private:
};

#endif // PARSERINI_H
