#include "Game.h"
#include  <stdlib.h>

// La funci�n principal del juego
int main(int argc, char *argv[]){
	CGame *navesGame = new CGame();//Crea un objeto usando apuntadores

	if(navesGame->Start())   
		navesGame->Finalize(); // Liberamos los recursos utilizados.
    
    return EXIT_SUCCESS;
}
