# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    __jenis_motor = ""
    __kapasitas_tangki = 0
    
    def __init__(self, plat_nomor = "", merk = "", tahun_produksi = "", warna = "", jenis_motor = "", kapasitas_tangki = ""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.__jenis_motor = jenis_motor
        self.__kapasitas_tangki = kapasitas_tangki

    def get_jenis_motor(self):
        return self.__jenis_motor

    def set_jenis_motor(self, jenis_motor):
        self.__jenis_motor = jenis_motor

    def get_kapasitas_tangki(self):
        return self.__kapasitas_tangki

    def set_kapasitas_tangki(self, kapasitas_tangki):
        self.__kapasitas_tangki = kapasitas_tangki
