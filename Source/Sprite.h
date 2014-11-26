#ifndef __SPRITE_H__
#define __SPRITE_H__
#include <SDL_image.h>
#include<SDL.h>
#include "Spritedef.h"

class Sprite 
{
	SDL_Surface*image;//imagen
	SDL_Surface*screen;//pantalla
	SpriteDef spriteDef;

public :
	Sprite(SDL_Surface*screen);//constructor
	~Sprite();//destructor
	void CargarImagen(char*path);
	void PintarModulo(int id,int x,int y);
	/*int widthModule(int id);
	int HeightModule(int id);*/
};
#endif
