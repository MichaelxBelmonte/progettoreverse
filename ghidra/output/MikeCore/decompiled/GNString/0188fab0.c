// Function: FUN_0188fab0
// Address: 0188fab0
// Size: 709 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0188fce6) */
/* WARNING: Removing unreachable block (ram,0x0188fcef) */
/* WARNING: Removing unreachable block (ram,0x0188fc9b) */
/* WARNING: Removing unreachable block (ram,0x0188fca4) */
/* WARNING: Removing unreachable block (ram,0x0188fb76) */
/* WARNING: Removing unreachable block (ram,0x0188fb7b) */
/* WARNING: Removing unreachable block (ram,0x0188fb31) */
/* WARNING: Removing unreachable block (ram,0x0188fb3a) */
/* WARNING: Removing unreachable block (ram,0x0188fc12) */
/* WARNING: Removing unreachable block (ram,0x0188fc1b) */
/* WARNING: Removing unreachable block (ram,0x0188fd4f) */
/* WARNING: Removing unreachable block (ram,0x0188fd58) */

void FUN_0188fab0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar4 = 0x2572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_01821ff0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_018220f0();
  if (local_48 != 0) {
    FUN_018220f0();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018909c0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027d8d68;
  if (*(longlong *)(unaff_RSI + 0x50) == 0) {
    if (DAT_027d8d68 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027d64a0;
  if (DAT_027d64a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


