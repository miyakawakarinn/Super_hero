
//
// GameOverScene.cpp
//

#include "GameOverScene.h"

using namespace HE;

// initialize member variables.
GameOverScene::GameOverScene()
{

}

// rearrange UI to fit the size.
void GameOverScene::ResizeLayout()
{
    Scene::ResizeLayout();



}

// load resources.
void GameOverScene::Load()
{
    sprite_ = Sprite("GameoverScene.png");
    RenderingPath->AddSprite(&sprite_, -100);

    Scene::Load();
}

// initialize a variables.
void GameOverScene::Initialize()
{
    sprite_.params.siz = sprite_.GetTextureSize();
    sprite_.params.siz.x = RenderingPath->GetLogicalWidth();
    sprite_.params.pos = Math::Vector2(0.0);
}

// releasing resources required for termination.
void GameOverScene::Terminate()
{

}

// updates the scene.
void GameOverScene::Update(float deltaTime)
{
    if (InputSystem.Keyboard.wasPressedThisFrame.Enter)
        SceneManager.SetNextScene(NextScene::TitleScene);
    //SceneManager.SetNextScene(NextScene::GameOverScene, 2.0f, Color(255, 0, 0));


    Scene::Update(deltaTime);
}//ƒŠƒUƒ‹ƒg‚Í‚±‚±‚É‘‚¢‚Ä‚¢‚­‚±‚Æ