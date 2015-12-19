#include <SFML/Graphics.hpp>

#include "jge/jge.hpp"
#include "src/MapPiece.hpp"
#include "src/PlayingState.hpp"
#include "src/Game.hpp"

int main() {

sf::Event event;

MapPiece* algeria = new MapPiece();
MapPiece* mali = new MapPiece();

jge::IState* state = new PlayingState();

Game::stateManager.addState("playing", state);

Game::stateManager.setState("playing");

Game::window.create(sf::VideoMode(800, 600), "War for Africa");

algeria->setTexture("Graphics/Countries/Algeria/Algeria1.png");
mali->setTexture("Graphics/Countries/Mali/Mali0.png");

Game::entityManager.addEntity("algeria", algeria);
Game::entityManager.addEntity("mali", mali);

sf::Sprite bg;
sf::Texture t;

t.loadFromFile("Graphics/map.png");
bg.setTexture(t);

	while (Game::window.isOpen()) {

		while (Game::window.pollEvent(event)) {

			Game::stateManager.getCurrentState()->processEvents(Game::window, event);

		}

	Game::window.clear();
	Game::window.draw(bg);
	Game::stateManager.getCurrentState()->update();
	Game::stateManager.getCurrentState()->draw(Game::window);
	Game::window.display();

	sf::sleep(sf::seconds(0.0167));

	}

}
