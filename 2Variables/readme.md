#Variables: What they are. What kinds or types are they. 
====

##Built in variables
From math we have used types of numbers like whole numbers, and real numbers. In computers we have translate them into 
binary represnetations. The good news is the computer does this for us so we work with the base 10 numbers we're used to. 

In C/C++ we have whole numbers which are described as integers. These are non decimal, non fractional numbers that can be
+, -, or 0. So we can have unsigned integers which are 0 to max integer. Where as a regular integer is min negative integer, 0, through max integer. They have the 
same number of numbers, but on starts at 0, and the other starts and max negative. 

In C/C++ real numbers are represented as floating point numbers. This is because the underlying representation keeps track of the significant digits, and an exponent.
Ver much like scientific notation. Plus a bit for sign.

Logical operations are also representated in C/C++. These are called booleans, and represent true or false. 

###Integers:
int || 16 bit 
short || 16 bit
long || 32 bit
unsigned int || 16 bit starts a 0

###Floating Point:
float
double

###Boolean: Logica Operators
bool 

###Characters: single characters
char

### Memory: 
byte

##Assignment and initialization of variables

int foo = 10;
short foo = -10;
long foo = 9999999;


##Expressions: allow you to evaluate and compare variables.

foo =  1 + 1;
foo = 2 * 3;
foo = (2 * 3) / 4;
bar = 1 + foo;
bar = 2 * foo;
bar = (3 * foo)/4;

##Scope: When and where you can use vairables.

Variable declared in different places in the code effect the whether or not you can use a vairable.


