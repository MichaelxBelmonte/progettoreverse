// Function: FUN_01ee61e0
// Address: 01ee61e0
// Size: 586 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x01ee63bb) */
/* WARNING: Removing unreachable block (ram,0x01ee63c4) */
/* WARNING: Removing unreachable block (ram,0x01ee62ba) */
/* WARNING: Removing unreachable block (ram,0x01ee62c3) */

void FUN_01ee61e0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  double dVar4;
  longlong local_38;
  char local_30;
  
  lVar3 = DAT_028ba608;
  if ((DAT_028ba608 == 0) || (DAT_028ba611 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ba608 == 0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_024a9998)();
      dVar4 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)((double)(float)dVar4);
      (*(code *)PTR__objc_msgSend_024a9998)();
      FUN_00e1ccf0();
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027fecc0;
      if (DAT_027fecc0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d43f00(DAT_023908ec,0);
      lVar2 = DAT_028ba608;
      if (DAT_028ba608 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar2 = local_38;
        }
        bVar1 = DAT_028ba608 != 0;
        DAT_028ba608 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_38;
        }
      }
      if ((lVar2 != 0) && (DAT_028ba610 == '\0')) {
        DAT_028ba610 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_38;
      }
      if ((local_30 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      (*(code *)PTR__objc_release_024a99a0)();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      DAT_028ba611 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba611 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_028ba608;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_01ee6405;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01ee6405:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


