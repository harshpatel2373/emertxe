#!/bin/bash
<<documentation
Name: harsh dineshkumar patel
date:25/09/2021
description: Use a recursive function to print each argument passed to the function. assignment25

1. ./25_recursion.sh How are you? I am fine
How
are
you?
I
am
fine
2. ./25_recursion.sh
Error : Pass the arguments through command line.
documentation
arr=($@) 
function recursive()
{
    echo ${arr[0]}                #printing 1st variable in array

    if [ ${#arr[@]} -le 1 ]       #cheking array length after reducing it
    then
        return                     #coming out of the function
    else
        arr=(${arr[@]:1:${#arr[@]}})    #removing first variable every time
        recursive ${arr[@]}            
    fi
}

if [ $# -ge 1 ]
then
    recursive
else
    echo "Error : Pass the arguments through command line."
fi
