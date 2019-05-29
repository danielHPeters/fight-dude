#ifndef FIGHT_DUDE_SCENERENDERER_H
#define FIGHT_DUDE_SCENERENDERER_H

#include <vector>
#include "Mesh.h"
#include "Material.h"

namespace fightdude {
class SceneRenderer {
 public:
  void drawMesh(Mesh *mesh, std::vector<Material> *materials);
};
} //namespace fightdude

#endif //FIGHT_DUDE_SCENERENDERER_H
