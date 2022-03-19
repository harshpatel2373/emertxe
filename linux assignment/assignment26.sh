#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:23/09/2021
description: Write a script to determine whether a given file system or mount point is mounted. assignment 26

1. ./26_mounted_fs.sh /dev/sda1
File-system /dev/sda1 is mounted on / and it is having 80% used space with 3125172 kb free.

2. ./26_mounted_fs.sh /dev
/dev is not mounted.

3. ./26_mounted_fs.sh
Error : Please pass the name of the file-system through command line.

documentation

arr1=(`df|tr -s [:space:] | cut -d " " -f1`) #filesystem
arr2=(`df|tr -s [:space:] | cut -d " " -f6`) #mount point
arr3=(`df|tr -s [:space:] | cut -d " " -f5`) #used space
arr4=(`df|tr -s [:space:] | cut -d " " -f4`) #free space
count=0
if [ $# -eq  1 ]                             #cheking CLA passed or not
then 
    for i in `seq 0 $((${#arr1[@]}-1))`      #running loop to check file system present or not
    do
        if [ $1 = ${arr1[$i]} ]              #file system present than information will be printed
        then
            echo "File-system $1 is mounted on ${arr2[$i]} and it is having ${arr3[$i]} used space with ${arr4[$i]} kb free."
            let count=count+1
        fi
    done
    if [ $count -eq 0 ]                  #cheking file system mounted or not
    then
        echo "$1 is not mounted"
    fi
else
    echo "Error : Please pass the name of the file-system through command line."
fi
