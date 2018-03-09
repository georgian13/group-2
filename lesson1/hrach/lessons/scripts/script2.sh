#!/bin/bash
cd ../output/U1
echo "U1: a.txt: $(cat  a.txt) "
cd U2/U3
echo "U2: a.txt: $(cat  a.txt) "
echo "U1: b.txt: $(cat  b.txt) "


