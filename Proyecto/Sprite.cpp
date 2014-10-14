#include <SDL.h>
#include "Sprite.h"
Sprite::~Sprite()
{
	SDL_FreeSurface(image);
}
void Sprite::PintarModulo(int id, int x, int y );
{
	SDL_RECT src;
	src.x=spriteDef.modulos[id].x;
	src.y=spriteDef.modulos[id].y;
	src.w=spriteDef.modulos[id].w;
	src.h=spriteDef.modulos[id].h;
	SDL_Rect dest;
	dest.x=x;
	dest.y=y;
	SDL_BlitSurface(image,&src,screen,NULL);
	};