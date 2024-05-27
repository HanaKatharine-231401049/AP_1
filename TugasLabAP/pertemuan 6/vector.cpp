#include <iostream>
#include <vector>

using namespace std;

int main() {
    system("cls");

    //Vector Declaration and Initialization
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"};

    //Accessing Elements of Vector
    for (int i = 0; i < nama_karyawan.size(); i++) { //size untuk memasukan jumlah variabel nama karyawan tanpa diberi batas
        cout << nama_karyawan[i] << endl;
    }

    for (string karyawan : nama_karyawan) {     //untuk setiap loop
        cout << karyawan << endl;
    } 

    //Add Data to Vector
    nama_karyawan.push_back("Wawan"); //menambah data ke barisan belakang

    //Delete Data from Vector
    nama_karyawan.pop_back();       //* Menghapus data vector paling akhir
    nama_karyawan.erase(nama_karyawan.begin() + 3);     //* begin() untuk mendapatkan data paling awal, erase() untuk menghapus data
}