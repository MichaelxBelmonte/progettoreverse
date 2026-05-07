// Function: FUN_01c508b0
// Address: 01c508b0
// Size: 1118 bytes
// Class: MUAdvancedTempoDetectionDialog


/* WARNING: Removing unreachable block (ram,0x01c50ba5) */
/* WARNING: Removing unreachable block (ram,0x01c50bb1) */

void FUN_01c508b0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0266c9c0;
  puVar2[2] = &DAT_0266cd48;
  puVar2[3] = 0;
  FUN_00d500e0();
  lVar1 = *unaff_RSI;
  puVar2[3] = lVar1;
  if (*(longlong *)(lVar1 + 0x1a8) == 0) {
    if (*(longlong *)(lVar1 + 0x198) == 0) goto LAB_01c50af2;
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(puVar2[3] + 0x198);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(puVar2[3] + 0x1a8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    local_c0 = 0;
    local_b8 = '\0';
    local_38 = puVar2;
    FUN_000be210();
    FUN_00e86210();
    local_b0 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00c841b0();
    local_70 = local_48;
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    FUN_00cbad30(&local_70,&local_c0,0x20);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_90 = 0;
    local_88 = '\0';
    local_a0 = puVar2 + 2;
    FUN_002771e0();
    FUN_00e86210();
    local_80 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00c841b0();
    puVar2 = local_38;
    local_60 = local_48;
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    FUN_00cbad30(&local_60,&local_90,0x20);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((char)local_50 == '\0') {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01c50af2:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  FUN_00d50b20();
  return;
}


