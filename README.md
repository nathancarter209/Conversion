#Binary - Decimal 
###This is a simple code to convert Binary number to Decimal number

1. [Binary](Binary.c)
* Use math library.
* The code is a program that calculates the decimal equivalent of a binary number.
* The code starts by asking for the user to enter their binary number, which is then stored in n. Next, q is set equal to n and s is set to 0.
* Then k is initialized with 0 and while q > 0 loops through 10 iterations of calculating ``` r=q%10;s=s+r*pow(2,k);q=q/10;k++; ```, The first line calculates r as the remainder after dividing q by 10.
* The next two lines calculate s as the sum of r multiplied by 2 raised to power k and then adding it back into s so that it can be used later on in calculations.
* Lastly, q decreases from 10 down to 1 before looping back up again because there are still more iterations left until we reach zero (0).
  
2. [Decimal](Decimal.c)
* Use math library.
* The code starts by asking the user to enter a decimal number.
* The code then loops through the binary digits of that number, which are in reverse order.
* It starts with 0 and increments it until it reaches k, where it stops.
* Then, the code prints out the binary number and returns 0.
* The code is a simple program that asks the user to enter a decimal number and then outputs the binary equivalent of the input.