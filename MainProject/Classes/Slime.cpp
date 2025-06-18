#include "Slime.h"

using namespace HE;


Math::Rectangle Slime::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}

void Slime::Load()
{


    sprite_ = Sprite("Slime.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Slime::Initialize()
{

    sprite_.params.siz = Math::Vector2(150.0f, 150.0f);
    sprite_.params.pos = Math::Vector2(1280.0f, 400.0f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));
}

void Slime::Update()
{

    sprite_.params.pos.x -= 200.0f * Time.deltaTime;
    if (sprite_.params.pos.x <= -200.0f)
        sprite_.params.pos.x = 1280.0f;
}


void Slime::OnCollision()
{
    sprite_.params.pos = Math::Vector2(1500.0f, 400.0f);
}