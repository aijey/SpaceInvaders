//
//  BulletController.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef BulletController_hpp
#define BulletController_hpp

#include <stdio.h>
#include <memory>
#include "PlayerBullet.hpp"
class Scene;
class BulletController {
public:
    BulletController(Scene* scene);
    std::shared_ptr<PlayerBullet> spawnPlayerBullet(const sf::Vector2<float>& startPos);
    void updateBullets();
    
private:
    Scene* m_scene;
    std::vector<std::shared_ptr<Bullet>> m_spawnedBullets;
};

#endif /* BulletController_hpp */
