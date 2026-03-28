// Format array: {MERAH, KUNING, HIJAU}
int utara[]   = {4, 3, 2};     // Pin untuk arah utara
int timur[]   = {7, 6, 5};     // Pin untuk arah timur
int selatan[] = {10, 9, 8};    // Pin untuk arah selatan
int barat[]   = {13, 12, 11};  // Pin untuk arah barat

// Fungsi setup dijalankan sekali saat awal
void setup() {
  // Mengatur semua pin dari 2 sampai 13 sebagai OUTPUT
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
}

// Fungsi untuk mengatur semua lampu menjadi merah
void semuaMerah() {
  // UTARA
  digitalWrite(4, HIGH);  // Lampu merah ON
  digitalWrite(3, LOW);   // Lampu kuning OFF
  digitalWrite(2, LOW);   // Lampu hijau OFF

  // TIMUR
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);

  // SELATAN
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);

  // BARAT
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}

// Fungsi untuk mengaktifkan satu simpang
void aktifkanSimpang(int pin[]) {
  semuaMerah(); // Semua lampu dibuat merah terlebih dahulu

  // Lampu HIJAU menyala
  digitalWrite(pin[0], LOW);   // Mematikan lampu merah
  digitalWrite(pin[2], HIGH);  // Menyalakan lampu hijau
  delay(5000);                // Delay 5 detik

  // Lampu KUNING berkedip 3 kali
  digitalWrite(pin[2], LOW); // Matikan lampu hijau
  for (int i = 0; i < 3; i++) {
    digitalWrite(pin[1], HIGH); // Kuning ON
    delay(300);                 // Tunggu 0.3 detik
    digitalWrite(pin[1], LOW);  // Kuning OFF
    delay(300);                 // Tunggu 0.3 detik
  }

  // Lampu KUNING menyala selama 2 detik
  digitalWrite(pin[1], HIGH);
  delay(2000);

  // Kembali ke kondisi MERAH
  digitalWrite(pin[1], LOW);   // Kuning OFF
  digitalWrite(pin[0], HIGH);  // Merah ON
}

// Fungsi loop akan berjalan terus menerus
void loop() {
  aktifkanSimpang(utara);   // Aktifkan arah utara
  aktifkanSimpang(timur);   // Aktifkan arah timur
  aktifkanSimpang(selatan); // Aktifkan arah selatan
  aktifkanSimpang(barat);   // Aktifkan arah barat
}