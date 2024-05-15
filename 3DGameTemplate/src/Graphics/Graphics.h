#pragma once

class Graphics {
public:
	Graphics();
	~Graphics();

	int init();
	void draw();
	int cleanup();
};