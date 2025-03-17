#!/bin/zsh

if [ -z "$1" ]; then
 echo "Нет аргумента"
 exit 1
fi

if [ -f "$1" ]; then
 number=$(wc -l < "$1")
 uniqNumber=$(awk '{print $1}' "$1" | sort | uniq | wc -l)
 shaNumber=$(awk '{print $8}' "$1" | uniq | wc -l)
 echo "$number $uniqNumber $shaNumber"
else
 echo "Файл не существует!"
fi
