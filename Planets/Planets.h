#ifndef PLANETS_H
#define PLANETS_H
#include <SFML/Graphics.hpp>
using namespace sf;


class Planet{
    public:
    Planet(float, float);

    void setPlanetColor(sf::Color color);

    void setTrajectoryColor(sf::Color color);

    void setPosition(int posX, int posY);

    void draw(sf::RenderWindow& window);



    private:
    float m_planetRadius;
    float m_planetTrajRad;
    int m_posX;
    int m_posY;

    sf::CircleShape m_planetForm;
    sf::CircleShape m_planetTrajectory;//траектория


};

#endif
