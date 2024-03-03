/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#pragma once

#include "Vehicle.cpp"
#include <string>
using namespace std;

class Car : public Vehicle {
  private:
    int jumlah_kursi;
    int jumlah_pintu;

  public:
    // Constructor
    Car() {
    }

    Car(int jumlah_kursi, string plat_nomor, string merk, int tahun_produksi, string warna)
        : Vehicle(plat_nomor, merk, tahun_produksi, warna) {
        this->jumlah_kursi = jumlah_kursi;
        jumlah_pintu = -1;
    }

    Car(int jumlah_kursi, int jumlah_pintu, string plat_nomor, string merk, int tahun_produksi, string warna)
        : Vehicle(plat_nomor, merk, tahun_produksi, warna) {
        this->jumlah_kursi = jumlah_kursi;
        this->jumlah_pintu = jumlah_pintu;
    }

    // Getter and Setter
    int getJumlahKursi() {
        return jumlah_kursi;
    }

    void setJumlahKursi(int jumlah_kursi) {
        this->jumlah_kursi = jumlah_kursi;
    }

    int getJumlahPintu() {
        return jumlah_pintu;
    }

    void setJumlahPintu(int jumlah_pintu) {
        this->jumlah_pintu = jumlah_pintu;
    }

    // Destructor
    ~Car() {
    }
};