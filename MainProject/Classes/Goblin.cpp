//
// Redcar.cpp
//

#include "Goblin.h"

using namespace HE;

Math::Rectangle Goblin::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}

void Goblin::Load()
{


    sprite_ = Sprite("Goblin.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Goblin::Initialize()
{

    sprite_.params.siz = Math::Vector2(140.0f, 140.0f);
    sprite_.params.pos = Math::Vector2(-140.0f, 200.0f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));
}

void Goblin::Update()
{

    sprite_.params.pos.x += -400.0f * Time.deltaTime;
    if (sprite_.params.pos.x <= -140.0f)
        sprite_.params.pos.x = 1420.0f;
}


void Goblin::OnCollision()
{
    sprite_.params.pos = Math::Vector2(-140.0f, 200.0f);
}
