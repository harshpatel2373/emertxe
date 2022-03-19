#!/bin/bash
<<documentation
Name: Harsh DIneshkumar Patel
Date:20/09/2021
description: WAS to calculate the BMI

1. ./34_BMI.sh
Enter the weight in Kg : 45.5
Enter the height in meters : 1.5
you are Normal.

2. ./34_BMI.sh
Enter the weight in Kg : 45.5
Enter the height in meters : -1.5
Please enter only positive values

documentation

read -p "Enter the weight in Kg : " weight
read -p "Enter the height in meters : " height

if [ `echo "$weight>0"|bc` -eq 1 -a `echo "$height>0"|bc` -eq 1 ]        #cheking entered number positive or negative
then
    bmi=`echo "$weight/($height*$height)" | bc`      #calculating bmi

    if [ `echo "$bmi<=18.5"|bc` -eq 1 ]                      #cheking if it is underweight,normal,overweight,obese
    then
        echo "you are underweight"
    elif [ `echo "$bmi>18.5"|bc` -eq 1 -a `echo "$bmi<=25"|bc` -eq 1 ]
    then
        echo "you are normal"
    elif [ `echo "$bmi>=25"|bc` -eq 1 -a `echo "$bmi<30"|bc` -eq 1 ]
    then
        echo "you are overweight"
    elif [ `echo "$bmi>=30"|bc` -eq 1 ]                      #cheking if it is underweight,normal,overweight,obese
    then
        echo "you are obese"
    fi
else
    echo "Please enter only positive values"
fi
        

