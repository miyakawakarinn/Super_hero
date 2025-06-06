#include "Effect.h"

using namespace HE;

void Effect::Load()
{


    sprite_ = Sprite("effect.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Effect::Initialize(Math::Vector2 initial)
{
        sprite_.params.siz = Math::Vector2(160.0f, 83.0f);
        sprite_.params.pos = initial;
        sprite_.params.enableDrawRect(Rectf(
            0, 0, sprite_.params.siz.x, sprite_.params.siz.y
        ));
    
}

void Effect::Update()
{
        sprite_.params.pos.y += -500.0f * Time.deltaTime;
        if (sprite_.params.pos.y < -83.0f)
            sprite_.params.pos.y = -300.0f;
    
}


Math::Rectangle Effect::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}
