#ifndef FIGHT_DUDE_SCENE_H
#define FIGHT_DUDE_SCENE_H

#include "Event.h"
#include "InputState.h"
#include "EventDispatcher.h"
#include "SceneRenderer.h"
#include "EntityManager.h"

namespace fightdude {
template<class T>
class Scene {
 public:
  Scene();
  ~Scene();

  virtual void update(T elapsedTime, InputState inputState);
  virtual void render();
  virtual void onEnter();
  virtual void onExit();
  virtual void addEntity(const std::string &name);

 private:
  EntityManager entityManager;
  EventDispatcher eventDispatcher;
  SceneRenderer sceneRenderer;
};

template<class T>
inline Scene<T>::Scene() = default;

template<class T>
inline Scene<T>::~Scene() = default;

template<class T>
inline void Scene<T>::update(T elapsedTime, InputState inputState) {

}

template<class T>
inline void Scene<T>::render() {

}

template<class T>
inline void Scene<T>::onEnter() {

}

template<class T>
inline void Scene<T>::onExit() {

}

template<class T>
inline void Scene<T>::addEntity(const std::string &name) {

}
} //namespace fightdude

#endif //FIGHT_DUDE_SCENE_H
