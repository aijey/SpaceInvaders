//
//  EventHandler.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef EventHandler_hpp
#define EventHandler_hpp

#include <stdio.h>
#include <vector>
#include <SFML/Graphics.hpp>
#include "IObserver.hpp"
#include <iostream>

class EventHandler {
public:
    std::vector<IObserver*> m_onEventTypeHappened[sf::Event::EventType::Count];
    void notify(const sf::Event& event) const;
    void subscribeTo(sf::Event::EventType eventType, IObserver& observer);
};

#endif /* EventHandler_hpp */
