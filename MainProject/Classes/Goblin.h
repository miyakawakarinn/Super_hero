
#pragma once

#include "../HuEngine.h"

class Goblin {
public:
    void Load();
    void Initialize(HE::Math::Vector2 initial, float radius, float speed);
    void Update();
    void OnCollision();
    HE::Math::Rectangle GetCollision();
    HE::Math::Vector3 GetPosition() const { return sprite_.params.pos; }

    void SetInitialPosition();

private:

    HE::Math::Vector2 center_;
    float     theta_;
    float     radius_;
    float     speed_;
    HE::Sprite sprite_;
};
