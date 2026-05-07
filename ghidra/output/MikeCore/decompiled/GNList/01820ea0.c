// Function: FUN_01820ea0
// Address: 01820ea0
// Size: 661 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x018210b0) */
/* WARNING: Removing unreachable block (ram,0x018210b9) */
/* WARNING: Removing unreachable block (ram,0x0182103d) */
/* WARNING: Removing unreachable block (ram,0x01821046) */
/* WARNING: Removing unreachable block (ram,0x01821119) */
/* WARNING: Removing unreachable block (ram,0x01821122) */

undefined8 FUN_01820ea0(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_50;
  char local_48;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  lVar3 = *(longlong *)(unaff_RSI + 0x68);
  lVar6 = unaff_RSI;
  while (pVar4 = (pthread_key_t)puVar5, lVar3 == 0) {
    lVar6 = *(longlong *)(lVar6 + 0x60);
    if (lVar6 == 0) goto LAB_0182106c;
    pvVar2 = _pthread_getspecific(pVar4);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    lVar3 = *(longlong *)(lVar6 + 0x68);
  }
  if (*(longlong *)(lVar6 + 0x68) != 0) {
    lVar3 = *(longlong *)(unaff_RSI + 0x68);
    lVar6 = unaff_RSI;
    while (lVar3 == 0) {
      pVar4 = (pthread_key_t)puVar5;
      lVar6 = *(longlong *)(lVar6 + 0x60);
      if (lVar6 == 0) break;
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      pVar4 = (pthread_key_t)puVar5;
      lVar3 = *(longlong *)(lVar6 + 0x68);
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01524aa0();
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
  }
LAB_0182106c:
  if (*(longlong *)(unaff_RSI + 0x40) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar3 = *(longlong *)(unaff_RSI + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_02774a00;
  if (DAT_02774a00 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


