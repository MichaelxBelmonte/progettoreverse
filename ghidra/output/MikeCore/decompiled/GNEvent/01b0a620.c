// Function: FUN_01b0a620
// Address: 01b0a620
// Size: 544 bytes
// Class: GNEvent


/* WARNING: Removing unreachable block (ram,0x01b0a69c) */
/* WARNING: Removing unreachable block (ram,0x01b0a6a5) */
/* WARNING: Removing unreachable block (ram,0x01b0a748) */
/* WARNING: Removing unreachable block (ram,0x01b0a751) */

void FUN_01b0a620(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_028b3fb0;
  if ((DAT_028b3fb0 == 0) || (DAT_028b3fb9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b3fb0 == 0) {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar3 = DAT_028b3fb0;
      if ((DAT_028b3fb0 != local_40) && (DAT_028b3fb0 = local_40, lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (DAT_028b3fb8 == '\0') {
          DAT_028b3fb8 = '\x01';
          FUN_00e8cb90();
        }
        if (local_40 != 0 && lVar3 == local_40) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      lVar3 = 2;
      do {
        lVar2 = DAT_028b3fb0;
        iVar1 = *(int *)(DAT_028b3fb0 + 0x18);
        FUN_00c8e340();
        *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1) = (int)lVar3;
        lVar2 = *(longlong *)(local_40 + 0x10);
        lVar3 = (longlong)(int)lVar3;
        lVar4 = lVar3;
        do {
          *(undefined1 *)(lVar2 + lVar4) = 1;
          lVar4 = lVar4 + lVar3;
        } while (lVar4 < 1000);
        while (*(char *)(*(longlong *)(local_40 + 0x10) + lVar3) != '\0') {
          lVar3 = lVar3 + 1;
          if (lVar3 == 1000) goto LAB_01b0a7ed;
        }
      } while ((int)lVar3 < 1000);
LAB_01b0a7ed:
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      DAT_028b3fb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b3fb9 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_028b3fb0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_01b0a820;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01b0a820:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


