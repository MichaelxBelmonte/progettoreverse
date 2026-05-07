// Function: FUN_00780df0
// Address: 00780df0
// Size: 1236 bytes
// Class: MDEditorViewController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00780df0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  double dVar8;
  undefined8 uVar9;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026f6fa0;
  if (DAT_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar8 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar8 * DAT_023907c0);
  dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
  uVar9 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  bVar5 = (byte)(((longlong)dVar8 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar9,&local_50);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar3;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0 & bVar5) != 0) {
    lVar1 = unaff_RDI[0xc];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x460))();
    local_80 = local_50;
    local_78 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_78 = '\x01';
    (**(code **)(*unaff_RDI + 0x458))();
    local_70 = local_90;
    local_68 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      lVar2 = unaff_RDI[0xd];
    }
    else {
      local_88 = '\0';
      lVar2 = unaff_RDI[0xd];
    }
    local_68 = '\x01';
    if (lVar2 != 0) {
      local_68 = '\x01';
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_c0 = lVar2;
    FUN_01f53880(&local_70,&local_80,&local_c0);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*unaff_RDI + 0x468))();
      plVar4 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = plVar4;
      local_a8 = '\0';
      cVar6 = (**(code **)(*plVar3 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((cVar6 == '\0') || (cVar6 = FUN_00780680(), cVar6 != '\0')) {
        local_a0 = plVar3;
        local_98 = '\0';
        (**(code **)(*unaff_RDI + 0x470))();
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00756ee0();
        (**(code **)(*unaff_RDI + 0x5f0))();
        plVar3 = local_40;
        (**(code **)(*unaff_RDI + 0x628))();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        (**(code **)(*plVar3 + 0x648))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d349f0();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}


