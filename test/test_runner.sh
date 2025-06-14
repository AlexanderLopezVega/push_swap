#!/usr/bin/bash

# Make all tests
make all

# Run all tests
for file in ./bin/*; do
    if [[ -x "$file" && -f "$file" ]]; then
        "$file"
    fi
done