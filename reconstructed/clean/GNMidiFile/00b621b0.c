// Function: FUN_00b621b0
// Address: 00b621b0
// Size: 637 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


uint64_t FUN_00b621b0(void)

{
  int64_t lVar1;
  byte bVar2;
  int iVar3;
  void*puVar4;
  void*unaff_RBX;
  uint64_t uVar5;
  byte unaff_SIL;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_78;
  char local_70;
  
  iVar3 = FUN_00b61c60();
  puVar4 = g_027630b8;
  if (*(int *)(this_ptr + 0x20) < iVar3) {
    if (g_027630b8 != (void*)0x0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    unaff_RBX = puVar4;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  *(byte *)(this_ptr + 0x58) = *(byte *)(this_ptr + 0x58) & 0xf;
  lVar1 = g_027630c0;
  bVar2 = unaff_SIL & 0xf0;
  if (0xef < unaff_SIL) {
    bVar2 = unaff_SIL;
  }
  if (bVar2 == 0xf0) {
    FUN_00b61d20();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_025683c0;
    (*g_025683d8)();
    uVar6 = FUN_00c92170();
    uVar6 = FUN_00c92190(uVar6,1);
    if (0 < iVar3) {
      FUN_00c92190(uVar6,iVar3);
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &g_02539e18;
    (*g_02539e30)();
    FUN_00b51c90();
    FUN_00b5d1a0(SUB84((double)*(int *)(this_ptr + 0x50) * *(double *)(this_ptr + 0x38),0));
    if ((*(char *)((int64_t)iVar3 + -1 + *(int64_t *)(this_ptr + 0x18)) != -9) &&
       (unaff_RBX = *(void**)(this_ptr + 0x60), unaff_RBX != puVar4)) {
      FUN_00d50b00();
      *(void**)(this_ptr + 0x60) = puVar4;
      if (unaff_RBX != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    uVar5 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    FUN_00d50b20();
  }
  else {
    if (bVar2 == 0xf7) {
      if (*(int64_t *)(this_ptr + 0x60) == 0) {
        *(int *)(this_ptr + 0x28) = *(int *)(this_ptr + 0x28) + 1;
      }
      else if (0 < iVar3) {
        uVar6 = FUN_00b51ee0();
        FUN_00c92190(uVar6,iVar3);
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((*(char *)(*(int64_t *)(this_ptr + 0x18) + (uint64_t)(iVar3 - 1)) == -9) &&
           (*(int64_t *)(this_ptr + 0x60) != 0)) {
          *(void*)(this_ptr + 0x60) = 0;
          FUN_00d50b20();
        }
      }
    }
    else {
      if (g_027630c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    uVar5 = 0;
  }
  FUN_00b61bc0();
  return uVar5 & 0xffffffff;
}

