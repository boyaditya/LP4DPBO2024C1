/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#pragma once

#include <string>
using namespace std;

class Vehicle {
  private:
    string plat_nomor;
    string merk;
    int tahun_produksi;
    string warna;

  public:
    //   Constructor
    Vehicle() {
    }

    Vehicle(string plat_nomor) {
        this->plat_nomor = plat_nomor;
        merk = "";
        tahun_produksi = -1;
        warna = "";
    }

    Vehicle(string plat_nomor, string merk) {
        this->plat_nomor = plat_nomor;
        this->merk = merk;
        tahun_produksi = -1;
        warna = "";
    }

    Vehicle(string plat_nomor, string merk, int tahun_produksi) {
        this->plat_nomor = plat_nomor;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        warna = "";
    }

    Vehicle(string plat_nomor, string merk, int tahun_produksi, string warna) {
        this->plat_nomor = plat_nomor;
        this->merk = merk;
        this->tahun_produksi = tahun_produksi;
        this->warna = warna;
    }

    //  Getter and Setter
    string getPlatNomor() {
        return plat_nomor;
    }

    void setPlatNomor(string plat_nomor) {
        this->plat_nomor = plat_nomor;
    }

    string getMerk() {
        return merk;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    int getTahunProduksi() {
        return tahun_produksi;
    }

    void setTahunProduksi(int tahun_produksi) {
        this->tahun_produksi = tahun_produksi;
    }

    string getWarna() {
        return warna;
    }

    void setWarna(string warna) {
        this->warna = warna;
    }

    // Destructor
    ~Vehicle() {
    }
};