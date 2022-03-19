#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:20/09/2021
description: Count the number of users with user IDs between given range.

1. ./30_user_ids.sh
Total count of user ID between 500 to 10000 is: 2

2. ./30_user_ids.sh 0 100
Total count of user ID between 0 to 100 is : 16

3. ./30_user_ids.sh 100
Error : Please pass 2 arguments through CL.

4. ./30_user_ids.sh 200 100
Error : Invalid range. Please enter the valid range through CL.

documentation

arr=(`cat /etc/passwd |cut -d : -f3`)          #storing user id in array
count=0
a=$1
b=$2
if [ $# -eq 2 -o $# -eq 0 ]                    #cheking arguments are 2 or 0
then
    if [ $# -eq 0 ]                            #if arraguments are zero then predefined range is assigned
    then
        a=500
        b=10000
    fi
    if [ $1 -lt $2 ]                          # cheking if first CLA is less than second
    then
        for i in ${arr[@]}                    #running loop to chek every user id
        do
            if [ $i -gt $a -a $i -lt $b ]     #if user id falls in range count is incremented
            then
                let count=count+1
            fi
        done
        echo "Total count of user ID between $a to $b is : $count"
    else
        echo "Error : Invalid range. Please enter the valid range through CL"
    fi
else
    echo "Error : Please pass 2 arguments through CL."
fi
