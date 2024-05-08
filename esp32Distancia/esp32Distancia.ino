//medindo distancia


const int PINO_TRIG = 4; //pino D4 conectado no TRIGGER
const int PINO_ECHO = 2; //pino conectado no ECHO

void setup(){
  Serial.begin(9600); //inicializa a comunicação serial
  pinMode(PINO_TRIG, OUTPUT); //configura pino TRIGGER como saída
  pinMode(PINO_ECHO, INPUT); //configura pino  ECHO com entrada
  
}

void loop(){
  digitalWrite(PINO_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(PINO_TRIG, HIGH);
  delayMicroseconds(2);
  digitalWrite(PINO_TRIG, LOW);

  long duracao = pulseIn(PINO_ECHO, HIGH); //mede o tempo de resposta do echo
  float distancia = (duracao * 0.0343) / 2; //calcula a distancia usando a velocidade aproximadamente 323m/s
  
  if (distancia > 0.00 && distancia <= 1000.0){
    
    Serial.print("\nDistância: ");
    Serial.print((int)distancia);
    Serial.print("cm");
    
  }

}
