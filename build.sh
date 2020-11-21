#!/bin/bash

set -euo pipefail

cd build

# Configure
cmake -DCODE_COVERAGE=ON -DCMAKE_BUILD_TYPE=Debug ..
# Build (for Make on Unix equivalent to `make -j $(nproc)`)
cmake --build . --target all --config Debug -- -j $(nproc)
cmake --build . --target soundex_test -- -j $(nproc)