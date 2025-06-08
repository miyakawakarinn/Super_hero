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
	orthrus_.Load();
	witch_.Load();
	effect_.Load();
	player_data_.Load();

	Scene::Load();
}

// initialize a variables.
void MainScene::Initialize()
{
	bg_.Initialize();
	player_.Initialize(effect_);
	demon_.Initialize();
	goblin_.Initialize();
	orthrus_.Initialize();
	witch_.Initialize();
	effect_.Initialize(Math::Vector2(710.0f, -300.0f));
	player_data_.Initialize();
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
	orthrus_.Update();
	witch_.Update();
	effect_.Update();


	// è’ìÀîªíË

	Math::Rectangle demon_collision = demon_.GetCollision();
	Math::Rectangle orthrus_collision = orthrus_.GetCollision();
	Math::Rectangle goblin_collision = goblin_.GetCollision();
	Math::Rectangle witch_collision = witch_.GetCollision();
	Math::Rectangle effect_collision = effect_.GetCollision();
	if (demon_collision.Intersects(effect_collision)) {
		demon_.OnCollision();
		effect_.OnCollision();
	}
	if (orthrus_collision.Intersects(effect_collision)) {
		orthrus_.OnCollision();
		effect_.OnCollision();
	}
	if (goblin_collision.Intersects(effect_collision)) {
		goblin_.OnCollision();
		effect_.OnCollision();
	}
	if (witch_collision.Intersects(effect_collision)) {
		witch_.OnCollision();
		effect_.OnCollision();
	}

	Scene::Update(deltaTime);
}
