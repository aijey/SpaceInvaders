//
//  BulletController.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "BulletController.hpp"
#include "Scene.hpp"
BulletController::BulletController(Scene* scene): m_scene(scene) {
    
}
std::shared_ptr<PlayerBullet> BulletController::spawnPlayerBullet(const sf::Vector2<float>& startPos){
    auto circle = std::make_shared<sf::CircleShape>(5);
    const auto& circleSceneObject = m_scene->createCircleSceneObject("bullet", circle);
    auto bullet = std::make_shared<PlayerBullet>(startPos, circleSceneObject);
    m_spawnedBullets.push_back(bullet);
    return bullet;
}

void BulletController::updateBullets(){
    for(auto& bullet: m_spawnedBullets){
        bullet->update();
    }
}
