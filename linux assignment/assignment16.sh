#!/bin/bash
<<documentation
Name: Harsh Dineshkumar Patel
Date:20/09/2021
Description= Given album name and corresponding directory, this scripts renames the jpg files with new name passed through command line. assignment 16

1. ./16_rename_album.sh day_out
DSN001.jpg DSN002.jpg DSN003.jpg DSN004.jpg DSN005.jpg
All .jpg files in current directory are renamed as
day_out001.jpg day_out002.jpg day_out003.jpg day_out005.jpg day_out004.jpg

2. ./16_rename_album.sh
Error : Please pass the prefix name through command line.

documentation

if [ $# -eq 1 ]                    #cheking if the CLA are passed or not
then
    ls *.jpg               
    for i in `ls *.jpg`            #considering all jpg file and changing name
    do
        num=`echo $i | tr -cd [:digit:]`
        mv $i $1$num.jpg
    done
    echo "All .jpg files in current directory are renamed as"
    ls *.jpg
else
    echo "Error : Please pass the prefix name through command line."
fi
