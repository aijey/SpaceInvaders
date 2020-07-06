//
//  Game.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp
#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>
#include "EventHandler.hpp"
#include "Renderer.hpp"
#include "Scene.hpp"
#include "GameWindowCloseEventObserver.hpp"
#include "BulletController.hpp"
class Player;
class Game {
public:
    typedef std::shared_ptr<Game> ptr;
    EventHandler m_mainWindowEventHandler;
    BulletController bulletController;
    GameWindowCloseEventObserver m_windowCloseObserver;
    Game();
    void start();
    void handleEvents();
    void updateScene();
    void renderScene();
    void initialize();
    void stop();
    ~Game();
    
protected:
    
private:
    Renderer m_renderer;
    sf::RenderWindow m_window;
    Scene m_scene;
    std::shared_ptr<Player> m_player = nullptr;
    
};

#endif /* Game_hpp */
