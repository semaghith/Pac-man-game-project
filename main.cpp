#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
int main() {

    RenderWindow window(VideoMode(620, 700), " ");

    RectangleShape player(Vector2f(620, 700));               // INTRO RECT. IMAGE

    Texture image1;                                         // INTRO IMAGE
    image1.loadFromFile("data/PAC-MAN-Game.jpg");
    player.setTexture(&image1);


    Font font;
   font.loadFromFile("data/arial.ttf");
       
    Text start;                                            //INTRO TEXT
    start.setFont(font);
    start.setCharacterSize(30);
    start.setString("TAP TO START!");
    start.setFillColor(Color::Yellow);
    start.setPosition(200, 450);


    while (window.isOpen()) {                             // GAME LOOP
        Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
            case Event::Closed: window.close();
                break;

            }
        }
        window.clear();
        window.draw(player);
        window.draw(start);
        window.display();
    }
    return 0;
}
