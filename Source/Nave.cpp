#include "Nave.h"
#include "config.h"
#include "Sprite.h"
#include "Spritedef.h"
#include "Game.h"
#include <collection.h>

Nave::Nave(SDL_Surface * screen, char * rutaImagen, int x,int y ,int module){
	moduleUding=module;
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
void Nave::TerminarAnimacion(){
	PosicionBrinco=0;
	PosicionActual=0;
	PosicionFinal=0;
	IncrementarStep();
}
void Nave::Actualizar(){
	if (PosicionBrinco!=0)
	{
		if (PosicionActual<=PosicionFinal)
		{
			Mover(PosicionBrinco);
			PosicionActual ++;
		}else
		{
		TerminarAnimacion();
		}
	}