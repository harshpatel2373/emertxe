#!/bin/bash
<<documentation
Name: Harsh dineshkumar patel
date:18/09/2021
discription: Write a script to print chess board. assignment11
documentation

for i in `seq 8`                                 #for printing 8 rows of chess board
do
    let count=count+1
    for j in `seq 8`                            #for printing 8 column of chess board
    do
        let count=count+1
        if [ `echo "$count%2" | bc` -eq 0 ]      #if count is even then print black else white
        then
            echo -e -n "\e[40m" " "              #black colour
        else
            echo -e -n "\e[47m" " "              #white colour
        fi
    done
    echo -e -n "\e[0m" " "                       #normal colour
    echo                                         #new line
done
