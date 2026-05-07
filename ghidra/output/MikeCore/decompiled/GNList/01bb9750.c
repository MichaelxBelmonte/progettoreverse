// Function: FUN_01bb9750
// Address: 01bb9750
// Size: 1376 bytes
// Class: GNList
// String references:
//   "%@ "
//   "%@%@ %@"


void FUN_01bb9750(pthread_key_t param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *local_d8;
  longlong local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  uint local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RSI + 0x28) == 0) || (FUN_01c077d0(), local_88 == (undefined8 *)0x0)) {
LAB_01bb9860:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x30);
  if ((char)local_80 != '\0') {
    FUN_00d50b20();
  }
  if (lVar1 == 0) goto LAB_01bb9860;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01783ca0();
  if (local_88 == (undefined8 *)0x0) {
    bVar6 = false;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01783ca0();
    iVar3 = FUN_00d8c7a0();
    bVar6 = iVar3 != 0;
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar6) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01783530();
    return;
  }
  FUN_01c077d0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017cc420();
  puVar5 = local_88;
  if ((char)local_80 == '\0') {
    if (local_88 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_80 = local_80 & 0xffffff00;
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar5 == (undefined8 *)0x0) {
    FUN_00d8ede0();
    local_48 = local_88;
    if (local_88 == (undefined8 *)0x0) {
      local_48 = puVar5;
    }
    else if ((char)local_80 == '\0') {
      FUN_00d50b00();
      if (((char)local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01bb9a9d;
  }
  local_80 = 1;
  local_88 = &DAT_024c5048;
  local_70 = 0;
  FUN_00d50b00();
  local_78 = puVar5;
  local_70 = '\x01';
  FUN_00d8cb40();
  puVar2 = local_40;
  if (puVar5 == local_40) {
    local_48 = puVar5;
LAB_01bb9a65:
    if ((local_38 != '\0') && (puVar5 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      local_48 = puVar2;
      puVar5 = local_40;
      goto LAB_01bb9a65;
    }
    FUN_00d50b20();
    local_38 = '\0';
    local_48 = puVar2;
  }
  local_88 = &DAT_024c5048;
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_01bb9a9d:
  FUN_01c19440();
  FUN_01c077d0();
  local_98 = local_a8;
  local_90 = 0;
  if (local_a0 == '\0') {
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  local_90 = '\x01';
  FUN_01c412a0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01783530();
  puVar5 = local_48;
  local_d8 = local_40;
  local_d0 = local_b8;
  FUN_002bd7b0(&local_d0,&local_d8,3);
  FUN_00d8cb40();
  local_88 = (undefined8 *)&DAT_025df260;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_88 = (undefined8 *)&DAT_0253d630;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_88 = &DAT_024c5048;
  if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


