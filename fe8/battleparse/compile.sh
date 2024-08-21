#!/bin/bash

# arm-none-eabi-cpp -I . -nostdinc -undef $1 | iconv -f UTF-8 -t CP932 | ~/fe6/tools/agbcc/bin/old_agbcc -g -mthumb-interwork -Wimplicit -Wparentheses -Werror -fhex-asm -ffix-debug-line -O2 -o ${1%c*}s
# arm-none-eabi-as -mthumb -mthumb-interwork -mcpu=arm7tdmi ${1%c*}s -o $3

arm-none-eabi-cpp -I . -nostdinc -undef $1 |  ~/fireemblem8u/tools/agbcc/bin/agbcc -mthumb-interwork -Wimplicit -Wparentheses -Wall -Werror -O2 -fhex-asm -g  -g3 -ffix-debug-line -o ${1%c*}s
arm-none-eabi-as -mthumb -mthumb-interwork -mcpu=arm7tdmi ${1%c*}s -o $3

# cc -E -iquote . -nostdinc -undef $1 | iconv -f UTF-8 -t CP932 | ~/fireemblem8u/tools/agbcc/bin/agbcc -mthumb-interwork -Wimplicit -Wparentheses -Werror -O2 -fhex-asm -ffix-debug-line -g -o ${1%c*}s
# arm-none-eabi-as -mthumb -mthumb-interwork -mcpu=arm7tdmi ${1%c*}s -o $3
