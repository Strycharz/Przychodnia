#ifndef EDYTUJ_HPP
#define EDYTUJ_HPP




void Edytuj()
{

        int nrWizyty;

  if (i != 0)
  {
    cout <<"Podaj numer wizyty ktora chcesz zmienic: ";
    cin >>nrWizyty;
    cin.ignore();

    if (nrWizyty > i)
    cout <<"Operacja nie powiodla sie. Brak wizyty o takim numerze";
    else
    {



cout <<"Podaj ID wizyty: ";
getline(cin, dane[nrWizyty-1].id);

cout <<"Podaj imie pacjenta: ";
getline(cin, dane[nrWizyty-1].imie);


    cout <<"Podaj typ wizyty: ";
     getline(cin, dane[nrWizyty-1].typ);

   cout <<"Podaj date wizyty: ";
     getline(cin, dane[nrWizyty-1].data);

   cout <<"Podaj imie Lekarza: ";
     getline(cin, dane[nrWizyty-1].imieLekarza);


        cout <<"Podaj diagnoze: ";
     getline(cin, dane[nrWizyty-1].diagnoza);

        cout <<"Podaj przepisane leki: ";
     getline(cin, dane[nrWizyty-1].leki);





      cout <<"wizyta o numerze "<<nrWizyty<<" zostala zmieniona!";
      Zapisz();
    }

  }
  else
  {
    cout <<"BRAK WIZYT  -> WCISNIJ ENTER <-";
    getchar();
  }
}

#endif
