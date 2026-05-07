// Function: FUN_006eae60
// Address: 006eae60
// Size: 1302 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"

void FUN_006eae60(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  char local_70;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  plVar9 = this_ptr;
  do {
    (**(code **)(*plVar9 + 0x370))();
    if (local_48 == plVar9) {
      if (((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_006eaef7;
      }
    }
    else {
      plVar9 = local_48;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar7 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar7 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_006eaef7:
        local_38[0] = '\x01';
        pcVar7 = local_40;
      }
      *pcVar7 = '\0';
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((g_026fddb0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    plVar8 = &g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar8 = (int64_t *)&stack0xffffffffffffff88;
      if (cVar5 == '\0') {
        plVar8 = &g_02802688;
      }
    }
    if (*plVar8 != 0) {
      plVar8 = plVar9;
      if ((local_38[0] == '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      goto joined_r0x006eb06c;
    }
  } while (plVar9 != (int64_t *)0x0);
  plVar8 = (int64_t *)0x0;
joined_r0x006eb06c:
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    return;
  }
  FUN_0063f230();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_006eb367;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_006eb367;
  FUN_01d77960();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_006eb119;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_006eb119:
    uVar10 = FUN_002218b0();
    if (local_48 == (int64_t *)0x0) {
      cVar5 = '\0';
    }
    else {
      FUN_002218b0();
      cVar5 = FUN_00751ba0();
      uVar10 = extraout_XMM0_Da;
      if ((local_70 != '\0') && (plVar9 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar4 = g_02708f10;
    lVar3 = g_02708ea0;
    plVar9 = local_48;
    if (cVar5 == '\0') {
      if (g_02708f10 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_88 = lVar4;
      local_80 = '\x01';
      FUN_01d5e6e0(uVar10,&local_88);
      if (local_48 == (int64_t *)0x0) {
        bVar1 = true;
        plVar9 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar1 = false;
          bVar2 = true;
          if ((local_40[0] == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_006eb2a8;
          FUN_00d50b20();
        }
        else {
          local_40[0] = '\0';
        }
        bVar2 = true;
        bVar1 = false;
      }
LAB_006eb2a8:
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        FUN_01d66e50();
      }
    }
    else {
      if (g_02708ea0 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_98 = lVar3;
      local_90 = '\x01';
      FUN_01d5e6e0(uVar10,&local_98);
      if (local_48 == (int64_t *)0x0) {
        bVar1 = true;
        plVar9 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar1 = false;
          bVar2 = true;
          if ((local_40[0] == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_006eb25a;
          FUN_00d50b20();
        }
        else {
          local_40[0] = '\0';
        }
        bVar2 = true;
        bVar1 = false;
      }
LAB_006eb25a:
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar1) {
        FUN_01d66e50();
      }
    }
    plVar8 = (int64_t *)this_ptr[0xe];
    FUN_0021a630();
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    (**(code **)(*plVar8 + 0xa20))();
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_006eb367:
  FUN_00d50b20();
  return;
}

