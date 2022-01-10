#ifndef SZUKAJ_HPP
#define SZUKAJ_HPP

int j=-1,k;

int a=0;
string t;


string szukaneSlowo;
string slowo;

int tab[100];

void wypisz()
{
    for(int m=0; m<a; m++)
{

       cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
      cout <<"=     Id wizyty "<<dane[tab[m]].id << endl;
      cout <<"=     Imie pacjenta: "<<dane[tab[m]].imie << endl;
      cout <<"=     Typ uslugi: "<<dane[tab[m]].typ << endl;
      cout <<"=     Data: "<<dane[tab[m]].data << endl;
      cout <<"=     Imie lekarza: "<<dane[tab[m]].imieLekarza << endl;
      cout <<"=     Diagnoza: " <<dane[tab[m]].diagnoza << endl;
      cout <<"=     Przepisane leki: "<<dane[tab[m]].leki << endl;
      cout <<"=";
      cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;

}

}







void Szukaj()
{
    int n=0;


ifstream plik("wizyty.txt", ios::in);




cout <<"W jakiej kategorii chcesz szukac? " << endl;
cout << "1. Id" << endl;
cout << "2. Imie pacjenta" << endl;
cout <<"3. Typ wizyty" << endl;
cout <<"4. Data " << endl;
cout <<"5. Imie lekarza " << endl;
cout <<"6. Diagnoza " << endl;
cout <<"7. Leki " << endl;




  char wybor1 = getch();

    system("cls");

    switch (wybor1)
    {
      case '1':
          {
              cout <<"Podaj Id ktorego szukasz: ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].id==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();
          }
      break;

      case '2':
          {
                cout <<"Podaj imie pacjenta ktorego szukasz: ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].imie==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();
          }

      break;
      case '3':
          {
              cout <<"Podaj typ wizyt której szukasz ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].typ==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();
          }
      break;
      case '4':
      {
          cout <<"Podaj date ktorej szukasz: ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].data==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();



      }
      break;
      case '5':
          {
              cout <<"Podaj imie lekarza ktorego szukasz: ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].imieLekarza==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();
          }
      break;
      case '6':
          {
              cout <<"Podaj diagnoze ktorej szukasz: ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].diagnoza==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();
          }
      break;
      case '7':
          {
              cout <<"Podaj leki ktore szukasz: ";
              getline(cin, szukaneSlowo);
              for(int h=0; h<=i; h++)
              {

                    if(dane[h].leki==szukaneSlowo)
                    {
                        tab[a]=h;
                        a++;
                    }
              }
              wypisz();

          }
      break;

    }




char g;
plik.close();
cout << "Wcisnij '1' by wyjsc " << endl;
cin >> g;










}



#endif
