#!/bin/bash
if [ $# -eq 2 ]
then
	
	filename=$1		# First argument is saved to fn
	input=$2		# Second argument is saved to input
	if [ -f $filename ]
	then
		echo "$2" >> $filename
		echo "$(tail $filename)" > $filename
		cat $filename
	else
		echo "File illedey"
	fi
fi
