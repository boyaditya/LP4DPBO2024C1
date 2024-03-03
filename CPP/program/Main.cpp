/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 4 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "Car.cpp"
#include "Garage.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp"
#include "Tabel.cpp"

#include <bits/stdc++.h>

using namespace std;

int main() {
    // membuat objek motor dan mobil
    Motorcycle motor1("Matic", 51, "AB 1234 CD", "Honda", 2010, "Merah");
    Motorcycle motor2("Manual", 61, "AB 5678 CD", "Yamaha", 2011, "Biru");
    Motorcycle motor3("Matic", 71, "AB 9101 CD", "Suzuki", 2012, "Hitam");
    Car mobil1(4, 4, "T 1234 CD", "Toyota", 2010, "Merah");
    Car mobil2(4, 4, "T 5678 CD", "Honda", 2011, "Biru");

    // membuat objek garasi
    Garage garasi1("Garasi 1", 100);
    // menambahkan motor dan mobil ke dalam garasi
    garasi1.addMotor(motor1);
    garasi1.addMotor(motor2);
    garasi1.addMotor(motor3);
    garasi1.addMobil(mobil1);
    garasi1.addMobil(mobil2);

    Motorcycle motor4("Manual", 64, "AB 1121 CD", "Kawasaki", 2013, "Putih");
    Motorcycle motor5("Matic", 72, "AB 3141 CD", "BMW", 2014, "Hijau");
    Car mobil3(4, 4, "D 1230 CD", "Honda", 2010, "Merah");
    Car mobil4(4, 4, "D 1121 CD", "Kawasaki", 2013, "Putih");
    Car mobil5(2, 2, "D 3141 CD", "BMW", 2014, "Hijau");
    Car mobil6(2, 2, "D 9423 CD", "Yamaha", 2016, "Hijau");
    Car mobil7(2, 2, "D 1234 CD", "Suzuki", 2017, "Hitam");

    Garage garasi2("Garasi 2", 200);
    garasi2.addMotor(motor4);
    garasi2.addMotor(motor5);
    garasi2.addMobil(mobil3);
    garasi2.addMobil(mobil4);
    garasi2.addMobil(mobil5);
    garasi2.addMobil(mobil6);
    garasi2.addMobil(mobil7);

    // simpan objek garasi ke dalam vector
    vector<Garage> daftar_garasi;
    daftar_garasi.push_back(garasi1);
    daftar_garasi.push_back(garasi2);

    // membuat objek parking lot
    ParkingLot parkingLot1(40);
    // menambahkan motor ke dalam parking lot
    parkingLot1.addMotor(motor1);
    parkingLot1.addMotor(motor2);
    parkingLot1.addMotor(motor3);
    parkingLot1.addMobil(mobil6);

    ParkingLot parkingLot2(70);
    parkingLot2.addMotor(motor4);
    parkingLot2.addMotor(motor5);
    parkingLot2.addMobil(mobil1);
    parkingLot2.addMobil(mobil2);
    parkingLot2.addMobil(mobil3);
    parkingLot2.addMobil(mobil4);
    parkingLot2.addMobil(mobil5);
    parkingLot2.addMobil(mobil7);

    // simpan objek parking lot ke dalam vector
    vector<ParkingLot> daftar_parking_lot;
    daftar_parking_lot.push_back(parkingLot1);
    daftar_parking_lot.push_back(parkingLot2);

    // menampilkan daftar garasi dan parking lot
    cout << "========== DAFTAR GARASI ==========" << endl;

    for (Garage garasi : daftar_garasi) {
        cout << "Nama Garasi: " << garasi.getNamaGarasi() << endl;
        cout << "Luas Garasi: " << garasi.getLuasGarasi() << " m^2" << endl;

        // ------------------------ Motor -------------------------

        string isi_motor[garasi.getMotor().size() + 1][9];

        // isi nama kolom
        isi_motor[0][0] = "Jenis Motor";
        isi_motor[0][1] = "Kapasitas Tangki";
        isi_motor[0][2] = "Plat Nomor";
        isi_motor[0][3] = "Merk";
        isi_motor[0][4] = "Tahun Produksi";
        isi_motor[0][5] = "Warna";

        // isi data motor
        int i = 1;
        for (Motorcycle motor : garasi.getMotor()) {
            isi_motor[i][0] = motor.getJenisMotor();
            isi_motor[i][1] = to_string(motor.getKapasitasTangki());
            isi_motor[i][2] = motor.getPlatNomor();
            isi_motor[i][3] = motor.getMerk();
            isi_motor[i][4] = to_string(motor.getTahunProduksi());
            isi_motor[i][5] = motor.getWarna();
            i++;
        }

        cout << "\nDaftar Motor: " << endl;
        Tabel tabel;
        // set baris dan kolom tabel
        tabel.setBaris(garasi.getMotor().size() + 1);
        tabel.setKolom(6);
        // membuat tabel
        tabel.buatTabel(isi_motor);

        // ------------------------ Mobil -------------------------
        string isi_mobil[garasi.getMobil().size() + 1][9];

        // isi nama kolom
        isi_mobil[0][0] = "Jumlah Kursi";
        isi_mobil[0][1] = "Jumlah Pintu";
        isi_mobil[0][2] = "Plat Nomor";
        isi_mobil[0][3] = "Merk";
        isi_mobil[0][4] = "Tahun Produksi";
        isi_mobil[0][5] = "Warna";

        // isi data mobil
        i = 1;
        for (Car mobil : garasi.getMobil()) {
            isi_mobil[i][0] = to_string(mobil.getJumlahKursi());
            isi_mobil[i][1] = to_string(mobil.getJumlahPintu());
            isi_mobil[i][2] = mobil.getPlatNomor();
            isi_mobil[i][3] = mobil.getMerk();
            isi_mobil[i][4] = to_string(mobil.getTahunProduksi());
            isi_mobil[i][5] = mobil.getWarna();
            i++;
        }

        cout << "\nDaftar Mobil: " << endl;
        // set baris dan kolom tabel
        tabel.setBaris(garasi.getMobil().size() + 1);
        tabel.setKolom(5);
        // membuat tabel
        tabel.buatTabel(isi_mobil);

        cout << "\n=================================================================================";
        cout << endl;
    }

    cout << "\n========== DAFTAR PARKING LOT ==========" << endl;

    int i = 1;
    for (ParkingLot parking_lot : daftar_parking_lot) {
        cout << "Parking Lot " << i << ": " << endl;
        cout << " Kapasitas                 : " << parking_lot.getKapasitas() << endl;
        cout << " Jumlah Kendaraan Saat Ini : " << parking_lot.getJumlahKendaraanSaatIni() << endl;
        cout << "  Jumlah Motor             : " << parking_lot.getJumlahMotor() << endl;
        cout << "  Jumlah Mobil             : " << parking_lot.getJumlahMobil() << endl;
        cout << "\n==============================" << endl;
        i++;
    }

    return 0;
}