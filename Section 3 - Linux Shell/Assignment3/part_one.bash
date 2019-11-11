#!/bin/bash

if [ "$#" -ne 3 ]
then
	echo "Incorrect number of parameters"
	exit 1
fi
if [ $3 = "+" ] 
then
	echo "The result is: $(($1+$2))"	
elif [ $3 = "x" ] 
then
	echo "The result is: $(($1*$2))"
elif [ $3 = "^" ]
then
	echo "The result is: $(($1**$2))"
else
	echo "invalid string passed"
	exit 1
fi
