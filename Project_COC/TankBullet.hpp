#ifndef TankBullet_hpp
#define TankBullet_hpp

#include "ArmyBullet.hpp"

class Army;
class Defense;
namespace Engine {
    struct Point;
}  // namespace Engine

class TankBullet : public ArmyBullet {
public:
    explicit TankBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Army* parent);
    void OnExplode(Defense* defense) override;
};

#endif /* TankBullet_hpp */
#pragma once
