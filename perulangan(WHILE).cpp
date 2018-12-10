#include <iostream>
using namespace std;
int main()
{
    int deret;
    cout<< " \t== Program Deret Angka (While) ==\n\n ";
    cout<< " Banyak deret angka yang akan ditampilkan : ";
    cin>> deret;
    cout<< endl;
    while(deret>0)
    {
        cout<<deret<< " ";
        //menurunkan nilai variabel deret
        //deret--==>deret=deret-1
        deret--;
    }
    cout<< " \n\n== Deret Selesai Ditampilkan ==\n ";

}
