// Function: FUN_01e62e00
// Address: 01e62e00
// Size: 914 bytes
// Class: GNString


void FUN_01e62e00(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar4 = DAT_027f3fc8;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) goto LAB_01e63152;
  if (DAT_027f3fc8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  lVar4 = DAT_027f3fe8;
  if (cVar3 == '\0') {
    plVar1 = (longlong *)*param_2;
    if (DAT_027f3fe8 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_027f3ff0;
    if (cVar3 == '\0') {
      plVar1 = (longlong *)*param_2;
      if (DAT_027f3ff0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027f3fd0;
      if (cVar3 == '\0') {
        plVar1 = (longlong *)*param_2;
        if (DAT_027f3fd0 != 0) {
          FUN_00d50b00();
        }
        cVar3 = (**(code **)(*plVar1 + 0x50))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        lVar4 = DAT_027f3fe0;
        if (cVar3 == '\0') {
          plVar1 = (longlong *)*param_2;
          if (DAT_027f3fe0 != 0) {
            FUN_00d50b00();
          }
          cVar3 = (**(code **)(*plVar1 + 0x50))();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') goto LAB_01e63152;
          (**(code **)(*unaff_RSI + 0x6a0))();
          lVar4 = local_40;
          if (local_40 == 0) goto LAB_01e63129;
          bVar2 = true;
          if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*unaff_RSI + 0x698))();
          lVar4 = local_40;
          if (local_40 == 0) goto LAB_01e63129;
          bVar2 = true;
          if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*unaff_RSI + 0x690))();
        lVar4 = local_40;
        if (local_40 == 0) goto LAB_01e63129;
        bVar2 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*unaff_RSI + 0x688))();
      lVar4 = local_40;
      if (local_40 == 0) goto LAB_01e63129;
      bVar2 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*unaff_RSI + 0x680))();
    lVar4 = local_40;
    if (local_40 == 0) {
LAB_01e63129:
      lVar4 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (lVar4 != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
LAB_01e63152:
  local_50 = *param_2;
  local_48 = '\0';
  FUN_01cb9170(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


