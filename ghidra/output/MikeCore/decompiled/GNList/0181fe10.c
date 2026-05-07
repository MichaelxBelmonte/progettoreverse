// Function: FUN_0181fe10
// Address: 0181fe10
// Size: 928 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01820131) */
/* WARNING: Removing unreachable block (ram,0x01820136) */
/* WARNING: Removing unreachable block (ram,0x018200e9) */
/* WARNING: Removing unreachable block (ram,0x0181fee1) */
/* WARNING: Removing unreachable block (ram,0x0181feea) */
/* WARNING: Removing unreachable block (ram,0x01820011) */
/* WARNING: Removing unreachable block (ram,0x0182001a) */
/* WARNING: Removing unreachable block (ram,0x01820155) */
/* WARNING: Removing unreachable block (ram,0x0182015e) */
/* WARNING: Removing unreachable block (ram,0x01820190) */

longlong * FUN_0181fe10(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  longlong local_40;
  
  lVar6 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar6 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    FUN_00d50b00();
    *unaff_RDI = lVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  FUN_00d50b00();
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x2572358;
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar2 = _pthread_getspecific(pVar5);
  lVar6 = unaff_RSI;
  if (pvVar2 != (void *)0x0) {
    lVar3 = FUN_00e8b990();
    if (lVar3 == 0) {
      local_40 = *(longlong *)(unaff_RSI + 0x40);
      goto joined_r0x0181febc;
    }
    lVar6 = *(longlong *)(unaff_RSI + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
  }
  local_40 = *(longlong *)(lVar6 + 0x40);
joined_r0x0181febc:
  pVar5 = (pthread_key_t)lVar6;
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  lVar6 = unaff_RSI;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar6 = *(longlong *)(unaff_RSI + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
  }
  lVar3 = *(longlong *)(lVar6 + 0x60);
  lVar7 = unaff_RSI;
  if (lVar3 != 0) {
    FUN_00d50b00();
    do {
      if ((lVar7 != lVar3) && (FUN_00d50b00(), bVar8 = lVar7 != 0, lVar7 = lVar3, bVar8)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar6);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        local_40 = *(longlong *)(lVar7 + 0x40);
      }
      else {
        local_40 = *(longlong *)
                    (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) +
                    0x40);
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d23370();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar6);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        lVar4 = *(longlong *)(lVar7 + 0x60);
      }
      else {
        lVar4 = *(longlong *)
                 (*(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x60
                 );
      }
      if (lVar4 != lVar3) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = lVar4;
      }
    } while (lVar3 != 0);
  }
  lVar6 = DAT_027d64a0;
  if (DAT_027d64a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  lVar3 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar3 != local_40) {
    if (local_40 == 0) {
      local_40 = 0;
    }
    else {
      FUN_00d50b00();
      lVar3 = *(longlong *)(unaff_RSI + 0x50);
    }
    *(longlong *)(unaff_RSI + 0x50) = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar6 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


