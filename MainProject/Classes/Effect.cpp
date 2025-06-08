#include "Effect.h"

using namespace HE;

void Effect::Load()
{


    sprite_ = Sprite("effect.png");
    RenderingPath->AddSprite(&sprite_, -50);
    RenderingPath->AddSprite(&collision_sprite_, 1);

}

void Effect::Initialize(Math::Vector2 initial)
{
        sprite_.params.siz = Math::Vector2(160.0f, 83.0f);
        sprite_.params.pos = initial;
        sprite_.params.enableDrawRect(Rectf(
            0, 0, sprite_.params.siz.x, sprite_.params.siz.y
        ));

        // 衝突範囲の表示設定
        collision_sprite_.params.color = Color(255, 0, 0);  // 色
        collision_sprite_.params.opacity = 0.5f;              // 透明度
    
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


    // 衝突範囲表示設定
    collision_sprite_.params.pos.x = (float)collision.x;
    collision_sprite_.params.pos.y = (float)collision.y;
    collision_sprite_.params.siz.x = (float)collision.width;
    collision_sprite_.params.siz.y = (float)collision.height;

    return collision;
}


void Effect::OnCollision()
{

}
