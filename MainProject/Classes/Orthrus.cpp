
//
// Redcar.cpp
//

#include "Orthrus.h"

using namespace HE;


void Orthrus::OnCollision()
{

}


Math::Rectangle Orthrus::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}

void Orthrus::Load()
{


    sprite_ = Sprite("Orthrus.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Orthrus::Initialize()
{

    sprite_.params.siz = Math::Vector2(160.0f, 120.0f);
    sprite_.params.pos = Math::Vector2(200.0f, -120.0f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));
}

void Orthrus::Update()
{

    sprite_.params.pos.y += 400.0f * Time.deltaTime;
    if (sprite_.params.pos.y >= 840.0f) {
        sprite_.params.pos.x = Random::GetRandom(0.0f, 1280.0f - sprite_.params.siz.x);
        //上のコードでランダムに出現位置を変更している
        sprite_.params.pos.y = -120.0f;
    }
    }