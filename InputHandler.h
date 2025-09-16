#pragma once
#include "Command.h"

class InputHandler {
public:
    ICommand* HandleInput();

    void AssignMoveLeftCommand2PressKeyA();
    void AssignMoveRightCommand2PressKeyD();

private:
    ICommand* pressKeyA_ = nullptr;
    ICommand* pressKeyD_ = nullptr;
};
