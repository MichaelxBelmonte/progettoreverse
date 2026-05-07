// Function: FUN_0023d150
// Address: 0023d150
// Size: 629 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0023d150(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  bool bVar5;
  double dVar6;
  undefined8 uVar7;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  float local_44;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026f6ea0;
  local_44 = (float)param_2;
  if (DAT_026f6ea0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar6 * DAT_023907c0);
  dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
  uVar7 = FUN_0071a120();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  bVar3 = (byte)(((longlong)dVar6 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_68 = lVar1;
  local_60 = '\0';
  FUN_000175c0(uVar7,&local_68);
  lVar2 = local_40;
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
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = '\0';
    local_40 = lVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((lVar2 != 0 & bVar3) == 0) {
    bVar5 = false;
  }
  else {
    bVar5 = *(int *)(unaff_RDI + 0x198) == 2;
    if ((bVar5) && (local_44._0_1_ != '\0')) {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      local_44 = (float)FUN_019f7be0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_44 = local_44 + DAT_02390d00;
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      FUN_019f7a40(local_44);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d6f370();
      local_58 = DAT_026f6cd8;
      if (DAT_026f6cd8 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\x01';
      FUN_00d70a00(local_44);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = true;
    }
  }
  return bVar5;
}


