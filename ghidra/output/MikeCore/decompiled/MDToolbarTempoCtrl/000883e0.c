// Function: FUN_000883e0
// Address: 000883e0
// Size: 589 bytes
// Class: MDToolbarTempoCtrl


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000883e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  double dVar6;
  undefined8 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_026d8938;
  if ((*(longlong *)(unaff_RDI + 0xa0) != 0) && (*(longlong *)(unaff_RDI + 0x10) != 0)) {
    if (DAT_026d8938 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar6 * DAT_023907c0);
    dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar4 = (byte)(((longlong)dVar6 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar2;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((lVar3 != 0 & bVar4) == 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x478))();
      }
    }
    else {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        plVar1 = *(longlong **)(unaff_RDI + 0x10);
        lVar2 = *(longlong *)(unaff_RDI + 0xa0);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar2;
        (**(code **)(*plVar1 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_0008a6e0();
  return;
}


