#pragma once

#include "../HuEngine.h"

class Effect {
public:
    void Load();
    void Initialize();
    void Update();

private:
    HE::Sprite sprite_;
};