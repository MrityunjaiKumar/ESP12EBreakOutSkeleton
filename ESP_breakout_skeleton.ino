#define v_2 13//GPIO13
#define v_3 12//GPIO12
#define v_4 14//GPIO14
#define v_5 16//GPIO16
#define v_6 adc//ADC
#define v_7 reset//RESET
#define g_2 15//GPIO15 
#define g_3 2//GPIO29
#define g_4 4//GPIO4
#define g_5 5//GPIO5
#define g_6 rxd//RXD
#define g_7 txd//TXD

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
