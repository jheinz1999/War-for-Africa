ifdef SystemRoot
	RM = del
	CP = copy
else
	RM = rm
	CP = cp
endif

all: jge.obj src.obj
	g++ main.cpp src.obj jge.obj -lsfml-system -lsfml-window -lsfml-graphics -lsfml-audio -ltgui -o main -std=c++11

src.obj: Game.obj Map.obj MapPiece.obj MenuState.obj PlayingState.obj Controller.obj Player.obj
	ld -r -o src.obj Game.obj Map.obj MapPiece.obj MenuState.obj PlayingState.obj Controller.obj Player.obj

Game.obj: src/Game/*.cpp jge/jge.hpp src/Map.hpp
	g++ -c src/Game/*.cpp -std=c++11
	ld -r -o Game.obj *.o
	$(RM) *.o

Player.obj: src/Player/*.cpp
	g++ -c src/Player/*.cpp -std=c++11
	ld -r -o Player.obj *.o
	$(RM) *.o

Map.obj: src/Map/*.cpp jge/EntityManager.hpp src/MapPiece.hpp
	g++ -c src/Map/*.cpp -std=c++11
	ld -r -o Map.obj *.o
	$(RM) *.o

MapPiece.obj: src/MapPiece/*.cpp jge/Entity.hpp src/Controller.hpp
	g++ -c src/MapPiece/*.cpp -std=c++11
	ld -r -o MapPiece.obj *.o
	$(RM) *.o

MenuState.obj: src/MenuState/*.cpp
	g++ -c src/MenuState/*.cpp -std=c++11
	ld -r -o MenuState.obj *.o
	$(RM) *.o

PlayingState.obj: src/PlayingState/*.cpp src/Player.hpp src/Controller.hpp
	g++ -c src/PlayingState/*.cpp -std=c++11
	ld -r -o PlayingState.obj *.o
	$(RM) *.o

Controller.obj: src/controller.cpp
	g++ -c src/controller.cpp -std=c++11
	$(CP) controller.o Controller.obj
	$(RM) controller.o

jge.obj: AnimatedEntity.obj Engine.obj Entity.obj EntityManager.obj StateManager.obj strToKeyCode.obj
	ld -r -o jge.obj AnimatedEntity.obj Engine.obj Entity.obj EntityManager.obj StateManager.obj strToKeyCode.obj

AnimatedEntity.obj: jge/AnimatedEntity/*.cpp jge/Entity.hpp
	g++ -c jge/AnimatedEntity/*.cpp -std=c++11
	ld -r -o AnimatedEntity.obj *.o
	$(RM) *.o

Engine.obj: jge/Engine/*.cpp jge/jge.hpp
	g++ -c jge/Engine/*.cpp -std=c++11
	ld -r -o Engine.obj *.o
	$(RM) *.o

Entity.obj: jge/Entity/*.cpp
	g++ -c jge/Entity/*.cpp -std=c++11
	ld -r -o Entity.obj *.o
	$(RM) *.o

EntityManager.obj: jge/EntityManager/*.cpp jge/Entity.hpp
	g++ -c jge/EntityManager/*.cpp -std=c++11
	ld -r -o EntityManager.obj *.o
	$(RM) *.o

StateManager.obj: jge/StateManager/*.cpp jge/IState.hpp
	g++ -c jge/StateManager/*.cpp -std=c++11
	ld -r -o StateManager.obj *.o
	$(RM) *.o

strToKeyCode.obj: jge/strToKeyCode.cpp
	g++ -c jge/strToKeyCode.cpp -std=c++11
	$(CP) strToKeyCode.o strToKeyCode.obj
	$(RM) *.o

clean:
	$(RM) *.obj
	$(RM) main
