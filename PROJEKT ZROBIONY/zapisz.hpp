#ifndef ZAPISZ_HPP
#define ZAPISZ_HPP



void Zapisz()
{
  ofstream plik("wizyty.txt", ios::out);

 plik <<i<<"\n";

  for (int j = 0; j < i; j++)
  {
    plik <<dane[j].id<<endl;
    plik <<dane[j].imie<<endl;
    plik <<dane[j].typ<<endl;
    plik <<dane[j].data<<endl;
    plik <<dane[j].imieLekarza<<endl;
    plik <<dane[j].diagnoza<<endl;
    plik <<dane[j].leki<<endl;
  }



  cout <<"DANE ZAPISANE -> WCISNIJ ENTER <-";

plik.close();
  getchar();
}

#endif
