//
//  PlayerKeyEventObserver.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "PlayerKeyEventObserver.hpp"
#include "Player.hpp"
PlayerKeyEventObserver::PlayerKeyEventObserver(Player* player): m_player(player){}
void PlayerKeyEventObserver::onNotify(const sf::Event &event){
    if (m_player->onKeyPressed[event.key.code]){
        m_player->onKeyPressed[event.key.code]->execute();
    }
}
