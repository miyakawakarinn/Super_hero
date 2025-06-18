#include "Rabbit.h"

using namespace HE;


Math::Rectangle Rabbit::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}

void Rabbit::Load()
{


    sprite_ = Sprite("rabbit.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Rabbit::Initialize()
{

    sprite_.params.siz = Math::Vector2(152.0f, 178.0f);
    sprite_.params.pos = Math::Vector2(1600.0f, 200.0f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));
}

void Rabbit::Update()
{

    sprite_.params.pos.x -= 350.0f * Time.deltaTime;
    if (sprite_.params.pos.x <= -200.0f)
        sprite_.params.pos.x = 1280.0f;
}


void Rabbit::OnCollision()
{
    sprite_.params.pos = Math::Vector2(1600.0f,200.0f);
}

