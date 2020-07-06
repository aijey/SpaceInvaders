//
//  CircleSceneObject.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef CircleSceneObject_hpp
#define CircleSceneObject_hpp

#include <stdio.h>
#include "SceneObject.hpp"
class CircleSceneObject : public SceneObject {
public:
    CircleSceneObject(const std::string& name, std::shared_ptr<sf::CircleShape> drawable);
    std::shared_ptr<sf::CircleShape> m_circleShape;
    void setScreenPosition(sf::Vector2<float> pos) override;
    sf::Vector2<float> getScreenPosition() override;
};

#endif /* CircleSceneObject_hpp */
