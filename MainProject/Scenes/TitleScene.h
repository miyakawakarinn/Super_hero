#pragma once

#include "../HuEngine.h"

class TitleScene : public HE::Scene
{
public:
    TitleScene();
    virtual ~TitleScene() { Terminate(); }

    void ResizeLayout() override;

    void Load() override;
    void Initialize() override;
    void Terminate() override;

    void Update(float deltaTime) override;

private:
    HE::Sprite sprite_;
};