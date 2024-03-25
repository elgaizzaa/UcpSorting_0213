// ucpalgo1.cpp : This file contains the 'main' function. Program execution begins and ends there.

// 1. karna algoritma sudah terstruktur dan langkah langakh urut dalam menyelesaikan masalah
// 2.menggunakan temp untuk memberikan satu wadah kosong lalu pindahkan pada posisi yang tepat secara urut
// 3.insertion sort karna bekerja untuk membandingkan data elemen
// 4.

#include <iostream>
using namespace std;

int elga[13];
int n;
void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 13)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 13 elemen.\n";

        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> elga[i];
    }
}
    
    void  selectionSort() {
        for (int j = 0; j <= n - 2; j++) {
            int min_index = j;
            for (int i = j + 1; i < n; i++) {
                if (elga[i] < elga[min_index])
                {
                    min_index = i;
                }

            }int temp = elga[j];
            elga[j] = elga[min_index];
            elga[min_index] = temp;



        }
    }


 
    void display() {
        cout << endl;
        cout << "===================================" << endl;
        cout << "Element Array yang telah tersusun" << endl;
        cout << "===================================" << endl;
        for (int i = 0; i < n; i++) {
            cout << elga[i] << endl;

        }
        cout << "jumlah pass = " << n - 1 << endl;
        cout << endl;
    }
            

            int main()
            {
                input();
                selectionSort();
                display();
                system("pause");
                return 0;
            }
   
 


