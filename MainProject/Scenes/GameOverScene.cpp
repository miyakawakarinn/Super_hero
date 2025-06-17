
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
    RenderingPath->AddFont(&result_headline_, 1000);

    Scene::Load();
}

// initialize a variables.
void GameOverScene::Initialize()
{
    sprite_.params.siz = sprite_.GetTextureSize();
    sprite_.params.siz.x = RenderingPath->GetLogicalWidth();
    sprite_.params.pos = Math::Vector2(0.0);

    // スコア見出し(1-UP)
    result_headline_.SetText(L"Result");
    result_headline_.params.posX = 800.0f;
    result_headline_.params.posY = 0.0f;
    result_headline_.params.size = 100;
    result_headline_.params.color = Color(0,0,0);    // 赤, 緑, 青(0-255)
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
}//リザルトはここに書いていくこと