// Function: FUN_017d1b50
// Address: 017d1b50
// Size: 570 bytes
// Class: GNList
// String references:
//   "title"
//   "project"


void FUN_017d1b50(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *unaff_RDI;
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
  
  lVar2 = DAT_028af438;
  if ((DAT_028af438 == 0) || (DAT_028af441 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af438 == 0) {
      FUN_000b6830();
      local_28 = local_48;
      local_20 = 0;
      local_68 = DAT_0277cbb0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
          local_68 = DAT_0277cbb0;
        }
      }
      else {
        local_40 = '\0';
      }
      local_20 = '\x01';
      DAT_0277cbb0 = local_68;
      if (local_68 != 0) {
        local_20 = '\x01';
        FUN_00d50b00();
      }
      lVar2 = DAT_027d3808;
      local_60 = '\x01';
      if (DAT_027d3808 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar2;
      local_50 = '\x01';
      FUN_00d14a20(&local_58,&local_68);
      lVar2 = DAT_028af438;
      if (DAT_028af438 != local_38) {
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
        bVar1 = DAT_028af438 != 0;
        DAT_028af438 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_38;
        }
      }
      if ((lVar2 != 0) && (DAT_028af440 == '\0')) {
        DAT_028af440 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_38;
      }
      if ((local_30 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      DAT_028af441 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af441 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = DAT_028af438;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_017d1d6b;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_017d1d6b:
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


