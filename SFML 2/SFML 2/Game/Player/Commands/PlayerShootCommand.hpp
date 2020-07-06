//
//  PlayerShootCommand.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef PlayerShootCommand_hpp
#define PlayerShootCommand_hpp

#include <stdio.h>
#include "ICommand.hpp"
class Player;
class PlayerShootCommand: public ICommand {
public:
    PlayerShootCommand(Player* player);
    void execute() override;
    
private:
    Player* m_player;
};

#endif /* PlayerShootCommand_hpp */
