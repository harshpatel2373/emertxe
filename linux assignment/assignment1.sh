#!/bin/bash

<<documentation
Name: Harsh Dineshkumar Patel 
Date: 15/09/2021
Description: read N and gentrate pattern, assignment 1
Input: enter the number to genrate pattern: 4
Output: 1
        1 2
        1 2 3
        1 2 3 4
Input: enter the number to genrate pattern: 34
Output: number out of range,please enter 2 < number <2^5            
documentation


read -p "enter the number to genrate pattern: " num   

if [ $num -gt 2 -a $num -lt `echo "2^5" | bc` ]           # number is checked if it is within pre-defined limit
then
    for row in `seq $num`                                 # outer forloop for genrating numbers for row
    do  
        for col in `seq $row`                             # inner forloop for giving numbers  for the coloun
        do
            echo -n  "$col "                              # -n used so that numbers remain in one row 
        done
        echo                                              # echo given so that numbers get printed in new row
    done
else
    echo "number out of range,please enter 2 < number <2^5"            
fi
