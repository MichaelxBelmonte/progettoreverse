// Function: FUN_01a9dab0
// Address: 01a9dab0
// Size: 549 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a9dc52) */
/* WARNING: Removing unreachable block (ram,0x01a9dc5f) */
/* WARNING: Removing unreachable block (ram,0x01a9db76) */
/* WARNING: Removing unreachable block (ram,0x01a9db7f) */

undefined8 * FUN_01a9dab0(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_50;
  longlong local_48;
  char local_40;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x1e0) != 0) {
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if (local_48 == 0) {
      bVar3 = true;
      local_50 = 0;
      lVar7 = *(longlong *)(unaff_RSI + 0x1e8);
      iVar1 = *(int *)(lVar7 + 0xc);
    }
    else {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      bVar3 = false;
      lVar7 = *(longlong *)(unaff_RSI + 0x1e8);
      iVar1 = *(int *)(lVar7 + 0xc);
      local_50 = local_48;
    }
    if (iVar1 < 1) {
      bVar2 = false;
      lVar11 = 0;
    }
    else {
      lVar9 = 0;
      bVar2 = false;
      lVar10 = 0;
      do {
        lVar7 = *(longlong *)
                 (*(longlong *)(local_50 + 0x10) +
                 (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8) + 0xc) *
                 8);
        if (lVar10 == lVar7) {
          lVar11 = lVar10;
          bVar4 = bVar2;
          if ((!bVar2) && (lVar7 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar11 = lVar7;
          if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar4;
        FUN_00d21140();
        lVar9 = lVar9 + 1;
        lVar7 = *(longlong *)(unaff_RSI + 0x1e8);
        lVar10 = lVar11;
      } while (lVar9 < *(int *)(lVar7 + 0xc));
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar3 && local_50 != 0) {
      FUN_00d50b20();
    }
    return unaff_RDI;
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


