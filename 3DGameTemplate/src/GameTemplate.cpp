#include "GameTemplate.h"

GameTemplate::GameTemplate() {
	graphics = Graphics();
	physics = Physics();
	controller = Controller();
	worldData = WorldData();
}

GameTemplate::~GameTemplate() {
}

int GameTemplate::init() {
	int status = 0;
	status = graphics.init();
	status = controller.init();
	status = physics.init();
	return status;
}

void GameTemplate::startGame() {
	InputData input;

	bool running = true;
	int totalTimeTaken = 0; // in milliseconds
	int timeElapsed = 0; // in milliseconds
	while (running) {
		input = controller.getInput();
		// Process the data
		
		// Currently only processes are moving and viewing so it will all be done over here (for now).
		physics.update();
		graphics.draw();
	}
}

int GameTemplate::cleanup() {
	return 0;
}

int main() {
	GameTemplate game = GameTemplate();
	int status = game.init();
	if (status != 0) {
		//Freak out
	} else {
		game.startGame();
		return game.cleanup();
	}

}