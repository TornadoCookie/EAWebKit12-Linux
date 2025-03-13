#!/bin/sh

for f in ../*;
do
    rm -f $(basename $f)
    ln -s $f/* $(basename $f)
done

rm build subprojects meson.build

