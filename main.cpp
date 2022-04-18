#include <SFML/Graphics.hpp>
#include "Planets/Planets.h"

int main() {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML test window!", sf::Style::Default, settings);

    Planet earth(30, 300);
    earth.setPos(100, 100);

    sf::Clock clock;

    while (window.isOpen()) {
        
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                    window.close();
            }
        }
    
        window.clear(sf::Color::Black);
        earth.draw(window);
        window.display();
    }

    return 0;
}
             