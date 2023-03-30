#include <MQ135.h>
#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
#define led_pin 7
MQ135 gas = MQ135(A0);
#define gasPin A0
#define DHTPIN 5
#define DHTTYPE DHT11
int do_C, do_F;
float do_am, index_ppm;
DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(DHTPIN, INPUT);
  pinMode(led_pin, OUTPUT);
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("   WELCOME TO");
  lcd.setCursor(0, 1);
  lcd.print("     NHOM 9  ");
  delay(3000);
  lcd.clear();
}

void loop() {
  do_am = dht.readHumidity(); 
  do_C = dht.readTemperature();
  do_F = dht.readTemperature(true);
  index_ppm = gas.getPPM();
  lcd.setCursor(0, 0);
  lcd.print("DO AM: ");
  lcd.print(do_am);
  lcd.print("       ");
  lcd.setCursor(13, 0);
  lcd.print("%");
  lcd.setCursor(0, 1);
  lcd.print("NHIET DO:  ");
  lcd.print(do_C);
  lcd.print((char)223);  //Hiển thị độ C
  lcd.print("C ");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("PPM(CO2): ");
  lcd.print(index_ppm);
  lcd.setCursor(0, 1);
  lcd.print("NHIET DO:  ");
  lcd.print(do_F);
  lcd.print((char)223);
  lcd.print("F ");
  delay(2000);
  int check[3] = { 0, 0, 0 }, count;
  count = 0;
  if (do_C > 15 || do_C < 10) {
    check[0] = 1;
  }
  if (do_am > 95 || do_am < 90) {
    check[1] = 1;
  }
  if (index_ppm > 4000 || index_ppm < 2000) {
    check[2] = 1;
  }
  for (int i = 0; i < 3; i++) {
    if (check[i] == 1) {
      count++;
    }
  }
  if (count != 0) {
    digitalWrite(led_pin, HIGH);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("THE ENVIRONMENT");
    lcd.setCursor(0, 1);
    lcd.print("IS NOT SUITABLE");
    delay(2000);
  } else {
    digitalWrite(led_pin, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("THE ENVIRONMENT");
    lcd.setCursor(0, 1);
    lcd.print("  IS SUITABLE  ");
    delay(1000);
  }
  digitalWrite(led_pin, LOW);
}