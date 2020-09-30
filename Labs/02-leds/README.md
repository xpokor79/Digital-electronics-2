# Common wiring

![Leds and Pb wiring](../../Screens/Lab02%20-%20GPIO.png)

# Resistor values for LEDs

| **LED color** | **Supply voltage** | **LED current** | **LED voltage** | **Resistor value** |
| :-: | :-: | :-: | :-: | :-: |
| red | 5&nbsp;V | 20&nbsp;mA | 2 V | 150 Ω |
| blue | 5&nbsp;V | 20&nbsp;mA | 4 V | 50 Ω |

![Ohm law for LEDs](../../Screens/Ohm_Law.png)



#Datasheet data

| **DDRB** | **Description** |
| :-: | :-- |
| 0 | Input pin |
| 1 | Output pin |

| **PORTB** | **Description** |
| :-: | :-- |
| 0 | Output low value |
| 1 | Output high value|

| **DDRB** | **PORTB** | **Direction** | **Internal pull-up resistor** | **Description** |
| :-: | :-: | :-: | :-: | :-- |
| 0 | 0 | input | no | Tri-state, high-impedance |
| 0 | 1 | input | Yes | Pxn will source current if ext. pulled low |
| 1 | 0 | output | no | Output Low (Sink) |
| 1 | 1 | output | no | Output High (Source) 

" To which pin is the LED L connected? Is it connected as active-low or active-high?"

 LED L is connected to pin 13 (PB5) and connected as active-high.

| **Port** | **Pin** | **Input/output usage?** |
| :-: | :-: | :-- |
| A | x | Microcontroller ATmega328P does not contain port A |
| B | 0 | Yes (Arduino pin 8) |
|   | 1 | Yes (pin 9) |
|   | 2 | Yes (pin 10) |
|   | 3 | Yes (pin 11) |
|   | 4 | Yes (pin 12) |
|   | 5 | Yes (pin 13) |
|   | 6 | No |
|   | 7 | No |
| C | 0 | Yes (Arduino pin A0) |
|   | 1 | Yes (pin A1) |
|   | 2 | Yes (pin A2) |
|   | 3 | Yes (pin A3) |
|   | 4 | Yes (pin A4 / SDA) |
|   | 5 | Yes (pin A5 / SCL) |
|   | 6 | No |
|   | 7 | Does not exist |
| D | 0 | Yes (Arduino pin RX<-0) |
|   | 1 | Yes (Arduino pin TX -> 1) |
|   | 2 | Yes (Arduino pin 2) |
|   | 3 | Yes (Arduino pin 3) |
|   | 4 | Yes (Arduino pin 4) |
|   | 5 | Yes (Arduino pin 5) |
|   | 6 | Yes (Arduino pin 6) |
|   | 7 | Yes (Arduino pin 7) |
