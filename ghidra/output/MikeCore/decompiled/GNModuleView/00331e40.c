// Function: FUN_00331e40
// Address: 00331e40
// Size: 672 bytes
// Class: GNModuleView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00331e40(void)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  double dVar6;
  undefined8 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026e1810;
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    if (DAT_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar6 * DAT_023907c0);
    dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
    uVar7 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar6 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar1;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar2 != (longlong *)0x0 & bVar3) == 1) {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar4 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x140) + 0x478))();
        FUN_0032d440();
      }
    }
    else {
      FUN_01e40eb0();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        FUN_01e53c20();
        plVar2 = local_40;
        local_48 = 0;
        local_50 = *(longlong *)(unaff_RDI + 0x140);
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        (**(code **)(*plVar2 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


