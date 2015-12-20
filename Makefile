all: 
	g++ main.cpp jge/TileMap/*.cpp jge/Entity/*.cpp jge/EntityManager/*.cpp jge/Player/*.cpp jge/Inventory/*.cpp jge/StateManager/*.cpp src/PlayingState/*.cpp src/Game/*.cpp src/Map/*.cpp jge/Engine/*.cpp src/MenuState/*.cpp -lsfml-system -lsfml-window -lsfml-graphics -o main
