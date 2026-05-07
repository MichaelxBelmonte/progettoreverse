// Function: FUN_004b8a50
// Address: 004b8a50
// Size: 970 bytes
// Class: MDToolbarLayouter
// String references:
//   "LayerCollection %I entries"
//   "\n[EDT]"
//   "\n[REF]"
//   "\n[OFF]"
//   "[ENB]"
//   "[DIS]"
//   " %@"
//   "LayerCollection no entries"


void FUN_004b8a50(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong local_98;
  char local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (*(longlong *)(unaff_RSI + 0x10) == 0) {
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    local_60._0_1_ = (char)local_80;
    *(undefined1 *)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(undefined4 *)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &DAT_024cc6f0;
    FUN_00d94d80(&DAT_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c9fe20();
    lVar2 = local_88;
    local_60._0_1_ = (char)local_80;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    *(undefined1 *)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(undefined4 *)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &DAT_024cc6f0;
    FUN_00d94d80(&DAT_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_80;
    if ((char)local_80 == '\0') {
      ppuVar6 = &local_50;
    }
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,(char)local_80);
    *(undefined1 *)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_50 == '\0') {
      if (lVar2 == 0) goto LAB_004b8e0d;
      FUN_00d50b00();
    }
    else if (lVar2 == 0) goto LAB_004b8e0d;
    local_80._0_1_ = '\0';
    local_88 = 0;
    local_78 = lVar2;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_98 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar7 * 8);
        local_90 = '\0';
        local_88 = local_98;
        FUN_004b7f70(unaff_RSI,&local_98);
        puVar3 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_003b7710();
        if (cVar4 == '\0') {
          cVar4 = FUN_003b7780();
          if (cVar4 == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
        }
        else {
          FUN_00d8db40();
        }
        cVar4 = FUN_003b7990();
        if (cVar4 == '\0') {
          FUN_00d8db40();
        }
        else {
          FUN_00d8db40();
        }
        FUN_003b7950();
        lVar1 = CONCAT71(local_60._1_7_,(char)local_60);
        local_48 = 1;
        local_50 = &DAT_024c5048;
        local_38 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar1;
        FUN_00d94d80();
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_004b8e0d:
  FUN_00d8c7d0();
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


