#include <WiFi.h>

const char* ssid = "Fatec24GHz";
const char* password = "fatecitapira";
int led = 2;

void setup() 
{
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.print("Conectando à rede ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print("Conectando no WiFi.....");
  }

  Serial.println("");
  Serial.println("Conexão WiFi estabelecida");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  {
  if (WiFi.status() == WL_CONNECTED)
  {
    digitalWrite(led, 1); /* liga o led se conectado */
  }

  else
  {
    digitalWrite(led, 0); /* desliga o led se não estiver conectado */
  }
  }
}
