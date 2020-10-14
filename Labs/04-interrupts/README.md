# Preparations

| **Module** | **Number of bits** | **1** | **8** | **32** | **64** | **128** | **256** | **1024** |
| :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: | :-: |
| Timer/Counter0 | 8  | 16u | 128u | -- | 1024u | -- | 4096u | 16,38m |
| Timer/Counter1 | 16 | 4096u | 32,77m | -- | 262,1m | -- | 1,049 | 4,194 |
| Timer/Counter2 | 8  |  16u | 128u | 512u | 1024u | 2048u | 4096u | 16,38m |

![overfloew_time_equation](https://latex.codecogs.com/gif.latex?t_{\text{ovf}}&space;=&space;\frac{1}{f_{\text{CPU}}}\cdot&space;2^n&space;\cdot&space;N&space;=&space;\frac{1}{16\cdot&space;10^6}\cdot&space;2^8&space;\cdot&space;1&space;=&space;16\&space;\mu\text{s})


LEDs connections : D1 -> PB5[13]; D2 -> PB4[12]; D3 -> PB3[~11]; D4 -> PB2[~10]

Push buttons connections: S1-A1 -> PC1[A1]; S2-A2 -> PC2[A2]; S3-A3 -> PC3[A3]
