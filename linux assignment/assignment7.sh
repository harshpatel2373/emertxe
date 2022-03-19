#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date: 16/09/2021
description: Write a script to delete empty lines from a file. assignment 7

1. ./07_delete_empty_lines.sh file.txt
Empty lines are deleted.

2. ./07_delete_empty_lines.sh
Please pass the file name through command line.

3. ./07_delete_empty_lines.sh file1.txt
file is empty.

4. ./07_delete_empty_lines.sh xyz.txt
file donot exist
documentation

if [ $# -ne 0 ]                                             #cheking CLA passed or not
then
    if [ -e $1 ]                                            #cheking if file exist or not
    then
        if [ -s $1 ]                                        #cheking file is having content or not
        then
            sed -i '/^$/d' $1                               #deleting empty lines 
            echo "Empty lines are deleted."
        else
            echo "file is empty."
        fi
    else
        echo "file donot exist."
    fi
else
    echo "Please pass the file name through command line."
fi
