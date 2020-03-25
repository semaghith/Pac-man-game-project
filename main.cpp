#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
int main(){

    RenderWindow window(VideoMode(250,250), "");

    RectangleShape firstimage(Vector2f(1080,2340));

    while (window.isOpen()) {     // Game loop 
        
        Event event;

        while (window.pollEvent(event)) {

            if (event.type == Event::Closed)
                window.close();
        }
    }
    window.clear();
    window.draw(firstimage);
    window.display();

    return 0;
}