# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

class Garage:
    __nama_garasi = ""
    __luas_garasi = 0.0
    __daftar_kendaraan = []
    
    
    def __init__(self, nama_garasi = "", luas_garasi = 0.0, daftar_kendaraan=[]):
        self.__nama_garasi = nama_garasi
        self.__luas_garasi = luas_garasi
        self.__daftar_kendaraan = daftar_kendaraan


    def set_kendaraan(self, kendaraan):
        self.__daftar_kendaraan.append(kendaraan)

    def get_nama_garasi(self):
        return self.__nama_garasi

    def set_nama_garasi(self, nama_garasi):
        self.__nama_garasi = nama_garasi

    def get_luas_garasi(self):
        return self.__luas_garasi

    def set_luas_garasi(self, luas_garasi):
        self.__luas_garasi = luas_garasi

    def get_daftar_kendaraan(self):
        return self.__daftar_kendaraan
