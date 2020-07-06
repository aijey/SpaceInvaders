//
//  GameWindowCloseEventObserver.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef GameWindowCloseEventObserver_hpp
#define GameWindowCloseEventObserver_hpp

#include <stdio.h>
#include "IObserver.hpp"
class Game;
class GameWindowCloseEventObserver: public IObserver  {
    void onNotify(const sf::Event &event) override;
    Game* m_game;
public:
    GameWindowCloseEventObserver(Game* game);
};

#endif /* GameWindowCloseEventObserver_hpp */
