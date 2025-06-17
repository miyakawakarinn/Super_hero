
//
// GameOverScene.cpp
//

#include "GameOverScene.h"
#include "DontDestroyOnLoad.h"

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
    RenderingPath->AddFont(&titleback_headline_, 1000);
    RenderingPath->AddFont(&score_, 1000);
    RenderingPath->AddFont(&point_, 1000);
    RenderingPath->AddFont(&text_, 1000);

    Scene::Load();
}

// initialize a variables.
void GameOverScene::Initialize()
{
    sprite_.params.siz = sprite_.GetTextureSize();
    sprite_.params.siz.x = RenderingPath->GetLogicalWidth();
    sprite_.params.pos = Math::Vector2(0.0);

    //Result
    result_headline_.SetText(L"Result");
    result_headline_.params.posX = 470.0f;
    result_headline_.params.posY = 0.0f;
    result_headline_.params.size = 100;
    result_headline_.params.color = Color(255, 69, 0);    // 赤, 緑, 青(0-255)

    //Enterでタイトルに戻る
    titleback_headline_.SetText(L"Enterでタイトルに戻る");
    titleback_headline_.params.posX = 470.0f;
    titleback_headline_.params.posY = 600.0f;
    titleback_headline_.params.size = 100;
    titleback_headline_.params.color = Color(0, 0, 0);    // 赤, 緑, 青(0-255)

    //獲得点数
    score_.SetText(std::to_string(DontDestroy.score_));
    score_.params.posX = 400.0f;
    score_.params.posY = 310.0f;
    score_.params.size = 200;
    score_.params.color = Color(255, 69, 0);

    //下の線
    point_.SetText(L"体！");
    point_.params.posX = 900.0f;
    point_.params.posY = 310.0f;
    point_.params.size = 200;
    point_.params.color = Color(0, 0, 0);    // 赤, 緑, 青(0-255)

    //あなたが倒したモンスターの数は...
    text_.SetText(L"あなたが倒したモンスターの数は..");
    text_.params.posX = 40.0f;
    text_.params.posY = 180.0f;
    text_.params.size = 100;
    text_.params.color = Color(0, 0, 0);    // 赤, 緑, 青(0-255)

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