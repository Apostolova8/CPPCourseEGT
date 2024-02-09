#include <iostream>
#include "Game.h"

Game* game = NULL;
const int WINDOW_WIDTH = 600;
const int WINDOW_HEIGHT = 400;

int main(int argc, char* argv[]) {
	
	game = new Game();
	game->init("My new window", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH,
		WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);

	while (game->isRunning()) {	//kontrolira kolko vreme da se vurti cikula
		game->handleEvents();	
		game->update();			//pravi smetki, kakvo i kak da se promenq po prozoreca
		game->render();			//sled naprava na smetkite, risuva neshta po ekrana
	}
	game->clean();


	return 0;
}