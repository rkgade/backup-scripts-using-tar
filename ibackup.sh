#! /bin/bash

$1
$2

var1=$( tar -cvvf backup0.tar -g snap-i $1)
var2=$( gzip backup0.tar )
var3=$( mv backup0.tar.gz snap-i $2)

echo $#
echo $1 
