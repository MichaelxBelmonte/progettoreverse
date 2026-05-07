// Function: FUN_01e2a9a0
// Address: 01e2a9a0
// Size: 504 bytes
// Class: GNUIDesignerDoc


longlong * FUN_01e2a9a0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (DAT_028b95a0 == 0) {
    bVar2 = false;
LAB_01e2aa92:
    local_88 = *unaff_RSI;
    local_80 = 0;
    FUN_01f27fe0();
    (**(code **)(*local_58 + 0x610))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = 1;
    FUN_01e2a220(param_1,local_78);
    if (local_68 == 0) {
      lVar1 = 0;
    }
    else {
      bVar2 = true;
      lVar1 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar2) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)(DAT_028b95a0 + 0xc);
    bVar2 = false;
    do {
      if ((int)uVar3 < 1) goto LAB_01e2aa92;
      lVar1 = *(longlong *)(*(longlong *)(DAT_028b95a0 + 0x10) + -8 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_90 = 1;
      local_98 = lVar1;
      FUN_01e2a220(param_1,&local_98);
      lVar4 = local_68;
      if (local_68 == 0) {
        lVar4 = 0;
      }
      else {
        bVar2 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar3 = uVar3 - 1;
    } while (lVar4 == 0);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


