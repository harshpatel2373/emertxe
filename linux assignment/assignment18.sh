#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:27/09/2021
Description: Display the longest and shortest user-names on the system. assignment 18.

1. ./ 18_largest_username.sh
The Longest Name is: gnome-initial-setup.
The shortest Name is: lp.
documentation

arr=(`cat /etc/passwd | cut -d : -f1`) #extracting usernames
echo ${arr[@]}
longlength=${#arr[0]} 
smalllength=${#arr[0]}
var1=0
var2=0
for i in `seq 1 $((${#arr[@]}-1))` #considering all the usernames in array
do
    if [ ${#arr[i]} -gt $longlength ] #cheking longest username
    then
        var1=$i
        longlength=${#arr[i]}
    fi
    if [ ${#arr[i]} -lt $smalllength ]  #cheking shortest username
    then
        var2=$i                           
        smalllength=${#arr[i]}
    fi
done
echo "The Longest Name is: ${arr[var1]}."
echo "The shortest Name is: ${arr[var2]}."
