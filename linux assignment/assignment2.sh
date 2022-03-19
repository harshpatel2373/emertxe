#!/bin/bash

read -p "enter the number to genrate pattern: " num
count=0

if [ $num -gt 2 -a $num -lt `echo "2^5" | bc` ]
then
for row in `seq $num` 
do  
    for col in `seq $row` 
    do
       let  count=count+1
       echo -n  "$count "
   done
   echo
done
else
    echo "numbere entered is not in range"
fi
