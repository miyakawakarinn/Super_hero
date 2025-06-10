#pragma once

#include "../HuEngine.h"

class Witch{
public:
    void Load();
    void Initialize(HE::Math::Vector2 initial, float speed, float angle);
    void Update();
    void OnCollision();
    HE::Math::Rectangle GetCollision();
    HE::Math::Vector3 GetPosition() const { return sprite_.params.pos; }

private:
    HE::Sprite sprite_;
    HE::Math::Vector2 direction_;
    float             speed_;
};