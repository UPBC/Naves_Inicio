#include <SDL.h>
#include <SDL_image.h>
#include "Nave.h"
#include "Spritedef.h"
#include "config.h"
#include "Sprite.h"

class CGame
{
	//Sprite *nave;
public:
	//Estado *estado;
	bool Start();
	static CGame instanceGame;
	enum Estado 
	{
		ESTADO_INICIANDO,
		ESTADO_MENU,
		ESTADO_JUGANDO,
		ESTADO_TERMINANDO,
		ESTADO_FINALIZANDO,
		SPRITE_MODULE_MI_NAVE,
	};

	CGame();
	void Finalize();
	//void Menu();
	//int menuseleccion;
	////unit8*Keys;
	//SDL_Event;
	//SDL_Surface();
	////Nave*nave;
	
private:
   void Iniciando();
   SDL_Surface *screen;
   Sprite*nave;
   Estado estado;
	// Nave * nave;
	// Nave**enemigoArreglo;
	// Nave*menu;
	// Nave*texto;
	// Nave*fondo;
	
};
