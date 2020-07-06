//
//  GameWindowCloseEventObserver.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "GameWindowCloseEventObserver.hpp"
#include "Game.hpp"
void GameWindowCloseEventObserver::onNotify(const sf::Event &event) {
    m_game->stop();
}
GameWindowCloseEventObserver::GameWindowCloseEventObserver(Game* game): m_game(game){
    
}
