#include "Witch.h"

using namespace HE;

void Witch::Load()
{


    sprite_ = Sprite("Witch.png");
    RenderingPath->AddSprite(&sprite_, -50);

}

void Witch::Initialize()
{

    sprite_.params.siz = Math::Vector2(140.0f, 141.0f);
    sprite_.params.pos = Math::Vector2(-300.0f, 350.0f);
    sprite_.params.enableDrawRect(Rectf(
        0, 0, sprite_.params.siz.x, sprite_.params.siz.y
    ));
}

void Witch::Update()
{

    sprite_.params.pos.x += 350.0f * Time.deltaTime;
    if (sprite_.params.pos.x >= 1280.0f) {
        sprite_.params.pos.x = Random::GetRandom(0.0f, 1280.0f - sprite_.params.siz.x);
        sprite_.params.pos.x = -140.0f;
    }
}