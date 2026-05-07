// Function: FUN_017e0a10
// Address: 017e0a10
// Size: 674 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017e0bba) */
/* WARNING: Removing unreachable block (ram,0x017e0bc3) */
/* WARNING: Removing unreachable block (ram,0x017e0b04) */
/* WARNING: Removing unreachable block (ram,0x017e0b0d) */
/* WARNING: Removing unreachable block (ram,0x017e0bf0) */
/* WARNING: Removing unreachable block (ram,0x017e0bf9) */
/* WARNING: Removing unreachable block (ram,0x017e0a70) */
/* WARNING: Removing unreachable block (ram,0x017e0a90) */
/* WARNING: Removing unreachable block (ram,0x017e0a72) */
/* WARNING: Removing unreachable block (ram,0x017e0a92) */

longlong * FUN_017e0a10(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar1 != 0) {
    local_40 = -1;
    do {
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_017dee80();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (unaff_RSI == 0) goto LAB_017e0c9c;
        goto LAB_017e0c94;
      }
      lVar7 = *(longlong *)(lVar1 + 0x10);
      plVar2 = *(longlong **)(lVar7 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar4 = (pthread_key_t)lVar7;
      plVar8 = plVar2;
      if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar3 = (**(code **)(*plVar8 + 0x3b8))();
    } while (cVar3 == '\0');
    FUN_017dee80();
    if (*(longlong *)(unaff_RSI + 0x50) != 0) {
      FUN_00d50b00();
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e5fe0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        FUN_00d50b00();
        pVar4 = FUN_00d23d20();
        FUN_00d50b20();
        if ((pVar4 != 0xffffffff) && ((int)pVar4 < *(int *)((longlong)plVar2 + 0xc) + -1)) {
          pvVar6 = _pthread_getspecific(pVar4);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017e0a10();
          FUN_00d50b20();
          FUN_00d50b20();
          return unaff_RDI;
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_017e0c94:
  FUN_00d50b00();
LAB_017e0c9c:
  *unaff_RDI = unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


