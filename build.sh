#! /bin/bash

rm -r build
cmake -B build -S . -G Ninja
cmake --build build --target all
