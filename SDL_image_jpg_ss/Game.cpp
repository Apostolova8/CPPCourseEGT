#include "Game.h"
#include <iostream>

using namespace std;

int c = 0;

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	cout << "SDL init success\n";

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) {	//window init success
			cout << "Window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);

				TextureManager::Instance()->loadTexture("assets/1.jpg", "1", renderer);
				TextureManager::Instance()->loadTexture("assets/sprite_sheet.jpg", "jpg", renderer);


			}

			else {
				cout << "Renderer init failed\n";
				return false;
			}

		}
		else {
			cout << "Window init failed\n";
			return false;
		}
	}
	else {
		cout << "SDL init failed\n";
		return false;
	}
	cout << "Init success\n";
	running = true;
}

void Game::render() {
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderClear(renderer);

	//int ww, wh;
	//SDL_GetWindowSize(window, &ww, &wh);
	//SDL_Rect fillRect = { ww / 4, wh / 4, ww / 2, wh / 2 };	//rectangle
	//SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
	//SDL_RenderFillRect(renderer, &fillRect);

	//SDL_Rect outlineRect = { ww / 6, wh / 6, ww * 2 / 3, wh * 2 / 3 };
	//SDL_SetRenderDrawColor(renderer, 0x00, 0xFF, 0x00, 0xFF);
	//SDL_RenderDrawRect(renderer, &outlineRect);	

	//SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0xFF, 0xFF);
	//SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh/2);	//liniq

	//SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0x00, 0xFF);
	//for (int i = 0; i < wh; i += 4) {
	//	SDL_RenderDrawPoint(renderer, ww / 2, i);	//tochka (v sluchaq e puktirana liniq)
	//}

	//SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0xFF, 0xFF);
	//Shapes::drawCircle(renderer, ww / 2, wh / 2, wh / 2 - 5);
	//
	//SDL_Point p = { 10,20 };
	//SDL_RenderDrawPoint(renderer, p.x, p.y);

	TextureManager::Instance()->drawTexture("1", 300, 0, 191, 245, renderer);
	//TextureManager::Instance()->drawTexture("jpg", 400, 0, 191, 245, renderer, SDL_FLIP_HORIZONTAL);

	TextureManager::Instance()->drawOneFrameFromTexture("jpg", 0, 0, 130, 130, 2, currentFrame, renderer);
	TextureManager::Instance()->drawOneFrameFromTexture("jpg", 670, 0, 130, 130, 2, currentFrame, renderer, SDL_FLIP_HORIZONTAL);;
	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; 
		break;
		default: break;
		}
	}
}

void Game::update() {
	
	//cout << "SDL_TICKS           :" << SDL_GetTicks() << "\n";
	//cout << "SDL_TICKS / 100     :" << int(SDL_GetTicks() / 100) << "\n";
	//cout << "SDL_TICKS / 100 % 10: " << int(((SDL_GetTicks() / 100) % 5)) << "\n\n";

	currentFrame = int(((SDL_GetTicks() / 250) % 5));  //%5 for 5 frames
	currentFrame = int(((SDL_GetTicks() / 250) % 5));
	//currentRow = int(((SDL_GetTicks() / 250) % 5));
}

void Game::clean() {
	cout << "Cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() {
	return Game::running;
}

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 4;
}

Game::~Game() {

}


