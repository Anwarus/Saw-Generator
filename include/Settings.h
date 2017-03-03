#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>
#include <map>

class Settings
{
    public:
        static Settings& getInstance()
        {
            static Settings instance;
            return instance;
        }

        void setField(std::string key, std::string value);
        void setFields(std::map<std::string, std::string>& fields);
        std::string getFieldValue(std::string key);

    private:
        Settings() {};
        Settings(const Settings&);
        Settings& operator=(const Settings*);

        std::map<std::string, std::string> fields;
};

#endif // SETTINGS_H
