#include "Score.hpp"

Score::Score(int value)
{
    this->value = value;
};

Score Score::sum(int value)
{
    return Score(this->value + value);
};

bool Score::equal(const Score& s) const
{
    return this->value == s.value;
}
