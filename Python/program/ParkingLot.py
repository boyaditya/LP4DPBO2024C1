# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

class ParkingLot:
    __kapasitas = 0
    __jumlah_kendaraan_saat_ini = 0
    __vehicle = []

    def __init__(self, kapasitas=0, jumlah_kendaraan_saat_ini=0, vehicle=[]):
        self.__kapasitas = kapasitas
        self.__jumlah_kendaraan_saat_ini = jumlah_kendaraan_saat_ini
        self.__vehicle = vehicle

    def get_kapasitas(self):
        return self.__kapasitas

    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def get_jumlah_kendaraan_saat_ini(self):
        return self.__jumlah_kendaraan_saat_ini

    def hitung_kendaraan(self):
        self.__jumlah_kendaraan_saat_ini = len(self.__vehicle)
        print("Jumlah kendaraan saat ini:", len(self.__vehicle))
        return self.__jumlah_kendaraan_saat_ini
