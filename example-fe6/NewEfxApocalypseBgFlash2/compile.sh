#!/bin/bash

#arm-none-eabi-gcc -mthumb -mthumb-interwork -mcpu=arm7tdmi -O2 -c $* 
# cpp $1 | ~/fireemblem8u/tools/agbcc/bin/agbcc -mthumb-interwork -O2 -fhex-asm -o ${1%c*}s
arm-none-eabi-cpp -I . -nostdinc -undef $1 | iconv -f UTF-8 -t CP932 | ~/fe6/tools/agbcc/bin/old_agbcc -g -mthumb-interwork -Wimplicit -Wparentheses -Werror -fhex-asm -ffix-debug-line -O2 -o ${1%c*}s
arm-none-eabi-as -mthumb -mthumb-interwork -mcpu=arm7tdmi ${1%c*}s -o $3
