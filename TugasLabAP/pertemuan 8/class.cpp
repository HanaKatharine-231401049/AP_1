#include <iostream>
#include <vector>


using namespace std;

class Mahasiswa {
    //Access Modifier
    private: //hanya bisa diakses pada bagian class tidak bisa diakses main program 
        string nama, nim;
        float nilai;

    //Access Modifier
    public:
        //Constructor -> Fungsi yang langsung dipanggil ketika class diinstansiasi
        Mahasiswa(string nama, string nim, float nilai) {
            this->nama = nama;//this mengakses alamat yang sama dengan variabel; representasi objek untuk mengakses variabel
            this->nim = nim;
            this->nilai = nilai;
        }

        // Getter Function -> berfungsi untuk mengembalikan data sebuah variabel yang memiliki akses private
        string getName() {
            return this->nama;
        }

        void display() { //fungsi untuk menampilkan output
            cout << "Nama   : " << this->nama << endl;
            cout << "NIM    : " << this->nim << endl;
            cout << "Nilai  : " << this->nilai << endl;
        }
};

int main() {
    system("cls");//membersihkan layar

    Mahasiswa siswa1("Andi", "231401111", 45.6);
    siswa1.display();

    // Error  -> karena nama masuk kedalam kategori private jadi tidak bisa pakai siswa1.nama
    // cout << siswa1.nama << endl;
    // siswa1.nama = "Budi";
    // cout << siswa1.nama << endl;

    // cout << siswa1.getName() << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); //agar ada baris baru 
        cout << "Masukkan nama : ";
        getline(cin, nama); //agar bisa menerima inputan yang ada spasi

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display();
    }

    return 0;
}