// RemoteXY select connection mode and include library  
#define REMOTEXY_MODE__ESP8266_HARDSERIAL_POINT

#include <RemoteXY.h> 

// RemoteXY connection settings  
#define REMOTEXY_SERIAL Serial 
#define REMOTEXY_SERIAL_SPEED 115200 
#define REMOTEXY_WIFI_SSID "RemoteXY" 
#define REMOTEXY_WIFI_PASSWORD "18032000" 
#define REMOTEXY_SERVER_PORT 6377 


// RemoteXY configurate   
#pragma pack(push, 1) 
uint8_t RemoteXY_CONF[] = 
  { 255,4,0,0,0,64,0,8,165,0,
  2,0,6,8,22,11,36,26,31,31,
  79,78,0,79,70,70,0,2,0,62,
  9,22,11,134,26,31,31,79,78,0,
  79,70,70,0,2,0,8,38,22,11,
  203,26,31,31,79,78,0,79,70,70,
  0,1,0,67,37,12,12,31,31,88,
  0 }; 
   
// this structure defines all the variables of your control interface  
struct { 

    // input variable
  uint8_t RED_LED; // =1 if switch ON and =0 if OFF 
  uint8_t GREEN_LED; // =1 if switch ON and =0 if OFF 
  uint8_t BLUE_LED; // =1 if switch ON and =0 if OFF 
  uint8_t LAMP; // =1 if button pressed, else =0 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY; 
#pragma pack(pop) 

///////////////////////////////////////////// 
//           END RemoteXY include          // 
///////////////////////////////////////////// 

#define PIN_RED_LED 13
#define PIN_GREEN_LED 12
#define PIN_BLUE_LED 11
#define PIN_LAMP 10


void setup()  
{ 
  RemoteXY_Init ();  
   
  pinMode (PIN_RED_LED, OUTPUT);
  pinMode (PIN_GREEN_LED, OUTPUT);
  pinMode (PIN_BLUE_LED, OUTPUT);
  pinMode (PIN_LAMP, OUTPUT);
   
  // TODO you setup code 
   
} 

void loop()  
{  
  RemoteXY_Handler (); 
   
  digitalWrite(PIN_RED_LED, (RemoteXY.RED_LED==0)?LOW:HIGH);
  digitalWrite(PIN_GREEN_LED, (RemoteXY.GREEN_LED==0)?LOW:HIGH);
  digitalWrite(PIN_BLUE_LED, (RemoteXY.BLUE_LED==0)?LOW:HIGH);
  digitalWrite(PIN_LAMP, (RemoteXY.LAMP==0)?LOW:HIGH);
   
  // TODO you loop code 
  // use the RemoteXY structure for data transfer 


}
