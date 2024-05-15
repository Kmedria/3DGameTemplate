#pragma once
#include "Graphics/Graphics.h"
#include "Controller/Controller.h"
#include "Physics/Physics.h"
#include "WorldData/WorldData.h"

class GameTemplate {
private:
	Graphics graphics;
	Physics physics;
	Controller controller;
	WorldData worldData;

public:

	GameTemplate();
	~GameTemplate();

	int init(); // not done in constructor to get status back from method (not gonna use a public variable for status)
	void startGame();
	int cleanup(); // same spiel as above
};