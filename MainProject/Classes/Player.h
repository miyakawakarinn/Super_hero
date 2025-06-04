
#pragma once

#include "../HuEngine.h"

class Player {
public:
    void Load();
    void Initialize();
    void Update();
    void OnCollision();

private:

    HE::Sprite sprite_;
    HE::Math::Rectangle GetCollision();
};