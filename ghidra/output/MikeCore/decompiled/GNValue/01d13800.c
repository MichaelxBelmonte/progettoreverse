// Function: FUN_01d13800
// Address: 01d13800
// Size: 612 bytes
// Class: GNValue


void FUN_01d13800(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  lVar6 = DAT_028b7f48;
  if ((DAT_028b7f48 == 0) || (DAT_028b7f51 == '\0')) {
    FUN_00e8cb50();
    lVar6 = DAT_027e7c20;
    if (DAT_028b7f48 == 0) {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027057d0;
      local_38 = lVar6;
      if (DAT_027057d0 != 0) {
        FUN_00d50b00();
      }
      lVar6 = DAT_027ef7f0;
      if (DAT_027ef7f0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027ef7f8;
      if (DAT_027ef7f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027ef800;
      if (DAT_027ef800 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = lVar6;
      local_58 = lVar3;
      local_50 = lVar4;
      FUN_007f7a00(&local_60,&local_68,&local_58,&local_50);
      FUN_000b6830();
      lVar5 = DAT_028b7f48;
      if (DAT_028b7f48 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar5 = local_48;
        }
        bVar1 = DAT_028b7f48 != 0;
        DAT_028b7f48 = lVar5;
        if (bVar1) {
          FUN_00d50b20();
          lVar5 = local_48;
        }
      }
      if ((lVar5 != 0) && (DAT_028b7f50 == '\0')) {
        DAT_028b7f50 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_48;
      }
      if ((local_40 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_007f76c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      DAT_028b7f51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b7f51 = '\x01';
      FUN_00e8cb70();
    }
    lVar6 = DAT_028b7f48;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_01d13a3c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01d13a3c:
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


