#include <iostream>
#include "cow.h"

int main() {

	Cow Black;
	Cow White("White", "song", 100);
	Black.ShowCow();
	White.ShowCow();

	Black = White;
	Black.ShowCow();
	White.ShowCow();

}