#! /bin/bash

# whatever you type here are considered as commands. Hence, if you type here a directory, it tries to take it as a command and says, it's a directory and not a command.
# $1 and $2 are always parameters. Even if you disable, it will work.
# $1
# $2

var1=$( tar -cvvf backup0.tar -g snap-i $1)
var2=$( gzip backup0.tar )
var3=$( mv backup0.tar.gz snap-i $2)

echo $#
echo $1 
