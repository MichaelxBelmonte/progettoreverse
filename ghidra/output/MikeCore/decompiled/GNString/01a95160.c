// Function: FUN_01a95160
// Address: 01a95160
// Size: 1591 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01a95160(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong **pplVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38 [8];
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 == 0) goto LAB_01a956d9;
  FUN_00d6f370();
  local_110 = DAT_027bf420;
  if (DAT_027bf420 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  pplVar7 = &local_40;
  uVar3 = FUN_00d704d0(&local_100,&local_110);
  plVar8 = local_40;
  uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),DAT_026fd0c0);
  if ((DAT_026fd0c0 == '\0') && (uVar3 = ___cxa_guard_acquire(), (int)uVar3 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    uVar3 = ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_01a95218:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    uVar3 = FUN_00e85ea0();
    if ((char)uVar3 == '\0') goto LAB_01a95218;
  }
  plVar8 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar8 != (longlong *)0x0) {
      uVar3 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar3 = FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    uVar3 = FUN_00d50b20();
  }
  local_78 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    uVar3 = 0;
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (longlong)&DAT_0256ebe0;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    (*DAT_0256ebf8)();
    local_e8 = '\0';
    local_f0 = plVar8;
    (**(code **)(*plVar4 + 0x4d0))();
    uVar3 = CONCAT71((int7)((ulonglong)pplVar7 >> 8),1);
    if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_44 = 0;
  }
  local_d8 = '\0';
  local_d0 = 0;
  local_c8 = '\0';
  local_c0 = 0;
  local_b8 = '\0';
  local_e0 = plVar4;
  FUN_01f4f940(1,&local_d0,0,&local_c0);
  local_80 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    if (*(int *)((longlong)local_80 + 0xc) != 0) {
      local_60 = uVar3;
      FUN_00d23340();
      plVar8 = local_40;
      pcVar5 = local_38;
      if (local_38[0] == '\0') {
        pcVar5 = &local_58;
      }
      local_58 = local_38[0];
      *pcVar5 = '\0';
      if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 == '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*plVar8 + 0x3a0))();
      if (cVar2 == '\0') {
        (**(code **)(*plVar8 + 0x3f0))();
        if (plVar8 != local_40) {
          plVar8 = local_40;
          if (local_38[0] != '\0') {
            FUN_00d50b20();
            goto LAB_01a9552b;
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01a9552b:
      FUN_00d6f370();
      uVar9 = (**(code **)(*plVar8 + 0x368))();
      local_68 = 0;
      local_70 = CONCAT71(uStack_57,local_58);
      lVar1 = DAT_027bf420;
      if (local_50 == '\0') {
        if (local_70 != 0) {
          uVar9 = FUN_00d50b00();
          lVar1 = DAT_027bf420;
        }
      }
      else {
        local_50 = '\0';
      }
      local_68 = '\x01';
      DAT_027bf420 = lVar1;
      if (lVar1 != 0) {
        local_68 = '\x01';
        uVar9 = FUN_00d50b00();
      }
      local_a8 = '\x01';
      local_b0 = lVar1;
      FUN_00d6f570(uVar9,&local_b0);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d6f370();
      FUN_00d71400();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x5c0))();
      local_98 = '\0';
      local_88 = '\0';
      local_a0 = plVar4;
      local_90 = plVar8;
      FUN_013933a0();
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if ((char)local_44 == '\0' && plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01a956d9;
    }
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0' && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar6 = 0;
LAB_01a956d9:
  return uVar6 & 0xffffffff;
}


