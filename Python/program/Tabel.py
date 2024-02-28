# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin


class Tabel:
    __baris = ""
    __kolom = ""

    def __init__(self, baris=0, kolom=0):
        self.__baris = baris
        self.__kolom = kolom

    def get_baris(self):
        return self.__baris

    def set_baris(self, baris):
        self.__baris = baris

    def get_kolom(self):
        return self.__kolom

    def set_kolom(self, kolom):
        self.__kolom = kolom

    def buat_garis(self, max_len):
        for i in range(self.get_kolom()):
            print("+", end="")
            for j in range(max_len[i] + 2):
                print("-", end="")
        print("+")

    def find_max_len(self, isi):
        max_len = [0] * self.get_kolom()
        for i in range(self.get_kolom()):
            for j in range(self.get_baris()):
                if len(isi[j][i]) > max_len[i]:
                    max_len[i] = len(isi[j][i])
        return max_len

    def buat_tabel(self, isi):
        max_len = self.find_max_len(isi)

        self.buat_garis(max_len)

        for j in range(self.get_kolom()):
            print("| " + isi[0][j], end="")
            for k in range(max_len[j] - len(isi[0][j])):
                print(" ", end="")
            print(" ", end="")
        print("|")

        self.buat_garis(max_len)

        for i in range(1, self.get_baris()):
            for j in range(self.get_kolom()):
                print("| " + isi[i][j], end="")
                for k in range(max_len[j] - len(isi[i][j])):
                    print(" ", end="")
                print(" ", end="")
            print("|")

        self.buat_garis(max_len)
