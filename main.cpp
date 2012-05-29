#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;

int wysokosc_cegly(char tab[200][200], int i, int j, int wys)
{
	int dlu=0;
	while(i<=wys && tab[i][j]=='0')
	{
		tab[i][j]='1';
		dlu++;
		i++;
	}
	return dlu;
}

int main()
{
		int i, j, k, m, n, dlu, ilosc[200];
		for(i=0;i<200;i++)
		{ ilosc[i]=0; }
		char tab[200][200];
		//long x;   // Zmienna do przechowania liczby
   		//std::string napis;   // Zmienna do przechowania napisu
   		//std::stringstream ss;  // Strumieñ do napisów
		
		// CZYTANIE DANYCH Z PLIKU
		cin >> m >> n;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin >> tab[i][j];
			}
		}
		
		/*FILE *plik;
		if (((plik=fopen("tablica.txt", "r"))==NULL) {
     	printf ("Nie mogê odnalexc/otworzyc pliku tablica.txt do zapisu!\n");
     	exit(1);
     	}
     	{
			for(j=0;j<n;j++)
			{
				cin >> tab[i][j];
			}
		}*/
     	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				 if(tab[i][j]=='0')
				 {
					  dlu=wysokosc_cegly(tab, i, j, m);
					  ilosc[dlu]++;
				 }
			}
		}

		for(i=0;i<200;i++)
		{
			if(ilosc[i]>0)
			{
				cout << i << " " << ilosc[i] << "\n";
			}
		}

	system("pause");
	return 0;
}
