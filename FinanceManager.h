#ifndef FINANCEMANAGER_H
#define FINANCEMANAGER_H

#include <iostream>

#include "UserManager.h"
//#include "AdresatMenedzer.h"

using namespace std;

class FinanceManager
{
  UserManager userManager;

public:
  char chooseOptionFromMainMenu();
  void userRegistration();
  void userLogin();



};

#endif
