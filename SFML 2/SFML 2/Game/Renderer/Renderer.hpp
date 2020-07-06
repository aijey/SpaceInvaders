//
//  Renderer.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef Renderer_hpp
#define Renderer_hpp

#include <stdio.h>
#include <vector>
#include <SFML/Graphics.hpp>
#include "SceneObject.hpp"
class Renderer {
public:
    void render(const std::vector<SceneObject::ptr>& sceneObjects, sf::RenderWindow& window);
};

#endif /* Renderer_hpp */
