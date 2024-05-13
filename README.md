# Software Serial Code
```c++
#include <SoftwareSerial.h>
#include "pins_arduino.h"

#define RX D3
#define TX D4

SoftwareSerial AvrSerial(RX, TX);
```
\
**Signal Truncation Function**
```c++
int signal_truncation(int inp_sig, short divisor){

	return ((inp_sig/divisor) * divisor);
}
```
\
**Signal Streching Function**
```c++
int signal_streching(int inp_sig, inp_min, inp_max, out_min, out_max){

	return (((float)(out_max - out_min) / (inp_max - inp_min)) * (inp_sig - inp_min));
}
```
