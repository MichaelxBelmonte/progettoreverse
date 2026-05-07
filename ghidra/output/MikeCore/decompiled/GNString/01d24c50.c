// Function: FUN_01d24c50
// Address: 01d24c50
// Size: 568 bytes
// Class: GNString


void FUN_01d24c50(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = DAT_028b80b8;
  if ((DAT_028b80b8 == 0) || (DAT_028b80c1 == '\0')) {
    FUN_00e8cb50();
    lVar5 = DAT_027ef970;
    if (DAT_028b80b8 == 0) {
      if (DAT_027ef970 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027ef978;
      if (DAT_027ef978 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_02725a10;
      if (DAT_02725a10 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar3;
      local_88 = lVar2;
      FUN_002bd7b0(&local_88,&local_90,3);
      FUN_000b6830();
      lVar4 = DAT_028b80b8;
      if (DAT_028b80b8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        bVar1 = DAT_028b80b8 != 0;
        DAT_028b80b8 = lVar4;
        if (bVar1) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      if ((lVar4 != 0) && (DAT_028b80c0 == '\0')) {
        DAT_028b80c0 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (undefined8 *)&DAT_025df260;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_80 = (undefined8 *)&DAT_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      DAT_028b80c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b80c1 = '\x01';
      FUN_00e8cb70();
    }
    lVar5 = DAT_028b80b8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_01d24e62;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01d24e62:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


