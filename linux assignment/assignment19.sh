#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:23/09/2021
Description: Write a script to delete all the .swp files found in your system or directory. assignment 19

1. ./19_delete_display_swp.sh
swp file found :
./emertxe/dir2/harsh.swp
./emertxe/hasrh.swp

2. ./19_delete_display_swp.sh Test/
Cannot access Test : No such a file or directory.

3. ./19_delete_display_swp.sh testdir
No swp files found in testdir.

documentation


if [ $# -eq 0 ]           #if cla is not passed than print all swp files
then
    cd ~
    echo "swp files found :"
    find . -name *.swp 
    cd - &>/dev/null
else
    for i in $@              #taking all the directory provided
    do
        if [ -d $i ]        #cheking if it is a directory
        then
            cd $i
            var=(`find . -name *.swp`)           #cheking swp files in the PWD
            if [ ${#var} -eq 0 ]                 
            then
                echo "No swp files found in $i."
            else
                find . -name *.swp -delete 
                echo "deleted all swp files present in $i."
            fi
            cd - &>/dev/null
        else
        echo "Cannot access $i : No such a file or directory."
        fi
    done
fi
