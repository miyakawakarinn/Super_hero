#pragma once

#include "../HuEngine.h"

class Effect {
public:
    void Load();
    void Initialize(HE::Math::Vector2 initial);
    void Update();

    HE::Math::Rectangle GetCollision();
    void OnCollision();

private:
    HE::Sprite sprite_;
};