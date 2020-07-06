//
//  Bullet.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef Bullet_hpp
#define Bullet_hpp

#include <stdio.h>
#include "SceneObject.hpp"
#include <SFML/Graphics.hpp>
class Bullet {
public:
    sf::Vector2<float> velocity;
    std::shared_ptr<SceneObject> sceneObject;
    void update();
    
protected:
    Bullet(const std::shared_ptr<SceneObject>& sceneObject, const sf::Vector2<float>& velocity);
    
    
};

#endif /* Bullet_hpp */
