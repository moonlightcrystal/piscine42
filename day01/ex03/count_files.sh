#!/bin/sh
find . | grep -v '/\.' | wc -l | tr -d " "
