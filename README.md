# birthdaySurprise
Birthday song will be played as soon as motion is detected. 

Through PIR sensor motion is detected. And depending upon that the birthday song is played once and for the next time it checks again and if the condition is ture then the same process continues.

### Components:
Name   | Quantity
-------|---------
PIR    | 1
Buzzer | 1
Arduino UNO | 1
Jumper Wire| 5
BreadBoard | 1 (optional)
### Connection:
```
PIR:
Vcc: 5V or 3.3V power supply PIN of the board;
Data: Connect it to any digital PIN except 1 and 0; and
GND: Connect it to the Ground.

Buzzer:
'-' Pin: Connect it to the ground; and
'+' Pin: Connect it to any digital PIN.
```

__Note__: Look at the protection diode on the PIR sensor just near to the three pins, the nearest PIN to this is Vcc then the centre PIN is Data pin and then the Ground PIN.
