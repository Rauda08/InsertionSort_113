#include <iostream>
using namespace std; 

int arr[20];           // Membuat array dengan panjang data 20
int n; // Membuat variabel inputan n 

void input()
{  // Procedure Input 
    while (true)
    {
        cout << "Masukkan Jumlah Data pada array : ";    // Membuat inpitan Jumlah element Array 
        cin >> n;

        if (n <= 20)
        {    // Membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";

        }
    }
    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan Element Array" << endl;
    cout << "======================" << endl;

    // Menggunakan perulangan for untuk menyimpan data pada array 
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ":";
        cin >> arr[i];
    }
}
// Procedure Insertionsort
void insertionsort()
{

    int temp; // Membuat variabel data temporer atau penyimpanan sementara 
    int j;    // Membuat variabel j sebagai penanda 
}


int main()
{
    std::cout << "Hello World!\n";
}
