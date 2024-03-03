/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <string>

using namespace std;

class Tabel {
  private:
    int baris;
    int kolom;

  public:
    //   Constructor
    Tabel() {
    }

    Tabel(int baris, int kolom) {
        this->baris = baris;
        this->kolom = kolom;
    }

    //  Getter and Setter
    int getBaris() {
        return this->baris;
    }

    void setBaris(int baris) {
        this->baris = baris;
    }

    int getKolom() {
        return this->kolom;
    }

    void setKolom(int kolom) {
        this->kolom = kolom;
    }

    //  Method
    void buatGaris(int maxLen[]) {
        for (int i = 0; i < getKolom(); i++) {
            cout << "+";
            for (int j = 0; j < maxLen[i] + 2; j++) {
                cout << "-";
            }
        }
        cout << "+" << endl;
    }

    void findMaxLen(string isi[][9], int maxLen[]) {
        for (int i = 0; i < getKolom(); i++) {
            maxLen[i] = 0;
            for (int j = 0; j < getBaris(); j++) {
                if (isi[j][i].length() > maxLen[i]) {
                    maxLen[i] = isi[j][i].length();
                }
            }
        }
    }

    void buatTabel(string isi[][9]) {
        int maxLen[9];

        findMaxLen(isi, maxLen);

        buatGaris(maxLen);

        for (int j = 0; j < getKolom(); j++) {
            cout << "| " << isi[0][j];
            for (int k = 0; k < maxLen[j] - isi[0][j].length(); k++) {
                cout << " ";
            }
            cout << " ";
        }
        cout << "|" << endl;

        buatGaris(maxLen);

        for (int i = 1; i < getBaris(); i++) {
            for (int j = 0; j < getKolom(); j++) {
                cout << "| " << isi[i][j];
                for (int k = 0; k < maxLen[j] - isi[i][j].length(); k++) {
                    cout << " ";
                }
                cout << " ";
            }
            cout << "|" << endl;
        }

        buatGaris(maxLen);
    }

    // Destructor
    ~Tabel() {
    }
};