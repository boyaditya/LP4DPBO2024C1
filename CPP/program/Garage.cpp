/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#pragma once

#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Vehicle.cpp"
#include <string>
#include <vector>
using namespace std;

class Garage {
  private:
    string nama_garasi;
    int luas_garasi;
    vector<Car> mobil;
    vector<Motorcycle> motor;

  public:
    //   Constructor
    Garage() {
    }

    Garage(string nama_garasi, int luas_garasi) {
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
    }

    Garage(string nama_garasi, int luas_garasi, Motorcycle motor, Car mobil) {
        this->nama_garasi = nama_garasi;
        this->luas_garasi = luas_garasi;
        this->motor.push_back(motor);
        this->mobil.push_back(mobil);
    }

    // Getter and Setter
    void addMobil(Car mobil) {
        this->mobil.push_back(mobil);
    }
    vector<Car> getMobil() {
        return this->mobil;
    }

    void addMotor(Motorcycle motor) {
        this->motor.push_back(motor);
    }

    vector<Motorcycle> getMotor() {
        return this->motor;
    }

    string getNamaGarasi() {
        return nama_garasi;
    }

    void setNamaGarasi(string nama_garasi) {
        this->nama_garasi = nama_garasi;
    }

    int getLuasGarasi() {
        return luas_garasi;
    }

    void setLuasGarasi(int luas_garasi) {
        this->luas_garasi = luas_garasi;
    }

    // Destructor
    ~Garage() {
    }
};