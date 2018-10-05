#!/bin/bash

if [ $# -eq 0 ]
then
	echo " No arguments supplied "

else

var1=$( tar -cvvf backup0.tar -g snap-i $1)
var2=$( gzip backup0.tar )
var3=$( mv backup0.tar.gz snap-i $2)


fi

echo $#
echo $1 
