#ifndef DODAJ_HPP
#define DODAJ_HPP



using namespace std;


struct przychodnia
{
  string id;
  string imie;
  string nazwisko;
  string typ;
  string data;
  string imieLekarza;
  string nazwiskoLekarza;
  string diagnoza;
  string leki;
};

przychodnia dane[100];

int i;



void Dodaj()
{
    cout <<"Podaj id wizyty " << endl;
    getline(cin, dane[i].id);

                        int liczba = dane[i].id.size();
                        if(liczba>50)
                            {
                                cout << "ID jest za dlugie! Sprobuj jescze raz" << endl;

                                cout << "=============================================" << endl;
                                exit(0);

                            }

    system("cls");

  cout <<"Podaj imie pacjenta: ";
getline(cin, dane[i].imie);

    int liczba2 = dane[i].imie.size();
                        if(liczba2>256)
                            {
                                cout << "Imie jest za dlugie! Sprobuj jescze raz" << endl;
                               cout << "=============================================" << endl;
                                exit(0);
                            }


        system("cls");

  cout <<"Podaj typ wizyty: ";
    getline(cin, dane[i].typ);

        system("cls");

    cout <<"Podaj date: ";
    getline(cin, dane[i].data);

        system("cls");

  cout <<"Podaj imie lekarza: ";
    getline(cin, dane[i].imieLekarza);



    system("cls");



    cout <<"Podaj diagnoze: ";
   getline(cin, dane[i].diagnoza);

    int liczba3 = dane[i].diagnoza.size();

                        if(liczba3>1000)
                            {
                                cout << "Diagnoza jest za dluga! Sprobuj jescze raz" << endl;
                                cout << "=============================================" << endl;
                                exit(0);
                            }


    system("cls");


    cout <<"Podaj przepisane leki: ";
    getline(cin, dane[i].leki);



    system("cls");

  i++;

  cout <<" ->Wcisnij ENTER<-";
  getchar();
}


#endif
