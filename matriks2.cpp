#include <iostream>
#include <cstdlib>

using namespace std; // digunakan untuk project simple

int main() {

        // variable matriks A
            int a11, a12 ; //Baris 1 kolom 1 dan 2 
            int a21, a22 ; //Baris 2 Kolom 1 dan 2

        // variable matriks B 
            int b11, b12 ; //Baris 1 kolom 1 dan 2
            int b21, b22 ; //Baris 2 kolom 1 dan 2

        // varible penjumlahan C=A+B
            int c11, c12; // hasil baris 1 kolom 1 dan 2
            int c21, c22; // hasil baris 2 kolom 1 dan 2 

        // variable 
            int pilihan; // untuk pilihan operasi matriks 
            int det; // untuk var determinan matriks


        
        
        // Menampilkan Header
            cout<<"==============================================================="<<endl;
            cout<<"Simple Program Penjumlahan Matriks 2x2"<<endl;
            cout<<"Nama : I Gede Agus Aditya"<<endl;
            cout<<"No Absen : 06" <<endl;
            cout<<"Note : Program Matriks 2x2 yang di buat hanya mengunakan cin dan cout"<<endl;
            cout<<"==============================================================="<<endl;
            system("cls"); // untuk clear cmd agar lebih rapi


        // input matriks A 
            cout<<"Masukan angka Matriks A"<<endl;
            cout<<"Masukan angka A [1] [1]" << endl;
            cin>> a11;
            cout<<"Masukan Angka A [1] [2]"<< endl;
            cin>> a12;
            cout<<"Masukan Angka A [2] [1]"<<endl;
            cin>>a21;
            cout<<"Masukan Angka A [2] [2]"<<endl;
            cin>> a22;

        // Tampilkan matriks A
            cout << "Matriks A yang Anda masukkan adalah: "<<endl;
            cout << "---------------------------------"<<endl;
            cout << "| " << a11 << "||" << a12 << " |"<<endl;
            cout << "| " << a21 << "||" << a22 << " |"<<endl;
            cout << "---------------------------------"<<endl;

        // Input Matriks B 
            cout<<"Masukan Angka Matriks B"<<endl;
            cout<<"Masukan Angka B [1] [1]"<<endl;
            cin>>b11;
            cout<<"Maukan Angka B [1] [2]" <<endl;
            cin>>b12;
            cout<<"Masukan Angka B [2] [1]"<<endl;
            cin>>b21;
            cout<<"Masukan Angka B [2] [2]"<<endl;
            cin>>b22;

        // Tampilkan matriks B
            cout << "Matriks B yang Anda masukkan adalah: "<<endl;
            cout << "---------------------------------"<<endl;
            cout << "| " << b11 << "||" << b12 << " |"<<endl;
            cout << "| " << b21 << "||" << b22 << " |"<<endl;
            cout << "---------------------------------"<<endl;


        // penjumlahan matriks A dan B
            c11= a11+b11; 
            c12= a12+b12;
            c21= a21+b21;
            c22= a22+b22;


        // Menghitung determinan matriks hasil
             det = c11 * c22 - c12 * c21;

        // Hasil pengeluran Matriks 2x2

            cout<<"Hasil Penjumlahan Matriks A dan B adalah : " <<endl;
            cout<<"=================================" <<endl;
            cout<<"| "  <<c11 << "||" << c12 << "|" <<endl;
            cout<<"|"   <<c21 << "||" << c22 << "|" <<endl;
            cout<<"================================="<< endl;
            cout<<"Determinan dari Matriks 2x2 adalah : "<<det<<endl;
            cout<<"================================="<< endl;

        // looping 
            cout<<"Apakah Anda ingin menghitung lagi ?"<<endl;  
            cout<<"1. Ya"<<endl;
            cout<<"2. Tidak"<<endl;
            cin>>pilihan;

}