#include <SDL.h>
#include "Sprite.h"
#include "config.h"

Sprite::Sprite(SDL_Surface * screen){
	this->screen = screen;
}
Sprite::~Sprite(){
	SDL_FreeSurface(image);
}
void Sprite::CargarImagen(char*path)
{
	image=SDL_LoadBMP(path);
}
//Sprite::~Sprite()
//{
//	SDL_FreeSurface(image);
//}
void Sprite::PintarModulo(int id, int x, int y )
{	
	SDL_Rect src;
	src.x=spriteDef.modulos[id].x;
	src.y=spriteDef.modulos[id].y;
	src.w=spriteDef.modulos[id].w;
	src.h=spriteDef.modulos[id].h;
	SDL_Rect dest;
	dest.x=x;
	dest.y=y;
	SDL_BlitSurface(image,&src,screen,&dest);
	}
//int Sprite::widthModule(int id){
//	return spriteDef.modulos[id].w;
//}
//int Sprite::HeightModule(int id){
//	return spriteDef.modulos[id].h;
//}

