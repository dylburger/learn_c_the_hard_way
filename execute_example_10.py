#!/usr/bin/env python

""" Execute our ex10 program with as many command line args as possible
    Learn a bit more about the subprocess module
"""
import sys
import subprocess32 as subprocess

NUM_ARGS = 100000

# Create our argument list
command = ['./ex10']
command.extend(['arg' for el in range(NUM_ARGS)])
subprocess.call(command)

sys.exit(0)
