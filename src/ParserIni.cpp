#include "ParserIni.h"

ParserIni::ParserIni()
{
    opened = false;
}

ParserIni::ParserIni(std::string fileName)
{
    opened = false;
    open(fileName);
}

ParserIni::~ParserIni()
{
    if(opened)
        file.close();
}

bool ParserIni::open(std::string fileName)
{
    file.open(fileName);
    if(!file.good())
        return false;
    opened = true;
    return true;
}

void ParserIni::close()
{
    if(!opened)
        return;
    file.close();
    opened = false;
}

bool ParserIni::setupLine()
{
    if(file.eof())
        return false;

    std::string line;

    do
        getline(file, line);
    while(line[0] == ';' || line[0] == '[');

    currentKey = getKey(line);
    currentValue = getValue(line);

    if(currentKey == ";" || currentValue == ";")
        setupLine();
}

std::string ParserIni::getKey(std::string line)
{
    for (int i=0; i<line.size(); i++)
    {
        if(line[i] == '=')
        {
            std::string parameter = line.substr(0, i);
            return parameter;
        }
    }

    return ";";
}

std::string ParserIni::getValue(std::string line)
{
    for (int i=0; i<line.size(); i++)
    {
        if(line[i] == '=')
        {
            if(i == line.size()-1)
                return ";";

            std::string value = line.substr(i+1, line.size()-i);
            return value;
        }
    }

    return ";";
}
