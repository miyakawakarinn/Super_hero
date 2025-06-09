
#pragma once

#include "../HuEngine.h"

class Goblin {
public:
    void Load();
    void Initialize();
    void Update();
    void OnCollision();
    HE::Math::Rectangle GetCollision();

private:

   // HE::Math::Vector2
    //float     theta_;
    float     radius_;
    float     speed_;
    HE::Sprite sprite_;
};
