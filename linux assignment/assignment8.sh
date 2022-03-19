#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:24/09/2021
description: Write a script to perform arithmetic operation on digits of a given number. assignment8
1. ./08_operator_dependent.sh 1234+
sum of digits is 10
2. ./08_operator_dependent.sh 8312-
subtraction of digits is 2
3. ./08_operator_dependent.sh 5487
Error: Operator missing or invalid operator, please pass
4. ./08_operator_dependent.sh 1111x
multiplication of digits is 1"
5. ./08_operator_dependent.sh
Error : Please pass the argument.
documentation
cla=$1
var=`echo ${cla: -1}`
var2=`echo ${cla: :-1}`
arthmetic=0
length=${#var2}
if [ $# -eq 1 ]
then    
    case $var in
        +)
            for i in `seq 0 $(($length-1))`
            do
                digit1=`echo "${var2:i:1}"`
                arthmetic=`echo "$arthmetic+$digit1" | bc`
            done
            echo "sum of digits is $arthmetic"
            ;;
        -)
            arthmetic=`echo "${var2:0:1}"`
            for i in `seq 1 $(($length-1))`
            do  
                digit1=`echo "${var2:i:1}"`
                arthmetic=`echo "$arthmetic-$digit1" | bc`
            done
            echo "subtraction of digits is $arthmetic"
            ;;
        x)
            arthmetic=`echo "${var2:0:1}"`
            for i in `seq 1 $(($length-1))`
            do 
                digit1=`echo "${var2:i:1}"`
                arthmetic=`echo "$arthmetic*$digit1" | bc`
            done
            echo "multiplication of digits is $arthmetic"
            ;;
        /)
            arthmetic=`echo "${var2:0:1}"`
            for i in `seq 1 $(($length-1))`
            do  
                digit1=`echo "${var2:i:1}"`
                arthmetic=`echo "scale=4;$arthmetic/$digit1" | bc`
            done
            echo "division of digits is $arthmetic"
            ;;
        *)
            echo "Error: Operator missing or invalid operator, please pass"
            ;;
    esac
else
    echo "Error : Please pass the argument"
fi

