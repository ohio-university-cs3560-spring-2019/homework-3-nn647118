#!/bin/bash

for filename in $1; do
	sed -i '$a\' "$filename"
done

wc $1 | ./hw5_count.py