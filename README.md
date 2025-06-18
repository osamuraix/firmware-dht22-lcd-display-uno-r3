# Firmware: DHT22 Sensor with LCD1602 I2C Display (Arduino UNO R3)

📡 This firmware reads temperature and humidity data from a DHT22 sensor and displays the results on a 16x2 I2C LCD display using Arduino UNO.  
🔧 It demonstrates basic embedded programming, sensor integration, and I2C communication.

---

## 🧰 Hardware Used

| Component         | Quantity |
|------------------|----------|
| Arduino UNO R3    | 1        |
| DHT22 Temperature & Humidity Sensor | 1        |
| LCD1602 with I2C module | 1        |

---

## 🔌 Wiring Diagram

```plaintext
[DHT22 Sensor]
+------------+----------------+
| Pin        | Arduino UNO    |
+------------+----------------+
| VCC        | 5V             |
| DATA       | D2             |
| GND        | GND            |
+------------+----------------+
(Note: Add 10KΩ resistor between VCC and DATA)

[LCD1602 I2C]
+------------+----------------+
| Pin        | Arduino UNO    |
+------------+----------------+
| GND        | GND            |
| VCC        | **RESET**      | ← instead of 5V
| SDA        | A4             |
| SCL        | A5             |
+------------+----------------+
```

![Image](https://github.com/user-attachments/assets/7c972d2a-20cc-4a05-a73a-03b0d5526068)
