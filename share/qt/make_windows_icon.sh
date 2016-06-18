#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/PrimeChain.png
ICON_DST=../../src/qt/res/icons/PrimeChain.ico
convert ${ICON_SRC} -resize 16x16 PrimeChain-16.png
convert ${ICON_SRC} -resize 32x32 PrimeChain-32.png
convert ${ICON_SRC} -resize 48x48 PrimeChain-48.png
convert PrimeChain-48.png PrimeChain-32.png PrimeChain-16.png ${ICON_DST}

