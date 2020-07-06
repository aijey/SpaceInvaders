//
//  Player.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 04.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "Player.hpp"
#include "Game.hpp"
#include "MovePlayerLeftCommand.hpp"
#include "MovePlayerRightCommand.hpp"
#include "PlayerShootCommand.hpp"
Player::Player(Game* game, SceneObject::ptr sceneObject)
    : m_game(game), m_sceneObject(sceneObject), m_keyEventObserver(this)
{
    game->m_mainWindowEventHandler.subscribeTo(sf::Event::EventType::KeyPressed, m_keyEventObserver);
    initializeCommands();
}
void Player::moveLeft(){
    auto curPos = m_sceneObject->getScreenPosition();
    curPos.x += -10;
    m_sceneObject->setScreenPosition(curPos);
}
void Player::moveRight(){
    auto curPos = m_sceneObject->getScreenPosition();
    curPos.x += +10;
    m_sceneObject->setScreenPosition(curPos);
}
void Player::moveUp(){
    auto curPos = m_sceneObject->getScreenPosition();
    curPos.y += -10;
    m_sceneObject->setScreenPosition(curPos);
}
void Player::moveDown(){
    auto curPos = m_sceneObject->getScreenPosition();
    curPos.y += 10;
    m_sceneObject->setScreenPosition(curPos);
}
void Player::initializeCommands(){
    onKeyPressed[sf::Keyboard::Key::A] = std::make_shared<MovePlayerLeftCommand>(this);
    onKeyPressed[sf::Keyboard::Key::D] = std::make_shared<MovePlayerRightCommand>(this);
    onKeyPressed[sf::Keyboard::Key::Space] = std::make_shared<PlayerShootCommand>(this);
}
void Player::shoot(){
    const auto& pos = m_sceneObject->getScreenPosition();
    m_game->bulletController.spawnPlayerBullet(pos);
}


