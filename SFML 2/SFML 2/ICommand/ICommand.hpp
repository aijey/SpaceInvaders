//
//  ICommand.hpp
//  SFML 2
//
//  Created by Artur Sydoran on 05.07.2020.
//  Copyright © 2020 Artur Sydoran. All rights reserved.
//

#ifndef ICommand_hpp
#define ICommand_hpp

#include <stdio.h>
class ICommand {
public:
    virtual void execute() = 0;
};
#endif /* ICommand_hpp */
