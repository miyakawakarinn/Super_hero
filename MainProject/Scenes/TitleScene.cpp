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
    RenderingPath->AddSprite(&sprite_, 0);


    Scene::Load();
}

// initialize a variables.
void TitleScene::Initialize()
{
    sprite_.params.siz = sprite_.GetTextureSize();
    sprite_.params.siz.x = RenderingPath->GetLogicalWidth();
    sprite_.params.pos = Math::Vector2(0.0);
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