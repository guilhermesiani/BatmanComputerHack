#ifndef Score_hpp
#define Score_hpp

class Score
{
private:
    int value = 0;
public:
    Score(int value);
    void sum(int value);
    bool operator==(const Score& s) const
    {
        return this->value == s.value;
    };
};

#endif /* Score_hpp */