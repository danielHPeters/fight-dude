#ifndef FIGHT_DUDE_RENDERER_H
#define FIGHT_DUDE_RENDERER_H

#include <vector>
#include "Mesh.h"
#include "Material.h"
#include "SceneRenderer.h"
#include "Component.h"

namespace fightdude {
/**
 * Renderer component for game entity.
 *
 * @author Daniel Peters
 * @version 1.0
 */
class Renderer : public Component {
 public:
  void render(SceneRenderer sceneRenderer);

 private:
  Mesh mesh;
  std::vector<Material> materials;
};
} //namespace fightdude

#endif //FIGHT_DUDE_RENDERER_H
