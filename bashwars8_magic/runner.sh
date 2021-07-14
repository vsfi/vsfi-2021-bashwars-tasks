#!/bin/bash 
if [[ -z $1 ]]; then echo "$0 flag flag2 flag3"; exit; fi
if [[ -z $2 ]]; then echo "$0 flag flag2 flag3"; exit; fi
if [[ -z $3 ]]; then echo "$0 flag flag2 flag3"; exit; fi

./test.sh $1 $2 $3