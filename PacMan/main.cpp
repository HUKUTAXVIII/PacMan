#include <SFML/Graphics.hpp>
#include "GameWIndow.h"

using namespace sf;

int main(int argc,char * argv[]) {

	GameWIndow* win = new GameWIndow();

	win->Play();

	delete win;
	return 0;
}