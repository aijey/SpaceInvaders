//
//  PlayerBullet.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef PlayerBullet_hpp
#define PlayerBullet_hpp

#include <stdio.h>
#include "Bullet.hpp"
#include "SceneObject.hpp"
#include <SFML/Graphics.hpp>
class PlayerBullet: public Bullet {
public:
    PlayerBullet(const sf::Vector2<float>& startPos, const std::shared_ptr<SceneObject>& sceneObject);
};

#endif /* PlayerBullet_hpp */
