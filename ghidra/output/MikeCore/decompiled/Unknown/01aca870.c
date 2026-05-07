// Function: FUN_01aca870
// Address: 01aca870
// Size: 505 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aca870(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b35c0 == 0) || (DAT_028b35c9 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027e30b0;
    if (DAT_028b35c0 == 0) {
      if (DAT_027e30b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b35c0;
      if (DAT_028b35c0 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b35c0 != 0;
        DAT_028b35c0 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b35c8 == '\0')) {
        DAT_028b35c8 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028b35c9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b35c9 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b35c0 == 0) {
      lVar3 = 0;
      goto LAB_01acaa29;
    }
  }
  lVar3 = DAT_028b35c0;
  FUN_00d50b00();
LAB_01acaa29:
  (**(code **)(*unaff_RDI + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


