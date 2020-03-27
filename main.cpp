#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

int main(){

    RenderWindow window(VideoMode(620, 700), " ");  
    window.setFramerateLimit(60);

    //variables
    bool KeyPressed = false;

    //shapes
    RectangleShape start;
    start.setSize(Vector2f(620, 700));

    RectangleShape game;
    game.setSize(sf::Vector2f(620, 700));


    //images
    Texture background;
    background.loadFromFile("data/PAC-MAN-Game.jpg");
    start.setTexture(&background);

    Texture map;
    map.loadFromFile("data/pacmanworld.jpg");
    game.setTexture(&map);

    //font
    Font font;
    font.loadFromFile("data/arial.ttf");

    Text tap;

    tap.setFont(font);
    tap.setFillColor(Color::Yellow);
    tap.setString("TAP TO START!");
    tap.setCharacterSize(30);
    tap.setPosition(200, 450);

    //Game loop
    while ( window.isOpen() )            
    {
        Event event;
        while (window.pollEvent(event)) {
            
            if (event.type == Event::Closed)
                   window.close() ;
            
            if (event.type == Event::KeyPressed)
                   KeyPressed = true;
            
            //logic
            if (KeyPressed == true) {
                start.setFillColor(Color::Transparent);
                tap.setFillColor(Color::Transparent);

            }
        }
            //rendring

            window.clear();
            window.draw(game);                   
            window.draw(start);               
            window.draw(tap);
            window.display();
        
    }
    return 0;
}
