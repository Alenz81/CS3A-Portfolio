//
// Created by Dave R. Smith on 2/14/23.
//

#ifndef CS3A_SPRING23_SFMLCARD_IMAGES_H
#define CS3A_SPRING23_SFMLCARD_IMAGES_H
#include <vector>
#include "Suits1.h"
#include <SFML/Graphics.hpp>
#include <string>

class Images1
{
private:
    static std::vector<sf::Texture> images;
    static std::string getPath(Suits1 suit);
    static void loadFile(Suits1 suit);
public:
    static sf::Texture& getImage(Suits1 suit);
};


#endif //CS3A_SPRING23_SFMLCARD_IMAGES_H
