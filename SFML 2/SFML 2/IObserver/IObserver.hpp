//
//  IObserver.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef IObserver_hpp
#define IObserver_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>
class IObserver {
public:
    virtual void onNotify(const sf::Event& event) = 0;
};
#endif /* IObserver_hpp */
