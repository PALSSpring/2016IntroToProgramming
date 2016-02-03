Structure
```
//Declarations
int main () { return 0; }
```


Hello World C
```
//gcc HelloWorld.c -o HelloWorlds.out
#include <stdio.h>

int main () 
{ 
     printf("Hello World!");
     return 0; 
}
```

Hello World C++
```
//g++ HelloWorld.cpp -o HelloWorlds.out
#include <iostream.h>
using namespace std;

int main () 
{ 
     cout << "Hello World!" << endl;
     return 0; 
}
```


Control Structures
```
if (xx > 10) { ... } else { ... }
switch (myvar)
{
  case 1:
   break;
  case 2:
   break;
 default;
}
for (int ii = 0; ii <=255; ii++) { ...}
while (xx < 10) { ... }
do { ... } while ( x < 10);
continue; //Goto next in do/for/while loop
return xx; //Or 'return:' for voids
```

Pointer Access
```
& reference operator
* dereference operator
```

Bitwise Operators
```
& (bitwise and) | (bitwise or)
^(bitwise xor) ~(bitwise not)
<< (bitshift left) >> (bitshift right)
```
Further Syntax
```
// (Single line comment)
/* (multi-line comment) */
#define LEDS 7 //No semi colon
#include <IOShieldOled.h>
```
General Operators
```
= (assignment operator)
+ (addition)  - (subtraction)
* (multiplicaiton) / (division)
% (modulo)
== (equal to)  != (not equal to)
< (less than) > (greater than)
<= (less than or equal to)
>= (greater than or equal to)
&& (and) || (or) !(not)
```


Constants
```
HIGH|LOW
INPUT|OUTPUT
true|false
143 //Decimal number
0173 //Octal number
0b11011111 //Binary
0x7B //Hex number
7U //Force unsigned
15UL //Force Unsigned long
10.0 //Forces floating point
2.4e5 // 240000
```

Qualifiers
```
static //persists between calls
volatile //use RAM (nice for ISR)
const //make read only
```

Compount Operators
```
++ (increment) -- (decrement)
+= (compound addition) 
-= (compond subtraction)
*= (compund multiplicaiton)
/= (compound division)
&= (compound bitwise and)
|=(compund bitwise or)
```

Arrays
```
int myInts[6];
int myPins[] = {2,4,8,6,7};
int mySensVals[6] = {2,4,-8,3,2};
```

Conversion
```
char() byte()
int() word()
long() float()
```

Conversion
```
char() byte()
int() word()
long() float()
```

