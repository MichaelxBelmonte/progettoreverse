// Function: FUN_01d1d260
// Address: 01d1d260
// Size: 761 bytes
// Class: GNPopUpButton

uint64_t FUN_01d1d260(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((char)this_ptr[6] == '\0') {
    uVar4 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  }
  else {
    FUN_01ccad60();
    if (local_40 == 0) {
      lVar5 = 0;
      if (local_38 != '\0') {
        lVar5 = 0;
      }
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_01e10550();
    lVar1 = g_027e7c20;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
      lVar1 = g_027e7c20;
    }
    g_027e7c20 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*this_ptr + 0x4d8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_01e10550();
      if (local_40 == 0) {
        bVar6 = false;
      }
      else {
        FUN_01e10550();
        iVar3 = FUN_00d8c7a0();
        bVar6 = iVar3 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if (bVar6) {
        FUN_01e10550();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d8dab0();
        bVar6 = local_40 != 0;
        if (bVar6) {
          FUN_00d50b00();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar6 = false;
        local_40 = 0;
      }
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d0))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 6) = 0;
      uVar4 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
      if ((bVar6) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}

