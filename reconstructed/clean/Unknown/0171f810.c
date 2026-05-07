// Function: FUN_0171f810
// Address: 0171f810
// Size: 1968 bytes
// Class: Unknown
// String references:
//   " %@"
//   "%@"

void FUN_0171f810(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  byte bVar9;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar11;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  uint64_t extraout_XMM0_Qa_07;
  uint64_t extraout_XMM0_Qa_08;
  int64_t local_b8;
  char local_b0;
  int64_t *local_58;
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  iVar8 = FUN_00d8c7a0();
  if (iVar8 == 0) {
    bVar4 = false;
    plVar10 = (int64_t *)0x0;
  }
  else {
    iVar8 = FUN_00d8c7a0();
    FUN_00d8f140(extraout_XMM0_Qa,iVar8 + -1);
    plVar10 = local_50;
    if (local_50 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  iVar8 = FUN_00d8c7a0();
  if (iVar8 == 0) {
    bVar3 = false;
    local_58 = (int64_t *)0x0;
  }
  else {
    FUN_00d97ce0(extraout_XMM0_Qa_00,1);
    local_58 = local_50;
    if (local_50 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d93180();
    plVar2 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    dVar11 = (double)FUN_00d9ba10();
    bVar9 = 0;
    if (((dVar11 == g_023934d0) && (bVar9 = 0, !NAN(dVar11) && !NAN(g_023934d0))) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d93180();
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      dVar11 = (double)FUN_00d9ba10();
      if (local_b8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      dVar11 = (double)-(uint64_t)(dVar11 == g_023934d0);
      bVar9 = SUB81(dVar11,0) & 1;
    }
    if (plVar2 != (int64_t *)0x0) {
      dVar11 = (double)FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      dVar11 = (double)FUN_00d50b20();
    }
    lVar1 = g_02781610;
    if (bVar9 != 0) {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &g_024c5048;
      if (lVar1 != 0) {
        dVar11 = (double)FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(dVar11,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0171ff81;
    }
    if (g_02781610 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar10 + 0x50))();
    lVar5 = g_02781610;
    cVar7 = '\0';
    uVar12 = extraout_XMM0_Qa_01;
    if ((cVar6 != '\0') && (local_58 != (int64_t *)0x0)) {
      if (g_02781610 != 0) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*local_58 + 0x50))();
      uVar12 = extraout_XMM0_Qa_02;
      if (lVar5 != 0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar7 != '\0') {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &g_024c5048;
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(uVar12,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0171ff81;
    }
  }
  plVar2 = (int64_t *)*arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar2 + 0x50))();
  lVar5 = g_02781610;
  cVar7 = '\0';
  uVar12 = extraout_XMM0_Qa_03;
  if ((cVar6 != '\0') && (local_58 != (int64_t *)0x0)) {
    if (g_02781610 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_58 + 0x50))();
    uVar12 = extraout_XMM0_Qa_04;
    if (lVar5 != 0) {
      uVar12 = FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    uVar12 = FUN_00d50b20();
  }
  lVar1 = g_027cd570;
  if (cVar7 == '\0') {
    if (plVar10 != (int64_t *)0x0) {
      if (g_027cd570 != 0) {
        FUN_00d50b00();
      }
      cVar6 = (**(code **)(*plVar10 + 0x50))();
      lVar5 = g_027cd570;
      cVar7 = '\0';
      uVar12 = extraout_XMM0_Qa_05;
      if ((cVar6 != '\0') && (local_58 != (int64_t *)0x0)) {
        if (g_027cd570 != 0) {
          FUN_00d50b00();
        }
        cVar7 = (**(code **)(*local_58 + 0x50))();
        uVar12 = extraout_XMM0_Qa_06;
        if (lVar5 != 0) {
          uVar12 = FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b20();
      }
      if (cVar7 != '\0') {
        lVar1 = *param_2;
        local_48 = 1;
        local_50 = &g_024c5048;
        if (lVar1 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar1;
        FUN_00d94d80(uVar12,&local_50);
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0171ff81;
      }
    }
    plVar2 = (int64_t *)*arg1;
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar2 + 0x50))();
    lVar5 = g_027cd570;
    cVar7 = '\0';
    uVar12 = extraout_XMM0_Qa_07;
    if ((cVar6 != '\0') && (local_58 != (int64_t *)0x0)) {
      if (g_027cd570 != 0) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*local_58 + 0x50))();
      uVar12 = extraout_XMM0_Qa_08;
      if (lVar5 != 0) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar7 == '\0') {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &g_024c5048;
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(uVar12,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *param_2;
      local_48 = 1;
      local_50 = &g_024c5048;
      if (lVar1 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_00d94d80(uVar12,&local_50);
      local_50 = &g_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    lVar1 = *param_2;
    local_48 = 1;
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00d94d80(uVar12,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_0171ff81:
  if ((bVar3) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

