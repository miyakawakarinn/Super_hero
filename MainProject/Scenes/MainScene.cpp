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
	goblin_.Initialize(Math::Vector2(690.0f,220.0f), 150.0f, 150.0f);
	orthrus_.Initialize();
	witch_.Initialize(Math::Vector2(-140.0f, 550.0f), 350.0f, -30.0f);
	effect_.Initialize(Math::Vector2(-140.0f, -300.0f));
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


	// 衝突判定

	Math::Rectangle demon_collision = demon_.GetCollision();
	Math::Rectangle orthrus_collision = orthrus_.GetCollision();
	Math::Rectangle goblin_collision = goblin_.GetCollision();
	Math::Rectangle witch_collision = witch_.GetCollision();
	Math::Rectangle effect_collision = effect_.GetCollision();
	if (demon_collision.Intersects(effect_collision)) {
		demon_.OnCollision();
		effect_.OnCollision();
		// クリア判定
		int score = player_data_.GetScore();
		player_data_.SetScore(player_data_.GetScore() + 1);
	}
	if (orthrus_collision.Intersects(effect_collision)) {
		orthrus_.OnCollision();
		effect_.OnCollision();
		// クリア判定
		int score = player_data_.GetScore();
		player_data_.SetScore(player_data_.GetScore() + 1);
	}
	if (goblin_collision.Intersects(effect_collision)) {
		goblin_.OnCollision();
		effect_.OnCollision();
		// クリア判定
		int score = player_data_.GetScore();
		player_data_.SetScore(player_data_.GetScore() + 1);
		//goblin_.SetInitialPosition();
	}
	if (witch_collision.Intersects(effect_collision)) {
		witch_.OnCollision();
		effect_.OnCollision();
		// クリア判定
		int score = player_data_.GetScore();
		player_data_.SetScore(player_data_.GetScore() + 1);
	}

	if (InputSystem.Keyboard.wasPressedThisFrame.Enter)
		SceneManager.SetNextScene(NextScene::GameOverScene);


	Scene::Update(deltaTime);
}

