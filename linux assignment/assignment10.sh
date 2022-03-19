#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
date: 18/09/2021
discription: Write a script to print the length of each and every string using arrays assignment10

1. ./10_string_length.sh hello hai how are you ?
Length of string (hello) – 5
Length of string (hai) – 3
Length of string (how) – 3
Length of string (are) – 3
Length of string (you) – 3
Length of string (?) - 1

2. ./10_string_length.sh
Please pass the arguments through command-line.

documentation

if [ $# -gt 0 ]                                      # cheking whether CLA are passed or not
then
    arr=($@)
    for i in ${arr[@]}                               #taking each value of array one by one and finding its length
    do
        echo "Length of string ($i) - ${#i}"
    done
else
    echo "Please pass the arguments through command-line."
fi

