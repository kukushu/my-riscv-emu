#include "rvemu.h"

void machine_load_program (machine_t * machine, char * prog) {
    int fd = open(prog, O_RDONLY);
    if (fd == -1) {
        fatal(strerror(errno));
    }
    mmu_load_elf(&machine->mmu, fd);
    close(fd);

    machine->state.pc = (u64)machine->mmu.entry;
}