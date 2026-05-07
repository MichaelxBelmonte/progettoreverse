// Function: FUN_002a8ee0
// Address: 002a8ee0
// Size: 1551 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

uint64_t FUN_002a8ee0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *arg1;
  uint uVar11;
  double dVar12;
  uint64_t local_b8;
  char local_b0;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  plVar1 = (int64_t *)*arg1;
  if ((g_026fddb0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026e0ab8 = FUN_00015ff0();
    g_026e0aa0 = "MDMetaWindowController";
    g_026e0aa8 = 0x198;
    g_026e0ab0 = FUN_0006dea0;
    g_026e0ac0 = 0;
    ram_00000000026e0ac8 = 0;
    g_026e0ad0 = 0;
    g_026e0b48 = 0;
    ram_00000000026e0b50 = 0;
    g_026e0b58 = 0;
    g_026e0b5a = 1;
    g_026e0ad8 = 0;
    ram_00000000026e0ae0 = 0;
    g_026e0ae8 = 0;
    ram_00000000026e0af0 = 0;
    g_026e0af8 = 0;
    ram_00000000026e0b00 = 0;
    g_026e0b08 = 0;
    ram_00000000026e0b10 = 0;
    g_026e0b18 = 0;
    ram_00000000026e0b20 = 0;
    g_026e0b28 = 0;
    ram_00000000026e0b30 = 0;
    g_026e0b38 = 0;
    ram_00000000026e0b40 = 0;
    g_026e0b63 = 0;
    g_026e0b5b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002a8f2c:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002a8f2c;
  }
  plVar1 = (int64_t *)*arg1;
  lVar3 = arg1[1];
  if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5f8))();
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x610))();
  if (local_b0 == '\0') {
    if (local_b8 != 0) {
      FUN_00d50b00();
      goto LAB_002a8ff9;
    }
  }
  else if (local_b8 != 0) {
LAB_002a8ff9:
    uVar10 = local_b8;
    if (0 < *(int *)(local_b8 + 0xc)) {
      uVar11 = 0;
      do {
        plVar4 = local_60;
        plVar2 = *(int64_t **)(*(int64_t *)(local_b8 + 0x10) + (uint64_t)uVar11 * 8);
        cVar5 = (**(code **)(*plVar2 + 0x478))();
        if (cVar5 == '\0') goto LAB_002a904e;
        (**(code **)(*plVar2 + 0x610))();
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_002a90e0;
          }
        }
        else if (local_60 != (int64_t *)0x0) {
LAB_002a90e0:
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_48 = -1;
          while( true ) {
            lVar9 = (int64_t)local_48;
            local_48 = local_48 + 1;
            if (*(int *)((int64_t)plVar4 + 0xc) <= local_48) break;
            local_60 = *(int64_t **)(plVar4[2] + 8 + lVar9 * 8);
            uVar7 = FUN_00d23d70();
            uVar10 = (uint64_t)uVar7;
            if ((char)uVar7 == '\0') {
              FUN_000e3600();
              FUN_00d50b20();
              goto LAB_002a93bb;
            }
          }
          FUN_000e3600();
          FUN_00d50b20();
        }
        lVar9 = g_026f6fa0;
        if (g_026f6fa0 != 0) {
          FUN_00d50b00();
        }
        dVar12 = (double)FUN_00e7d6f0();
        uVar10 = (uint64_t)(dVar12 * g_023907c0);
        dVar12 = dVar12 * g_023907c0 - g_023907c8;
        FUN_0071a120();
        if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        bVar6 = (byte)(((int64_t)dVar12 & (int64_t)uVar10 >> 0x3f | uVar10) / 3);
        FUN_000175c0();
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        if (local_60 != (int64_t *)0x0) {
          local_58 = '\0';
          bVar6 = FUN_00c70bc0();
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != (int64_t *)0x0 & bVar6) == 0) {
          uVar10 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
LAB_002a9414:
          FUN_002b3090();
          goto LAB_002a93c9;
        }
        FUN_01f27fe0();
        iVar8 = (**(code **)(*local_60 + 0x5b8))();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar8 == 0) {
          (**(code **)(*plVar2 + 0x4f8))();
          cVar5 = (**(code **)(*plVar2 + 0x478))();
          if (cVar5 != '\0') {
LAB_002a9412:
            uVar10 = 0;
            goto LAB_002a9414;
          }
        }
        else if (iVar8 == 1) goto LAB_002a9412;
LAB_002a904e:
        uVar11 = uVar11 + 1;
        uVar10 = local_b8;
      } while ((int)uVar11 < *(int *)(local_b8 + 0xc));
    }
LAB_002a93bb:
    FUN_002b3090();
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
LAB_002a93c9:
    FUN_00d50b20();
    goto LAB_002a93d5;
  }
  uVar10 = CONCAT71((int7)(local_b8 >> 8),1);
LAB_002a93d5:
  if (local_b8 != 0) {
    FUN_00d50b20();
  }
  if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return uVar10 & 0xffffffff;
}

