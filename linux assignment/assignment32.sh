#!/bin/bash

<<documentation

Name: Harsh Dineshkumar Patel
Date: 20/09/2021
Description: Write a script to search whether the user is present or not in your system. assignment 32

1. ./32_user_present.sh xyz
xyz user is not present

2. ./32_user_present.sh emertxe
emertxe user is present

3. ./32_user_present.sh
Error : Please pass the argument through command line.

documentation

arr=(`cat /etc/passwd | cut -d ":" -f1`)      #storing all the users in an array

if [ $# -ne 0 ]                               #cheking if CLA is passed or not
then
    count=0
    for i in ${arr[@]}                       #compering each user with user passed in CLA
    do
        if [ $i = $1 ]                       #If user is present than count is incremented
        then
            let count=$count+1
        fi
    done

    if [ $count -eq 0 ]                       #cheking user present or not from value of count
    then
        echo "$1 user is not present"
    else
        echo "$1 user is present"
    fi
else
     echo "Error : Please pass the argument through command line."
fi
