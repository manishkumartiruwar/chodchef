[8:07 pm, 06/01/2023] Manish Kumar Tiruwar: #include <Adafruit_MPU6050.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#include <Keypad.h>
const byte R=3;
const byte C=3;
int buzzer = 1;
char keys[R][C]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
byte rowPins[R]={0,2,14};
byte colPins[C]={15,13,12};

Adafruit_MPU6050 mpu;
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,R,C);
void setup() {
  Serial.begin(9600);
  analogWrite(buzzer,0);
  
  // while (!Serial);
  Serial.println("MPU6050 OLED demo");

  if (!mpu.begin()) {
    Serial.println("Sensor init failed");
    while (1)
      yield();
  }
  Serial.println("Found a MPU-6050 sensor");

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (…
[11:27 pm, 06/01/2023] Manish Kumar Tiruwar: #include <Adafruit_MPU6050.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_Sensor.h>
#include <Keypad.h>
#include <NTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

#################################################\
const char *ssid     = "12";
const char *password = "qwerty1234";

const long utcOffsetInSeconds = 3600;

char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);


#####################################################








const byte R=3;
const byte C=3;
int buzzer = 1;
char keys[R][C]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
byte rowPins[R]={0,2,14};
byte colPins[C]={15,13,12};

Adafruit_MPU6050 mpu;
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,R,C);
##########################################################################################
void setup() {
  Serial.begin(9600);
  analogWrite(buzzer,0);
 ############################################
  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }

  timeClient.begin();
  
 ################################################ 
  // while (!Serial);
  Serial.println("MPU6050 OLED demo");

  if (!mpu.begin()) {
    Serial.println("Sensor init failed");
    while (1)
      yield();
  }
  Serial.println("Found a MPU-6050 sensor");

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for (;;)
      ; // Don't proceed, loop forever
  }
  display.display();
  delay(500); // Pause for 2 seconds
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setRotation(0);
}
######################################################################################################
void loop() {
char key= keypad.getKey();
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
######################################
timeClient.update();
###################################
######## if block 
if (key == '9') 
  display.clearDisplay();
  display.setCursor(0, 0);

  display.print(daysOfTheWeek[timeClient.getDay()],1);
  display.print(", ");
  diospla y.print(timeClient.getHours(),1);
  display.print(":");
  display.print(timeClient.getMinutes(),1);
  display.print(":");
  display.println(timeClient.getSeconds(),1);
  display.display();
delay(1000);




######################################
#######else block

else{
  display.clearDisplay();
  display.setCursor(0, 0);


  display.println("Accelerometer - m/s^2");
  display.print(a.acceleration.x, 1);
  display.print(", ");
  display.print(a.acceleration.y, 1);
  display.print(", ");
  display.print(a.acceleration.z, 1);
  display.println("");


  display.println("Gyroscope - rps");
  display.print(g.gyro.x, 1);
  display.print(", ");
  display.print(g.gyro.y, 1);
  display.print(", ");
  display.print(g.gyro.z, 1);
  display.println("");
  


  display.println("temperature - celsius");
  display.print(temp.temperature,1);
    int j;
    
    if (key=='1'){j=1;analogWrite(buzzer,900);delay(10);analogWrite(buzzer,0);} 
   else if (key=='2'){j=2;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='3'){j=3;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='4'){j=4;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='5'){j=5;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='6'){j=6;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='7'){j=7;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='8'){j=8;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else if (key=='9'){j=9;analogWrite(buzzer,1050);delay(10);analogWrite(buzzer,0);} 
   else{j=0;}
  display.print("   ");
  display.println(j,1);
  display.display();
  delay(100);
 }
  
  
  
}
