#include "UserManager.h"


char UserManager::chooseOptionFromMainMenu()
{
    char choice;

    system("cls");
    cout << "    >>> MAIN  GENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Registration" << endl;
    cout << "2. Log in" << endl;
    cout << "9. Exit" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = AuxiliaryMethods::getChar();

    return choice;
}

//void UserManager::userRegistration()
//{
//  userManager.chooseOptionFromMainMenu();
//}
//
//void UserManager::userLogin()
//{
//  userManager.chooseOptionFromMainMenu();
//}






//void UzytkownikMenedzer::rejestracjaUzytkownika()
//{
//    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();
//
//    uzytkownicy.push_back(uzytkownik);
//    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);
//    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
//    //system("pause");
//}
