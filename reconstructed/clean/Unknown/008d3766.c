// Function: FUN_008d3766
// Address: 008d3766
// Size: 525 bytes
// Class: Unknown

void FUN_008d3766(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  uint64_t arg1;
  int64_t *this_ptr;
  void*local_48;
  
  puVar2 = (void*)this_ptr[1];
  if ((uint64_t)((this_ptr[2] - (int64_t)puVar2 >> 7) * -0x5555555555555555) < arg1) {
    lVar1 = ((int64_t)puVar2 - *this_ptr >> 7) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaa < lVar1 + arg1) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008d3a1a(this_ptr + 2,lVar1);
    puVar2 = local_48 + arg1 * 0x30;
    do {
      *local_48 = &g_0251c2d0;
      ___bzero();
      local_48[0x27] = 0;
      local_48[0x26] = 0;
      local_48[0x25] = 0;
      local_48[0x24] = 0;
      local_48[0x23] = 0;
      *(void*)(local_48 + 0x28) = 0;
      local_48[0x29] = 0;
      local_48[0x2a] = 0;
      local_48[0x2b] = 0;
      local_48[0x2c] = 0;
      local_48[0x2d] = 0;
      local_48[0x2e] = 0;
      *(void*)(local_48 + 0x2f) = 0;
      local_48 = local_48 + 0x30;
    } while (puVar2 != local_48);
    FUN_008d398a();
    FUN_008d3a90();
  }
  else {
    puVar3 = puVar2;
    if (arg1 != 0) {
      puVar3 = puVar2 + arg1 * 0x30;
      do {
        *puVar2 = &g_0251c2d0;
        ___bzero();
        puVar2[0x27] = 0;
        puVar2[0x26] = 0;
        puVar2[0x25] = 0;
        puVar2[0x24] = 0;
        puVar2[0x23] = 0;
        *(void*)(puVar2 + 0x28) = 0;
        puVar2[0x29] = 0;
        puVar2[0x2a] = 0;
        puVar2[0x2b] = 0;
        puVar2[0x2c] = 0;
        puVar2[0x2d] = 0;
        puVar2[0x2e] = 0;
        *(void*)(puVar2 + 0x2f) = 0;
        puVar2 = puVar2 + 0x30;
      } while (puVar3 != puVar2);
    }
    this_ptr[1] = (int64_t)puVar3;
  }
  return;
}

