#!/bin/sh
str=$(ifconfig | grep -w inet | cut -d " " -f2);
if [ -z "$str" ]; then
echo "I am lost!"
else
ifconfig | grep -w inet | cut -d " " -f2
fi 