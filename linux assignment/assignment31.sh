#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date: 27/09/2021
Description: For each directory in the $PATH, display the number of executable files in that directory. assignment 31
1. ./31_executable_path.sh
/usr/local/sbin
current count: 0
/usr/local/bin
current count: 0
/usr/sbin
current count: 165
/usr/bin
current count: 1225
/sbin
current count: 152
/bin
current count: 142
/usr/games
current count: 1
/usr/local/games
current count: 0
/home/emertxe/emertxe
current count: 4
/opt/microchip/xc8/v2.20/bin
current count: 6
/opt/microchip/xc8/v2.20/bin
current count: 6
Total-1701
documentation

arr=(`echo $PATH | tr ":" "\n"`)  #fetching all the paths 
total=0
for i in ${arr[@]}                #cheking each path one by one
do 
    count=0
    cd $i

    for j in `ls`                #considering all the files in the path
    do
        if [ -x $j ]             #cheking if file is exceutable or not
        then
            count=$(($count+1))  #increasing count for every executable file 
        fi
    done
    pwd
    echo current count: $count
    total=$(($total+$count))
    cd - 2>&1 >/dev/null          #changing to previous working directory
done
echo Total-$total
