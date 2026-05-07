// Function: FUN_00cd6cd0
// Address: 00cd6cd0
// Size: 628 bytes
// Class: GNString


void FUN_00cd6cd0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x40) + 0x30) + 0x368))();
  lVar6 = *(longlong *)(unaff_RSI + 0x40);
  if (*(longlong *)(lVar6 + 0x38) == 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x378))();
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    plVar2 = *(longlong **)(unaff_RSI + 0x50);
    if (plVar2 == (longlong *)0x0) {
      iVar1 = *(int *)(unaff_RSI + 0x48);
      if (iVar1 == 0) {
        local_38 = 0;
        lVar5 = 0;
      }
      else {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x10);
        FUN_00d50b00();
        uVar4 = FUN_00cd0ea0(param_1,*(undefined4 *)(lVar6 + 0x20 + (ulonglong)(iVar1 - 1) * 0x23c))
        ;
        if (local_68 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        FUN_00d50b20();
        lVar6 = *(longlong *)(unaff_RSI + 0x40);
        lVar5 = local_68;
      }
      (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x378))();
    }
    else {
      FUN_00d50b00();
      (**(code **)(**(longlong **)(*(longlong *)(unaff_RSI + 0x40) + 0x30) + 0x378))();
      local_58 = DAT_02704060;
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\x01';
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        lVar6 = *(longlong *)(unaff_RSI + 0x40);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        FUN_00d8ee20();
        lVar5 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_70 = 1;
        uVar4 = FUN_00cd0c90(param_1,local_78);
        if (local_68 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar5 = local_68;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = 0;
        lVar5 = 0;
      }
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_38 != '\0') goto LAB_00cd6f28;
    if (lVar5 != 0) {
      FUN_00d50b00();
      goto LAB_00cd6f28;
    }
  }
  lVar5 = 0;
LAB_00cd6f28:
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


