// Function: FUN_00c91010
// Address: 00c91010
// Size: 505 bytes
// Class: Unknown
// String references:
//   "%i:"
//   "%@"
//   ",..., %@"
//   "(%f,%f,%f,%f)"
//   ", %@"


void FUN_00c91010(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  ulonglong local_88;
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  uVar5 = param_2 + 0xf;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  uVar5 = (int)uVar5 >> 4;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  uVar6 = (*DAT_025795c0)();
  local_88 = (ulonglong)param_2;
  local_38 = puVar3;
  if (0x20f < (int)param_2) {
    local_a0 = 1;
    local_a8 = &DAT_024cc6f0;
    local_9c = uVar5;
    FUN_00d94d80(uVar6,&local_a8);
    uVar5 = 0x20;
  }
  FUN_00d8db40();
  if (0 < (int)uVar5) {
    lVar4 = 0;
    do {
      puVar1 = (uint *)(unaff_RSI + lVar4);
      local_9c = *puVar1;
      uStack_98 = puVar1[1];
      uStack_94 = puVar1[2];
      uStack_90 = puVar1[3];
      local_a0 = 4;
      local_a8 = (undefined8 *)&DAT_026b2400;
      uVar6 = FUN_00d8cb40(",..., %@",&local_a8);
      lVar2 = local_48;
      local_60 = 1;
      local_68 = &DAT_024c5048;
      local_50 = 0;
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
      }
      puVar3 = local_38;
      local_58 = lVar2;
      local_50 = '\x01';
      FUN_00d94d80(uVar6,&local_68);
      local_68 = &DAT_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulonglong)uVar5 << 4 != lVar4);
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


