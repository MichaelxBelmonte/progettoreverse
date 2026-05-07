// Function: FUN_006fb580
// Address: 006fb580
// Size: 1694 bytes
// Class: Unknown
// String references:
//   "%@.%I"


undefined8 FUN_006fb580(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined7 uVar6;
  pthread_key_t pVar7;
  uint *puVar8;
  longlong unaff_RDI;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char local_a0;
  undefined4 local_94;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  undefined8 *local_68;
  uint local_60 [2];
  longlong local_58;
  char local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  FUN_006f3f00();
  (**(code **)(*local_40 + 0x628))();
  puVar10 = local_68;
  if ((char)local_60[0] == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60[0] = local_60[0] & 0xffffff00;
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  local_70 = (longlong)puVar10;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  FUN_002eacb0();
  iVar1 = *(int *)((longlong)local_68 + 0xc);
  if ((char)local_60[0] != '\0') {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  pVar7 = (pthread_key_t)param_1;
  if (iVar1 == 0) {
    local_b8 = 0;
  }
  else {
    lVar5 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_002eacb0();
    FUN_00d23310();
    puVar10 = local_68;
    pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_60[0]);
    puVar8 = (uint *)&local_a8;
    if ((char)local_60[0] != '\0') {
      puVar8 = local_60;
    }
    local_a8._0_1_ = (char)local_60[0];
    *(undefined1 *)puVar8 = 0;
    if (((char)local_60[0] != '\0') && (puVar10 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      if ((char)local_a8 == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    local_b8 = uVar4;
    if (puVar10 != (undefined8 *)0x0) {
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_012e6000();
      puVar9 = local_68;
      if (local_68 == (undefined8 *)0x0) {
        local_b0 = 0;
        puVar9 = (undefined8 *)0x0;
      }
      else {
        local_b0 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
        if ((char)local_60[0] == '\0') {
          FUN_00d50b00();
          if (((char)local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_94 = 0;
      goto LAB_006fb8f4;
    }
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    pVar7 = (pthread_key_t)local_70;
  }
  FUN_004a1110();
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012cb110();
  if ((local_100 != '\0') && (local_108 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (((char)local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
    uVar4 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar4 = FUN_00d50b20();
  }
  puVar9 = (undefined8 *)DAT_027259d0;
  if (DAT_027259d0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
  local_b0 = CONCAT71(uVar6,puVar9 != (undefined8 *)0x0);
  local_94 = (undefined4)CONCAT71(uVar6,1);
  puVar10 = (undefined8 *)0x0;
LAB_006fb8f4:
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)((longlong)local_68 + 0xc);
  if ((char)local_60[0] != '\0') {
    FUN_00d50b20();
  }
  local_60[0] = 2;
  local_68 = &DAT_024c5048;
  local_50 = 0;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  local_48 = iVar1 + 1;
  local_50 = '\x01';
  local_68 = (undefined8 *)&DAT_025df2a0;
  local_58 = (longlong)puVar9;
  FUN_00d8cb40();
  local_88 = 0;
  local_90 = CONCAT71(local_a8._1_7_,(char)local_a8);
  if (local_a0 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_88 = '\x01';
  local_f0 = '\0';
  pVar7 = 0;
  local_f8 = (longlong)puVar10;
  FUN_004f83c0(0,&local_f8);
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
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (CONCAT71(local_a8._1_7_,(char)local_a8) != 0)) {
    FUN_00d50b20();
  }
  local_68 = &DAT_024c5048;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = local_70;
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_e8 = plVar2;
  local_e0 = '\0';
  local_d8 = plVar2;
  local_d0 = '\0';
  FUN_004a11d0();
  local_80 = local_68;
  local_78 = 0;
  if ((char)local_60[0] == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60[0] = local_60[0] & 0xffffff00;
  }
  local_78 = '\x01';
  local_c0 = '\0';
  local_c8 = (longlong)puVar10;
  FUN_004a17d0(0xffffffff,&local_c8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60[0] != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (puVar9 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_b8 != '\0' && (char)local_94 == '\0') {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return 1;
}


