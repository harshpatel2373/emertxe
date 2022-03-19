#!/bin/bash
<<documentation
Name:Harsh Dineshkumar Patel
Date:24/09/2021
Description: Write a script to replace 20% lines in a C file randomly and replace it with the pattern. asignment 33
1. ./33_replace<DEL>.sh main.c
Before replacing
#include<stdio.h>
int main()
{
    int num;
    printf("enter the integer\n");
    scanf("%d", &num);
    printf("interger is %d\n",num);
    return 0;
}
After replacing
#include<stdio.h>
int main()
{
    int num;
    printf("enter the integer\n");
    scanf("%d", &num);
    printf("interger is %d\n",num);
<--delete-->
}
2. ./33_replace<DEL>.sh main1.c
Error : No such a file.
3. ./33_replace<DEL>.sh main2.c
Error : main2.c is empty file. So can’t replace the string.
4. ./33_replace<DEL>.sh
Error : Please pass the file name through command line.
documentation
if [ $# -eq 1 ]         #cheking CLA passed or not
then
    if [ -f $1 ]        #cheking if it is a file or not
    then
        if [ -s $1 ]    #cheking file empty or not
        then
            var=`cat $1 | wc -l`
            echo "Before replacing"
            cat $1
            if [ $var -gt 5 ]          #checking file has atleast 5 lines or nit
            then
                lines=`echo "(2*$var)/10" | bc` 
                for i in `seq $lines`          #randomly replacing line with predefined pattern
                do
                    ran=`shuf -i 1-$var -n 1`
                    sed -i "$ran s/.*/<--delete-->/" $1
                done
                echo "After replacing"
                cat $1
            else
                echo "Please enter file with atleast 5 lines"
            fi
        else
            echo "Error : $1 is empty file. So can’t replace the string."
        fi
    else
        echo "Error : No such a file."
    fi
else
    echo "Error : Please pass the file name through command line"
fi
