// Function: FUN_00336030
// Address: 00336030
// Size: 2809 bytes
// Class: MDEditorViewController


/* WARNING: Removing unreachable block (ram,0x003365d7) */
/* WARNING: Removing unreachable block (ram,0x003365e3) */
/* WARNING: Removing unreachable block (ram,0x003368dc) */
/* WARNING: Removing unreachable block (ram,0x003368e8) */
/* WARNING: Removing unreachable block (ram,0x00336627) */
/* WARNING: Removing unreachable block (ram,0x00336633) */

void FUN_00336030(undefined8 param_1,int param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_a0;
  char local_98;
  longlong *local_88;
  char local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  undefined8 local_50;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_88;
  while( true ) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    iVar9 = *(int *)((longlong)local_88 + 0xc);
    if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar9 == 0) break;
    (**(code **)(*unaff_RDI + 0x4a0))();
    FUN_00d23340();
    local_60 = local_80[0];
    pcVar5 = local_80;
    if (local_80[0] == '\0') {
      pcVar5 = &local_60;
    }
    *pcVar5 = '\0';
    if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_88 + 0x478))();
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar11 = DAT_02702940;
  if ((param_2 == 2) || (lVar11 = DAT_02702938, param_2 == 1)) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    uVar10 = CONCAT71((int7)((ulonglong)&local_40 >> 8),lVar11 != 0);
  }
  else {
    uVar10 = 0;
    lVar11 = 0;
  }
  FUN_000b6980();
  plVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0009d720();
  if (local_80[0] == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong *)*unaff_RSI != (longlong *)0x0) {
    local_80[0] = '\0';
    local_88 = (longlong *)0x0;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    local_78 = (longlong *)*unaff_RSI;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar9 = -local_70._4_4_;
        }
        else {
          iVar9 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar9);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
      lVar6 = (longlong)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar9) break;
      local_88 = *(longlong **)(local_78[2] + 8 + lVar6 * 8);
      local_38 = '\0';
      local_40 = local_88;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        local_38 = '\0';
        local_40 = local_88;
        FUN_00d23f50();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
  }
  pcVar1 = DAT_02677e28;
  if (plVar3 != (longlong *)0x0) {
    local_80[0] = '\0';
    local_88 = (longlong *)0x0;
    local_78 = plVar3;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_50 = uVar10;
    while( true ) {
      lVar6 = (longlong)(int)local_70;
      iVar9 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar9) break;
      local_88 = *(longlong **)(local_78[2] + 8 + lVar6 * 8);
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(plVar7 + 0x27) = 0;
      plVar7[0x2e] = 0;
      *(undefined4 *)(plVar7 + 0x2f) = 0;
      plVar7[0x30] = 0;
      *(undefined1 *)(plVar7 + 0x31) = 0;
      plVar7[0x28] = 0;
      plVar7[0x29] = 0;
      *(undefined4 *)(plVar7 + 0x2a) = 0;
      plVar7[0x2b] = 0;
      plVar7[0x2c] = 0;
      *(undefined8 *)((longlong)plVar7 + 0x165) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x18c) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x194) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x199) = 0;
      plVar7[0x35] = 0;
      plVar7[0x36] = 0;
      plVar7[0x37] = 0;
      plVar7[0x38] = 0;
      *plVar7 = (longlong)&DAT_02677e10;
      plVar7[2] = (longlong)&DAT_026788e8;
      plVar7[0x39] = (longlong)&DAT_02678928;
      *(undefined4 *)((longlong)plVar7 + 500) = 0;
      *(undefined1 *)(plVar7 + 0x3f) = 0;
      plVar7[0x43] = 0;
      plVar7[0x3c] = 0;
      plVar7[0x3d] = 0;
      plVar7[0x3a] = 0;
      plVar7[0x3b] = 0;
      *(undefined1 *)(plVar7 + 0x3e) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x1fc) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x204) = 0;
      *(undefined8 *)((longlong)plVar7 + 0x20c) = 0;
      (*pcVar1)();
      lVar6 = DAT_02702948;
      if (DAT_02702948 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar7 + 0xa10))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar7 + 0xa80))();
      if (local_68 == 0 && (int)local_70 == 0) {
        FUN_01cef4c0();
      }
      else if ((int)local_70 == *(int *)((longlong)local_78 + 0xc) + -1) {
        FUN_01cef4c0();
      }
      else {
        FUN_01cef4c0();
      }
      uVar12 = FUN_01e4ec80();
      plVar7 = DAT_02702950;
      if (DAT_02702950 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = plVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x450))();
      FUN_01e4ec80();
      uVar12 = FUN_00d46300();
      plVar7 = DAT_02702958;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          uVar12 = FUN_00d50b00();
          plVar7 = DAT_02702958;
        }
      }
      else {
        local_98 = '\0';
      }
      DAT_02702958 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar7;
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_01e4ec80();
      uVar12 = FUN_00d46300();
      plVar7 = DAT_02702960;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          uVar12 = FUN_00d50b00();
          plVar7 = DAT_02702960;
        }
      }
      else {
        local_98 = '\0';
      }
      DAT_02702960 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_38 = '\0';
      local_40 = plVar7;
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_a0 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      uVar12 = FUN_01e4ec80();
      plVar7 = DAT_02702968;
      if (DAT_02702968 != (longlong *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_40 = plVar7;
      local_38 = '\0';
      FUN_00ca0840(uVar12,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (local_70._4_4_ != 0) {
        if (local_70 < 0) {
          iVar9 = -local_70._4_4_;
        }
        else {
          local_70 = CONCAT44(local_70._4_4_,(int)local_70 - local_70._4_4_);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar9 = 0;
        }
        local_70 = CONCAT44(iVar9,(int)local_70);
      }
    }
    FUN_00018280();
    uVar10 = local_50;
  }
  FUN_003375f0();
  FUN_003372c0();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar6 = DAT_02702970;
  if (DAT_02702970 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fce70;
  local_110 = lVar6;
  local_108 = '\x01';
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar2;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_000bf690(&local_100,&local_110,&local_f0);
  plVar7 = (longlong *)unaff_RDI[0x32];
  plVar8 = plVar7;
  if (plVar7 == local_88) goto LAB_00336aad;
  plVar8 = local_88;
  if (local_80[0] == '\0') {
    if (local_88 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      goto LAB_00336a29;
    }
    FUN_00d50b00();
    plVar7 = (longlong *)unaff_RDI[0x32];
    unaff_RDI[0x32] = (longlong)local_88;
  }
  else {
    local_80[0] = '\0';
LAB_00336a29:
    unaff_RDI[0x32] = (longlong)plVar8;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar8 = local_88;
  }
LAB_00336aad:
  if ((local_80[0] != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)uVar10 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}


