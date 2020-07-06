//
//  Renderer.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "Renderer.hpp"
void Renderer::render(const std::vector<SceneObject::ptr>& sceneObjects, sf::RenderWindow& window) {
    window.clear();
    for (const auto& i: sceneObjects){
        i->render(window);
    }
    window.display();
}
