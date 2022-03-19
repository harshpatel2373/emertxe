#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:23/09/2021
description: Use pipes or redirection to create an infinite feedback loop. assignment 24
1. ./24_redirection.sh
Before loop file contents
Hai hello
After loop file contents
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
Hai hello
documentation

echo "Hai hello">file.txt                      #redirecting hai hello to file
echo "Before loop file contents"
cat file.txt
echo "After loop file contents"
tail -f file.txt>>file.txt |tail -f file.txt   #creating infinite loop
