#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings
{
    public:
        Settings();
        Settings(std::string path);

        std::string name = "Saw Generator";
        int width        = 800;
        int height       = 600;
        int fps          = 60;

    private:
        void loadSettingsFromFile();
        std::string getParameter(std::string line);
        std::string getValue(std::string line);
        void setParameter(std::string parameter, std::string value);

        std::string path;
};

#endif // SETTINGS_H
