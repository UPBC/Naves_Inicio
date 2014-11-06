#include "Nave.h"
#include "config.h"
#include "Sprite.h"
#include "Spritedef.h"
Nave::Nave(SDL_Surface * screen){
	sprite=new Sprite(screen)
		sprite -> CargarImagen(rutaImagen);
	x=(WIDTH_SCREEN/2)-(sprite->widthModule(0)/2);
	y=(HEIGHT_SCREEN-80)-(sprite->HeightModule(0));
}
Nave:: ~Nave(){
	delete sprite;
}
void Nave::Pintar(){
	sprite ->PintarModulo(0,x,y);
}
void Nave::Mover(int posicion){
	x+=posicion;
}