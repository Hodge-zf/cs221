#!/bin/bash

if [ "$#" -ne 1 ]
then
	echo "Incorrect number of parameters"
	exit 1
fi

if [ $1 == 2 ]
then
	echo "Prime"
	exit 0
elif [ $1 -lt 2 ]
then
	echo "Not prime"
	exit 0
else
	for((i = 2; i<$(($1/2)); i++))
	do
		if [ $(($1%i)) -eq 0 ]
		then
			echo "$1 is not prime"
			exit 0
		fi
	done
	echo "$1 is prime"
fi
exit 0

