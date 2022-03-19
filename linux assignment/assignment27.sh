#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:23/09/2021
Description: WAS to print contents of a directory without ls command. assignment 27

1. ./27_output_ls.sh
/home/user/ECEP/Linux:
Class Lab
2. ./27_ouput_ls.sh ~ ~/ECEP
/home/user:
Downloads Documents Desktop Music Pictures Public Videos ECEP
/home/user/ECEP:
Linux Advnc_C 
3. ./27_ouput_ls.sh Test
Cannot access ‘Test’ : No such a file or directory.
documentation

if [ $# -eq 0 ]           #if cla is not passed than print contetnt of current working directory
then
    echo $PWD
    echo *
else
for i in $@              #taking all the directory provided
do
    if [ -d $i ]        #cheking if it is a directory
    then
        cd $i
        echo $PWD
        echo *
        cd - &>/dev/null
    else
        echo "Cannot access ‘$i’ : No such a file or directory."
    fi
done
fi
