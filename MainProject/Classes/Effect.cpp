#include "Effect.h"

using namespace HE;

void Effect::Load()
{


    sprite_ = Sprite("effect.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Effect::Initialize()
{
        sprite_.params.siz = Math::Vector2(40.0f, 83.0f);
        sprite_.params.pos = Math::Vector2(710.0f, 480.0f);
        sprite_.params.enableDrawRect(Rectf(
            0, 0, sprite_.params.siz.x, sprite_.params.siz.y
        ));
    
}

void Effect::Update()
{
    //if (InputSystem.Keyboard.isPressed.A) {
        sprite_.params.pos.y += -500.0f * Time.deltaTime;
        if (sprite_.params.pos.y <= -83.0f)
            sprite_.params.pos.y = 480.0f;
    //}
    
}