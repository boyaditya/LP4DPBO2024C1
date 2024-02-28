# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Motorcycle import Motorcycle
from Car import Car
from Garage import Garage
from Tabel import Tabel
from ParkingLot import ParkingLot

daftar_kendaraan1 = []

motor1 = Motorcycle("AB 1234 CD", "Honda", "2010", "Merah", "Matic", "51")
motor2 = Motorcycle("AB 5678 CD", "Yamaha", "2011", "Biru", "Manual", "61")
motor3 = Motorcycle("AB 9101 CD", "Suzuki", "2012", "Hitam", "Matic", "71")
motor4 = Motorcycle("AB 1121 CD", "Kawasaki", "2013", "Putih", "Manual", "64")
motor5 = Motorcycle("AB 3141 CD", "BMW", "2014", "Hijau", "Matic", "72")


daftar_kendaraan2 = []

mobil1 = Car("AB 1234 CD", "Toyota", "2010", "Merah" "4", "4")
mobil2 = Car("AB 5678 CD", "Honda", "2011", "Biru", "4", "4")
mobil3 = Car("AB 9101 CD", "Suzuki", "2012", "Hitam", "4", "4")
mobil4 = Car("AB 1121 CD", "Kawasaki", "2013", "Putih", "4", "4")
mobil5 = Car("AB 3141 CD", "BMW", "2014", "Hijau", "2", "2")

daftar_kendaraan1.append(motor1)
daftar_kendaraan1.append(motor3)
daftar_kendaraan1.append(motor5)
daftar_kendaraan1.append(mobil1)
daftar_kendaraan1.append(motor3)

daftar_kendaraan2.append(motor2)
daftar_kendaraan2.append(motor4)
daftar_kendaraan2.append(mobil2)
daftar_kendaraan2.append(mobil4)
daftar_kendaraan2.append(mobil5)

daftar_garasi = []

garasi1 = Garage("Garasi 1", 100.0, daftar_kendaraan1)
garasi2 = Garage("Garasi 2", 200.0, daftar_kendaraan2)

daftar_garasi.append(garasi1)
daftar_garasi.append(garasi2)

daftar_parking_lot = []
parkingLot1 = ParkingLot(100.0, len(daftar_kendaraan1), daftar_kendaraan1)
parkingLot2 = ParkingLot(200.0, len(daftar_kendaraan2), daftar_kendaraan2)

daftar_parking_lot.append(parkingLot1)
daftar_parking_lot.append(parkingLot2)


for garasi in daftar_garasi:
    print("Nama Garasi: ", garasi.get_nama_garasi())
    print("Luas Garasi: ", garasi.get_luas_garasi())
    print("Daftar Kendaraan: ")
    for kendaraan in garasi.get_daftar_kendaraan():
        print("Plat Nomor: ", kendaraan.get_plat_nomor())
        print("Merk: ", kendaraan.get_merk())
        print("Tahun Produksi: ", kendaraan.get_tahun_produksi())
        print("Warna: ", kendaraan.get_warna())
        if isinstance(kendaraan, Motorcycle):
            print("Jenis Motor: ", kendaraan.get_jenis_motor())
            print("Kapasitas Tangki: ", kendaraan.get_kapasitas_tangki())
        elif isinstance(kendaraan, Car):
            print("Jumlah Pintu: ", kendaraan.get_jumlah_pintu())
            print("Jumlah Kursi: ", kendaraan.get_jumlah_kursi())
        print("")

print("Parking Lot 1: ")
parkingLot1.hitung_kendaraan()
print("")
print("Parking Lot 2: ")
parkingLot2.hitung_kendaraan()
