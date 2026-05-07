// Function: FUN_00498b30
// Address: 00498b30
// Size: 866 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00498b30(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  char local_38;
  
  FUN_00483b30();
  FUN_00486360();
  FUN_0047dd70();
  if (*(longlong *)(unaff_RDI + 0x1c8) == 0) {
    return;
  }
  uVar7 = FUN_01d77960();
  local_80 = DAT_027086e8;
  if (DAT_027086e8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_01d5e6e0(uVar7,&local_80);
  uVar5 = local_40;
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
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027086e0;
  if (uVar5 != 0) {
    local_58 = uVar5;
    if (DAT_027086e0 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar1;
    FUN_00e7d6f0();
    uVar7 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    local_50 = local_60;
    local_48 = '\0';
    FUN_000175c0(uVar7,&local_50);
    uVar6 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = uVar5;
    if (uVar6 != 0) {
      local_38 = '\0';
      local_40 = uVar6;
      uVar3 = FUN_00c70bc0();
      uVar4 = (ulonglong)uVar3;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    uVar5 = local_58;
    if ((uVar6 != 0 & (byte)uVar4) == 0) {
      FUN_01d66e50();
    }
  }
  uVar7 = FUN_01d77960();
  local_70 = DAT_027087c8;
  if (DAT_027087c8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_01d5e6e0(uVar7,&local_70);
  uVar4 = local_40;
  uVar6 = uVar5;
  if (uVar5 != local_40) {
    if (local_38 != '\0') {
      if (uVar5 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      uVar6 = local_40;
      goto LAB_00498e32;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    uVar6 = uVar4;
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00498e32:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (uVar6 != 0) {
    cVar2 = FUN_007428a0();
    if (cVar2 == '\0') {
      FUN_01d66e50();
    }
    FUN_00d50b20();
  }
  return;
}


