#!/bin/bash
# run.sh - Wrapper script for running binaries with arguments

BIN_DIR="./bin"
PROGRAM=$1
shift   # Remove the program name from arguments

if [ -z "$PROGRAM" ]; then
    echo "Usage: $0 <program> [arguments]"
    exit 1
fi

if [ -f "$BIN_DIR/$PROGRAM" ]; then
    "$BIN_DIR/$PROGRAM" "$@"
else
    echo "Binary not found: $BIN_DIR/$PROGRAM"
    exit 1
fi
