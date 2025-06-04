//
// MainScene.cpp
//

#include "MainScene.h"

using namespace HE;

// initialize member variables.
MainScene::MainScene()
{

}

// rearrange UI to fit the size.
void MainScene::ResizeLayout()
{
	Scene::ResizeLayout();



}

// load resources.
void MainScene::Load()
{

	bg_.Load();
	player_.Load();
	demon_.Load();
	goblin_.Load();
	orthros_.Load();
	witch_.Load();
	effect_.Load();

	Scene::Load();
}

// initialize a variables.
void MainScene::Initialize()
{
	bg_.Initialize();
	player_.Initialize();
	demon_.Initialize();
	goblin_.Initialize();
	orthros_.Initialize();
	witch_.Initialize();
	effect_.Initialize();
}

// releasing resources required for termination.
void MainScene::Terminate()
{

}

// updates the scene.
void MainScene::Update(float deltaTime)
{
	bg_.Update();
	player_.Update();
	demon_.Update();
	goblin_.Update();
	orthros_.Update();
	witch_.Update();
	effect_.Update();

	Scene::Update(deltaTime);
}
