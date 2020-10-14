# Preparations

| **Module** | **Number of bits** | **1** | **8** | **32** | **64** | **128** | **256** | **1024** |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
| Timer/Counter0 | 8  | 16u | 128u | -- | 1024u | -- | 4096u | 16,38m |
| Timer/Counter1 | 16 | 4096u | 32,77m | -- | 262,1m | -- | 1,049 | 4,194 |
| Timer/Counter2 | 8  |  16u | 128u | 512u | 1024u | 2048u | 4096u | 16,38m |

![overfloew_time_equation](https://latex.codecogs.com/gif.latex?t_{\text{ovf}}&space;=&space;\frac{1}{f_{\text{CPU}}}\cdot&space;2^n&space;\cdot&space;N&space;=&space;\frac{1}{16\cdot&space;10^6}\cdot&space;2^8&space;\cdot&space;1&space;=&space;16\&space;\mu\text{s})


LEDs connections : D1 -> PB5[13]; D2 -> PB4[12]; D3 -> PB3[~11]; D4 -> PB2[~10]

Push buttons connections: S1-A1 -> PC1[A1]; S2-A2 -> PC2[A2]; S3-A3 -> PC3[A3]



| **Module** | **Operation** | **I/O register(s)** | **Bit(s)** |
| :-: | :-- | :-: | :-- |
| Timer/Counter0 | Prescaler<br><br>8-bit data value<br>Overflow interrupt enable | TCCR0B<br><br>TCNT0<br>TIMSK0 |  CS02, CS01, CS00<br>(000: stopped, 001: 1, 010: 8, 011: 64, 100: 256, 101: 1024)<br>TCNT0[7:0]<br>TOIE0 (1: enable, 0: disable)|
| Timer/Counter1 | Prescaler<br><br>16-bit data value<br>Overflow interrupt enable | TCCR1B<br><br>TCNT1H, TCNT1L<br>TIMSK1 | CS12, CS11, CS10<br>(000: stopped, 001: 1, 010: 8, 011: 64, 100: 256, 101: 1024)<br>TCNT1[15:0]<br>TOIE1 (1: enable, 0: disable) |
| Timer/Counter2 | Prescaler<br><br>8-bit data value<br>Overflow interrupt enable | TCCR2B<br><br><br>TCNT2<br>TIMSK2 |  CS22, CS21, CS20<br>(000: stopped, 001: 1, 010: 8, 011: 32, 100: 64, 101: 128, 110: 256, 111: 1024)<br>TCNT2[7:0]<br>TOIE2 (1: enable, 0: disable) |



| **Program address** | **Source** | **Vector name** | **Description** |
| :-: | :-- | :-- | :-- |
| 0x0000 | RESET | -- | Reset of the system |
| 0x0001 | INT0  | `INT0_vect`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; | External interrupt request number 0&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; |
| 0x002 | INT1 |  | External Interrupt Request 1 |
| 0x003 | PCINT0 |  | Pin Change Interrupt Request 0 |
| 0x004 | PCINT1 |  | Pin Change Interrupt Request 1 |
| 0x005 | PCINT2 |  | Pin Change Interrupt Request 2 |
| 0x006 | WDT |  | Watchdog Time-out Interrupt |
| 0x009 | TIMER2_OVF |  | Timer/Counter2 Overflow |
| 0x0018 | TIMER1_COMPB | `TIMER1_COMPB_vect` | Compare match between Timer/Counter1 value and channel B compare value |
| 0x001A | TIMER1_OVF | `TIMER1_OVF_vect` | Overflow of Timer/Counter1 value |
| 0x010 | TIMER0_OVF |  | Timer/Counter0 Overflow |
| 0x014 | USART_RX |  | USART, Tx Complete |
| 0x015 | ADC |  | ADC Conversion Complete |
| 0x018 | TWI |  | 2-wire Serial Interface |

