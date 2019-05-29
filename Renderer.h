#ifndef FIGHT_DUDE_RENDERER_H
#define FIGHT_DUDE_RENDERER_H

#include <vector>
#include "Mesh.h"
#include "Material.h"
#include "SceneRenderer.h"
#include "Component.h"

namespace fightdude {
class Renderer : public Component {
  Mesh mesh;
  std::vector<Material> materials;

  void render(SceneRenderer sceneRenderer) {
    sceneRenderer.drawMesh(&this->mesh, &this->materials);
  }
};
} //namespace fightdude

#endif //FIGHT_DUDE_RENDERER_H
