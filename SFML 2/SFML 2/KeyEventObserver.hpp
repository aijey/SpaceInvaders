//
//  KeyEventObserver.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef KeyEventObserver_hpp
#define KeyEventObserver_hpp

#include <stdio.h>
#include "IObserver.hpp"
#include "Player.hpp"
class Player {
    class KeyEventObserver: IObserver {
        void onNotify(const sf::Event &event) override {
            Player::this->moveLeft();
        }
        
    };
};
#endif /* KeyEventObserver_hpp */
