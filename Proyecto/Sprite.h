#ifndef _SPRITE_H_
#define _SPRITE_H_
#include<SDL.h>
#include"SpriteDef.h"

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
};
#endif
