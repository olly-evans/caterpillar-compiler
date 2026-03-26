#!/bin/bash

PASS=0
FAIL=0

for test_dir in tests/cases/*/; do
    input="$test_dir/input.txt"
    expected="$test_dir/expected.txt"
    name=$(basename "$test_dir")

    # Assembly file must have same name as test directory.
    asm="output/$(basename $test_dir).s"

    # Run compiler
    ./bin/compiler < "$input" > output