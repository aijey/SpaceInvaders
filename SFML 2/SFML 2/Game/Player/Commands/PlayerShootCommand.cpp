//
//  PlayerShootCommand.cpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#include "PlayerShootCommand.hpp"
#include "Player.hpp"
PlayerShootCommand::PlayerShootCommand(Player* player): m_player(player){}
void PlayerShootCommand::execute(){
    m_player->shoot();
}
