#pragma once
#include "InputHandler.h"
#include "Player.h"
#include "Command.h"

class Scene {
public:
    void Initialize();
    void Update();
    void Draw();

private:
    InputHandler* inputHandler_ = nullptr;
    Player* player_ = nullptr;
    ICommand* iCommand_ = nullptr;
};
