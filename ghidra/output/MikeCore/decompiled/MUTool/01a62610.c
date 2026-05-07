// Function: FUN_01a62610
// Address: 01a62610
// Size: 1104 bytes
// Class: MUTool


/* WARNING: Removing unreachable block (ram,0x01a62650) */
/* WARNING: Removing unreachable block (ram,0x01a6265c) */

void FUN_01a62610(undefined8 param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  pthread_key_t pVar5;
  char *pcVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  char local_48 [12];
  undefined4 local_3c;
  char local_38 [8];
  
  FUN_01a18a00();
  FUN_00d23310();
  lVar1 = local_50;
  pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
  pcVar6 = local_38;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar3 = FUN_00e8b990();
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if ((local_38[0] != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    return;
  }
  local_58 = lVar3;
  FUN_0006e1c0();
  local_60 = FUN_00e86210();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e3ba0;
  if (DAT_027e3ba0 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_00c841b0();
  lVar3 = local_50;
  if (local_50 == 0) {
    bVar8 = 1;
    local_3c = 0;
  }
  else {
    if (local_48[0] == '\0') {
      uVar4 = FUN_00d50b00();
      local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      bVar8 = 0;
      if ((local_48[0] == '\0') || (bVar8 = 0, local_50 == 0)) goto LAB_01a627a7;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_48[0] = '\0';
    }
    local_3c = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    bVar8 = 0;
  }
LAB_01a627a7:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_78 = 0;
  plVar7 = (longlong *)(unaff_RDI + 0x1f8);
  (**(code **)(*(longlong *)(unaff_RDI + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  local_c0 = lVar3;
  local_b8 = '\0';
  local_80 = plVar7;
  FUN_00cbad30(&local_c0,&local_d0,0xa0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  lVar1 = DAT_026d83e0;
  if (DAT_026d83e0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  FUN_00c841b0();
  lVar1 = local_50;
  bVar9 = (byte)local_3c;
  if (lVar3 == local_50) {
    if ((bool)(bVar8 & lVar3 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a628fd;
      bVar9 = 1;
      FUN_00d50b00();
    }
  }
  else {
    if (local_48[0] != '\0') {
      bVar10 = lVar3 != 0;
      lVar3 = local_50;
      if ((bVar9 & bVar10) == 1) {
        FUN_00d50b20();
      }
LAB_01a628fd:
      local_48[0] = '\0';
      bVar9 = 1;
      goto LAB_01a62964;
    }
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    bVar10 = lVar3 != 0;
    bVar9 = 1;
    lVar3 = lVar1;
    if (((byte)local_3c & bVar10) == 1) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01a62964:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar7 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  local_88 = '\0';
  local_90 = lVar3;
  local_70 = plVar7;
  FUN_00cbad30(&local_90,&local_a0,0xa0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  if ((bVar9 != 0) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


