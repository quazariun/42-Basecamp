#!/bin/sh
find -type f \( -name '*.sh' \) | rev | sed 's|/.*||g' | rev | sed 's|\.sh||g'
