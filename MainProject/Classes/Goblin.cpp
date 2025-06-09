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

void Goblin::Initialize(Math::Vector2 initial, float radius, float speed)
{
    sprite_.params.pos = Math::Vector2(550.0f, 220.0f);
    sprite_.params.siz = Math::Vector2(140.0f, 140.0f);
    sprite_.params.pivot = Math::Vector2(0.5f, 0.5f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));

    center_ = initial;
    theta_ = 0.0f;
    radius_ = radius;
    speed_ = speed;


}

void Goblin::Update()
{

    sprite_.params.pos.x += -400.0f * Time.deltaTime;
    sprite_.params.pos.x = center_.x + cos(theta_) * radius_;
    sprite_.params.pos.y = center_.y + sin(theta_) * radius_;

    theta_ += speed_ * (XM_PI / 180.0f) * Time.deltaTime;
    if (theta_ >= XM_2PI)
        theta_ -= XM_2PI;

}


void Goblin::OnCollision()
{
    sprite_.params.pos = Math::Vector2(-140.0f, 200.0f);
}
