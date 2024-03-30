#include <stdio.h>
#include <unistd.h>

#include "devices.h"
#include "rv32.h"

FILE *ddtout;
devices* dev;
rv32* cpu;

int main() {
    ddtout = stdout;
    uint32_t insn;

    while (scanf("%x", &insn) == 1) {
	cpu->printInsn(insn);
    }
}
