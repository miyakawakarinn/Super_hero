
#pragma once

#include "../HuEngine.h"

class Orthrus {
public:
    void Load();
    void Initialize();
    void Update();
    void OnCollision();    
    HE::Math::Rectangle GetCollision();

private:
    HE::Sprite sprite_;

};
