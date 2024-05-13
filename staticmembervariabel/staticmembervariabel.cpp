#include <iostream>
using namespace std;

class mahasiswa
{
private:
    static long long int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama=pnama;
        setID();
    }
};

long long int mahasiswa::nim = 20230140116;

void mahasiswa::setID()
{
    id = nim++;
}

void mahasiswa::printAll()
{
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;

}



int main()
{
    
}

