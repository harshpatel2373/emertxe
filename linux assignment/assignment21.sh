#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:20/09/2021
discription: Write script called say_hello, which will print greetings based on time.assignment21
    Good moring Harsh, Have nice day!
    this is Monday, 20 in Sep of 2021 (07:41:03 AM IST) 
documentation


var=`date +%R | cut -d " " -f4 | cut -d ":" -f1`                                 #taking out present hour and storing in a variable 

if [ $var -ge 5 -a $var -lt 12 ]                                                 #cheking if it is morning
then
    echo "    Good moring Harsh, Have nice day!
    this is `date +%A`, `date +%d` in `date +%b` of `date +%Y` (`date +%r`) "
elif [ $var -ge 12 -a $var -lt 13 ]                                              #cheking if it is noon
then
    echo "    Good noon Harsh, Have nice day! 
    this is `date +%A`, `date +%d` in `date +%b` of `date +%Y` (`date +%r`)"
elif [ $var -ge 13 -a $var -lt 17 ]                                             #cheking if it is afternoon
then
    echo "    Good afternoon Harsh, Have nice day!
    this is `date +%A`, `date +%d` in `date +%b` of `date +%Y` (`date +%r`)"
elif [ $var -ge 17 -a $var -lt 21 ]                                             #cheking if it is evening
then
    echo "    Good evening Harsh, Have nice day!
    this is `date +%A`, `date +%d` in `date +%b` of `date +%Y` (`date +%r`)"
elif [ $var -ge 21 -a $var -lt 15 ]                                             #cheking if it is night
then
    echo "    Good night Harsh, Have nice day!
    this is `date +%A`, `date +%d` in `date +%b` of `date +%Y` (`date +%r`)"
fi

