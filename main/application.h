#ifndef AMOEBOTSIM_MAIN_APPLICATION_H_
#define AMOEBOTSIM_MAIN_APPLICATION_H_

#include <memory>

#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "core/simulator.h"
#include "script/scriptengine.h"
#include "ui/commandhistorymanager.h"

class Application : public QGuiApplication {
  Q_OBJECT
 public:
  explicit Application(int argc, char *argv[]);

 protected:
  QQmlApplicationEngine engine;
  Simulator sim;
  CommandHistoryManager commandHistoryManager;
  std::shared_ptr<ScriptEngine> scriptEngine;
};

#endif  // AMOEBOTSIM_MAIN_APPLICATION_H_
