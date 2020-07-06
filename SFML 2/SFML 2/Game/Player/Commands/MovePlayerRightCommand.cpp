//
//  MovePlayerRightCommand.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "MovePlayerRightCommand.hpp"
#include "Player.hpp"
MovePlayerRightCommand::MovePlayerRightCommand(Player* player) : m_player(player){}
void MovePlayerRightCommand::execute() {
    m_player->moveRight();
}
