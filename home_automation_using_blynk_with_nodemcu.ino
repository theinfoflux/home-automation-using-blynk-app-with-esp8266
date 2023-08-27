#define BLYNK_TEMPLATE_ID "TMPL6EqiGLRdO"
#define BLYNK_TEMPLATE_NAME "HOME AUTOMATION USING NODEMCU"
#define BLYNK_AUTH_TOKEN "7QzZFqKb8BxG6oXMRVoV_QFvaCQz-_G5"

#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
int led1=D2;
int led2=D3;
int led3=D4;
int led4=D5;
// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "theinfoflux";
char pass[] = "12345678";



void setup()
{
   
  // Debug console
  Serial.begin(115200);
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(led3,OUTPUT);
 pinMode(led4,OUTPUT);
  Blynk.begin(auth, ssid, pass);

}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V0)
{
  int pinValue1=param.asInt();
  digitalWrite(led1,pinValue1);
 }
 BLYNK_WRITE(V1)
{
  int pinValue2=param.asInt();
  digitalWrite(led2,pinValue2);
  }
  BLYNK_WRITE(V2)
{
  int pinValue3=param.asInt();
  digitalWrite(led3,pinValue3);
  }
  BLYNK_WRITE(V3)
{
  int pinValue4=param.asInt();
  digitalWrite(led4,pinValue4);
  }
