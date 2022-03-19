#!/bin/bash

<<documentation
Name: Harsh Dineshkumar Patel
Date: 17/09/2021
discription: Write a script to print a given number in reverse order. assignment 6

1. ./06_reverse.sh 12345
Reversed number – 54321

2. ./06_reverse.sh 1540
Reversed number – 451

3. ./06_reverse.sh 5
pass a multi-digit number

4. ./06_reverse.sh
No argument passed

5. ./06_reverse.sh 15f43
Enter only numbers
documentation

if [ $# -ne 0 ]                                                    #checking CLA passed or not
then
    var='^[+-]?[0-9]?+[.]?[0-9]+$'
    if [[ $1 =~ $var ]]                                             #checking if argument entered is only number
    then
        if [ $1 -gt 9 ]                                            #cheking if the number is multidigit or not
        then
            temp=$1
            revrse=0
            while [ $temp -ne 0 ]                                 #loop for reversing the number
            do
                lastdigit=`echo "$temp % 10" | bc`
                revrse=`echo "($revrse * 10) + $lastdigit" |bc`
                temp=`echo "$temp / 10" | bc`
            done
            echo "Reversed number - $revrse"
        else
            echo "pass a multi-digit number"
        fi
    else
        echo "Enter only numbers"
    fi
else
    echo "No arrgument passed"
fi


