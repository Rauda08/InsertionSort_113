#include <iostream>
using namespace std; 

int arr[20];           // Membuat array dengan panjang data 20
int n; // Membuat variabel inputan n 

void input()
{  // Procedure Input 
    while (true)
    {
        cout << "Masukkan Jumlah Data pada array : ";    // Membuat inpitan Jumlah element Array 
        cin >> n;                                        // Memanggil variabel Inputan n

        if (n <= 20)
        {    // Membuat kondisi n tidak lebih dari 20
            break;

        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";        

        }
    }
    cout << endl;                                   // Membuat jarak per baris program 
    cout << "======================" << endl;       // Membuat tampilan susulan data element array 
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

    for (int i = 1; i < n; i++)     // 1. Looping dengan i dimulai dari 1 hingga n-1
    {

        temp = arr[1];              // 2. Simpan nilai arr[1] ke variabel sementara temp

        j = i - 1;                  // 3. Setting nilai j sama dengan i-1; 

        while (j >= 0 && arr[j] > temp)     // 4. Looping while dimana nilai j lebih besar
        {

            arr[j + 1] = arr[j];            // a. simpan arr[j] ke dalam variabel arr[j + 1]
            j--;                            // b. Decrement nilai j by 1
        }

        arr[j + 1] = temp;          // simpan nilai temp ke dalam arr[j + 1]


        cout << endl;
        cout << "\nPass" << i << ": ";      // Output ke layar
        for (int k = 0; k < ; k++)
        {                               // Looping nilai k dimulai dari 0 hingga n-1
            cout << arr[k] << " ";      // Output ke layar
        }
    }
}

void display()
{
    cout << endl;                                           // Output baris kosong
    cout << "Total Element Movement= " << n - 1 << endl;    // Cout movement element
    cout << "\=======================" << endl;             // Output ke layar
    cout << "Element Array yang telah tersusun" << endl;    // Output ke layar 
    cout << "========================" << endl;             // Output ke layar

    for (int j = 0; j < n; j++)
    {                                                       // Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl;                             // Output ke layar

    }
    cout << endl;       // Output baris kosong 
}





int main()
{
    input();            // Memanggil input 
    insertionsort();    // Memanggil insertionsort
    display();          // Memanggil display 
}


int main()
{
    std::cout << "Hello World!\n";
}
