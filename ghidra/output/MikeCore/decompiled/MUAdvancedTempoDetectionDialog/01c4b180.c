// Function: FUN_01c4b180
// Address: 01c4b180
// Size: 557 bytes
// Class: MUAdvancedTempoDetectionDialog


void FUN_01c4b180(void)

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_28;
  char local_20;
  
  if (unaff_ESI == 1) {
    lVar2 = DAT_028b65f8;
    if (DAT_028b65f8 == 0) {
      FUN_01cfcdc0(DAT_0241f36c,DAT_023b3888,DAT_02394250,DAT_02394214);
      lVar2 = DAT_028b65f8;
      if (DAT_028b65f8 != local_28) {
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
        bVar1 = DAT_028b65f8 != 0;
        DAT_028b65f8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6600 == '\0')) {
        DAT_028b6600 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b65f8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  else {
    lVar2 = DAT_028b6608;
    if (DAT_028b6608 == 0) {
      FUN_01cfc9f0(DAT_02390120,DAT_0239011c);
      lVar2 = DAT_028b6608;
      if (DAT_028b6608 != local_28) {
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
        bVar1 = DAT_028b6608 != 0;
        DAT_028b6608 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6610 == '\0')) {
        DAT_028b6610 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6608;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x01c4b383:
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


