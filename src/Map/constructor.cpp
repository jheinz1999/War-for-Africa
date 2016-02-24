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

algeria->setRank(5);
mali->setRank(4);
mauritania->setRank(3);
niger->setRank(4);
libya->setRank(4);
burkinaFaso->setRank(2);
chad->setRank(4);
coteDivoire->setRank(1);
egypt->setRank(3);
guinea->setRank(1);
senegal->setRank(1);
sudan->setRank(5);
nigeria->setRank(3);
morocco->setRank(2);
ethiopia->setRank(4);
westernSahara->setRank(2);
tunisia->setRank(1);
somalia->setRank(3);
ghana->setRank(1);
liberia->setRank(1);
sierraLeone->setRank(1);
cameroon->setRank(3);
uganda->setRank(2);
centralRepublic->setRank(3);
congo->setRank(2);
gabon->setRank(2);
kenya->setRank(3);
democraticCongo->setRank(5);
angola->setRank(5);
namibia->setRank(4);
tanzania->setRank(3);
zambia->setRank(4);
mozambique->setRank(5);
zimbabwe->setRank(1);
botswana->setRank(3);
southAfrica->setRank(5);

algeria->isCoastal = 1;
mali->isCoastal = 0;
mauritania->isCoastal = 1;
niger->isCoastal = 0;
libya->isCoastal = 1;
burkinaFaso->isCoastal = 0;
chad->isCoastal = 0;
coteDivoire->isCoastal = 1;
egypt->isCoastal = 1;
guinea->isCoastal = 1;
senegal->isCoastal = 1;
sudan->isCoastal = 1;
nigeria->isCoastal = 1;
morocco->isCoastal = 1;
ethiopia->isCoastal = 1;
westernSahara->isCoastal = 1;
tunisia->isCoastal = 1;
somalia->isCoastal = 1;
ghana->isCoastal = 1;
liberia->isCoastal = 1;
sierraLeone->isCoastal = 1;
cameroon->isCoastal = 1;
uganda->isCoastal = 0;
centralRepublic->isCoastal = 0;
congo->isCoastal = 1;
gabon->isCoastal = 1;
kenya->isCoastal = 1;
democraticCongo->isCoastal = 0;
angola->isCoastal = 1;
namibia->isCoastal = 1;
tanzania->isCoastal = 1;
zambia->isCoastal = 0;
mozambique->isCoastal = 1;
zimbabwe->isCoastal = 0;
botswana->isCoastal = 0;
southAfrica->isCoastal = 1;

algeria->addAdjacentState("morocco");
algeria->addAdjacentState("western sahara");
algeria->addAdjacentState("mauritania");
algeria->addAdjacentState("mali");
algeria->addAdjacentState("niger");
algeria->addAdjacentState("libya");
algeria->addAdjacentState("tunisia");

mali->addAdjacentState("algeria");
mali->addAdjacentState("niger");
mali->addAdjacentState("burkina faso");
mali->addAdjacentState("cote divoire");
mali->addAdjacentState("guinea");
mali->addAdjacentState("senegal");
mali->addAdjacentState("mauritania");

mauritania->addAdjacentState("western sahara");
mauritania->addAdjacentState("algeria");
mauritania->addAdjacentState("mali");
mauritania->addAdjacentState("senegal");

niger->addAdjacentState("mali");
niger->addAdjacentState("algeria");
niger->addAdjacentState("libya");
niger->addAdjacentState("chad");
niger->addAdjacentState("nigeria");
niger->addAdjacentState("burkina faso");

libya->addAdjacentState("tunisia");
libya->addAdjacentState("algeria");
libya->addAdjacentState("niger");
libya->addAdjacentState("chad");
libya->addAdjacentState("sudan");
libya->addAdjacentState("egypt");

burkinaFaso->addAdjacentState("mali");
burkinaFaso->addAdjacentState("niger");
burkinaFaso->addAdjacentState("ghana");
burkinaFaso->addAdjacentState("cote divoire");

chad->addAdjacentState("libya");
chad->addAdjacentState("sudan");
chad->addAdjacentState("central republic");
chad->addAdjacentState("cameroon");
chad->addAdjacentState("niger");

coteDivoire->addAdjacentState("ghana");
coteDivoire->addAdjacentState("burkina faso");
coteDivoire->addAdjacentState("mali");
coteDivoire->addAdjacentState("guinea");
coteDivoire->addAdjacentState("liberia");

egypt->addAdjacentState("libya");
egypt->addAdjacentState("sudan");

guinea->addAdjacentState("senegal");
guinea->addAdjacentState("mali");
guinea->addAdjacentState("cote divoire");
guinea->addAdjacentState("sierra leone");
guinea->addAdjacentState("liberia");

senegal->addAdjacentState("mauritania");
senegal->addAdjacentState("mali");
senegal->addAdjacentState("guinea");

sudan->addAdjacentState("egypt");
sudan->addAdjacentState("libya");
sudan->addAdjacentState("chad");
sudan->addAdjacentState("central republic");
sudan->addAdjacentState("democratic congo");
sudan->addAdjacentState("uganda");
sudan->addAdjacentState("kenya");
sudan->addAdjacentState("ethiopia");

nigeria->addAdjacentState("niger");
nigeria->addAdjacentState("cameroon");

morocco->addAdjacentState("western sahara");
morocco->addAdjacentState("algeria");

ethiopia->addAdjacentState("sudan");
ethiopia->addAdjacentState("kenya");
ethiopia->addAdjacentState("somalia");

westernSahara->addAdjacentState("mauritania");
westernSahara->addAdjacentState("morocco");

tunisia->addAdjacentState("algeria");
tunisia->addAdjacentState("libya");

somalia->addAdjacentState("ethiopia");
somalia->addAdjacentState("kenya");

ghana->addAdjacentState("burkina faso");
ghana->addAdjacentState("cote divoire");
ghana->addAdjacentState("liberia");

liberia->addAdjacentState("sierra leone");
liberia->addAdjacentState("guinea");
liberia->addAdjacentState("cote divoire");

sierraLeone->addAdjacentState("guinea");
sierraLeone->addAdjacentState("liberia");

cameroon->addAdjacentState("nigeria");
cameroon->addAdjacentState("chad");
cameroon->addAdjacentState("central republic");
cameroon->addAdjacentState("congo");
cameroon->addAdjacentState("gabon");

uganda->addAdjacentState("democratic congo");
uganda->addAdjacentState("sudan");
uganda->addAdjacentState("kenya");

centralRepublic->addAdjacentState("cameroon");
centralRepublic->addAdjacentState("chad");
centralRepublic->addAdjacentState("sudan");
centralRepublic->addAdjacentState("democratic congo");
centralRepublic->addAdjacentState("congo");

congo->addAdjacentState("gabon");
congo->addAdjacentState("cameroon");
congo->addAdjacentState("central republic");
congo->addAdjacentState("democratic congo");
congo->addAdjacentState("angola");

gabon->addAdjacentState("cameroon");
gabon->addAdjacentState("congo");

kenya->addAdjacentState("tanzania");
kenya->addAdjacentState("uganda");
kenya->addAdjacentState("sudan");
kenya->addAdjacentState("ethiopia");
kenya->addAdjacentState("somalia");

democraticCongo->addAdjacentState("angola");
democraticCongo->addAdjacentState("zambia");
democraticCongo->addAdjacentState("tanzania");
democraticCongo->addAdjacentState("uganda");
democraticCongo->addAdjacentState("sudan");
democraticCongo->addAdjacentState("central republic");
democraticCongo->addAdjacentState("congo");

angola->addAdjacentState("congo");
angola->addAdjacentState("democratic congo");
angola->addAdjacentState("zambia");
angola->addAdjacentState("namibia");

namibia->addAdjacentState("angola");
namibia->addAdjacentState("zambia");
namibia->addAdjacentState("botswana");
namibia->addAdjacentState("south africa");

zambia->addAdjacentState("angola");
zambia->addAdjacentState("namibia");
zambia->addAdjacentState("zimbabwe");
zambia->addAdjacentState("mozambique");
zambia->addAdjacentState("tanzania");
zambia->addAdjacentState("democratic congo");

mozambique->addAdjacentState("south africa");
mozambique->addAdjacentState("zimbabwe");
mozambique->addAdjacentState("zambia");
mozambique->addAdjacentState("tanzania");

zimbabwe->addAdjacentState("south africa");
zimbabwe->addAdjacentState("botswana");
zimbabwe->addAdjacentState("zambia");
zimbabwe->addAdjacentState("mozambique");

botswana->addAdjacentState("namibia");
botswana->addAdjacentState("zimbabwe");
botswana->addAdjacentState("south africa");

southAfrica->addAdjacentState("namibia");
southAfrica->addAdjacentState("botswana");
southAfrica->addAdjacentState("zimbabwe");
southAfrica->addAdjacentState("mozambique");

tanzania->addAdjacentState("mozambique");
tanzania->addAdjacentState("zambia");
tanzania->addAdjacentState("democratic congo");
tanzania->addAdjacentState("kenya");

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
