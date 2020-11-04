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


   | **Function name** | **Function parameters** | **Description** | **Example** |
   | :-- | :-- | :-- | :-- |
   | `lcd_init` | `LCD_DISP_OFF`<br>`LCD_DISP_ON`<br>`LCD_DISP_ON_CURSOR`<br>`LCD_DISP_ON_CURSOR_BLINK` | Display off<br>display on, cursor off;<br>display on, cursor on;<brdisplay on, cursor on flashing
 | `lcd_init(LCD_DISP_OFF);`<br>&nbsp;<br>&nbsp;<br>&nbsp; |
   | `lcd_clrscr` | `void` | Clear display and set cursor to home position. | `lcd_clrscr();` |
   | `lcd_gotoxy` | uint8_t x,uint8_t y| Set cursor to specified position. | `lcd_gotoxy(0, 1);` |
   | `lcd_putc` | char c | Display character at current cursor position. | lcd_putc( "A") |
   | `lcd_puts` | | | |
   | `lcd_command` | | | |
   | `lcd_data` | | | |
