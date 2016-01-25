// constructor.cpp - Map constructor

#include "../Map.hpp"
#include "../MapPiece.hpp"
#include "../Game.hpp"

Map::Map() {

team1 = sf::Color(209, 86, 81, 255);
team2 = sf::Color(61, 69, 209, 255);
team3 = sf::Color(61, 209, 99, 255);
team4 = sf::Color(209, 207, 61, 255);
unclaimed = sf::Color(255, 255, 255, 255);

MapPiece* algeria = new MapPiece();
MapPiece* mali = new MapPiece();
MapPiece* mauritania = new MapPiece();
MapPiece* niger = new MapPiece();
MapPiece* libya = new MapPiece();
MapPiece* burkinaFaso = new MapPiece();
MapPiece* chad = new MapPiece();
MapPiece* coteDivoire = new MapPiece();
MapPiece* egypt = new MapPiece();
MapPiece* guinea = new MapPiece();
MapPiece* senegal = new MapPiece();
MapPiece* sudan = new MapPiece();
MapPiece* nigeria = new MapPiece();
MapPiece* morocco = new MapPiece();
MapPiece* ethiopia = new MapPiece();
MapPiece* westernSahara = new MapPiece();
MapPiece* tunisia = new MapPiece();
MapPiece* somalia = new MapPiece();
MapPiece* ghana = new MapPiece();
MapPiece* liberia = new MapPiece();
MapPiece* sierraLeone = new MapPiece();
MapPiece* cameroon = new MapPiece();
MapPiece* uganda = new MapPiece();
MapPiece* centralRepublic = new MapPiece();
MapPiece* congo = new MapPiece();
MapPiece* gabon = new MapPiece();
MapPiece* kenya = new MapPiece();
MapPiece* democraticCongo = new MapPiece();
MapPiece* angola = new MapPiece();
MapPiece* namibia = new MapPiece();
MapPiece* tanzania = new MapPiece();
MapPiece* zambia = new MapPiece();
MapPiece* mozambique = new MapPiece();
MapPiece* zimbabwe = new MapPiece();
MapPiece* botswana = new MapPiece();
MapPiece* southAfrica = new MapPiece();

algeria->setTexture("Graphics/Countries/Algeria.png");
mali->setTexture("Graphics/Countries/Mali.png");
mauritania->setTexture("Graphics/Countries/Mari.png");
niger->setTexture("Graphics/Countries/Niger.png");
libya->setTexture("Graphics/Countries/Libya.png");
burkinaFaso->setTexture("Graphics/Countries/BurkinaFaso.png");
chad->setTexture("Graphics/Countries/Chad.png");
coteDivoire->setTexture("Graphics/Countries/CoteDivoire.png");
egypt->setTexture("Graphics/Countries/Egypt.png");
guinea->setTexture("Graphics/Countries/Guinea.png");
senegal->setTexture("Graphics/Countries/Senegal.png");
sudan->setTexture("Graphics/Countries/Sudan.png");
nigeria->setTexture("Graphics/Countries/Nigeria.png");
morocco->setTexture("Graphics/Countries/Morocco.png");
ethiopia->setTexture("Graphics/Countries/Ethiopia.png");
westernSahara->setTexture("Graphics/Countries/WesternSahara.png");
tunisia->setTexture("Graphics/Countries/Tunisia.png");
somalia->setTexture("Graphics/Countries/Somalia.png");
ghana->setTexture("Graphics/Countries/Ghana.png");
liberia->setTexture("Graphics/Countries/Liberia.png");
sierraLeone->setTexture("Graphics/Countries/SierraLeone.png");
cameroon->setTexture("Graphics/Countries/Cameroon.png");
uganda->setTexture("Graphics/Countries/Uganda.png");
centralRepublic->setTexture("Graphics/Countries/CentralRepublic.png");
congo->setTexture("Graphics/Countries/Congo.png");
gabon->setTexture("Graphics/Countries/Gabon.png");
kenya->setTexture("Graphics/Countries/Kenya.png");
democraticCongo->setTexture("Graphics/Countries/DemocraticCongo.png");
angola->setTexture("Graphics/Countries/Angola.png");
namibia->setTexture("Graphics/Countries/Namibia.png");
tanzania->setTexture("Graphics/Countries/Tanzania.png");
zambia->setTexture("Graphics/Countries/Zambia.png");
mozambique->setTexture("Graphics/Countries/Mozambique.png");
zimbabwe->setTexture("Graphics/Countries/Zimbabwe.png");
botswana->setTexture("Graphics/Countries/Botswana.png");
southAfrica->setTexture("Graphics/Countries/SouthAfrica.png");

entityManager.addEntity("algeria", algeria);
entityManager.addEntity("mali", mali);
entityManager.addEntity("mauritania", mauritania);
entityManager.addEntity("niger", niger);
entityManager.addEntity("libya", libya);
entityManager.addEntity("burkina faso", burkinaFaso);
entityManager.addEntity("chad", chad);
entityManager.addEntity("cote divoire", coteDivoire);
entityManager.addEntity("egypt", egypt);
entityManager.addEntity("guinea", guinea);
entityManager.addEntity("senegal", senegal);
entityManager.addEntity("sudan", sudan);
entityManager.addEntity("nigeria", nigeria);
entityManager.addEntity("morocco", morocco);
entityManager.addEntity("ethiopia", ethiopia);
entityManager.addEntity("western sahara", westernSahara);
entityManager.addEntity("somalia", somalia);
entityManager.addEntity("tunisia", tunisia);
entityManager.addEntity("ghana", ghana);
entityManager.addEntity("liberia", liberia);
entityManager.addEntity("sierra leone", sierraLeone);
entityManager.addEntity("cameroon", cameroon);
entityManager.addEntity("uganda", uganda);
entityManager.addEntity("central republic", centralRepublic);
entityManager.addEntity("congo", congo);
entityManager.addEntity("gabon", gabon);
entityManager.addEntity("kenya", kenya);
entityManager.addEntity("democratic congo", democraticCongo);
entityManager.addEntity("angola", angola);
entityManager.addEntity("namibia", namibia);
entityManager.addEntity("tanzania", tanzania);
entityManager.addEntity("zambia", zambia);
entityManager.addEntity("mozambique", mozambique);
entityManager.addEntity("zimbabwe", zimbabwe);
entityManager.addEntity("botswana", botswana);
entityManager.addEntity("south africa", southAfrica);

} 
