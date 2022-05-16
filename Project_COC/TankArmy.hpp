#ifndef TankArmy_hpp
#define TankArmy_hpp

#include "Army.hpp"

class TankArmy : public Army {
public:
    TankArmy(int x, int y);
    void CreateBullet(Engine::Point pt) override;
};

#endif /* TankArmy_hpp */
#pragma once
