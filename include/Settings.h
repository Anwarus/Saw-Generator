#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

class Settings
{
    public:
        Settings();
        Settings(std::string path);

        std::string path;

        int width;
        int height;
        int fps;

    protected:

    private:
        void loadDefaultSettings();
        void loadSettingsFromFile();
        std::string getParameter(std::string line);
        std::string getValue(std::string line);
        void setParameter(std::string parameter, std::string value);
};

#endif // SETTINGS_H
