// Function: FUN_01a66610
// Address: 01a66610
// Size: 696 bytes
// Class: MUTool

void FUN_01a66610(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar1 = g_027e3b40;
  if (g_027e3b40 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_38 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (cVar2 = FUN_0171c180(), cVar2 == '\0')) {
    FUN_00d3ecc0();
    lVar1 = g_027e3bc0;
    if (g_027e3bc0 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_38 + 0x50))();
    if (cVar2 == '\0') {
      bVar3 = false;
    }
    else {
      FUN_00d3ecf0();
      (**(code **)(*local_98 + 0x7b8))();
      (**(code **)(*this_ptr + 0x7b8))();
      bVar3 = local_a8 == local_b8;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      FUN_00d6f370();
      lVar1 = g_027e1360;
      if (g_027e1360 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d70f90(param_1,0);
      if (*(char *)((int64_t)this_ptr + 0x202) != cVar2) {
        *(char *)((int64_t)this_ptr + 0x202) = cVar2;
        (**(code **)(*this_ptr + 0x620))();
        if (this_ptr[0x37] != 0) {
          this_ptr[0x37] = 0;
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*this_ptr + 0x620))();
    if (this_ptr[0x37] != 0) {
      this_ptr[0x37] = 0;
      FUN_00d50b20();
    }
  }
  FUN_01b68a30();
  return;
}

