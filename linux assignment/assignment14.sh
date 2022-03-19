#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date: 20/09/2021
description: Write a script to rename a file/directory replaced by lower/upper case letters. assignment 14
output
1. ./assignment14
assign1 FILE.txt HARSH.txt
Files are rename in lowercase and directories are renamed in upper case
ASSIGN1 file.txt harsh.txt

documentation

echo `ls`

for var in `ls`
do
    if [ $0 != $var ]                                 # it will show error if file to be executed is in pwd so not considering that
    then
        if [ -f $var ]                                #cheking if it is file
        then
            mv $var `echo $var | tr [A-Z] [a-z]`      #converting upper case to lower
        fi
        if [ -d $var ]                                #cheking if it is directory
        then  
            mv $var `echo $var | tr [a-z] [A-Z]`      #converting lower case to upper
        fi
    fi
done
echo "Files are rename in lowercase and directories are renamed in upper case"
echo `ls` 
