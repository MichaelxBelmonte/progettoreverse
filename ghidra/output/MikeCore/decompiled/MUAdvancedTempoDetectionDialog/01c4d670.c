// Function: FUN_01c4d670
// Address: 01c4d670
// Size: 1225 bytes
// Class: MUAdvancedTempoDetectionDialog


void FUN_01c4d670(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_d0;
  undefined1 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  int local_58;
  undefined8 local_54;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  
  if (*(int *)(unaff_RDI + 0x1c8) == 1) {
    lVar7 = *(longlong *)(unaff_RDI + 0x1d8);
    if (lVar7 == 0) {
      local_78 = 0;
      lVar7 = 0;
    }
    else {
      local_78 = 0;
      uVar2 = FUN_00d50b00();
      local_78 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar5 = *(longlong *)(unaff_RDI + 0x1d8);
    *(longlong **)(unaff_RDI + 0x1d8) = plVar3;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x200);
    uVar4 = (ulonglong)*(uint *)(lVar5 + 0xc);
    local_38 = lVar7;
    if (0 < (int)*(uint *)(lVar5 + 0xc)) {
      uVar8 = 0;
      do {
        local_c0 = uVar8 + 1;
        if ((longlong)local_c0 < (longlong)(int)uVar4) {
          local_b8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 8 + uVar8 * 8);
        }
        else {
          local_b8 = 0;
        }
        uVar9 = FUN_01c82aa0();
        local_90 = 0;
        local_98 = CONCAT71(uStack_47,local_48);
        if (local_40 == '\0') {
          if (local_98 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = '\x01';
        FUN_01c4de00(uVar9,&local_98);
        plVar3 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *plVar3 = (longlong)&DAT_0266d110;
          plVar3[2] = (longlong)&DAT_0266da38;
          FUN_00d500e0();
        }
        else {
          FUN_01c82aa0();
          plVar1 = (longlong *)CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68[0] = '\0';
          local_70 = plVar1;
          FUN_00ca13a0();
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        local_d0 = local_b8;
        local_c8 = 0;
        FUN_01c4c1c0(param_1,param_2,&local_d0,uVar8 & 0xffffffff);
        local_a8 = '\0';
        local_b0 = plVar3;
        uVar9 = FUN_01c82aa0();
        local_88 = local_70;
        local_80 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (longlong *)0x0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_80 = '\x01';
        FUN_01c4deb0(uVar9,&local_88);
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(unaff_RDI + 0x200);
        uVar4 = (ulonglong)*(int *)(lVar5 + 0xc);
        uVar8 = local_c0;
      } while ((longlong)local_c0 < (longlong)uVar4);
    }
    lVar7 = local_38;
    FUN_01c464b0();
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x1d8);
    if (lVar7 == 0) {
      return;
    }
    local_78 = 0;
    uVar2 = FUN_00d50b00();
    local_78 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  if (lVar7 == 0) {
    return;
  }
  FUN_00ca1380();
  plVar3 = local_70;
  pcVar6 = &local_48;
  if (local_68[0] != '\0') {
    pcVar6 = local_68;
  }
  local_48 = local_68[0];
  *pcVar6 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (plVar3 == (longlong *)0x0) goto LAB_01c4db45;
    FUN_00d50b00();
  }
  else if (plVar3 == (longlong *)0x0) goto LAB_01c4db45;
  local_68[0] = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar3;
  local_54 = 0;
  for (lVar7 = 0; local_58 = (int)lVar7, local_58 < *(int *)((longlong)plVar3 + 0xc);
      lVar7 = lVar7 + 1) {
    local_70 = *(longlong **)(plVar3[2] + lVar7 * 8);
    (**(code **)(*local_70 + 0x478))();
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_01c4db45:
  FUN_00ca1340();
  if ((char)local_78 != '\0') {
    FUN_00d50b20();
  }
  return;
}


