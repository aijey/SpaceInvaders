//
//  MovePlayerLeftCommand.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef MovePlayerLeftCommand_hpp
#define MovePlayerLeftCommand_hpp

#include <stdio.h>
#include "ICommand.hpp"
class Player;
class MovePlayerLeftCommand: public ICommand {
public:
    MovePlayerLeftCommand(Player* player);
    void execute() override;
    
private:
    Player* m_player;
    
};
#endif /* MovePlayerLeftCommand_hpp */
