#include "Renderer.h"

namespace fightdude {
/**
 *
 * @param sceneRenderer
 */
void Renderer::render(SceneRenderer sceneRenderer) {
  sceneRenderer.drawMesh(&this->mesh, &this->materials);
}
} //namespace fightdude
