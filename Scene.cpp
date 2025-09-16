#include "Scene.h"
#include "Command.h"

void Scene::Initialize() {

    // インプットハンドラーを生成
    inputHandler_ = new InputHandler();

    // Aキー押された時の「左移動コマンド」を割り当てる
    inputHandler_->AssignMoveLeftCommand2PressKeyA();

    // Dキー押された時の「右移動コマンド」を割り当てる
    inputHandler_->AssignMoveRightCommand2PressKeyD();

    // プレイヤー生成
    player_ = new Player();
    player_->Initialize();
}

void Scene::Update() {

    // AかDキー押されたとき、発生したコマンドを取得
    iCommand_ = inputHandler_->HandleInput();

    // コマンドが有効なら実行
    if (iCommand_) {
        iCommand_->Execute(*player_);
    }

    // プレイヤー更新
    player_->Update();
}

void Scene::Draw() {
    player_->Draw();
}
