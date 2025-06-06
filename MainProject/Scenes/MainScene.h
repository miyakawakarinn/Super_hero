#pragma once

#include "../HuEngine.h"
#include "../Classes/BG.h"
#include "../Classes/Player.h"
#include "../Classes/Demon.h"
#include "../Classes/Goblin.h"
#include "../Classes/Orthrus.h"
#include "../Classes/Witch.h"
#include "../Classes/Effect.h"

class MainScene : public HE::Scene
{
public:
	MainScene();
	virtual ~MainScene() { Terminate(); }

	void ResizeLayout() override;

	void Load() override;
	void Initialize() override;
	void Terminate() override;

	void Update(float deltaTime) override;

private:

	BG bg_;
	Player player_;
	Demon demon_;
	Goblin goblin_;
	Orthrus orthros_;
	Witch witch_;
	Effect effect_;

};
