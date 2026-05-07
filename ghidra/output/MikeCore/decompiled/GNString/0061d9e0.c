// Function: FUN_0061d9e0
// Address: 0061d9e0
// Size: 1286 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0061d9e0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong **pplVar8;
  longlong *plVar9;
  double dVar10;
  undefined8 uVar11;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026f6fa0;
  local_5c = param_2;
  if (DAT_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar10 = (double)FUN_00e7d6f0();
  uVar7 = (ulonglong)(dVar10 * DAT_023907c0);
  dVar10 = dVar10 * DAT_023907c0 - _DAT_023907c8;
  uVar11 = FUN_0071a120();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar5 = (byte)(((longlong)dVar10 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  plVar9 = local_40;
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
  if (plVar9 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar9;
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
  bVar5 = plVar9 != (longlong *)0x0 & bVar5;
  if (bVar5 == 0) goto LAB_0061de1c;
  FUN_01caeae0();
  plVar9 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (longlong *)0x0) {
    local_58 = 0;
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_01caeae0();
    uVar11 = FUN_01d66da0();
    local_a0 = DAT_02726cf0;
    if (DAT_02726cf0 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_98 = '\x01';
    pplVar8 = &local_40;
    uVar11 = FUN_000175c0(uVar11,&local_a0);
    plVar9 = local_40;
    uVar11 = CONCAT71((int7)((ulonglong)uVar11 >> 8),DAT_026fd0c0);
    if ((DAT_026fd0c0 == '\0') && (uVar11 = ___cxa_guard_acquire(), (int)uVar11 != 0)) {
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
      uVar11 = ___cxa_guard_release();
    }
    if (plVar9 == (longlong *)0x0) {
LAB_0061dc0e:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      uVar11 = FUN_00e85ea0();
      if ((char)uVar11 == '\0') goto LAB_0061dc0e;
    }
    plVar9 = *pplVar8;
    if (plVar9 == (longlong *)0x0) {
      local_58 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        uVar11 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      local_58 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_0141b1a0();
  plVar3 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_5c != '\0') && (plVar9 != (longlong *)0x0)) {
    local_90 = plVar3;
    local_88 = '\0';
    cVar6 = (**(code **)(*plVar9 + 0x50))();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') {
      local_78 = '\0';
      local_80 = plVar9;
      FUN_0141b400();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      FUN_002813d0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01caeae0();
  plVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_01caeae0();
    local_70 = plVar3;
    local_68 = '\0';
    (**(code **)(*plVar9 + 0x50))();
    FUN_01d66ab0();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0061de1c:
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),bVar5) & 0xffffffff;
}


