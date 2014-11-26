#include <stdio.h>
#include <stdlib.h>
#include "Game.h"
#include <SDL_image.h>
#include <SDL.h>
#include "config.h"
#include "Nave.h"


CGame::CGame()
{	
	estado = ESTADO_INICIANDO;
	/*
	if (SDL_Init(SDL_INIT_VIDEO))
	{
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	
	}
	screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);  	   */ 

		atexit(SDL_Quit);
}
void CGame::Finalize()
{
	SDL_Quit();

	//return true;
}
	
bool CGame::Start()
{
	
	int salirJuego = false;   
	while (salirJuego == false){     
///Maquina de estados
		switch(estado){
		case Estado::ESTADO_INICIANDO:
			/*Iniciando();
			estado=ESTADO_MENU;*/
			break;
		case Estado::ESTADO_MENU:
			nave->PintarModulo(SPRITE_MODULE_MI_NAVE,100,100);
			/*menu->Pintar();
			texto->Pintar(3,150,30);
			texto->Pintar(4,250,400);
			Menu();*/
			break;
		case Estado::ESTADO_JUGANDO:
			/*SDL_FillRect(screen,NULL,0x000000);
			keys=SDL_GetKeyState(NULL);
			if(keys[SDLK_RIGHT])
			{
				nave->Mover(1)
					for (int i = 0; i < 10; i++)
					{
						enemigoArreglo[i]-> Actualizar();
					}
			nave->Pintar();
			}*/
			break;
		case Estado::ESTADO_TERMINANDO:
			salirJuego = true;
			//Finalize();
			break;
		case Estado::ESTADO_FINALIZANDO:
		
			break;
		};
		SDL_Flip(screen);// imprimir en pantalla la variable screen
	}
	return true;
}
void CGame::Iniciando()
{
	if (SDL_Init(SDL_INIT_VIDEO)){
		printf("Error %s ", SDL_GetError());
		exit(EXIT_FAILURE);	
	}
	screen = SDL_SetVideoMode( WIDTH_SCREEN, HEIGHT_SCREEN, 24, SDL_SWSURFACE);
	if (screen == NULL)	{
          printf("Error %s ", SDL_GetError());
          exit(EXIT_FAILURE);
		}
         SDL_WM_SetCaption( "Mi primer Juego", NULL );
		 atexit(SDL_Quit);
		 nave=new Sprite(screen);
		 nave->CargarImagen(".../Data/minave.bmp");
//	}
	
//
//	if (screen == NULL)
//	{
//		printf("Error %s ", SDL_GetError());
//		exit(EXIT_FAILURE); 
//	}   
//	SDL_WM_SetCaption("Mi primer Juego", NULL);
//		nave=new Nave (screen,"imagen");//verificar
//	    //SDL_Flip(screen);
//	SDL_WM_SetCaption("Mi primer Juego", NULL);
}
//
//
//
//void CGame::Menu()
//{
//	for (int i = MODULO_TEXTO_OPCION1,j=0; i <MODULO_TEXTO_OPCION2; i++,j++)
//	{
//		if (i==menuseleccion)
//		texto->Pintar(i+MENU_NUMERO_ELEMNTOS,150,130,(j*50));
//		else
//		texto-> Pintar(i,150,130+(j*50));
//	}
//}