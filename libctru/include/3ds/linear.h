#pragma once

// Functions for allocating/deallocating memory from linear heap
void* linearAlloc(size_t size);
void* linearRealloc(void* mem, size_t size);
void linearFree(void* mem);
u32 linearSpaceFree(); // get free linear space in bytes
