#!/bin/bash


for i in `seq 8`
do
    let count=count+1
    for j in `seq 8`
    do
        let count=count+1
        if [ `echo "$count%2" | bc` -eq 0 ]
        then
            echo -e -n "\e[40m" " "
        else
            echo -e -n "\e[47m" " "
        fi
    done
    echo -e -n "\e[0m" " "
    echo 
done
