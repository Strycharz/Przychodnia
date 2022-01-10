#ifndef ZOBACZ_HPP
#define ZOBACZ_HPP


void Zobacz()
{
    //Baza danych musi mieć mimum jedna pozycje, jesli to prawda - if wykona sie
  if ( i != 0)
  {
    for (int j = 0; j < i; j++)
    {
      cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;
      cout <<"=     Wizyta nr "<<j+1<<": " << endl;
      cout <<"=     Id wizyty "<<dane[j].id << endl;
      cout <<"=     Imie pacjenta: "<<dane[j].imie << endl;
      cout <<"=     Typ uslugi: "<<dane[j].typ << endl;
      cout <<"=     Data: "<<dane[j].data << endl;
      cout <<"=     Imie lekarza: "<<dane[j].imieLekarza << endl;
      cout <<"=     Diagnoza: " <<dane[j].diagnoza << endl;
      cout <<"=     Przepisane leki: "<<dane[j].leki << endl;
      cout <<"=";
      cout <<"=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-="<<endl;


    }
  }
  else
  cout <<"Nie ma zadnej wizyty w bazie!";

  cout <<"Nacisnij ENTER";

  getchar();
}


#endif
