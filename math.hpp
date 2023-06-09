#include <vector>

using unit = double;

inline unit protection(unit x)
{
    if (x >= 0)
    {
        return 100 / (100 + x);
    }
    else
    {
        return 2 - 100 / (100 - x);
    }
}

inline unit outputAttackSpeed(short unsigned int level, unit bonus_AttackSpeed, unit base_AS, unit AS_ratio, unit AS_PerLevel) // https://leagueoflegends.fandom.com/wiki/Champion_statistic#Attack_speed_calculations
{
    return base_AS + (AS_ratio + ((AS_PerLevel * (level - 1) * (0.7025 + 0.0175 * (level - 1))) + bonus_AttackSpeed));
}

class productVector
{
protected:
    std::vector<unit> v;

public:
    productVector(unit a) { v.push_back(a); }
    unit returnProduct()
    {
        unit product = 1;
        for (auto i : v)
        {
            product *= i;
        }
        return product;
    }
    void push(unit a) { v.push_back(a); }
};

class sumVector
{
protected:
    std::vector<unit> v;
    
};