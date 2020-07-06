//
//  Bullet.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "Bullet.hpp"
void Bullet::update(){
    auto pos = sceneObject->getScreenPosition();
    pos += velocity;
    sceneObject->setScreenPosition(pos);
}

Bullet::Bullet(const std::shared_ptr<SceneObject>& sceneObject, const sf::Vector2<float>& velocity)
: sceneObject(sceneObject), velocity(velocity){
}
