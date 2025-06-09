#include "Witch.h"

using namespace HE;

Math::Rectangle Witch::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}

void Witch::Load()
{


    sprite_ = Sprite("Witch.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Witch::Initialize(Math::Vector2 initial, float speed, float angle)
{
    sprite_.params.pos = initial;
    sprite_.params.siz = Math::Vector2(140.0f, 149.0f);
    sprite_.params.pivot = Math::Vector2(0.5f, 0.5f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));

    direction_.x = cos(angle * XM_PI / 180.0f);
    direction_.y = sin(angle * XM_PI / 180.0f);

    speed_ = speed;

    //SetRandomPosition();
}

void Witch::Update()
{
    sprite_.params.pos += direction_ * speed_ * Time.deltaTime;
    //sprite_.params.pos.x += 350.0f * Time.deltaTime;
    if (sprite_.params.pos.x >= 1280.0f) {
        //sprite_.params.pos.x = Random::GetRandom(0.0f, 1280.0f - sprite_.params.siz.x);
        sprite_.params.pos.x = -140.0f;
        sprite_.params.pos.y =  550.0f;
    }
}


void Witch::OnCollision()
{
    sprite_.params.pos = Math::Vector2(-300.0f, 350.0f);
}

