#!/usr/bin/python
import sys

for line in sys.stdin:
	words = line.split()

print "Number of Lines = ", words[0]
print "Number of Words = ", words[1]
print "Number of Characters = ", words[2]