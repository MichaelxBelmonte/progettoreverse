// Function: FUN_000ef7c0
// Address: 000ef7c0
// Size: 800 bytes
// Class: MDMetaWindowController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ef7c0(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong unaff_RDI;
  longlong *plVar4;
  double dVar5;
  undefined8 uVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026e1800;
  if (DAT_026e1800 != 0) {
    FUN_00d50b00();
  }
  dVar5 = (double)FUN_00e7d6f0();
  uVar3 = (ulonglong)(dVar5 * DAT_023907c0);
  dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
  uVar6 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  bVar2 = (byte)(((longlong)dVar5 & (longlong)uVar3 >> 0x3f | uVar3) / 3);
  local_70 = lVar1;
  local_68 = '\0';
  FUN_000175c0(uVar6,&local_70);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar4;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((plVar4 != (longlong *)0x0 & bVar2) == 0) {
    FUN_01e40eb0();
    plVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_01e53c20();
      plVar4 = local_40;
      local_48 = 0;
      local_50 = *(longlong *)(unaff_RDI + 0x78);
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      (**(code **)(*plVar4 + 0x450))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) goto LAB_000ef9e5;
    plVar4 = *(longlong **)(unaff_RDI + 0x70);
  }
  else {
    FUN_01e40eb0();
    plVar4 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (longlong *)0x0) {
      FUN_01e53c20();
      plVar4 = local_40;
      local_58 = 0;
      local_60 = *(longlong *)(unaff_RDI + 0x70);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*plVar4 + 0x450))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) goto LAB_000ef9e5;
    plVar4 = *(longlong **)(unaff_RDI + 0x78);
  }
  (**(code **)(*plVar4 + 0x478))();
LAB_000ef9e5:
  FUN_000ee8f0();
  return;
}


