#include <WiFi.h>
// put function declarations here:
const char *ssid = "";
const char *password = "";

const char *host = "";
const uint16_t port = ;

WiFiClient client;

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  // 顯示 Wi-Fi 連接狀態
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
  // while (!client.connect(host, port)) {
  //     Serial.println("Connection to host failed");
  //     delay(1000);
  // }
  // Serial.println("Connected to server successful!");
}
  

void loop() {
  
  WiFiClient client;

  while (!client.connect(host, port)) {
      Serial.println("Connection to host failed");
      delay(1000);
  }
  client.println("from ESP32");
  // Serial.println("Connected to server successful!");
  client.stop();
  delay(5000);

}
