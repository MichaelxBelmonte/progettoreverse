// Function: FUN_012e7210
// Address: 012e7210
// Size: 513 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e72c4) */
/* WARNING: Removing unreachable block (ram,0x012e72cd) */
/* WARNING: Removing unreachable block (ram,0x012e73ba) */
/* WARNING: Removing unreachable block (ram,0x012e73c3) */

longlong * FUN_012e7210(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  
  lVar3 = *(longlong *)(unaff_RSI + 0xb0);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(*(longlong *)(unaff_RSI + 0xa8) + 0xc) == 0) goto LAB_012e73eb;
  FUN_00243390();
  if (lVar3 == local_78) {
LAB_012e72aa:
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
      goto LAB_012e72aa;
    }
  }
  else {
    bVar5 = lVar3 != 0;
    lVar3 = local_78;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(unaff_RSI + 0xa8);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        FUN_00d214d0();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
  }
LAB_012e73eb:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


