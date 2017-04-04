#ifndef SAW_H
#define SAW_H

#include <SFML/Graphics.hpp>

class Tooth;

class Saw : public sf::Drawable
{
    public:
        Saw();
        Saw(float radius, float toothHeight, int toothCount, int angleAlfa, int angleBeta);
        ~Saw();

        void init();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

        void setupTeeth();

        void setupTeethPartA();
        void setupTeethPartB();
        void setupTeethPartC();
        void setupTeethPartD();
        void setupTeethPartE();

        void setRadius(float radius)           { this->radius = radius; };
        void setToothHeight(float toothHeight) { this->toothHeight = toothHeight; };

        void setAngleAlfa(int angleAlfa)       { this->angleAlfa = angleAlfa; };
        void setAngleBeta(int angleBeta)       { this->angleBeta = angleBeta; };

        void setToothCount(int toothCount)     { this->toothCount = toothCount; };

    private:
        float radius;
        float toothHeight;

        int angleAlfa;
        int angleBeta;

        int toothCount;
        Tooth* teeth;

        float toothAngle;
        int percentC;

};

#endif // SAW_H
