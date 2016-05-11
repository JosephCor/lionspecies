#ifndef LIONSPECIESAPP_H
#define LIONSPECIESAPP_H

#include "MooseApp.h"

class LionspeciesApp;

template<>
InputParameters validParams<LionspeciesApp>();

class LionspeciesApp : public MooseApp
{
public:
  LionspeciesApp(InputParameters parameters);
  virtual ~LionspeciesApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* LIONSPECIESAPP_H */
