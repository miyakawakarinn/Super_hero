//
// TamplateScene.cpp
//

#include "TitleScene.h"

using namespace HE;

// initialize member variables.
TitleScene::TitleScene()
{

}

// rearrange UI to fit the size.
void TitleScene::ResizeLayout()
{
    Scene::ResizeLayout();



}

// load resources.
void TitleScene::Load()
{
    sprite_ = Sprite("title.png");
    enter_.params.style = Font::AddFontStyle("Fonts/Senobi-Gothic-Bold.ttf");
    RenderingPath->AddSprite(&sprite_, 100);
    bgm_ = Sound("TitleBGM.wav", Sound::LoopCount::BGM);
    bgm_.Play();

    RenderingPath->AddFont(&enter_, 1000);


    Scene::Load();
}

// initialize a variables.
void TitleScene::Initialize()
{
    sprite_.params.siz = sprite_.GetTextureSize();
    sprite_.params.siz.x = RenderingPath->GetLogicalWidth();
    sprite_.params.pos = Math::Vector2(0.0);

    //Enterでゲームスタート
    enter_.SetText(L"Enterでゲームスタート！");
    enter_.params.posX = 200.0f;
    enter_.params.posY = 600.0f;
    enter_.params.size = 100;
    enter_.params.color = Color(144, 238, 144);    // 赤, 緑, 青(0-255)
}

// releasing resources required for termination.
void TitleScene::Terminate()
{

}

// updates the scene.
void TitleScene::Update(float deltaTime)


{
    if (InputSystem.Keyboard.wasPressedThisFrame.Enter)
        SceneManager.SetNextScene(NextScene::MainScene);


    Scene::Update(deltaTime);
}