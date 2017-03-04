#include "Settings.h"

void Settings::setField(std::string key, std::string value)
{
    fields[key] = value;
}

std::string Settings::getFieldValue(std::string key)
{
    return fields[key];
}

