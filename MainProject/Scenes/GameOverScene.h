
#pragma once

#include "../HuEngine.h"
#include "DontDestroyOnLoad.h"

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
    HE::SpriteFont result_headline_;
    HE::SpriteFont titleback_headline_;
    HE::SpriteFont score_;
    HE::SpriteFont point_;
    HE::SpriteFont text_;

    HE::Sound result_;
};