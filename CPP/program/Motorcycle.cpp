/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#pragma once

#include "Vehicle.cpp"
#include <string>
using namespace std;

class Motorcycle : public Vehicle {
  private:
    string jenis_motor;
    int kapasitas_tangki;

  public:
    //   Constructor
    Motorcycle() {
    }

    Motorcycle(string jenis_motor, string plat_nomor, string merk, int tahun_produksi, string warna) : Vehicle(plat_nomor, merk, tahun_produksi, warna) {
        this->jenis_motor = jenis_motor;
        kapasitas_tangki = -1;
    }

    Motorcycle(string jenis_motor, int kapasitas_tangki, string plat_nomor, string merk, int tahun_produksi, string warna) : Vehicle(plat_nomor, merk, tahun_produksi, warna) {
        this->jenis_motor = jenis_motor;
        this->kapasitas_tangki = kapasitas_tangki;
    }

    // Getter and Setter
    string getJenisMotor() {
        return jenis_motor;
    }

    void setJenisMotor(string jenis_motor) {
        this->jenis_motor = jenis_motor;
    }

    int getKapasitasTangki() {
        return kapasitas_tangki;
    }

    void setKapasitasTangki(int kapasitas_tangki) {
        this->kapasitas_tangki = kapasitas_tangki;
    }

    // Destructor
    ~Motorcycle() {
    }
};