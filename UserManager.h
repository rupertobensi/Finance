#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h> //system("pause")
//#include <fstream>
//#include <sstream>

#include "UserManager.h"
#include "User.h"
#include "UserXML.h"
#include "AuxiliaryMethods.h"

using namespace std;

class UserManager
{
  vector <User> users;

public:
  char chooseOptionFromMainMenu();



};

#endif


