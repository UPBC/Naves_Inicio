#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

CGame::CGame(){
	estado = 0;
}

// Con esta función eliminaremos todos los elementos en pantalla
void CGame::Finalize(){
}

bool CGame::Start()
{
	// Esta variable nos ayudara a controlar la salida del juego...
	int salirJuego = false;
          
	while (salirJuego == false){
            
		//Maquina de estados
		switch(estado){
			case 0: //INICIALIZAR
			break;
			case 1:	//JUGAR	
			break;
			case 2: //SALIR
				salirJuego = true;
			break;
		};
    }
	return true;
}
