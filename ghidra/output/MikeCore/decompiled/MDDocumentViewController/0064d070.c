// Function: FUN_0064d070
// Address: 0064d070
// Size: 500 bytes
// Class: MDDocumentViewController


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0064d070(void)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  double dVar7;
  undefined8 uVar8;
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
  dVar7 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar7 * DAT_023907c0);
  dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
  uVar8 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_60 = lVar1;
  local_58 = '\0';
  FUN_000175c0(uVar8,&local_60);
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
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  if ((plVar2 != (longlong *)0x0 & bVar3) != 0) {
    FUN_01f27fe0();
    local_50 = *unaff_RSI;
    local_48 = '\0';
    iVar5 = (**(code **)(*local_40 + 0x5b8))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x4f8))();
      cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
      if (cVar4 == '\0') goto LAB_0064d234;
    }
    else if (iVar5 != 1) goto LAB_0064d234;
    uVar6 = 0;
  }
LAB_0064d234:
  return uVar6 & 0xffffffff;
}


