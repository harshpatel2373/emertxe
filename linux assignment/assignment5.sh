#!/bin/bash

<<documentation
name: harsh dineshkumar patel
datel: 17/09/2021
discription: Write a script to compare larger integer values from a 'n' number of arguments using command line arguments. assignment5
Sample execution: 

1. ./05_largest.sh 5 6 8 4 2 1
Largest value is 8.

2. ./05_largest 9
Largest value is 9.

3. ./05_largest
No arguments passed.
documentation

if [ $# -gt 0 ]                        #cheking if the CLA is passed or not
then
    large=$1
    for i in $@                        #taking each numbers from CLA
    do
        if [ $i -gt $large ]           #Comparing with previous largest CLA
        then
            large=$i                   #Assigning value to the large if "if" condition is true
        fi
    done
    echo "Largest value is $large."
else
    echo "No arrguments passed."
fi

