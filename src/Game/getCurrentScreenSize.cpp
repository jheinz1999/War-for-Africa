// getCurrentScreenSize.cpp - Retrieves current desktop screen resolution.

#include <SFML/Graphics.hpp>

#include "../Game.hpp"

sf::VideoMode Game::getCurrentScreenSize() {

return sf::VideoMode::getDesktopMode();

}
