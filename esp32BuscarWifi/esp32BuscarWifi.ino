//Procurar rede Wifi disponivel

#include <WiFi.h>

void setup() {
  Serial.begin(115200);

  // Inicia o WiFi
  WiFi.mode(WIFI_STA);

  // Inicia o escaneamento de redes WiFi
  int numRedes = WiFi.scanNetworks();
  if (numRedes == 0) {
    Serial.println("Nenhuma rede encontrada");
  } else {
    Serial.printf("Encontradas %d redes\n", numRedes);
    for (int i = 0; i < numRedes; i++) {
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.println(" dBm)");
      delay(10);
    }
  }
}

void loop() {
  // Nada a ser feito no loop
}
