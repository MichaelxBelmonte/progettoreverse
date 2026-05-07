// Function: FUN_01e621d0
// Address: 01e621d0
// Size: 726 bytes
// Class: GNString


void FUN_01e621d0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar5;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  lVar4 = DAT_028ba080;
  if ((DAT_028ba080 == 0) || (DAT_028ba089 == '\0')) {
    FUN_00e8cb50();
    lVar4 = DAT_027f3fc0;
    if (DAT_028ba080 == 0) {
      if (DAT_027f3fc0 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027f3fc8;
      if (DAT_027f3fc8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d43f00(DAT_02390d04,0);
      lVar3 = DAT_028ba080;
      if (DAT_028ba080 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_00d50b00();
            lVar3 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar3 = local_30;
        }
        bVar1 = DAT_028ba080 != 0;
        DAT_028ba080 = lVar3;
        if (bVar1) {
          FUN_00d50b20();
          lVar3 = local_30;
        }
      }
      if ((lVar3 != 0) && (DAT_028ba088 == '\0')) {
        DAT_028ba088 = '\x01';
        FUN_00e8cb90();
        lVar3 = local_30;
      }
      if ((local_28 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (DAT_028ba080 == 0) {
        uVar5 = (**(code **)(*unaff_RSI + 0x370))();
        local_40 = DAT_027f3fc8;
        if (DAT_027f3fc8 != 0) {
          uVar5 = FUN_00d50b00();
        }
        local_38 = '\x01';
        FUN_01d44ed0(uVar5,&local_40);
        lVar4 = DAT_028ba080;
        if (DAT_028ba080 != local_30) {
          if (local_28 == '\0') {
            if (local_30 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_30;
            }
          }
          else {
            local_28 = '\0';
            lVar4 = local_30;
          }
          bVar1 = DAT_028ba080 != 0;
          DAT_028ba080 = lVar4;
          if (bVar1) {
            FUN_00d50b20();
            lVar4 = local_30;
          }
        }
        if ((lVar4 != 0) && (DAT_028ba088 == '\0')) {
          DAT_028ba088 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_30;
        }
        if ((local_28 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *(undefined4 *)(DAT_028ba080 + 0x28) = 0x40c00000;
      }
      DAT_028ba089 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba089 = '\x01';
      FUN_00e8cb70();
    }
    lVar4 = DAT_028ba080;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_01e6236f;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01e6236f:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


