#!/bin/bash
<<documentation
Name=Harsh Dineshkumar Patel
Date:27/09/2021
Description: Write a script to sort a given number in ascending or descending order
1. ./12_sorting.sh -a 5 4 6 2 3 8 9 7 1
Ascending order of array is 1 2 3 4 5 6 7 8 9
2. ./12_sorting.sh -d 5 4 6 2 3 8 9 7 1
descending order of array is 9 8 6 5 4 3 2 1
3. ./12_sorting.sh 5 4 6 2 3 8 9 7 1
Error : Please pass the choice.
4. ./12_sorting.sh
Error : Please pass the argument through command line.
documentation
temp=0
arr=($@)
if [ $# -ne 0 ]            #cheking CLA is passed or not
then
    if [[ ${arr[0]} = "-a" ]] #cheking it is ascending or descending
    then
        for i in `seq 1 ${#arr[@]}`  #considering every element except -a
        do
            for j in `seq 1 ${#arr[@]}`  
            do
                if [[ ${arr[i]} -lt  ${arr[j]} ]] #arranging in ascending order
                then 
                    temp="${arr[i]}"
                    arr[$i]="${arr[j]}"
                    arr[$j]="$temp"
                fi
            done
        done
        echo "Ascending order of array is ${arr[@]:1:${#arr[@]}}"
    elif [[ ${arr[0]} = "-d" ]]           #cheking if it is descending
    then
        for i in `seq 1 ${#arr[@]}`      #considering every element of array except -d
        do
            for j in `seq 1 ${#arr[@]}`
            do
                if [[ ${arr[i]} -gt  ${arr[j]} ]]   #arranging in descending order
                then 
                    temp="${arr[i]}"
                    arr[$i]="${arr[j]}"
                    arr[$j]="$temp"
                fi
            done
        done
        echo "descending order of array is ${arr[@]:1:${#arr[@]}}"
    else
        echo "Error : Please pass the choice."
    fi
else
    echo "Error : Please pass the argument through command line."
fi
