// Pinagem do LED embutido na placa ESP32


const int ledPin = 2; // GPIO2

// Função para piscar um ponto
void ponto() {
  digitalWrite(ledPin, HIGH);
  delay(250); // Ponto tem duração de 250ms
  digitalWrite(ledPin, LOW);
  delay(250); // Espera entre os pontos e traços é de 250ms
}

// Função para piscar um traço
void traco() {
  digitalWrite(ledPin, HIGH);
  delay(1000); // Traço tem duração de 1000ms
  digitalWrite(ledPin, LOW);
  delay(250); // Espera entre os pontos e traços é de 250ms
}

void setup() {
  // Inicializa o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Mensagem em código Morse: SOS
  ponto(); ponto(); ponto(); // S
  traco(); traco(); traco(); // O
  ponto(); ponto(); ponto(); // S

  // Espaço entre as letras
  delay(2000); // Aguarda 2 segundos entre as letras
}
