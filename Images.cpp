//
// Created by super on 4/10/2023.
//

#include "Images.h"
std::map<images, sf::Texture> Images::textures;

/*std::string images::getPath(images image);
static void images::load(images image);*/


std::string Images::getPath(images image) {
    switch (image) {
        case PHASER:
            return "Phaser.png";
        case CARDS:
            return "CardSprites.png";
        case NOTES:
            return "notes.png";
    }
}

void Images::load(images image) {
    textures[image].loadFromFile(getPath(image));
}

sf::Texture &Images::getImage(images image) {
    load(image);
    return textures[image];
}
