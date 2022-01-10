#ifndef MENU_HPP
#define MENU_HPP


#include "dodaj.hpp"
#include "zobacz.hpp"
#include "zapisz.hpp"
#include "wczytaj.hpp"
#include "usun.hpp"
#include "edytuj.hpp"
#include "szukaj.hpp"


using namespace std;



void Menu()
{

    cout <<"===========================================" <<endl;
cout <<"                   INSTRUKCJA              " << endl;
cout <<"       (JESLI CHCESZ ZOBACZYC BAZE DANYCH)   " << endl;
cout <<"===========================================" <<endl;
cout <<"                  1.Dodaj wizyte ['1']           "<< endl;
cout <<"                  2.Zapisz wizyte ['3']          "<< endl;
cout <<"                  3.Wczytaj wizyte ['4']          "<< endl;
cout <<"                  4.Zobacz wizyte   ['2']         "<< endl;
cout <<"===========================================" <<endl;


  char wybor;

  do
  {
    cout <<"Aktualnie posiadasz "<<i<<" Pozycji"<<endl;
    cout <<"1. Dodaj wizyte "<<endl;
    cout <<"2. Zobacz wszystkie wizyty "<<endl;
    cout <<"3. Zapisz wprowadzone wizyty "<<endl;
    cout <<"4. Wczytaj wizyty z bazy "<<endl;
    cout <<"5. Usun wizyte"<<endl;
    cout <<"6. Edytuj wizyte "<<endl;
    cout <<"7. Szukaj wizyte " << endl;

    cout <<"8 - Koniec programu "<<endl<<endl;

  wybor = getch();

    system("cls");

    switch (wybor)
    {
      case '1': Dodaj();
      break;
      case '2': Zobacz();
      break;
      case '3': Zapisz();
      break;
      case '4': Wczytaj();
      break;
      case '5': Usun();
      break;
      case '6': Edytuj();
      break;
      case '7': Szukaj();
      break;

    }

    system("cls");
  } while (wybor != '8');





}




#endif
