#include<iostream>
#include<allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>
using namespace std;

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);

	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_rectangle(20, 20, 50, 50, al_map_rgb(50, 50, 50), 5);

	al_draw_filled_circle(300, 300, 50, al_map_rgb(80, 80, 80));

}