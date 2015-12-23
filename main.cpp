#include <SFML/Graphics.hpp>
#include <iostream>

#include "src/Game.hpp"

int main() {

Game game;

game.loadSettings("Config/keyboard.cfg");

game.run("War for Africa", Game::getCurrentScreenSize(), 1);

}
