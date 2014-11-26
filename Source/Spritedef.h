#ifndef __SPRITEDEF_H__
#define __SPRITEDEF_H__
class SpriteDef
{
	struct Modulo 
	{
			int id; int x; int y; int w; int h; 

	};
public :
	Modulo modulos[1];///<-- numero de modulos despues lo cambiaremos a 9 -10
	SpriteDef();//constructor
};
#endif