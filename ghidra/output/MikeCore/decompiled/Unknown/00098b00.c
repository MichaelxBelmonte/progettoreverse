// Function: FUN_00098b00
// Address: 00098b00
// Size: 875 bytes
// Class: Unknown
// String references:
//   "MelodyneLogo%@%.0f.png"


/* WARNING: Removing unreachable block (ram,0x00098e29) */
/* WARNING: Removing unreachable block (ram,0x00098e35) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098b00(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  float extraout_XMM0_Db;
  float fVar6;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_48;
  char local_40;
  undefined4 local_38;
  
  lVar4 = DAT_026d8d18;
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  if (DAT_026d8d18 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar5 = FUN_0071a120();
  if (((char)local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
    uVar5 = FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      uVar5 = FUN_00d50b20();
    }
  }
  local_68 = lVar4;
  local_60 = '\0';
  FUN_000175c0(uVar5,&local_68);
  puVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    local_50 = local_50 & 0xffffff00;
    local_58 = puVar3;
    FUN_00c716c0();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d2ca40();
  puVar3 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00098ca6;
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
LAB_00098ca6:
    FUN_01e3f820();
    local_50 = 2;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    FUN_00d50b00();
    local_38 = *(undefined4 *)
                (&DAT_02390cf8 +
                (ulonglong)(DAT_02390d04 < extraout_XMM0_Db + fVar6 + DAT_02390d00) * 4);
    local_48 = puVar3;
    local_40 = '\x01';
    local_58 = (undefined8 *)&DAT_024c79a0;
    FUN_00d8cb40(&DAT_02390cf8,&local_58);
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    FUN_01d51a40();
    lVar4 = local_68;
    if (local_68 == 0) {
      bVar1 = false;
    }
    else if (local_60 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
      bVar1 = true;
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
    goto LAB_00098e03;
  }
  bVar2 = true;
  lVar4 = 0;
  bVar1 = false;
LAB_00098e03:
  FUN_01d56f30();
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


