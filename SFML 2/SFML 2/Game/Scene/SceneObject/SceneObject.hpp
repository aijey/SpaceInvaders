//
//  SceneObject.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef SceneObject_hpp
#define SceneObject_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <string>
#include <memory>
#include <iostream>

class SceneObject {
public:
    typedef std::shared_ptr<SceneObject> ptr;
    std::string m_name;
    std::shared_ptr<sf::Drawable> m_drawable;
    SceneObject(const std::string& name, std::shared_ptr<sf::Drawable> drawable);
    void render(sf::RenderWindow& window) const;
    virtual void setScreenPosition(sf::Vector2<float> pos) = 0;
    virtual sf::Vector2<float> getScreenPosition() = 0;
};

#endif /* SceneObject_hpp */
