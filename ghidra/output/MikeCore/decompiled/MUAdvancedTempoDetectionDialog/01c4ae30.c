// Function: FUN_01c4ae30
// Address: 01c4ae30
// Size: 706 bytes
// Class: MUAdvancedTempoDetectionDialog


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4ae30(void)

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_30;
  char local_28;
  
  if (unaff_ESI == 1) {
    lVar2 = DAT_028b6618;
    if (DAT_028b6618 == 0) {
      FUN_01cfcdc0(DAT_023b3888,_DAT_023b294c,DAT_023945a0,DAT_02394214);
      lVar2 = DAT_028b6618;
      if (DAT_028b6618 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6618 != 0;
        DAT_028b6618 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6620 == '\0')) {
        DAT_028b6620 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6618;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  else {
    lVar2 = DAT_028b6628;
    if (DAT_028b6628 == 0) {
      FUN_01c4b180();
      if (DAT_028b6628 != local_30) {
        lVar2 = DAT_028b6628;
        if (local_28 == '\0') {
          if (local_30 != 0) {
            FUN_00d50b00();
            lVar2 = DAT_028b6628;
          }
        }
        else {
          local_28 = '\0';
        }
        DAT_028b6628 = local_30;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != 0) && (DAT_028b6630 == '\0')) {
        DAT_028b6630 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(*(float *)(DAT_028b6628 + 0x10) * DAT_02390120,
                   *(float *)(DAT_028b6628 + 0x14) * DAT_02390120,
                   DAT_02390120 * *(float *)(DAT_028b6628 + 0x18),
                   *(undefined4 *)(DAT_028b6628 + 0x1c));
      lVar2 = DAT_028b6628;
      if (DAT_028b6628 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6628 != 0;
        DAT_028b6628 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6630 == '\0')) {
        DAT_028b6630 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6628;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
joined_r0x01c4b0d9:
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


