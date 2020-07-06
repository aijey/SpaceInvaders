//
//  EventHandler.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "EventHandler.hpp"
void EventHandler::notify(const sf::Event& event) const {
    for(const auto observer: m_onEventTypeHappened[event.type]){
        std::cout << "Notified!" << std::endl;
        observer->onNotify(event);
    }
}
void EventHandler::subscribeTo(sf::Event::EventType eventType, IObserver& observer){
    std::cout << "Subscribed!" << std::endl;
    m_onEventTypeHappened[eventType].push_back(&observer);
}
