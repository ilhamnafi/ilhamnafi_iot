#include <Arduino.h>

// Ubah pin sesuai diagram dan gunakan hanya pin OUTPUT
const int lampuMerah = 27;  // Gantilah dengan pin OUTPUT yang benar
const int lampuKuning = 14; // Contoh perubahan
const int lampuHijau = 12;

void setup() {
    Serial.begin(115200);
    
    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuHijau, OUTPUT);
}

void loop() {
    // Lampu Merah menyala (berhenti)
    digitalWrite(lampuMerah, HIGH);
    Serial.println("Lampu Merah ON");
    delay(22000);
    digitalWrite(lampuMerah, LOW);
    
    // Tambahkan jeda sebelum hijau menyala
    delay(1000);

    // Lampu Hijau menyala (jalan)
    digitalWrite(lampuHijau, HIGH);
    Serial.println("Lampu Hijau ON");
    delay(15000);
    digitalWrite(lampuHijau, LOW);

    // Tambahkan jeda sebelum kuning menyala
    delay(1000);

    // Lampu Kuning menyala (persiapan berhenti)
    digitalWrite(lampuKuning, HIGH);
    Serial.println("Lampu Kuning ON");
    delay(5000); // Biasanya kuning menyala lebih singkat, sekitar 5 detik
    digitalWrite(lampuKuning, LOW);
}
