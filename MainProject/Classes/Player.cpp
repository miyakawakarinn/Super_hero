
//
// Player.cpp
//

#include "Player.h"

using namespace HE;


void Player::OnCollision()
{
    sprite_.params.pos = Math::Vector2(
        (RenderingPath->GetLogicalWidth() - sprite_.params.siz.x) / 2.0f,
        RenderingPath->GetLogicalHeight() - sprite_.params.siz.y
    );
}


Math::Rectangle Player::GetCollision()
{
    Math::Rectangle collision;
    collision.x = (long)sprite_.params.pos.x;
    collision.y = (long)sprite_.params.pos.y;
    collision.width = (long)sprite_.params.siz.x;
    collision.height = (long)sprite_.params.siz.y;

    return collision;
}

void Player::Load()
{
    sprite_ = Sprite("Player.png");
    RenderingPath->AddSprite(&sprite_, 0);
}


void Player::Initialize()
{
    sprite_.params.siz = Math::Vector2(200.0f, 200.0f);
    sprite_.params.pos = Math::Vector2(590.0f, 520.0f);
    //sprite_.params.enableDrawRect(Rectf(
       // 0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    //));
}


void Player::Update()
{
    //¶‰E

    if (InputSystem.Keyboard.isPressed.Right)
        sprite_.params.pos.x += 300.0f * Time.deltaTime;

    if (InputSystem.Keyboard.isPressed.Left)
        sprite_.params.pos.x += -300.0f * Time.deltaTime;

    //”ÍˆÍŠO‚©’²‚×‚é

    if (sprite_.params.pos.x < 0.0f)
        sprite_.params.pos.x = 0.0f;
    if (sprite_.params.pos.x > RenderingPath->GetLogicalWidth() - sprite_.params.siz.x)
        sprite_.params.pos.x = RenderingPath->GetLogicalWidth() - sprite_.params.siz.x;

   /* if (InputSystem.Keyboard.isPressed.Down)
        sprite_.params.pos.y += 4;

    if (InputSystem.Keyboard.isPressed.Up
        )
        sprite_.params.pos.y += -4;*/
}
