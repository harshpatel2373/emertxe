#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:16/09/2021
discription: Write a script to read 'n' and generate Fibonacci numbers. assignment9

1. ./09_fibonacci.sh
Enter limit for fib series: 10
0, 1, 1, 2, 3, 5, 8

2. ./09_fibonacci.sh
Enter limit for fib series: 34
0, 1, 1, 2, 3, 5, 8, 13, 21, 34

3. ./09_fibonacci.sh
Enter limit for fib series: -10
Please enter only positive numbers.

4. ./09_fibonacci.sh
Enter limit for fib series: 10a3 
Please enter only numbers.
documentation

read -p "Enter limit for fib series: " num
prev=0
curr=1
next=0
var='^[+-]?[0-9]?+[.]?[0-9]+$'

if [[ $num =~ $var ]]                        #checking number is integer or not
then
    if [ $num -gt 0 ]                        #cheking number is positive
    then
        while [ $curr -le $num ]             #running loop until current value is less than or equal to entered value   
        do
            echo -n "$curr, "
            let next=$prev+$curr
            prev=$curr
            curr=$next
        done
        echo
    else
        echo "plase enter only positive numbers."
    fi
else
    echo "please enter only numbers."
fi
