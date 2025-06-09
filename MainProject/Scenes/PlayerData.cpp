
//
// PlayerData.cpp
//

#include "PlayerData.h"

using namespace HE;

void PlayerData::Load()
{
    score_headline_.params.style = Font::AddFontStyle("Senobi-Gothic-Bold.ttf");
    score_text_.params.style = Font::AddFontStyle("Senobi-Gothic-Bold.ttf");
    RenderingPath->AddFont(&score_headline_, 1000);
    RenderingPath->AddFont(&score_text_, 1000);
}

void PlayerData::Initialize()
{
    score_ = 0;

    // �X�R�A���o��(1-UP)
    score_headline_.SetText(L"1-UP");
    score_headline_.params.posX = 256.0f;
    score_headline_.params.posY = 0.0f;
    score_headline_.params.size = 32;
    score_headline_.params.color = Color(255, 255, 255);    // ��, ��, ��(0-255)

    // �X�R�A���l
    score_text_.SetText(std::to_string(score_));
    score_text_.params.posX = 304.0f;
    score_text_.params.posY = 32.0f;
    score_text_.params.size = 32;
    score_text_.params.color = Color(255, 0, 0);
}
