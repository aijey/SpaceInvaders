//
//  Player.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "IObserver.hpp"
#include "SceneObject.hpp"
#include "EventHandler.hpp"
#include "PlayerKeyEventObserver.hpp"
#include "ICommand.hpp"
class Game;
class Player {
    typedef std::shared_ptr<Player> sptr;
public:
    Game* m_game;
    SceneObject::ptr m_sceneObject;
    PlayerKeyEventObserver m_keyEventObserver;
    std::shared_ptr<ICommand> onKeyPressed[sf::Keyboard::Key::KeyCount];
    
    Player(Game* game, SceneObject::ptr sceneObject);
    ~Player() = default;
    
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();
    void shoot();
    
private:
    void initializeCommands();
    
};

#endif /* Player_hpp */
