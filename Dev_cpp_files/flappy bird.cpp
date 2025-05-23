#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const float GRAVITY = 0.4f;
const float FLAP_STRENGTH = 7.0f;

class Bird {
public:
    Bird() {
        birdTexture.loadFromFile("bird.png");
        birdTexture.setSmooth(true);
        birdSprite.setTexture(birdTexture);
        birdSprite.setPosition(100, SCREEN_HEIGHT / 2);
        velocity = 0;
    }

    void flap() {
        velocity = -FLAP_STRENGTH;
    }

    void update() {
        velocity += GRAVITY;
        birdSprite.move(0, velocity);
    }

    sf::Sprite& getSprite() {
        return birdSprite;
    }

private:
    sf::Texture birdTexture;
    sf::Sprite birdSprite;
    float velocity;
};

int main() {
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Flappy Bird");

    Bird bird;

    sf::Clock clock;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
                bird.flap();
        }

        bird.update();

        window.clear();

        // Draw background, obstacles, and other game elements here

        window.draw(bird.getSprite());
        window.display();

        sf::Time elapsed = clock.getElapsedTime();
        if (elapsed.asMilliseconds() > 16) {  // Limit frame rate to about 60 FPS
            clock.restart();
        }
    }

    return 0;
}

