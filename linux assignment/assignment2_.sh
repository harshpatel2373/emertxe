#!/bin/bash

<<documentation
Name: Harsh Dineshkumar Patel
Date: 15/09/2021
Description: read N and generate pattern, assignment 2
Input: enter the number to genrate pattern: 4
Output: 1
        2 3
        4 5 6
        7 8 9 10
Input: enter the number to generate pattern: 34
output: number out of range, please enter 2 < number <2^5
documentation


read -p "enter the number to generate pattern: " num   

count=0

if [ $num -gt 2 -a $num -lt `echo "2^5" | bc` ]           # number is checked if it is within pre-defined limit
then
    for row in `seq $num`                                 # outer forloop for generating numbers for row
    do  
        for col in `seq $row`                             # inner forloop for giving numbers  for the colum
        do
            let count=count+1                             # increasing the count everytime loop execute
            echo -n  "$count "                           
        done
        echo                                              # echo given so that numbers get printed in new row
    done
else
    echo "number out of range, Please enter 2 < number < 2^5"            
fi
