# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Vehicle import Vehicle

class Car(Vehicle):
    __jumlah_kursi = ""
    __jumlah_pintu = ""
    
    def __init__(self, plat_nomor = "", merk = "", tahun_produksi = "", warna = "", jumlah_kursi = "", jumlah_pintu = ""):
        super().__init__(plat_nomor, merk, tahun_produksi, warna)
        self.__jumlah_kursi = jumlah_kursi
        self.__jumlah_pintu = jumlah_pintu

    def get_jumlah_kursi(self):
        return self.__jumlah_kursi

    def set_jumlah_kursi(self, jumlah_kursi):
        self.__jumlah_kursi = jumlah_kursi

    def get_jumlah_pintu(self):
        return self.__jumlah_pintu

    def set_jumlah_pintu(self, jumlah_pintu):
        self.__jumlah_pintu = jumlah_pintu
