#!/bin/bash
###############################################################################
#
#                           Clean Build Script
#
###############################################################################
# 2013-01-14    P12104  :   created
###############################################################################
make O=./obj/KERNEL_OBJ/ clean

make O=./obj/KERNEL_OBJ/ clean
if [ -f ./mkbootimg/oscar/boot.img ]
then
    rm ./mkbootimg/oscar/boot.img
fi

if [ -f ./mkbootimg/oscar/zImage ]
then
    rm ./mkbootimg/oscar/zImage
fi

if [ -d ./obj/ ]
then
    rm -r ./obj/
fi
