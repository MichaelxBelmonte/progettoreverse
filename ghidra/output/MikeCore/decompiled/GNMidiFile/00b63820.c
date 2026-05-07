// Function: FUN_00b63820
// Address: 00b63820
// Size: 1518 bytes
// Class: GNMidiFile


/* WARNING: Removing unreachable block (ram,0x00b63908) */
/* WARNING: Removing unreachable block (ram,0x00b63911) */
/* WARNING: Removing unreachable block (ram,0x00b639ce) */
/* WARNING: Removing unreachable block (ram,0x00b639d7) */
/* WARNING: Removing unreachable block (ram,0x00b63cd7) */
/* WARNING: Removing unreachable block (ram,0x00b63d00) */
/* WARNING: Removing unreachable block (ram,0x00b63b97) */
/* WARNING: Removing unreachable block (ram,0x00b63bc0) */
/* WARNING: Removing unreachable block (ram,0x00b63a57) */
/* WARNING: Removing unreachable block (ram,0x00b63a80) */
/* WARNING: Removing unreachable block (ram,0x00b63a59) */
/* WARNING: Removing unreachable block (ram,0x00b63a82) */
/* WARNING: Removing unreachable block (ram,0x00b63b99) */
/* WARNING: Removing unreachable block (ram,0x00b63bc2) */
/* WARNING: Removing unreachable block (ram,0x00b63cd9) */
/* WARNING: Removing unreachable block (ram,0x00b63d02) */

undefined8 * FUN_00b63820(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 uVar6;
  double dVar7;
  undefined8 *local_140;
  undefined1 local_138;
  longlong local_130;
  undefined1 local_128;
  undefined8 *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  longlong local_e0;
  undefined1 local_d8;
  undefined8 *local_d0;
  undefined1 local_c8;
  longlong local_68;
  char local_60;
  int local_40;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  uVar6 = (*DAT_02572370)();
  lVar2 = *(longlong *)(*unaff_RSI + 0x50);
  if (lVar2 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_138 = 0;
  local_140 = puVar1;
  FUN_00b65690(uVar6,&local_140);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *unaff_RSI;
  if (*(int *)(lVar2 + 0x40) != 0) {
    FUN_00b65500();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *unaff_RSI;
  }
  lVar2 = *(longlong *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_128 = 1;
  local_118 = 0;
  local_130 = lVar2;
  local_120 = puVar1;
  FUN_00b65690();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *unaff_RSI;
  dVar7 = *(double *)(lVar2 + 0x18);
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    FUN_00b65350();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    dVar7 = (double)FUN_00d21140();
    if (local_68 != 0) {
      dVar7 = (double)FUN_00d50b20();
    }
    lVar2 = *unaff_RSI;
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_110 = *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8 + lVar3 * 8);
      local_108 = 0;
      FUN_00b64e00();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b67310();
  }
  lVar3 = *(longlong *)(*unaff_RSI + 0x28);
  if (lVar3 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_100 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 8 + lVar4 * 8);
      local_f8 = 0;
      FUN_00b64fc0();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b673b0();
  }
  lVar4 = *(longlong *)(*unaff_RSI + 0x30);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_40) break;
      local_f0 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 8 + lVar5 * 8);
      local_e8 = 0;
      FUN_00b65220();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b67450();
  }
  lVar5 = *(longlong *)(*unaff_RSI + 0x38);
  if (lVar5 != 0) {
    dVar7 = (double)FUN_00d50b00();
  }
  local_d8 = 1;
  local_c8 = 0;
  local_e0 = lVar5;
  local_d0 = puVar1;
  FUN_00b65770(dVar7,&local_d0);
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


