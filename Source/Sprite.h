#ifndef __SPRITE_H__
#define __SPRITE_H__
#include<SDL.h>
#include "Spritedef.h"

class Sprite 
{
	SDL_Surface*image;
	SDL_Surface*screen;
	SpriteDef spriteDef;

public :
	void CargarImagen(char*ruta);
	void PintarModulo(int id,int x,int y);
	Sprite(SDL_Surface*screen);
	~Sprite();
	int widthModule(int id);
	int HeightModule(int id);
};
#endif
