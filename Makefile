all: jge.obj src.obj
	g++ main.cpp src.obj jge.obj -lsfml-system -lsfml-window -lsfml-graphics -o main -std=c++11

src.obj: Game.obj Map.obj MapPiece.obj MenuState.obj PlayingState.obj Controller.obj
	ld -r -o src.obj Game.obj Map.obj MapPiece.obj MenuState.obj PlayingState.obj Controller.obj

Game.obj: src/Game/*.cpp
	g++ -c src/Game/*.cpp
	ld -r -o Game.obj *.o
	rm *.o

Map.obj: src/Map/*.cpp
	g++ -c src/Map/*.cpp
	ld -r -o Map.obj *.o
	rm *.o

MapPiece.obj: src/MapPiece/*.cpp
	g++ -c src/MapPiece/*.cpp -std=c++11
	ld -r -o MapPiece.obj *.o
	rm *.o

MenuState.obj: src/MenuState/*.cpp
	g++ -c src/MenuState/*.cpp
	ld -r -o MenuState.obj *.o
	rm *.o

PlayingState.obj: src/PlayingState/*.cpp
	g++ -c src/PlayingState/*.cpp
	ld -r -o PlayingState.obj *.o
	rm *.o

Controller.obj: src/controller.cpp
	g++ -c src/controller.cpp
	cp controller.o Controller.obj
	rm controller.o

jge.obj: AnimatedEntity.obj Engine.obj Entity.obj EntityManager.obj StateManager.obj strToKeyCode.obj
	ld -r -o jge.obj AnimatedEntity.obj Engine.obj Entity.obj EntityManager.obj StateManager.obj strToKeyCode.obj

AnimatedEntity.obj: jge/AnimatedEntity/*.cpp
	g++ -c jge/AnimatedEntity/*.cpp
	ld -r -o AnimatedEntity.obj *.o
	rm *.o

Engine.obj: jge/Engine/*.cpp
	g++ -c jge/Engine/*.cpp
	ld -r -o Engine.obj *.o
	rm *.o

Entity.obj: jge/Entity/*.cpp
	g++ -c jge/Entity/*.cpp
	ld -r -o Entity.obj *.o
	rm *.o

EntityManager.obj: jge/EntityManager/*.cpp
	g++ -c jge/EntityManager/*.cpp
	ld -r -o EntityManager.obj *.o
	rm *.o

StateManager.obj: jge/StateManager/*.cpp
	g++ -c jge/StateManager/*.cpp
	ld -r -o StateManager.obj *.o
	rm *.o

strToKeyCode.obj: jge/strToKeyCode.cpp
	g++ -c jge/strToKeyCode.cpp
	cp strToKeyCode.o strToKeyCode.obj
	rm *.o

clean:
	rm *.obj
	rm main
