#ifndef __SPRITEDEF_H__
#define __SPRITEDEF_H__
class SpriteDef
{
	struct Modulo 
	{
			int id; int x; int y; int w; int h; 

	};
public :
	Modulo modulos[3];///<-- numero de modulos
	SpriteDef();//constructor
};
#endif