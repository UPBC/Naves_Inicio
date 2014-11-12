#ifndef __NAVE_H__
#define __NAVE_H__
#include "Sprite.h"
#include "Spritedef.h"
#include "config.h"
#include"Game.h"

class Nave{
	int x; int y; int w;
	int h; int moduleUding; int PosicionActual; int PosicionFinal;int PosicionBrinco;
	Sprite *sprite;
	public 
		Nave(SDL_Surface*screen, char * rutaImagen int module);
		~Nave();
		void Pintar();
		void Mover (int posicion);
		void TerminarAnimacion();
		void IncrementarStep();
		void Actualizar();

}


#endif