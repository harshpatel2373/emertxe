#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date: 20/09/2021
discription: Shell script to convert string lower to upper and upper to lower. assignment 22
1../23_upper_lower.sh file.txt1 
  1– Lower to upper
  2 – Upper to lower
  Please select option : 2
  what is your name
  my name is harsh

2../23_upper_lower.sh file.txt1 
  1– Lower to upper
  2 – Upper to lower
  Please select option : 1
  WHAT IS YOUR NAME
  MY NAME IS HARSH

3./23_upper_lower.sh fle.txt
  Error : file is not exist.

4../23_upper_lower.sh file1.txt 
  Error : No contents inside the file.

5../23_upper_lower.sh
  Error : Please pass the file name through command line.
documentation

if [ $# -gt 0 ]                                             #cheking CLA passed or not
then
    if [ -f $1 ]                                            #cheking if file exist or not
    then
        if [ -s $1 ]                                        #cheking if file has content or not
        then
            echo "1 – Lower to upper"
            echo "2 – Upper to lower"
            read -p "Please select option : " num           #reading the choice from the user 
            if [ $num -eq 1 ]                               #executing if choice is 1
            then
                cat $1| tr [a-z] [A-Z]
            elif [ $num -eq 2 ]                             #executing if choice is 2
            then
                cat $1| tr [A-Z] [a-z]
            else
                echo "enter valid input."
            fi
        else
            echo "Error : No contents inside the file."
        fi
    else
        echo "Error : file is not exist."
    fi
else
    echo "Error : Please pass the file name through command line."
fi
