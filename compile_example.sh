#!/bin/bash
arm-none-eabi-as -mthumb -mthumb-interwork -mcpu=arm7tdmi $1/target.s -o $1/target.o
