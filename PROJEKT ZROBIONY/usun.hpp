#ifndef USUN_HPP
#define USUN_HPP



void Usun()
{
  int nrWizyty;

  if (i != 0)
  {
    cout <<"Podaj numer wizyty ktora chcesz usunac: ";
    cin >>nrWizyty;
    cin.ignore();

    if (nrWizyty > i)
    cout <<"Brak wizyty o takim numerze";
    else
    {
      for (int t = nrWizyty; t < i; t++)
      {
        dane[t-1].id = dane[t].id;
        dane[t-1].imie = dane[t].imie;
        dane[t-1].typ = dane[t].typ;
        dane[t-1].data = dane[t].data;
        dane[t-1].imieLekarza = dane[t].imieLekarza;
        dane[t-1].diagnoza = dane[t].diagnoza;
        dane[t-1].leki = dane[t].leki;
      }
      i--;

      cout <<"Operacja zakonczyla sie sukcesem! Wizyta o numerze "<<nrWizyty<<" zostala usunieta!";
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
