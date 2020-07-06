//
//  MovePlayerRightCommand.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef MovePlayerRightCommand_hpp
#define MovePlayerRightCommand_hpp

#include <stdio.h>
#include "ICommand.hpp"
class Player;
class MovePlayerRightCommand: public ICommand {
public:
    MovePlayerRightCommand(Player* player);
    void execute() override;
    
private:
    Player* m_player;
    
};

#endif /* MovePlayerRightCommand_hpp */
