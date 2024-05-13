#include <iostream>
using namespace std;


class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int);
    ~angka();
    void cetakData();
    void isiData();
};

angka::angka(int i) {
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka()
{
    cout << endl;
    delete[]arr;
    cout << "Alamat array sudah dilepaskan" << endl;

}

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << "="; cin >> arr[i];
    }

}

void angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << "="; cin >> arr[i];
    }
    cout << endl;
}

