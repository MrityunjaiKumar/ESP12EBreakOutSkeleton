# ESP12EBreakOutSkeleton
##Schematic <br/>
![schematic](https://cloud.githubusercontent.com/assets/6240777/20837782/9d24d222-b8cb-11e6-89fb-088e697d4a6e.png) <br/>
##Board file <br/>
![git image](https://cloud.githubusercontent.com/assets/6240777/20837679/1cc6b938-b8cb-11e6-86a4-deccbe552800.png)<br/>
<br/>

#Pins description wrt to vcc and gnd

Pins 	  | Hardware mapping| Hardware modules on pin
:--------:|:---------------:|:-----------------------:
v_2       | GPIO13          | MOSI
v_3       | GPIO12          | MISO
v_4       | GPIO14          |SCK
v_5       | GPIO16          |
v_6       | ADC             |
v_7       | RESET           |
g_2       | GPIO15          |SS
g_3       | GPIO29          |TX1
g_4       | GPIO4           |SDA
g_5       | GPIO5           |SCL
g_6       | RXD             |RX0
g_7       | TXD             |TX0

<br/>
#Macro Preprocessor for arduino</br>
\#define v_2 13      //GPIO13    // MOSI
\#define v_3 12      //GPIO12    // MISO
\#define v_4 14      //GPIO14    //SCK
\#define v_5 16      //GPIO16
\#define v_6 adc     //ADC
\#define v_7 reset   //RESET
\#define g_2 15      //GPIO15    //SS
\#define g_3 2       //GPIO29    //TX1
\#define g_4 4       //GPIO4     //SDA
\#define g_5 5       //GPIO5     //SCL
\#define g_6 rxd     //RXD       //RX0
\#define g_7 txd     //TXD       //TX0

<br/>
#Reference 
![image](https://cloud.githubusercontent.com/assets/6240777/20838146/465965f0-b8cd-11e6-9d4f-6e1a7a7f298f.png)
