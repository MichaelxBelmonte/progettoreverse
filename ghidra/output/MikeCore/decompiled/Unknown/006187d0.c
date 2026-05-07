// Function: FUN_006187d0
// Address: 006187d0
// Size: 500 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_006187d0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  longlong unaff_RDI;
  bool bVar7;
  double dVar8;
  undefined8 uVar9;
  longlong local_58;
  char local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6fa0;
  if (cVar3 == '\0') {
    local_44 = param_2;
    if (DAT_026f6fa0 != 0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar8 * DAT_023907c0);
    dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
    uVar9 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_58 = lVar1;
    local_50 = '\0';
    FUN_000175c0(uVar9,&local_58);
    plVar2 = local_40;
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
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar6 = (undefined7)((ulonglong)plVar2 >> 8);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (((plVar2 != (longlong *)0x0 & bVar4) != 0) &&
       (lVar1 = *(longlong *)(unaff_RDI + 0x80), lVar1 != 0)) {
      FUN_00d50b00();
      bVar7 = *(longlong *)(lVar1 + 0x308) == 0;
      uVar5 = CONCAT71(uVar6,bVar7);
      if ((bVar7) && ((char)local_44 != '\0')) {
        FUN_005366b0();
        uVar5 = CONCAT71(uVar6,1);
        FUN_005366c0();
      }
      FUN_00d50b20();
      goto LAB_006189b3;
    }
  }
  uVar5 = 0;
LAB_006189b3:
  return uVar5 & 0xffffffff;
}


