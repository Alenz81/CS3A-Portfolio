//
// Created by super on 4/10/2023.
//

#ifndef NEW_SFML_TUTORIAL_IMAGES_H
#define NEW_SFML_TUTORIAL_IMAGES_H
#include <map>
#include "SFML/Graphics.hpp"

enum images{
    PHASER, CARDS, NOTES
};

class Images {
private:
    static std::map<images, sf::Texture> textures;
    static std::string getPath(images image);
    static void load(images image);
public:
    static sf::Texture& getImage(images image);

};


#endif //NEW_SFML_TUTORIAL_IMAGES_H
