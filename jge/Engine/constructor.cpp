// constructor.cpp

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

#include "../jge.hpp"

namespace jge {

	bool Engine::isMouseDown;
	bool Engine::isRightDown;
	bool Engine::isMouseClicked;
	bool Engine::isRightClicked;
	sf::RenderWindow Engine::window;
	jge::StateManager Engine::stateManager;
	jge::EntityManager Engine::entityManager;
	std::map<std::string, sf::Keyboard::Key> Engine::keyCode;
	tgui::Gui Engine::gui;
	tgui::Theme::Ptr Engine::theme;
	sf::View Engine::view;
	sf::Vector2f Engine::screenSize;

	Engine::Engine() {
	
	theme = std::make_shared<tgui::Theme>("Graphics/TGUI/widgets/Black.txt");

	gui.setWindow(window);
	gui.setFont("Graphics/TGUI/fonts/DejaVuSans.ttf");

	}

}

