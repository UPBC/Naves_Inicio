#include <stdio.h>
#include <stdlib.h>
#include "Game.h"
#include <SDL_image.h>
#include <SDL.h>
#include "config.h"
#include "Nave.h"

CGame::CGame(){
	estado = ESTADO_INICIANDO;///ACT2: MAL, AQUI DEBES DE INICIAR TU ESTADO, SEGUN LA LISTA QUE HAS CREADO.

if (SDL_Init(SDL_INIT_VIDEO))
	{
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	
	}
screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);  /* de aqui - arriba revisar*/	    

	atexit(SDL_Quit);
	//ACT3: MAL, el siguiente codigo no va aqui
	//if (SDL_Init(SDL_INIT_VIDEO)){
	//	printf("Error %s ", SDL_GetError());
	//	exit(EXIT_FAILURE);	
	//
	//	}

	//screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);

	//if (screen == NULL){
	//	printf("Error %s ", SDL_GetError());
	//	exit(EXIT_FAILURE); 
	//}
	//    SDL_Flip(screen);
	//    SDL_WM_SetCaption("Mi primer Juego", NULL);

}

void CGame::Iniciando(){
	if (SDL_Init(SDL_INIT_VIDEO)){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	

	atexit(SDL_Quit);
	//ACT3: MAL, el siguiente codigo no va aqui
	//if (SDL_Init(SDL_INIT_VIDEO)){
	//	printf("Error %s ", SDL_GetError());
	//	exit(EXIT_FAILURE);	
	//
	//	}

	//screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);

	//if (screen == NULL){
	//	printf("Error %s ", SDL_GetError());
	//	exit(EXIT_FAILURE); 
	//}
	//    SDL_Flip(screen);
	//    SDL_WM_SetCaption("Mi primer Juego", NULL);

}

void CGame::Iniciando(){
	if (SDL_Init(SDL_INIT_VIDEO)){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	
//>>>>>>> origin/master
	}

	screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);

//<<<<<<< HEAD
//>>>>>>> origin/master
//=======
//>>>>>>> origin/master
	if (screen == NULL){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE); 
	}
//<<<<<<< HEAD
//<<<<<<< HEAD
	    
	    SDL_WM_SetCaption("Mi primer Juego", NULL);
		Nave = new Nave(screen);



//>>>>>>> origin/master
	    SDL_Flip(screen);
	SDL_WM_SetCaption("Mi primer Juego", NULL);
}



//<<<<<<< HEAD
//>>>>>>> origin/master
//=======
//>>>>>>> origin/master
// Con esta función eliminaremos todos los elementos en pantalla
void CGame::Finalize(){
	SDL_Quit();
}
bool CGame::Start()
{
	// Esta variable nos ayudara a controlar la salida del juego...
	//<<<<<<< HEAD
	int salirJuego = false;   
	while (salirJuego == false){     
		//Maquina de estados
		switch(estado){
		case Estado::ESTADO_INICIANDO:	
			Iniciando();
			estado= ESTADO_MENU;
//=======
	int salirJuego = false;

	while (salirJuego == false){

		//Maquina de estados
		switch(estado){///ACT2:MAL, DEBES DE INCLUIR TODAS LOS ESTADOS, SON 5 Y SOLO AGREGASTE 3.
		case Estado::ESTADO_INICIANDO:
			//ACT3: Mal, Falto llamar al metodo "Iniciando()" 
			Iniciando();
			estado=ESTADO_MENU;
			/*	if (SDL_Init( SDL_INIT_VIDEO )){
			printf("Error %s ", SDL_GetError());
			exit(EXIT_FAILURE);
			}
			screen = SDL_SetVideoMode( 640, 480, 24, SDL_SWSURFACE );
			if (screen == NULL){
			printf("Error %s ", SDL_GetError());
			exit(EXIT_FAILURE);
			}*/
			//SDL_WM_SetCaption( "Mi primer Juego", NULL );
			//Este codigo estara provicionalmente aqui
			/*	nave = SDL_LoadBMP("../Data/MiNave.bmp");

			SDL_Rect Fuente;  
			Fuente.x = 90;
			Fuente.y = 152;
			Fuente.w = 242;
			Fuente.h = 76;
			SDL_Rect destino;
			destino.x = 100;
			destino.y = 100;
			destino.w = 100;
			destino.h = 100;

			SDL_BlitSurface(nave, &Fuente, screen, &destino);

			SDL_BlitSurface(nave, NULL, screen, NULL);

			SDL_FreeSurface(nave);*/
//<<<<<<< HEAD
//>>>>>>> origin/master
//=======
//>>>>>>> origin/master
			break;
		case Estado::ESTADO_MENU:
			SDL_FillRect(screen,NULL,0x000000);
			keys=SDL_GetKeyState(NULL);
			if(keys[SDLK_RIGHT]){
				nave->Mover(1)
			}
			nave->Pintar();
			break;
//<<<<<<< HEAD
//<<<<<<< HEAD
			case Estado::ESTADO_JUGANDO:
//=======

		case Estado::ESTADO_JUGANDO:
//>>>>>>> origin/master
			break;
		case Estado::ESTADO_FINALIZANDO:
			break;
=======

		case Estado::ESTADO_JUGANDO:
			break;
		case Estado::ESTADO_FINALIZANDO:
			break;
>>>>>>> origin/master
		case Estado::ESTADO_TERMINANDO:
			salirJuego = true;
			break;
		};
		SDL_Flip(screen);// imprimir en pantalla la variable screen
	}
	return true;
}
