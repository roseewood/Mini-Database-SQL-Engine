#include <stdio.h>
#include "kernel.h"
#include "memory.h"

int memory[MEMORY_SIZE];
int page_table[MAX_PROCESSES];

void init_memory() {
    for (int i = 0; i < MEMORY_SIZE; i++)
        memory[i] = 0;

    for (int i = 0; i < MAX_PROCESSES; i++)
        page_table[i] = -1;
}

void allocate_page(int pid) {
    for (int i = 0; i < MEMORY_SIZE; i += PAGE_SIZE) {
        if (memory[i] == 0) {
            memory[i] = pid;
            page_table[pid - 1] = i;
            printf("Allocated page at %d to PID %d\n", i, pid);
            return;
        }
    }
    printf("Memory Full\n");
}

void show_memory() {
    for (int i = 0; i < MEMORY_SIZE; i += PAGE_SIZE) {
        printf("Page %d: PID %d\n", i, memory[i]);
    }
}