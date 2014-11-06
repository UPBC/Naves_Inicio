#ifndef __NAVE_H__
#define __NAVE_H__
#include "Sprite.h"
#include "Spritedef.h"
#include "config.h"
#include"Game.h"

class Nave{
	int x; int y;
	Sprite *sprite;
	public 
		Nave(SDL_Surface*screen, char * rutaImagen );
		~Nave();
		void Pintar();
		void Mover (int posicion);
}


#endif