#include "Planets.h"

Planet::Planet(float planetRadius, float planetTrajRad) : m_planetForm(planetRadius), m_planetTrajRad(planetTrajRad), m_planetTrajectory(sf::CircleShape(planetTrajRad)) {
    setPosition(m_posX, m_posY);
}

void Planet::setPosition(int posX, int posY){
    m_posX=posX;
    m_posY=posY;
}

void Planet::setPlanetColor(sf::Color color) {
    m_planetForm.setFillColor(color);
}

void Planet::setTrajectoryColor(sf::Color color){
    m_planetTrajectory.setOutlineThickness(4);
    m_planetTrajectory.setOutlineColor(color);
}
void Planet::draw(sf::RenderWindow& window) {
    window.draw(m_planetForm);
    window.draw(m_planetTrajectory);
}