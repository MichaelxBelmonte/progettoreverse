// Function: FUN_00cbbfd0
// Address: 00cbbfd0
// Size: 611 bytes
// Class: GNEditingContextReadCopySyncObserver


/* WARNING: Removing unreachable block (ram,0x00cbc0b0) */
/* WARNING: Removing unreachable block (ram,0x00cbc091) */

void FUN_00cbbfd0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong unaff_RDI;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (*(int *)(lVar1 + 0xc) != 0) {
    uVar4 = *(uint *)(unaff_RDI + 0x154);
    local_40 = -1;
    while( true ) {
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar1 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8bc10();
      *(undefined8 *)(lVar5 + (ulonglong)(~uVar4 & 1) * 8) = uVar8;
    }
    FUN_00cc1410();
    uVar4 = FUN_00e31390();
    uVar8 = 3;
    cVar3 = FUN_00e314a0(3,uVar4 & 1 ^ 1);
    if (cVar3 == '\0') {
      iVar9 = 0x800;
      do {
        uVar4 = uVar4 & 1;
        if (1 < uVar4) {
          if (iVar9 < 2) {
            FUN_00da6800();
            iVar9 = 0x800;
          }
          else {
            iVar9 = iVar9 + -1;
          }
        }
        uVar8 = 3;
        cVar3 = FUN_00e314a0(3,uVar4 ^ 1);
      } while (cVar3 == '\0');
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x158);
    if (lVar1 != 0) {
      uVar4 = *(uint *)(unaff_RDI + 0x154);
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar5 = 0;
        do {
          uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar7 = FUN_00e8bc10();
          FUN_00d50b20();
          *(undefined8 *)(lVar7 + (ulonglong)(~uVar4 & 1) * 8) = uVar2;
          lVar5 = lVar5 + 1;
        } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
      }
      FUN_00cc1410();
    }
    FUN_00d216c0();
  }
  return;
}


