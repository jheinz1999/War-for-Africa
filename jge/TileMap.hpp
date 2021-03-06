// TileMap.hpp - Class for storing/rendering tilemaps.

#ifndef __TILEMAP_HPP__
#define __TILEMAP_HPP__

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <iostream>

/*

Make draw = between pos - 2 and pos + screenSize / tWidth + 2.
Make a move function that changes x/y start values.
In draw, make sure that if x/y values are below 0 they are set to 0.

*/

namespace jge {

	class TileMap {

		public:
	
		~TileMap();
	
		void setWidth(int w); // Sets tilemap width (measured in tiles)
		void setHeight(int h); // Sets tilemap height (measured in tiles)
	
		void setDimensions(int w, int h); // Sets tilemap width and height
	
		void loadTexture(std::string t); // Sets tilemap texture
	
		void loadTexture(std::string t, int w, int h); // Sets tilemap texture, as well as tile width/height (measured in pixels)
	
		void setTextureWidth(int w); // Sets tile width (measured in pixels)
		void setTextureHeight(int h); // Sets tile height (measured in pixels)
	
		void setTextureSize(int w, int h); // Sets tile width and height
	
		void load(std::string n); // Loads tilemap
	
		std::vector<bool> draw(sf::FloatRect entity, sf::Vector2f entityPos, sf::RenderWindow &window); // Draws tilemap and checks for collision
	
		void setCollisionTile(char id, int mode); // Sets a tile to collidable

		void setPosition(float x, float y, float a, float b);
		void setRenderSize(int x, int y);

		sf::View* getView() { return &tilemapView; }

		void setCenter(sf::Vector2f center);

		void move(sf::Vector2f amount, sf::Time dt);

		//void updatePos(sf::Vector2f pos); // Updates tilemap position

		private:
	
		int width, height; // Dimensions of tilemap
	
		int tWidth, tHeight; // Dimensions of individual tile texture
	
		std::string name; // Name of map
	
		sf::Texture texture; // texture
	
		sf::Sprite tile; // sprite
	
		char** map; // Actual tilemap, supports up to 255 tiles. Is dynamically allocated to allow for infinite map size.
	
		std::vector<char> collisionTiles; // List of tiles with collision
	
		std::vector<int> collisionMode; // List of collision modes for each collision tile (intersecting w/ sprite or on beneath sprite)
	
		std::vector<bool> collisions; // Used to return multiple collision states, in case sprite is above one collision tile and intersecting with another.

		float xStart, yStart;

		int renderX, renderY;

		sf::Vector2i currentTile;

		sf::View tilemapView;

	};

}

#endif
