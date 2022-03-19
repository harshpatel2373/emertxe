#!/bin/bash
<<documentation 
Name: Harsh Dineshkumar Patel
Date: 18/09/2021
Description: Write a script for generating random 8-character passwords including alpha numeric characters. Assignment 20
output: randomaly genrated password is 8bfy&01'
documentation


password=`cat /dev/urandom | tr -cd [:print:]| fold -w8 | head -n1`

echo "randomaly genrated password is $password"
