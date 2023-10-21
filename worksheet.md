
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

Today is 2023/10/21
Your birthday was 1941/09/09
Hello, dennisritchie.  You are 0 years, 0 weeks, and 0 days old today



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

Today is 2023/10/21
Your birthday was 1980/12/30
Hello, bjarnestroustrup.  You are 42 years, 42 weeks, and 1 days old today

20 years difference as compaire to original year due to output error


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Today is 2023/10/21
Your birthday was 2004/08/16
Hello, abbas.  You are 19 years, 9 weeks, and 3 days old today.

Today is 2023/10/21
Your birthday was 
Hello, ali.  You are 20 years, 28 weeks, and 0 days old today.




4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range: -32768 to 32767
* `int`
  size:-2147483648 to 2147483647
  range:4 bytes
* `long int`
  size:-2147483648 to 2147483647
  range:4 bytes
* `float`
  size:4 bytes
  range: 7 digits of accuracy
* `double`
  size:8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

  Fee (10): 25.02
You gets:
88.96 britishPound
14375 japanniceYen

  b) $1,000.52

Enter the total amount of US Dollars: 1000.52
Fee (10): 100.05
You gets:
355.68 britishPound        
57472 japanniceYen

  c) $968,410.12

Enter the total amount of US Dollars: 1000.52
Fee (10): 100.05
You gets:
355.68 britishPound        
57472 japanniceYen

6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
no it is not possible because this value is larger than the integer value
 



7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?


b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?


c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
