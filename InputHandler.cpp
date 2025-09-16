#include "InputHandler.h"
#include <Novice.h>
#include "Command.h" // ← MoveLeftCommand / MoveRightCommand を使うので必要

ICommand* InputHandler::HandleInput() {

    // Aキーが押されたら 左移動コマンドを返す
    if (Novice::CheckHitKey(DIK_A)) {   // ← コメントの部分を DIK_A に修正
        return pressKeyA_;
    }

    // Dキーが押されたら 右移動コマンドを返す
    if (Novice::CheckHitKey(DIK_D)) {
        return pressKeyD_;
    }

    return nullptr; // どのキーも押されていないとき
}

// Aキーに「左移動コマンド」を割り当てる
void InputHandler::AssignMoveLeftCommand2PressKeyA() {
    ICommand* command = new MoveLeftCommand();  // ← 左移動コマンドを生成
    this->pressKeyA_ = command;
}

// Dキーに「右移動コマンド」を割り当てる
void InputHandler::AssignMoveRightCommand2PressKeyD() { // ← 名前を修正
    ICommand* command = new MoveRightCommand(); // ← 右移動コマンドを生成
    this->pressKeyD_ = command;
}
