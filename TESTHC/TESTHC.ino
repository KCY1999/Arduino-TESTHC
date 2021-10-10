#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX | TX

void setup()

{

pinMode(9, OUTPUT); // 給EN或KEY使用進入AT模式

digitalWrite(9, HIGH);

Serial.begin(9600);

Serial.println("Enter AT commands:");

BTSerial.begin(9600);

}

void loop()

{

// 讀取藍芽傳輸之資料且傳送至序列阜顯示

if (BTSerial.available())

Serial.write(BTSerial.read());

// 讀取序列阜傳輸之資料且傳送至藍芽顯示

if (Serial.available())

BTSerial.write(Serial.read());

}

#
