
#pragma once

#include "../HuEngine.h"

class GameOverScene : public HE::Scene
{
public:
    GameOverScene();
    virtual ~GameOverScene() { Terminate(); }

    void ResizeLayout() override;

    void Load() override;
    void Initialize() override;
    void Terminate() override;

    void Update(float deltaTime) override;

private:
    HE::Sprite sprite_;
};