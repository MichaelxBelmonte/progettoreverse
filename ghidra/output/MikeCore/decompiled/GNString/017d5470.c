// Function: FUN_017d5470
// Address: 017d5470
// Size: 647 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017d55db) */
/* WARNING: Removing unreachable block (ram,0x017d56ca) */
/* WARNING: Removing unreachable block (ram,0x017d55e0) */
/* WARNING: Removing unreachable block (ram,0x017d5600) */
/* WARNING: Removing unreachable block (ram,0x017d54c7) */
/* WARNING: Removing unreachable block (ram,0x017d54f0) */
/* WARNING: Removing unreachable block (ram,0x017d54c9) */
/* WARNING: Removing unreachable block (ram,0x017d54f2) */
/* WARNING: Removing unreachable block (ram,0x017d55e2) */
/* WARNING: Removing unreachable block (ram,0x017d5602) */

void FUN_017d5470(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_50;
  int local_38;
  
  lVar1 = *(longlong *)(unaff_RSI + 0x110);
  if (lVar1 == 0) {
LAB_017d5674:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_38 = -1;
  do {
    do {
      lVar4 = (longlong)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_38) {
        FUN_01c0a2d0();
        lVar1 = *(longlong *)(unaff_RSI + 0x110);
        if (lVar1 == 0) goto LAB_017d5674;
        local_38 = -1;
        goto LAB_017d5605;
      }
      lVar7 = *(longlong *)(lVar1 + 0x10);
      local_50 = *(longlong *)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01783c70();
    } while (iVar3 != 0);
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01783c80();
  } while (cVar2 != '\0');
  goto LAB_017d56bb;
  while( true ) {
    lVar7 = *(longlong *)(lVar1 + 0x10);
    local_50 = *(longlong *)(lVar7 + 8 + lVar4 * 8);
    pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
    pVar6 = (pthread_key_t)lVar7;
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01783c70();
    if (iVar3 == 0) break;
LAB_017d5605:
    lVar4 = (longlong)local_38;
    local_38 = local_38 + 1;
    if (*(int *)(lVar1 + 0xc) <= local_38) {
      FUN_01c0a2d0();
      goto LAB_017d5674;
    }
  }
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01783c80();
LAB_017d56bb:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_01c0a2d0();
  return;
}


