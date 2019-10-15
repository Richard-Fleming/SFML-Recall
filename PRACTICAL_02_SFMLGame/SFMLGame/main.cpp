#include <Game.h>

#ifdef DEBUG
#pragma comment(lib, "sfml-audio-d-2.dll")
#pragma comment(lib, "sfml-graphics-d-2.dll")
#pragma comment(lib, "sfml-network-d-2.dll")
#pragma comment(lib, "sfml-system-d-2.dll")
#pragma comment(lib, "sfml-window-d-2.dll")
#endif // DEBUG
#ifdef RELEASE
#pragma comment(lib, "openal32.dll")
#pragma comment(lib, "sfml-audio-2.dll")
#pragma comment(lib, "sfml-graphics-2.dll")
#pragma comment(lib, "sfml-network-2.dll")
#pragma comment(lib, "sfml-system-2.dll")
#pragma comment(lib, "sfml-window-2.dll")
#endif // RELEASE


int main(void){

	Game* game = new Game();
	game->run();

}