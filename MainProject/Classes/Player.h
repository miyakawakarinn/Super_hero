
#pragma once

#include "../HuEngine.h"

class Effect;

class Player {
public:
    void Load();
    void Initialize(Effect& effect);
    void Update();

    HE::Math::Rectangle GetCollision();
    void OnCollision();

private:
    HE::Sprite sprite_;
    Effect* effect_;
};