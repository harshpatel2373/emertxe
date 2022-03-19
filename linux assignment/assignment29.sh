#!/bin/bash

<<documentation
Name: Harsh Dineshkumar Patel
Date:23/09/2021
description: Display the names of any file-system which have less than 10% free space available. assignment 29

1. ./29_free_space.sh
list of all filesystem
Filesystem udev tmpfs /dev/sda1 tmpfs tmpfs tmpfs emertxe tmpfs tmpfs
Filesystem /dev/sda1 have less than 10% free space
documentation

arr=(`df | tr -s [:space:] | cut -d "%" -f1 | cut -d " " -f5`)   #used space
arr1=(`df | tr -s [:space:] | cut -d " " -f1`)
echo "list of all filesystem"
echo ${arr1[@]}
for i in `seq 1 $((${#arr1[@]}-1))`                                        #running loop to check file system present or not
do
    if [[ `echo "${arr[i]}>90" | bc` -eq 1 ]]                              #file system present than information will be printed
    then
        echo "Filesystem ${arr1[i]} have less than 10% free space"
    fi
done
