//
//  CircleSceneObject.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "CircleSceneObject.hpp"
CircleSceneObject::CircleSceneObject(const std::string& name, std::shared_ptr<sf::CircleShape> drawable)
: SceneObject(name, drawable), m_circleShape(drawable){
}
void CircleSceneObject::setScreenPosition(sf::Vector2<float> pos){
    m_circleShape->setPosition(pos.x, pos.y);
}
sf::Vector2<float> CircleSceneObject::getScreenPosition(){
    return m_circleShape->getPosition();
}
