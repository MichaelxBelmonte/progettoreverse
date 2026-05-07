// Function: FUN_01d3d460
// Address: 01d3d460
// Size: 513 bytes
// Class: Unknown

void FUN_01d3d460(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t local_80;
  char local_78;
  int64_t local_60;
  char local_58;
  
  if (g_028b80e0 != 0) {
    lVar1 = *(int64_t *)(*(int64_t *)(g_028b80e0 + 0x10) + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar6 = *(uint *)(lVar1 + 0xc);
    if ((uint64_t)uVar6 != 0) {
      g_02802f88 = g_02802f88 + 1;
      if (0 < (int)uVar6) {
        lVar7 = (uint64_t)uVar6 + 1;
        do {
          uVar6 = uVar6 - 1;
          lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar6 * 8);
          FUN_00df2bc0();
          lVar3 = g_027efeb0;
          if (g_027efeb0 != 0) {
            FUN_00d50b00();
          }
          FUN_000175c0();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0) {
            local_58 = '\0';
            cVar4 = FUN_00d24090();
            local_60 = lVar2;
            if (cVar4 == '\0') {
              FUN_00df2ce0();
            }
          }
          lVar7 = lVar7 + -1;
        } while (1 < lVar7);
      }
      lVar7 = g_028b80f0;
      g_02802f88 = g_02802f88 + -1;
      if (g_02802f88 == 0) {
        if (g_028b80f0 != 0) {
          for (iVar5 = 0; iVar5 < *(int *)(lVar7 + 0xc); iVar5 = iVar5 + 1) {
            FUN_01d3d2c0();
          }
          FUN_01d42e40();
        }
        FUN_00d216c0();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

