
//
// Redcar.cpp
//

#include "Demon.h"

using namespace HE;

void Demon::Load()
{


	sprite_ = Sprite("Demon.png");
	RenderingPath->AddSprite(&sprite_, -50);

}

void Demon::Initialize()
{

    sprite_.params.siz = Math::Vector2(140.0f, 196.0f);
    sprite_.params.pos = Math::Vector2(-140.0f, 0.0f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));
}

void Demon::Update()
{

    sprite_.params.pos.x += 200.0f * Time.deltaTime;
    if (sprite_.params.pos.x >= 1280.0f)
        sprite_.params.pos.x = -140.0f;
}
