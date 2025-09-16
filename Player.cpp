#include "Player.h"
#include <Novice.h>

// 初期化
void Player::Initialize() {
    position_ = { 200.0f, 200.0f };
    speed_ = 5.0f; // 移動速度を初期化
}

// 更新
void Player::Update() {
    // 特に処理がなければ空でOK
}

// 描画
void Player::Draw() {
    Novice::DrawBox(
        static_cast<int>(position_.x), // X座標
        static_cast<int>(position_.y), // Y座標
        100, 100,                      // 幅, 高さ
        0.0f,                          // 回転角度
        WHITE,                         // 色
        kFillModeSolid                 // 塗りつぶし
    );
}

// 右移動
void Player::MoveRight() {
    this->position_.x += speed_;
}

// 左移動
void Player::MoveLeft() {
    this->position_.x -= speed_;
}
