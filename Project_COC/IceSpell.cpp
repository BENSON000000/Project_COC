#include <allegro5/base.h>
#include <cmath>
#include <string>

#include "IceSpell.hpp"
#include "AudioHelper.hpp"
#include "Group.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"
#include "Army.hpp"
#include "TankBullet.hpp"
#include "Defense.hpp"
using namespace std;

//Army(std::string img, float x, float y, float radius, float coolDown, float speed, float hp, int id, float shootRadius);
IceSpell::IceSpell(int x, int y) : Army("play/ice.png", x, y, 20, 2.5, 45, 110, 3, 1.5 * PlayScene::BlockSize) {
    // Use bounding circle to detect collision is for simplicity, pixel-perfect collision can be implemented quite easily,
    // and efficiently if we use AABB collision detection first, and then pixel-perfect collision.
}

void IceSpell::CreateBullet(Engine::Point pt) {
    /*int dx = pt.x - Position.x;
    int dy = pt.y - Position.y;
    double len = sqrt(pow(dx, 2) + pow(dy, 2));
    Engine::Point diff = Engine::Point(dx / len, dy / len);
    Engine::Point rotateDiff = Engine::Point(cos(Rotation - ALLEGRO_PI / 2), sin(Rotation - ALLEGRO_PI / 2));
    float rotation = atan2(rotateDiff.y, rotateDiff.x) + ALLEGRO_PI / 2;
    getPlayScene()->BulletGroup->AddNewObject(new TankBullet(Position, diff, rotation, this));
    AudioHelper::PlayAudio("missile.wav");*/
}

void IceSpell::Update(float deltaTime) {
    Sprite::Update(deltaTime);
    PlayScene* scene = getPlayScene();
    //if (isPreview) return;
    for (auto& u : scene->DefenseGroup->GetObjects()) {
        if (InShootingRange(u->Position)) {
            Target = dynamic_cast<Defense*>(u);
            Target->lockedArmies.emplace_back(this);
            lockedArmyIterator = prev(Target->lockedArmies.end());
            Target->Hit(0);
        }
    }
    Hit(0);
}
