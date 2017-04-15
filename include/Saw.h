#ifndef SAW_H
#define SAW_H

#include <SFML/Graphics.hpp>

class Tooth;

class Saw : public sf::Drawable
{
    public:
        Saw();
        Saw(float radius, int toothCount, int angleAlfa, int angleBeta);
        ~Saw();

        void init();

        void draw(sf::RenderTarget& target, sf::RenderStates states) const;

        void setRadius(float radius)       { this->radius = radius; };
        void setAngleAlfa(int angleAlfa)   { this->angleAlfa = angleAlfa; };
        void setAngleBeta(int angleBeta)   { this->angleBeta = angleBeta; };
        void setToothCount(int toothCount) { this->toothCount = toothCount; };

        void setupTeeth(Tooth& tooth);
        void setTooth(int index, Tooth& tooth);

    private:
        float radius;
        int angleAlfa;
        int angleBeta;
        int toothCount;

        Tooth* teeth;
};

#endif // SAW_H
