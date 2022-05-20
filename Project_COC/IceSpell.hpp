#ifndef IceSpell_hpp
#define IceSpell_hpp

#include "Army.hpp"

class IceSpell : public Army {
public:
    IceSpell(int x, int y);
    void CreateBullet(Engine::Point pt) override;
};

#endif /* TankArmy_hpp */
#pragma once
