// Function: FUN_004a41a0
// Address: 004a41a0
// Size: 1821 bytes
// Class: MUAudioFileSource
// String references:
//   "%@.%I"


/* WARNING: Removing unreachable block (ram,0x004a4602) */
/* WARNING: Removing unreachable block (ram,0x004a460e) */

undefined8 * FUN_004a41a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined7 uVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar10;
  longlong local_120;
  char local_118;
  longlong local_f0;
  char local_e8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  uint local_88;
  longlong local_80;
  char local_78;
  int local_70;
  undefined4 local_64;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  lVar5 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar5 == 0) {
    plVar7 = param_1;
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    pVar6 = (pthread_key_t)plVar7;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
  }
  else {
    local_48 = 0;
    plVar7 = param_1;
    FUN_00d50b00();
    pVar6 = (pthread_key_t)plVar7;
    local_48 = '\x01';
    local_50 = lVar5;
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  local_38 = local_90;
  if ((char)local_88 == '\0') {
    if (local_90 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = local_88 & 0xffffff00;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = *param_2;
  if (lVar5 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar6 = (pthread_key_t)local_38;
    }
    FUN_012e6000();
    pvVar3 = _pthread_getspecific(pVar6);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar6 = (pthread_key_t)local_38;
    }
    FUN_012e6160();
    lVar1 = local_50;
    local_70 = *(int *)(local_f0 + 0xc);
    local_88 = 2;
    local_90 = &DAT_024c5048;
    local_78 = 0;
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    local_70 = local_70 + 1;
    local_80 = lVar1;
    local_78 = '\x01';
    local_90 = (undefined8 *)&DAT_025df2a0;
    FUN_00d8cb40();
    lVar5 = local_60;
    if (local_60 == 0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
      if (local_58 == '\0') {
        FUN_00d50b00();
        uVar8 = (undefined4)CONCAT71(uVar9,1);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
        uVar8 = (undefined4)CONCAT71(uVar9,1);
      }
    }
    local_90 = &DAT_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *param_1;
    local_64 = uVar8;
  }
  else if ((char)param_2[1] == '\0') {
    local_64 = 0;
    lVar1 = *param_1;
  }
  else {
    uVar4 = FUN_00d50b00();
    local_64 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if ((char)local_88 != '\0') {
      FUN_00d50b20();
    }
    local_b8 = '\0';
    local_b0 = local_38;
    local_a8 = '\0';
    pVar6 = 0;
    local_c0 = lVar5;
    uVar4 = FUN_004f83c0(0,&local_b0);
    puVar10 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      local_40 = 0;
    }
    else if ((char)local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar3 = _pthread_getspecific(pVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_90 = (undefined8 *)*param_1;
    local_88 = local_88 & 0xffffff00;
    FUN_00d237a0();
    if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = *param_1;
    local_c8 = '\0';
    pVar6 = 0;
    uVar4 = FUN_004f83c0(0,&local_d0);
    puVar10 = local_90;
    if (local_90 == (undefined8 *)0x0) {
      local_40 = 0;
    }
    else if ((char)local_88 == '\0') {
      uVar4 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = local_88 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = '\0';
  local_a0 = puVar10;
  FUN_012e66e0();
  puVar2 = local_38;
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004a11d0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (((char)local_40 == '\0') && (puVar10 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar10;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)local_64 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


