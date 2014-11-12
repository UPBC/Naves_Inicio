#include <SDL.h>
#include <SDL_image.h>
#include "Nave.h"
#include "Spritedef.h"
#include "config.h"
#include "Sprite.h"

class CGame
{
	Sprite *nave;
public:
	Estado estado;
	bool Start();
	static CGame instanceGame;
	enum Estado 
	{
		ESTADO_INICIANDO,
		ESTADO_MENU,
		ESTADO_JUGANDO,
		ESTADO_TERMINANDO,
		ESTADO_FINALIZANDO,
	};

	CGame();
	void Finalize();

private:
	void Iniciando();
     SDL_Surface *screen;
	 Nave * nave;
	 Nave**enemigoArreglo;
	 Nave*menu;
	 Nave*texto;
	 Nave*fondo;
	Estado *estado;
};
