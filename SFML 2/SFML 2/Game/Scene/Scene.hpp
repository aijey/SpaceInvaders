//
//  Scene.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef Scene_hpp
#define Scene_hpp

#include <stdio.h>
#include <vector>
#include "SceneObject.hpp"
#include "CircleSceneObject.hpp"
#include <string>
class Scene {
public:
    std::vector<SceneObject::ptr> m_sceneObjects;
    SceneObject::ptr createCircleSceneObject(const std::string& name, std::shared_ptr<sf::CircleShape> drawable);
};

#endif /* Scene_hpp */
