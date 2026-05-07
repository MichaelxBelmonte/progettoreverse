// Function: FUN_01911c40
// Address: 01911c40
// Size: 949 bytes
// Class: GNList
// String references:
//   "musician: %@"
//   "project: %@"


/* WARNING: Removing unreachable block (ram,0x01911f05) */
/* WARNING: Removing unreachable block (ram,0x01911f0e) */
/* WARNING: Removing unreachable block (ram,0x01911cc7) */
/* WARNING: Removing unreachable block (ram,0x01911cd0) */
/* WARNING: Removing unreachable block (ram,0x01911ddb) */
/* WARNING: Removing unreachable block (ram,0x01911de4) */
/* WARNING: Removing unreachable block (ram,0x01911fca) */
/* WARNING: Removing unreachable block (ram,0x01911fd6) */

undefined8 FUN_01911c40(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar4 = 0x2572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d21140();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RSI + 0x48) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01910920();
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RSI + 0x50) != 0) {
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0190bc50();
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
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
  return unaff_RDI;
}


