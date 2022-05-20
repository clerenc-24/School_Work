#! /usr/bin/env python3
import sys
argc = len(sys.argv)
for i in range(0, argc):
    print("argv[%i] : \"%s\"" % ( i, sys.argv[i]))
    
