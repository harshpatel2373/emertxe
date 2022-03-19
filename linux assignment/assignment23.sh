#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:20/09/2021
description: WAS to print the 5th line of a file passed through command line

1. ./23_print_fifth_line file.txt
Fifth line of file.txt:
My name is Harsh

2. ./23_print_fifth_line file1.txt
Error : file1.txt having only 2 lines. So can’t print 5 th line.

3. ./23_print_fifth_line file2.txt
Error : No such a file.

4. ./23_print_fifth_line
Error : Please pass the file name in command line.
documentation

if [ $# -ne 0 ]                               #cheking CLA passed or not
then
    if [ -f $1 ]                              #cheking file exist or not
    then
        if [ -s $1 ]                          #cheking file is empty or not
        then
            line=`cat $1 | wc -l`
            if [ $line -ge 5 ]                #cheking file is having lines more than 5
            then
                echo "Fifth line of $1: "
                cat $1 | head -5 | tail -1    #extracting 5th line of file
            else
                echo "Error : $1  having only $line lines. So can’t print 5 th line."
            fi
        else
            echo "Error : $1 is empty."
        fi
    else
        echo "Error : No such a file."
    fi
else
    echo "Error : Please pass the file name in command line."
fi
