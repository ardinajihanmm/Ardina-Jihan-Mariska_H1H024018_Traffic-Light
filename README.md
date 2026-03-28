# 🚦 Traffic Light 4-Way Control using Arduino Uno

Project ini merupakan simulasi sistem lampu lalu lintas 4 arah menggunakan Arduino Uno yang dibuat pada platform Tinkercad. Sistem ini mengontrol 12 LED yang merepresentasikan lampu merah, kuning, dan hijau pada setiap arah persimpangan.


## 📌 Deskripsi Project

Pada project ini, setiap arah (Utara, Timur, Selatan, Barat) memiliki tiga LED sebagai representasi lampu lalu lintas yaitu merah, kuning dan hijau

Arduino akan mengatur nyala LED secara bergantian mengikuti arah jarum jam, dimulai dari utara hingga barat, kemudian mengulang kembali secara terus menerus.

## 🎯 Tujuan

Project ini bertujuan untuk memahami konsep dasar sistem mikrokontroler, khususnya dalam:

- Menggunakan GPIO sebagai output
- Mengontrol banyak LED secara bersamaan
- Menerapkan logika sekuensial (berurutan)
- Mengimplementasikan sistem berbasis waktu (delay)
- Mensimulasikan sistem traffic light sederhana

## 🧰 Komponen yang Digunakan

Komponen utama dalam project ini antara lain:

- Arduino Uno
- 12 LED (4 Merah, 4 Kuning, 4 Hijau)
- 12 Resistor 220Ω
- Breadboard
- Kabel jumper

## 🔌 Konfigurasi Pin

Setiap arah memiliki 3 pin untuk lampu merah, kuning, dan hijau:

| Arah    | Merah | Kuning | Hijau |
|--------|------|--------|-------|
| Utara  | 4    | 3      | 2     |
| Timur  | 7    | 6      | 5     |
| Selatan| 10   | 9      | 8     |
| Barat  | 13   | 12     | 11    |

Semua LED dihubungkan ke Arduino melalui resistor dan menuju ke GND.

---

## ⚙️ Cara Kerja Sistem

Sistem bekerja secara otomatis dengan urutan sebagai berikut:

1. Semua lampu berada dalam kondisi merah
2. Salah satu arah akan mendapatkan lampu hijau selama 5 detik
3. Setelah itu, lampu kuning akan berkedip sebanyak 3 kali
4. Lampu kuning menyala selama 2 detik
5. Sistem kembali ke kondisi merah
6. Proses berlanjut ke arah berikutnya

Urutan arah:
**Utara → Timur → Selatan → Barat → Ulang**

Sistem akan terus berjalan secara looping tanpa henti.

🧪 Hasil Simulasi

<img width="862" height="577" alt="image" src="https://github.com/user-attachments/assets/bede4ae3-64ab-4410-b17e-a4bb79eaa6df" />

Simulasi menunjukkan bahwa:

- Lampu menyala secara bergantian
- Tidak ada dua lampu hijau yang menyala bersamaan
- Sistem berjalan sesuai dengan urutan yang telah ditentukan


🔗 Link Project
Tinkercad Simulation: https://www.tinkercad.com/things/6zF9hwiOYb5/editel?returnTo=%2Fdashboard&sharecode=V1b3WcxGxh3ZpDxH2NuksWSXNIRoNr-SYEe_bl0qqoM
