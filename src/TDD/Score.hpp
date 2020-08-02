#ifndef Score_hpp
#define Score_hpp

class Score
{
private:
    int value = 0;
public:
    Score(int value);
    Score sum(int value);
    bool equal(const Score& s) const;
    bool operator==(const Score& s) const
    {
        return equal(s);
    };
};

#endif /* Score_hpp */