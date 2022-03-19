#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date: 18/09/2021
discription:Write a script to print system information using commands

./13_system_info.sh
1. Currently logged users
2. Your shell directory
3. Home directory
4. OS name & version
5. Current working directory
6. Number of users logged in
7. Show all available shells in your system
8. Hard disk information
9. CPU information.
10. Memory Informations
11. File system information.
12. Currently running process.
Enter the choice : 2
Your shell directory is /bin/bash
Do you want to continue (y/n) ? n

documentation


choice=y
while [ $choice == y ]                    #Cheking if user want to continue again or not
do
    echo "    1. Currently logged users
    2. Your shell directory
    3. Home directory
    4. OS name & version
    5. Current working directory
    6. Number of users logged in
    7. Show all available shells in your system
    8. Hard disk information
    9. CPU information.
    10. Memory Informations
    11. File system information.
    12. Currently running process."

    read -p "Enter the choice: " num      #reading the choice

    case $num in                          #selecting the choice and printing output accordingly
        1)
            whoami
            ;;
        2)
            echo $SHELL
            ;;
        3)
            echo $HOME
            ;;
        4)
            uname -a
            ;;
        5)
            echo $PWD
            ;;
        6)
            w
            ;;
        7)
            cat /etc/shells
            ;;
        8)
            df -h
            ;;
        9)
            cat /proc/cpuinfo
            ;;
        10)
            cat /proc/meminfo
            ;;
        11)
            cat /proc/filesystems
            ;;
        12)
            ps
            ;;
        *)
            echo "please enter a valid input"          #printing if invalid input is passed
    esac
    read -p "do you want to continue (y/n): " choice    #reading if user want to continue again
done
