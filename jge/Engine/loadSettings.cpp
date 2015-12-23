// loadSettings.cpp - Loads settings from files

#include <fstream>
#include <iostream>

#include "../Engine.hpp"
#include "../strToKeyCode.hpp"

namespace jge {

	void Engine::loadSettings(std::string path) {

	std::ifstream i;

	i.open(path.c_str());

		if (i.fail())
		std::cout << "CONFIG FILE MISSING\n";

		else {

		std::string key, code;
		char finder;

			while (i >> key) {

				if (key[0] != '#') {

				i >> code;

				keyCode[key] = strToKeyCode(code);

				}

				else {

					while (finder != '\n') {

					i.get(finder);

					}

				}

			}

		}

	}

}
