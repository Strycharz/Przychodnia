#ifndef WCZYTAJ_HPP
#define WCZYTAJ_HPP







void Wczytaj()
{
  ifstream plik("wizyty.txt", ios::in);


string  p;
getline(plik, p);

i=atoi(p.c_str());



for(int k=0; k<=i; k++)
{

    getline(plik, dane[k].id);
    getline(plik, dane[k].imie);
    getline(plik, dane[k].typ);
    getline(plik, dane[k].data);
    getline(plik, dane[k].imieLekarza);
    getline(plik, dane[k].diagnoza);
    getline(plik, dane[k].leki);
}


plik.close();

  cout <<"DANE WCZYTANO -> WCISNIJ ENTER <-";
getchar();
}

#endif
