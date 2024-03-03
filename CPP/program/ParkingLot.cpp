/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#pragma once

#include "Car.cpp"
#include "Motorcycle.cpp"
#include <iostream>
#include <vector>
using namespace std;

class ParkingLot {
  private:
    int kapasitas;
    int jumlah_kendaraan_saat_ini;
    vector<Motorcycle> motor;
    vector<Car> mobil;

  public:
    //   Constructor
    ParkingLot() {
    }

    ParkingLot(int kapasitas) {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = 0;
    }

    ParkingLot(int kapasitas, int jumlah_kendaraan_saat_ini, Motorcycle motor, Car mobil) {
        this->kapasitas = kapasitas;
        this->jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini;
        this->motor.push_back(motor);
        this->mobil.push_back(mobil);
    }

    // Getter and Setter
    int getKapasitas() {
        return kapasitas;
    }

    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    int getJumlahKendaraanSaatIni() {
        return motor.size() + mobil.size();
    }

    void addMotor(Motorcycle motor) {
        this->motor.push_back(motor);
    }

    vector<Motorcycle> getMotor() {
        return this->motor;
    }

    void addMobil(Car mobil) {
        this->mobil.push_back(mobil);
    }
    vector<Car> getMobil() {
        return this->mobil;
    }

    int getJumlahMotor() {
        return motor.size();
    }

    int getJumlahMobil() {
        return mobil.size();
    }

    // Destructor
    ~ParkingLot() {
    }
};