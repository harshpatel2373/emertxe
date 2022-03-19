#!/bin/bash

<<documentation
Name :harsh dineshkumar patel
date: 16/09/2021
discription: write a script for arithmetic calculator using command line argument assignment4

1. ./04_arithmatic_calc.sh 25 + 41
the addition of numbers is 66

2. ./04_arithmatic_calc 10 x 5
the multiplication of numbers is 50

3. ./04_arithmatic_calc.sh 25 / 5
the division of numbers is 5

4. ./04_arithmatic_calc.sh 10.2 – 5.6
the substraction of numbers is 4.6

5. ./04_arithmatic_calc.sh
please pass the arguments through command line

6. ./04_arithmatic_calc.sh 3.4
please pass three arguments

documentation

if [ $# -gt 0 ]                                                     #checking arguments passed or not
then
    if [ $# -eq 3 ]                                                 #checking arguments passed are 3
    then
        case $2 in
            +)
                sum=`echo "$1 + $3" | bc`                           #performing addition
                echo "the addition of numbers is $sum"
                ;;
            -)
                sub=`echo "$1 - $3" | bc`                          #performing substraction
                echo "the substraction of numbers is $sub"
                ;;
            x)
                mul=`echo "$1 * $3" | bc`                          #performing multiplication
                echo "the multiplication of numbers is $mul"
                ;;
            /) 
                div=`echo "scale=5; $1 / $3" | bc`                 #performing division
                echo "the division of numbers is $div"
                ;;
            *)
                echo "please provide a valid input"                #error message for invalid input
                ;;
         esac
else
    echo "please pass three arguments"
fi
else
    echo "please pass the arguments through command line"
fi
           

