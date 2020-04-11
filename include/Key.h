#ifndef KEY_H_INCLUDED
#define KEY_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
/* 
    Key: Abstract class.
*/
class Key {

    protected:
    sf::Texture texture;
    sf::Texture texturePressed;
    sf::Sprite sprite;
    sf::Text label;
    sf::Vector2f pos;
    std::string kbKeyCode;    
    public:
    Key();
    Key(sf::Texture& t, sf::Texture& t_Pressed);
    virtual sf::Sprite& getSprite() = 0;
    virtual void playSound() = 0;
    virtual void setPosition(int x, int y) = 0;
    
    ~Key() {
        std::cout<<"papa clapa"<<std::endl;
    }
};
#endif