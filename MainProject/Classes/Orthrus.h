
#pragma once

#include "../HuEngine.h"

class Orthrus {
public:
    void Load();
    void Initialize();
    void Update();
    void OnCollision();    
    HE::Math::Rectangle GetCollision();
    HE::Math::Vector3 GetPosition() const { return sprite_.params.pos; }

private:
    HE::Sprite sprite_;

};
