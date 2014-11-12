#include <stdio.h>
#include <stdlib.h>
#include "Game.h"
#include <SDL_image.h>
#include <SDL.h>
#include "config.h"
#include "Nave.h"
#include <collection.h>

CGame::CGame(){
	
	estado = ESTADO_INICIANDO;

if (SDL_Init(SDL_INIT_VIDEO))
	{
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	
	}
screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);  	    

atexit(SDL_Quit);}
	
bool CGame::Start()
{
	
	int salirJuego = false;   
	while (salirJuego == false){     
///Maquina de estados
		switch(estado){
		case Estado::ESTADO_INICIANDO:
			Iniciando();
			estado=ESTADO_MENU;
			break;
		case Estado::ESTADO_MENU:
			break;

		case Estado::ESTADO_JUGANDO:
				SDL_FillRect(screen,NULL,0x000000);
			keys=SDL_GetKeyState(NULL);
			if(keys[SDLK_RIGHT]){
				nave->Mover(1)
					for (int i = 0; i < 10; i++)
					{
						enemigoArreglo[i]-> Actualizar();
					}
			nave->Pintar();
			break;
		case Estado::ESTADO_FINALIZANDO:
		
			break;

		case Estado::ESTADO_TERMINANDO:
			salirJuego = true;
			Finalize();
			break;
		};
		//while (true)
		{
	SDL_Flip(screen);// imprimir en pantalla la variable screen
		}	
	}
		void CGame::Iniciando(){
	if (SDL_Init(SDL_INIT_VIDEO)){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	
		if (screen == NULL){
          printf("Error %s ", SDL_GetError());
          exit(EXIT_FAILURE);
         }
         SDL_WM_SetCaption( "Mi primer Juego", NULL );
		 atexit(SDL_Quit);
}
	screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);

	if (screen == NULL){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE); 
	}

	    SDL_WM_SetCaption("Mi primer Juego", NULL);
	    SDL_Flip(screen);
	SDL_WM_SetCaption("Mi primer Juego", NULL);
}




void CGame::Finalize(){
	SDL_Quit();
}
	return true;
}
