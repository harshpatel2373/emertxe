#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:23/09/2021
description: Write a script that locks down file permissions for a particular directory. assignment 28
1. ./assignment28 dir2
Before locking
total 4
-rw-r--r-- 1 emertxe emertxe    0 Sep 22 18:02 123.txt
-rw-r--r-- 1 emertxe emertxe    0 Sep 22 17:52 assignment28.sh
-rw-r--r-- 1 emertxe emertxe    0 Sep 22 18:02 file.txt
drwxr-xr-x 2 emertxe emertxe 4096 Sep 22 18:02 harsh

After locking
total 4
-rw------- 1 emertxe emertxe    0 Sep 22 18:02 123.txt
-rw------- 1 emertxe emertxe    0 Sep 22 17:52 assignment28.sh
-rw------- 1 emertxe emertxe    0 Sep 22 18:02 file.txt
drwx------ 2 emertxe emertxe 4096 Sep 22 18:02 harsh
2. ./assignment28 
Error : Please pass command line argument
documentation

if [ $# -ne 0 ]          #checking cla passed or not
then
    if [ -d $1 ]         #check if it is a directory
    then
        echo "Before locking"
        cd $1
        ls -l            
        cd - &>/dev/null
        echo
        chmod -R go-rwx $1      #recursively changing permission of group and other
        echo "After locking"
        cd $1
        ls -l
        cd - &>/dev/null
    else
        echo "Error : Please pass the directory in command line"
    fi
else
    echo "Error : Please pass command line argument"
fi
