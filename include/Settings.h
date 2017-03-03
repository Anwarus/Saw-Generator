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

    private:
        Settings() {};
        Settings(const Settings&);
        Settings& operator=(const Settings*);

        std::map<std::string, std::string> fields;

        void loadSettingsFromFile();
        std::string getParameter(std::string line);
        std::string getValue(std::string line);
        void setParameter(std::string parameter, std::string value);
};

#endif // SETTINGS_H
