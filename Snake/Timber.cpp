#include <SFML/Graphics.hpp>

using namespace sf;

void main(int argc, char** argv[]) {
	RenderWindow window(VideoMode(640, 480), "Window");

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		window.clear(Color::Black);

		// draw
		window.display();
	}
}