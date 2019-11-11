#!/bin/bash

a=0

for var in "$@"
do
	if [[ -e "$var" ]]
	then
		if [[ -d "$var" ]]
		then
			ls -l -id "$var"
		else
			ls -l -i "$var"
		fi
	else
		let "a = 1"
	fi
 done

exit $a
