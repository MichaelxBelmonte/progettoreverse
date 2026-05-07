// Function: FUN_0197dfb0
// Address: 0197dfb0
// Size: 1147 bytes
// Class: MUSpectrumShaper


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197dfb0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  FUN_01989e10();
  *(undefined4 *)(unaff_RDI + 0x140) = 1;
  *(undefined1 *)(unaff_RDI + 0x18c) = 0;
  *(undefined4 *)(unaff_RDI + 0x198) = 0;
  if ((DAT_028b0ed8 == 0) || (DAT_028b0ee1 == '\0')) {
    FUN_00e8cb50();
    lVar2 = DAT_027eb4b0;
    if (DAT_028b0ed8 == 0) {
      if (DAT_027eb4b0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar3 = DAT_028b0ed8;
      if (DAT_028b0ed8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028b0ed8 != 0;
        DAT_028b0ed8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028b0ee0 == '\0')) {
        DAT_028b0ee0 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e0cb0;
      if (DAT_027e0cb0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar3 = DAT_028b0ee8;
      if (DAT_028b0ee8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028b0ee8 != 0;
        DAT_028b0ee8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028b0ef0 == '\0')) {
        DAT_028b0ef0 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e0cb8;
      if (DAT_027e0cb8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d20ca0(_DAT_0241ea30);
      lVar3 = DAT_028b0ef8;
      if (DAT_028b0ef8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar3 = local_28;
        }
        bVar1 = DAT_028b0ef8 != 0;
        DAT_028b0ef8 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_28;
        }
      }
      if ((lVar3 != 0) && (DAT_028b0f00 == '\0')) {
        DAT_028b0f00 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_28;
      }
      if ((local_20 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      DAT_028b0ee1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0ee1 = '\x01';
      FUN_00e8cb70();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x194) = 1;
  return;
}


