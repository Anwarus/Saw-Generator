#include "ParserIni.h"

ParserIni::ParserIni(std::string fileName)
{
    open(fileName);
}

void ParserIni::open(std::string fileName)
{

}

void Settings::loadSettingsFromFile()
{
    std::ifstream file (path);
    if(file.is_open())
    {
        std::string line;
        //Get single line from file
        while ( getline (file,line) )
        {
            //Skip if this is comment line or section line
            if(line[0] == ';' || line[0] == '[')
                continue;

            std::string parameter, value;

            //Get parameter
            parameter = getParameter(line);

            //Get value of this parameter
            value = getValue(line);

            //Check if parameter and value if valid
            if(parameter == ";" || value == ";")
                continue;

            //Set parameter
            setParameter(parameter, value);
        }
        file.close();
    }
}

std::string Settings::getParameter(std::string line)
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

std::string Settings::getValue(std::string line)
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

void Settings::setParameter(std::string parameter, std::string value)
{
    if(parameter == "width")
        width = std::stoi(value);
    else if(parameter == "height")
        height = std::stoi(value);
    else if(parameter == "fps")
        fps = std::stoi(value);
}
