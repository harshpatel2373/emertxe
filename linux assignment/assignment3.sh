#1/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:16/09/2021
description: write a script for addition of two numbers for real numbers also assignment3

Input: enter two numbers to be added 10 20
Output: the sum of two numbers is 30

Input: enter two numbers to be added 10.32 20.45
Output: the sum of two numbers is 30

Input: enter two numbers to be added 23r45 23
Output: please enter only integer or real number

documentation


read -p "enter two numbers to be added: " num1 num2

var='^[+-]?[0-9]?+[.]?[0-9]+$'             

if [[ $num1 =~ $var ]]                        #checking number is integer or not
then
    sum=`echo "$num1+$num2" | bc`             #executing addition
    echo "the sum of two numbers is $sum"
else
    echo "please enter only integer or real number"
fi
