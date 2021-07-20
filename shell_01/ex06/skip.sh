#!/bin/sh
ls -l | awk 'FNR%2!=0{print $0}'
