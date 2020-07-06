//
//  MovePlayerLeftCommand.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "MovePlayerLeftCommand.hpp"
#include "Player.hpp"
MovePlayerLeftCommand::MovePlayerLeftCommand(Player* player) : m_player(player){}
void MovePlayerLeftCommand::execute() {
    m_player->moveLeft();
}
