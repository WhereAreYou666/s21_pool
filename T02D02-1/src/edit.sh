#!bin/bash

LOG_FILE="files.log"
path=""
oldString=""
newString=""

while getopts ":p:o:n:" opt; do
    case $opt in
        p) path="$OPTARG"
        ;;
        o) oldString="$OPTARG"
        ;;
        n) newString="$OPTARG"
        ;;
        \?) echo "Incorrect params -$OPTARG" >&3
        exit 1
        ;;
        :) echo "Argument (-$OPTARG) doesn'enter" >&3
        exit 1
        ;;
    esac
done

if [ -z "$path" ] || [ -z "$oldString" ] || [ -z "$newString" ]; then
    echo "Incorrect command, check args"
    exit 1
fi

if [ ! -r $path ]; then
    echo "File ($path) does't exist"
    exit 1
fi

if [ ! -r "$path" ]; then
    echo "Error: Acces denied. File: '$path'."
    echo "Get access right...."
    chmod +r $path
fi

sed -i "s/${oldString}/${newString}/g" "$path"

size=$(stat -c%s "$path")
date=$(date +"%Y-%m-%d %H:%M")
sha=$(sha256sum < $path)
echo "src/$path - $size - $date - $sha  sha256" >> $LOG_FILE
