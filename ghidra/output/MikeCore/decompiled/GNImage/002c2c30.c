// Function: FUN_002c2c30
// Address: 002c2c30
// Size: 734 bytes
// Class: GNImage


void FUN_002c2c30(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_28;
  char local_20;
  
  if (*(int *)(unaff_RSI + 0x20) == 1) {
    if ((DAT_028063e8 == 0) || (lVar3 = DAT_028063e8, DAT_028063f1 == '\0')) {
      FUN_00e8cb50();
      lVar3 = DAT_026fce20;
      if (DAT_028063e8 == 0) {
        if (DAT_026fce20 != 0) {
          FUN_00d50b00();
        }
        FUN_01d51a40();
        lVar2 = DAT_028063e8;
        if (DAT_028063e8 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar2 = local_28;
          }
          bVar1 = DAT_028063e8 != 0;
          DAT_028063e8 = lVar2;
          if (bVar1) {
            FUN_00d50b20();
            lVar2 = local_28;
          }
        }
        if ((lVar2 != 0) && (DAT_028063f0 == '\0')) {
          DAT_028063f0 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_28;
        }
        if ((local_20 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        DAT_028063f1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028063f1 = '\x01';
        FUN_00e8cb70();
      }
      lVar3 = DAT_028063e8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar3 != 0) goto LAB_002c2ee4;
LAB_002c2e3c:
      lVar3 = 0;
      goto LAB_002c2eec;
    }
LAB_002c2c94:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if (*(int *)(unaff_RSI + 0x20) != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    if ((DAT_028063d8 != 0) && (lVar3 = DAT_028063d8, DAT_028063e1 != '\0')) goto LAB_002c2c94;
    FUN_00e8cb50();
    lVar3 = DAT_026fce18;
    if (DAT_028063d8 == 0) {
      if (DAT_026fce18 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      lVar2 = DAT_028063d8;
      if (DAT_028063d8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_028063d8 != 0;
        DAT_028063d8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028063e0 == '\0')) {
        DAT_028063e0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028063e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028063e1 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_028063d8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 == 0) goto LAB_002c2e3c;
  }
LAB_002c2ee4:
  FUN_00d50b00();
LAB_002c2eec:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


