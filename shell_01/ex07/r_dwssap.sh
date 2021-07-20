#!/bin/sh
cat /etc/passwd | sed 's/:.*//g' | awk 'FNR%2==0{print $1}' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed ':INI;N;$!bINI;s/\n/, /g' | tr '\n' '.'
