// Function: FUN_0181e2d0
// Address: 0181e2d0
// Size: 714 bytes
// Class: GNString
// String references:
//   "source: %I"
//   "dest: %I"


/* WARNING: Removing unreachable block (ram,0x0181e574) */
/* WARNING: Removing unreachable block (ram,0x0181e57d) */

void FUN_0181e2d0(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RSI;
  undefined *local_60;
  uint local_58;
  undefined8 local_50;
  undefined *local_48;
  char local_40;
  undefined *local_38;
  char local_30;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(int *)(unaff_RSI + 0x3c) != 0) {
    FUN_0181e770();
    puVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_60 = puVar2;
    local_58 = local_58 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RSI + 0x40) != 0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_017cac30();
    local_58 = 1;
    pVar5 = 0x24da828;
    local_60 = &DAT_024da828;
    FUN_00d8cb40(&DAT_024da828,&local_60);
    puVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_38 = puVar2;
    local_30 = '\0';
    FUN_00d21140();
    if ((local_30 != '\0') && (local_38 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RSI + 0x48) != 0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = FUN_017cac30();
    local_58 = 1;
    local_60 = &DAT_024da828;
    FUN_00d8cb40(&DAT_024da828,&local_60);
    puVar2 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_38 = puVar2;
    local_30 = '\0';
    FUN_00d21140();
    if ((local_30 != '\0') && (local_38 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


