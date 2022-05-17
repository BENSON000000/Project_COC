#include <allegro5/base.h>
#include <random>
#include <string>

#include "DirtyEffect.hpp"
#include "CannonBullet.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"

class Defense;

//Bullet(std::string img, float speed, float damage, Engine::Point position, Engine::Point forwardDirection, float rotation, Defense* defenseParent);
CannonBullet::CannonBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Defense* parent) :
    Bullet("play/bullet-9.png", 500, 15, position, forwardDirection, rotation, parent) {
}

SlowBullet::SlowBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Defense* parent) :
    Bullet("play/bullet-12.png", 500, 1, position, forwardDirection, rotation, parent) {
}
