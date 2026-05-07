// Function: FUN_00507310
// Address: 00507310
// Size: 654 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00507310(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong unaff_RDI;
  double dVar5;
  undefined8 uVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026f6fd0;
  if (*(longlong *)(unaff_RDI + 0x200) != 0) {
    if (DAT_026f6fd0 != 0) {
      FUN_00d50b00();
    }
    dVar5 = (double)FUN_00e7d6f0();
    uVar4 = (ulonglong)(dVar5 * DAT_023907c0);
    dVar5 = dVar5 * DAT_023907c0 - _DAT_023907c8;
    uVar6 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar5 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
    local_80 = lVar1;
    local_78 = '\0';
    FUN_000175c0(uVar6,&local_80);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
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
      local_58 = '\0';
      local_60 = 0;
      FUN_01cef3b0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cef410();
      lVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_02709e60;
      if (lVar1 == 0) {
        if (DAT_02709e60 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01d51a40();
        local_50 = local_40;
        local_48 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_48 = '\x01';
        FUN_01cef3b0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


