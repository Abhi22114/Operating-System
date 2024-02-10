//* os commands to find greater and smaller number 


#!/bin/bash
echo "enter your first number"
read num1
echo "enter your second number"
read num2
echo "enter your third number"
read num3
if [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]
then
echo "Largest number is $num1"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]
then
echo "the largest number is $num2"
else
echo "the largest number is $num3"
fi
