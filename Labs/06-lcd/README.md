# Preperations

   | **LCD signal(s)** | **AVR pin(s)** | **Description** |
   | :-: | :-: | :-- |
   | RS | PB0 | Register selection signal. Selection between Instruction register (RS=0) and Data register (RS=1) |
   | R/W | GND | Read/Write selection signal. GND means write. |
   | E | PB1 | Enable signal |
   | D[3:0] | x | Data transfer (8 bit mode D[7:0]) |
   | D[7:4] | PD[7:4] | Data transfer (4 bit mode) |
   
   
ASCII table is a look-up table where each symbol has its own value (number).

| **Dec** | **Hx** | **Char** |
| :-: | :-: | :-- |
| 48 ~ 57| 30 ~ 39 | Numbers: 0 to 9 |
| 65 ~ 90 | 41 ~ 5A | Letters: A to Z |
| 97 ~ 122 | 61 ~ 7A | Letters: a to z |
