#include "Settings.h"

void Settings::setField(std::string key, std::string value)
{
    fields[key] = value;
}

void Settings::setFields(std::map<std::string, std::string>& fields)
{
    for(int i=0; i<fields.size(); i++)
        setField(fields[i], fields[])
}

std::string Settings::getFieldValue(std::string key)
{
    return fields[key];
}

