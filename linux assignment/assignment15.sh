#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:22/09/2021
Description: Write a script to rename current working directory with given name. assignment15
1. ./rename_cur_dir.sh dir1
/home/emertxe/emertxe/dir2
/home/emertxe/emertxe/dir1

2. ./rename_cur_dir.sh dir1
Error : Current directory name and Assign2 both are same, Please pass new name

3. ./rename_cur_dir.sh 
Error : Please pass the new directory name
documentation


var=$(basename `pwd`) #extracting name of current directory

if [ $# -eq 1 ]      #cheking if directory name is passed through CLA
then
    if [ $var != $1 ]  #cheking if the same name is not passed
    then 
        echo `pwd`
        mv ../$var ../$1
        cd .
        echo `pwd`
    else
        echo "Error : Current directory name and $1 both are same, Please pass new name"
    fi
else
    echo "Error : Please pass the new directory name"
fi
