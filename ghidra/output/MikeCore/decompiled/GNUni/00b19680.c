// Function: FUN_00b19680
// Address: 00b19680
// Size: 759 bytes
// Class: GNUni


void FUN_00b19680(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  lVar2 = DAT_028a0de8;
  if ((DAT_028a0de8 == 0) || (DAT_028a0df1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a0de8 == 0) {
      FUN_00d470c0(DAT_023d5628);
      FUN_00d470c0(DAT_02410f78);
      FUN_00d470c0(DAT_023d5630);
      FUN_00d470c0(DAT_023d5638);
      FUN_00d470c0(DAT_023b8470);
      FUN_00d470c0(DAT_023d5640);
      FUN_00d470c0(DAT_023d5648);
      local_c8 = local_88;
      local_c0 = local_78;
      local_b8 = local_68;
      local_b0 = local_58;
      local_a8 = local_48;
      local_a0 = local_38;
      FUN_00b1c4b0(&local_c0,&local_c8,&local_b8,&local_b0);
      FUN_00295b80();
      lVar2 = DAT_028a0de8;
      if (DAT_028a0de8 != local_28) {
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
        bVar1 = DAT_028a0de8 != 0;
        DAT_028a0de8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028a0df0 == '\0')) {
        DAT_028a0df0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b1c2d0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a0df1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a0df1 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = DAT_028a0de8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_00b19955;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b19955:
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


