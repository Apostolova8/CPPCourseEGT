#include <iostream>
#include <SDL.h>

using namespace std;

const int FPS = 30;	//30 puti v sekunda se izpulnqva cikula while
void limitFPS(Uint32 startingTick) {	//Uint32 = unsigned int
	if ((1000 / FPS) > SDL_GetTicks() - startingTick)
		SDL_Delay((1000) / FPS) - (SDL_GetTicks() - startingTick);
}					

int main(int argc, char* argv[]) {
	SDL_init(SDL_INIT_EVERYTHING);

	SDl_Window* window = NULL;
	window = SDL_CreateWindow("Hellow, World",  SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, 0);

	renderer = SDL_CreateRenderer(window, -1, 0);	//risuva na ekrana
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); //f-q za tova kakuv cvqt shte risuva; 3 st-sti za RGB cveta i poslednata st-st e za prozrachnost - 255 znachi, che nqma nikakva prozrachnost
	SDL_RenderClear(renderer);	//izchistva vsichko, koeto e v bufera i set-va cveta, koito da risuva na ekrana
	SDL_RenderPresent(renderer); //kazvame mu, da risuva, sled kato vsichko veche e set-nato

	bool running = true;
	SDL_Event event;
	Uint32 startingTick;

	while (running) {
		startingTick = SDL_GetTicks();
		while (SDL_PollEvent(&event)) {	//tazi promenliva pazi st-stta na eventa, koito poluchavame ot window, a cher f-qta pokazva eventi, koito oshte ne sa procheteni
			if (event.type == SDL_QUIT) {	//izlizame ot event i zatvarqme prozoreca
				running = false;	//spirame cikula
				break;
			}
		}
		limitFPS(startingTick);
	}
	//tozi while cikul se vurti postoqnno v nachaloto; posle limitirame kolko chesto da se vurti f-qta,
	//kato izvikvame SDL_Delay funkciqta, koqto prosto izchakva. Nakraq pravim proverka dali minimalnoto vreme
	//za frame e po-golqmo ot realnoto vreme, v koeto se izpalnqva freima i kazvame na cikula
	//da izchaka da se izrvni vremeto im. Tova e neshto kato hronometur, otchita vreme na izpulnenie.
	//			   PRIMER: 
	//	       100ms per frame;
	//		   20ms in reality;
	//		   delay 100 - 20 = 80  - vzimame razlikata i chakame


	//SDL_Delay(3000);	//zatvarq konzolata sled 3 sekundi
	
	SDL_DestroyWindow(window);
	SDL_Quit();	//izchistva vsichko, koeto e zadeleno v pametta
	return 0;
}