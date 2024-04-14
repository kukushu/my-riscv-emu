#include "rvemu.h"


int main (int argc, char * argv[]) {
    assert (argc > 1);
     
    machine_t machine;
    machine_load_program(&machine, argv[1]);

    printf("entry : 0x%lx\n", machine.mmu.entry);

	return 0;
}

