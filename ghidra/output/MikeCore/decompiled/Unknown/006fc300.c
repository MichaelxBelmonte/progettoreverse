// Function: FUN_006fc300
// Address: 006fc300
// Size: 1130 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_006fc300(void)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  double dVar8;
  undefined8 uVar9;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  if (unaff_RSI[2] != 0) {
    FUN_00d50b00();
    local_68 = DAT_026f6fd0;
    if (DAT_026f6fd0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar8 * DAT_023907c0);
    dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
    uVar9 = FUN_0071a120();
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar9 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar8 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_50 = local_68;
    local_48 = '\0';
    FUN_000175c0(uVar9,&local_50);
    plVar2 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38[0] = '\0';
      local_40 = plVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar2 != (longlong *)0x0 & bVar3) != 0) {
      lVar1 = unaff_RSI[2];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_002eacb0();
      if (lVar1 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_006f3f00();
    FUN_0078b9c0();
    FUN_00d23310();
    pcVar7 = &local_88;
    if (local_38[0] != '\0') {
      pcVar7 = local_38;
    }
    local_88 = local_38[0];
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = 0;
    if ((local_88 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_60 = local_40;
    local_58 = '\x01';
    FUN_000ba510();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_70 == '\0') {
      return unaff_RDI;
    }
    if (local_78 == (longlong *)0x0) {
      return unaff_RDI;
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x5d8))();
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_006fc64f;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_006fc64f:
    FUN_0063f230();
    plVar2 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_0063f230();
      FUN_0021a630();
      uVar9 = (**(code **)(*local_78 + 0xe28))();
      plVar2 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_40 = plVar2;
      local_38[0] = '\0';
      FUN_00d214d0(uVar9,*(undefined4 *)((longlong)puVar6 + 0xc));
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
        FUN_00d50b20();
      }
    }
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return unaff_RDI;
  }
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


