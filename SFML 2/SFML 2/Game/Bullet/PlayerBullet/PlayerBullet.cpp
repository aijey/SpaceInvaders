//
//  PlayerBullet.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "PlayerBullet.hpp"
PlayerBullet::PlayerBullet(const sf::Vector2<float>& startPos, const std::shared_ptr<SceneObject>& sceneObject)
    : Bullet(sceneObject, sf::Vector2<float>(0, -20)){
        sceneObject->setScreenPosition(startPos);
}
