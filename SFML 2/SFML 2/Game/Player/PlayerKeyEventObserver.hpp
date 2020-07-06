//
//  PlayerKeyEventObserver.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef PlayerKeyEventObserver_hpp
#define PlayerKeyEventObserver_hpp

#include <stdio.h>
#include "IObserver.hpp"
class Player;
class PlayerKeyEventObserver: public IObserver {
public:
    Player* m_player;
    PlayerKeyEventObserver(Player* player);
    void onNotify(const sf::Event &event) override;
};

#endif /* PlayerKeyEventObserver_hpp */
