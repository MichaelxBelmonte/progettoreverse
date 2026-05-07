// Function: FUN_0064cb40
// Address: 0064cb40
// Size: 900 bytes
// Class: MDDocumentViewController
// String references:
//   "MDDocumentViewController"

uint64_t FUN_0064cb40(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int64_t *arg1;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar12;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (int64_t *)*arg1;
  if ((g_026d8470 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    g_026fe6b8 = FUN_00015ff0();
    g_026fe6a0 = "MDDocumentViewController";
    g_026fe6a8 = 0x100;
    g_026fe6b0 = FUN_00082e10;
    g_026fe6c0 = 0;
    ram_00000000026fe6c8 = 0;
    g_026fe6d0 = 0;
    g_026fe748 = 0;
    ram_00000000026fe750 = 0;
    g_026fe758 = 0;
    g_026fe75a = 1;
    g_026fe6d8 = 0;
    ram_00000000026fe6e0 = 0;
    g_026fe6e8 = 0;
    ram_00000000026fe6f0 = 0;
    g_026fe6f8 = 0;
    ram_00000000026fe700 = 0;
    g_026fe708 = 0;
    ram_00000000026fe710 = 0;
    g_026fe718 = 0;
    ram_00000000026fe720 = 0;
    g_026fe728 = 0;
    ram_00000000026fe730 = 0;
    g_026fe738 = 0;
    ram_00000000026fe740 = 0;
    g_026fe763 = 0;
    g_026fe75b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0064cb8c:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_0064cb8c;
  }
  plVar1 = (int64_t *)*arg1;
  lVar4 = arg1[1];
  if (((char)lVar4 == '\0') || (plVar1 == (int64_t *)0x0)) {
    if (plVar1 != (int64_t *)0x0) goto LAB_0064cbb7;
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
LAB_0064cbb7:
    FUN_00631670();
    plVar7 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar7) {
      FUN_00643590();
      FUN_00d23310();
      plVar1 = local_48;
      pcVar11 = local_38;
      if (local_40[0] != '\0') {
        pcVar11 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        cVar8 = FUN_00212c70();
        lVar6 = g_027259a0;
        if (cVar8 != '\0') {
          uVar12 = extraout_XMM0_Da;
          if (g_027259a0 != 0) {
            uVar12 = FUN_00d50b00();
          }
          lVar5 = g_026fe4a0;
          if (g_026fe4a0 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_58 = lVar5;
          local_50 = '\x01';
          FUN_01f6ca30(uVar12,&local_58);
          iVar9 = (**(code **)(*local_48 + 0x5e0))();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (iVar9 != 0) {
            FUN_00d50b20();
            bVar3 = false;
            arg1 = (int64_t *)0x0;
            goto LAB_0064cddc;
          }
          FUN_002218f0();
        }
        FUN_00d50b20();
      }
    }
    FUN_006f3f00();
    plVar1 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x610))();
    if (*(int *)((int64_t)local_48 + 0xc) == 1) {
      cVar8 = (**(code **)(*plVar1 + 0x478))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') goto LAB_0064cdc6;
      uVar10 = FUN_0064d070();
      arg1 = (int64_t *)(uint64_t)uVar10;
      bVar2 = false;
    }
    else {
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
LAB_0064cdc6:
      bVar2 = true;
      arg1 = (int64_t *)0x0;
    }
    FUN_00d50b20();
    bVar3 = false;
    if (!bVar2) goto LAB_0064cddc;
  }
  arg1 = (int64_t *)CONCAT71((int7)((uint64_t)arg1 >> 8),1);
LAB_0064cddc:
  if (((char)lVar4 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
  return (uint64_t)arg1 & 0xffffffff;
}

