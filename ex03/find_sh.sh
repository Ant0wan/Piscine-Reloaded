#!/bin/sh
find . \( -name '*.sh' \) -print | rev | cut -d "." -f 2 | cut -d "/" -f 1 | rev
