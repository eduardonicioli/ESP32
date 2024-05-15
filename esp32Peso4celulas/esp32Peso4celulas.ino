//Calculando o peso usando 4 células de carga com o HX711

#include "HX711.h"
#define DT_PIN 4
#define SCK_PIN 2

int offset = 0;

HX711 scale;
 
void setup() {
  scale.begin(DT_PIN,SCK_PIN);
  Serial.begin(115200);
  offset = scale.read_average(3);
}
 
void loop() {
  int kg = 0;
  kg     = scale.read_average(1) - offset; //subtrai o offset
  kg    /= 100; //
  kg    *= 4; //o peso esta dividido por 4 celulas
  //kg    = kg-16; //está dando uma diferença pequena, mas uma função de tara resolve. 16 = 4*4
  Serial.println(kg);
  delay(1000);
}
