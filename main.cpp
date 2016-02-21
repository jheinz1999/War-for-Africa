#include <SFML/Graphics.hpp>
#include <iostream>

#include "src/Game.hpp"

int main() {

Game game;

game.loadSettings("Config/keyboard.cfg");

game.setNativeResolution(sf::Vector2f(1024, 768));

game.run("War for Africa", Game::getCurrentScreenSize(), 1);

}
