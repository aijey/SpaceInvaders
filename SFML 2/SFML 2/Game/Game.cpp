//
//  Game.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//


#include "Game.hpp"
#include "Player.hpp"

Game::Game()
:m_windowCloseObserver(this), bulletController(&m_scene)
{
    m_window.create(sf::VideoMode(1000, 1000), "Space Invaders");
    m_window.setFramerateLimit(30);
}

void Game::start(){
    initialize();
    m_mainWindowEventHandler.subscribeTo(sf::Event::EventType::Closed, m_windowCloseObserver);
    while(m_window.isOpen()){
        handleEvents();
        updateScene();
        renderScene();
    }
}
void Game::handleEvents(){
    sf::Event event;
    while(m_window.pollEvent(event)){
        m_mainWindowEventHandler.notify(event);
    }
}
void Game::updateScene(){
    bulletController.updateBullets();
}
void Game::renderScene(){
    m_renderer.render(m_scene.m_sceneObjects, m_window);
}
void Game::initialize(){
    auto circle = std::make_shared<sf::CircleShape>(20, 30);
    circle->setFillColor(sf::Color::Green);
    auto obj = m_scene.createCircleSceneObject("circle", circle);
    obj->setScreenPosition(sf::Vector2<float>(500, 950));
    m_player = std::make_shared<Player>(this, obj);
}
void Game::stop(){
    m_window.close();
}
Game::~Game() = default;
