
#pragma once

#include "../HuEngine.h"

class PlayerData {
public:
    void Load();
    void Initialize();


    int  GetScore() const { return score_; }
    void SetScore(int score);

private:
    int score_;
    float time_;

    HE::SpriteFont score_headline_;
    HE::SpriteFont score_text_;
    HE::SpriteFont time_text_;
};