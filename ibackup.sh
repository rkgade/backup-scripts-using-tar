#!/bin/bash

if [ $# -eq 0 ]
then
	echo " No arguments supplied "

elif [ -e "$1" ]
 then 
	if [ -e "$2" ]
	then
		var1=$( tar -cvvf backup0.tar -g snap-i $1) 
       	        var2=$( gzip backup0.tar )  
	        var3=$( mv backup0.tar.gz snap-i $2)

	else

        mkdir $2	
        var1=$( tar -cvvf backup0.tar -g snap-i $1) 
       	var2=$( gzip backup0.tar )  
	var3=$( mv backup0.tar.gz snap-i $2) 
        
        fi
       
else

       	echo "The file that has to be backed up doesen't exist"
fi

echo $#

