//
//  Scene.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "Scene.hpp"
SceneObject::ptr Scene::createCircleSceneObject(const std::string& name, std::shared_ptr<sf::CircleShape> drawable){
    m_sceneObjects.push_back(std::make_shared<CircleSceneObject>(name, drawable));
    return m_sceneObjects.back();
}
