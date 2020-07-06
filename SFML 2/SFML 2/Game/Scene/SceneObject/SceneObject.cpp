//
//  SceneObject.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "SceneObject.hpp"
SceneObject::SceneObject(const std::string& name, std::shared_ptr<sf::Drawable> drawable)
    : m_name(name), m_drawable(drawable){
}
void SceneObject::render(sf::RenderWindow& window) const {
    window.draw(*m_drawable);
}

