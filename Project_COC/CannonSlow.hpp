#ifndef CannonSlow_hpp
#define CannonSlow_hpp

#include "Defense.hpp"

class CannonSlow : public Defense {
public:
    CannonSlow(float x, float y);
    void CreateBullet(Engine::Point pt) override;
};

#endif /* CannonDefense_hpp */

