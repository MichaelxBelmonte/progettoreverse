// Function: FUN_01a94560
// Address: 01a94560
// Size: 1487 bytes
// Class: MUAudioSourceSeparationPrefCtrl


void FUN_01a94560(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong *plVar6;
  undefined7 uVar10;
  ulonglong uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  bool bVar11;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  undefined4 local_5c;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d6f370();
  plVar6 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027bf420;
  local_58 = plVar6;
  if (DAT_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar5;
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  uVar3 = FUN_00d710b0(&local_100,&local_110);
  plVar6 = local_40;
  if (local_40 == (longlong *)0x0) {
    lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    plVar6 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar3 = FUN_00d50b00();
      lVar5 = 0;
      local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01a9464b;
      uVar3 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_50 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    lVar5 = 0;
  }
LAB_01a9464b:
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_48 = plVar6;
  if ((char)lVar5 != '\0') {
    FUN_00b7b410();
    (**(code **)(*local_70 + 0x368))();
    plVar1 = local_40;
    uVar10 = (undefined7)((ulonglong)plVar6 >> 8);
    if (local_40 == plVar6) {
      if (local_40 == (longlong *)0x0) {
        uVar7 = local_50 & 0xffffffff;
      }
      else {
        if (local_38 != '\0') goto LAB_01a946dd;
        uVar7 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
LAB_01a94740:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar10,1);
        if (((byte)local_50 & local_48 != (longlong *)0x0) == 1) {
          local_48 = plVar1;
          FUN_00d50b20();
        }
        else {
          local_48 = plVar1;
        }
        goto LAB_01a94740;
      }
      bVar11 = plVar6 != (longlong *)0x0;
      plVar6 = plVar1;
      if (((byte)local_50 & bVar11) == 1) {
        local_48 = local_40;
        FUN_00d50b20();
      }
LAB_01a946dd:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar10,1);
      local_48 = plVar6;
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = DAT_027bf420;
    local_f0 = local_48;
    local_e8 = '\0';
    if (DAT_027bf420 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar5;
    local_d8 = '\x01';
    (**(code **)(*local_58 + 0x80))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d71400();
    local_50 = uVar7 & 0xffffffff;
  }
  local_c8 = '\0';
  local_d0 = local_48;
  FUN_00cddf30();
  (**(code **)(*local_70 + 0x470))();
  plVar6 = local_40;
  if (local_40 == (longlong *)0x0) {
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar4 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01a9486b;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    uVar4 = 0;
  }
LAB_01a9486b:
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = plVar6;
  local_b8 = '\0';
  local_5c = uVar4;
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x968))();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x6a8))();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027bf450;
  if (DAT_027bf450 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar5;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  pplVar8 = &local_40;
  FUN_00d704d0(&local_90,&local_a0);
  plVar1 = local_40;
  FUN_00053ac0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01a94998;
  }
  pplVar8 = (longlong **)&DAT_02802688;
LAB_01a94998:
  plVar9 = local_58;
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x78);
    FUN_013941f0();
    (**(code **)(*plVar1 + 0x918))();
    FUN_00d6f370();
    FUN_013941f0();
    local_80 = DAT_027bf450;
    if (DAT_027bf450 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d707b0();
    plVar9 = local_58;
    cVar2 = (char)local_5c;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = *(longlong **)(unaff_RDI + 0x78);
    FUN_00d45870();
    (**(code **)(*plVar1 + 0x918))();
    FUN_00d50b20();
    cVar2 = (char)local_5c;
  }
  if (cVar2 == '\0' && plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


