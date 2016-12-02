#define v_2 13      //GPIO13    // MOSI
#define v_3 12      //GPIO12    // MISO
#define v_4 14      //GPIO14    //SCK
#define v_5 16      //GPIO16
#define v_6 adc     //ADC
#define v_7 reset   //RESET
#define g_2 15      //GPIO15    //SS
#define g_3 2       //GPIO29    //TX1
#define g_4 4       //GPIO4     //SDA
#define g_5 5       //GPIO5     //SCL
#define g_6 rxd     //RXD       //RX0
#define g_7 txd     //TXD       //TX0

int digital_pins[]={v_2,v_3,v_4,v_5,g_2,g_3,g_4,g_5};

void setup() {
  // put your setup code here, to run once:
   for(int i=0;i<8;i++){
    pinMode(digital_pins[i],OUTPUT);
    }
}
void toggle(int x){
  digitalWrite(x,HIGH);
  delay(200);
  digitalWrite(x,LOW);
  delay(200);
  }
void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<8;i++){
    toggle(digital_pins[i]);
    }
}
