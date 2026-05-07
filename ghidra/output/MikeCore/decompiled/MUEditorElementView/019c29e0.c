// Function: FUN_019c29e0
// Address: 019c29e0
// Size: 1405 bytes
// Class: MUEditorElementView


void FUN_019c29e0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  double dVar8;
  double dVar9;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RSI + 0xa18))();
  if (local_40 == (longlong *)0x0) {
    bVar7 = true;
  }
  else {
    FUN_01a8c310();
    (**(code **)(*unaff_RSI + 0xa18))();
    bVar7 = local_50 == local_80;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar7) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    goto LAB_019c2f2f;
  }
  if ((longlong *)unaff_RSI[0x9d] == (longlong *)0x0) {
LAB_019c2cf5:
    lVar6 = unaff_RSI[0x9d];
    if (lVar6 == 0) goto LAB_019c2d16;
  }
  else {
    (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x3a0))();
    (**(code **)(*unaff_RSI + 0x958))();
    plVar5 = local_40;
    plVar1 = local_50;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == plVar1) {
      FUN_01a8c310();
      (**(code **)(*unaff_RSI + 0xa18))();
      plVar5 = local_40;
      plVar1 = local_50;
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 == plVar1) {
        iVar2 = FUN_01a904a0();
        iVar3 = FUN_01a904a0();
        if (iVar2 == iVar3) {
          iVar2 = FUN_01a90480();
          iVar3 = FUN_01a90480();
          if (iVar2 == iVar3) {
            (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x388))();
            (**(code **)(*(longlong *)*param_2 + 0x388))();
            plVar5 = local_40;
            plVar1 = local_50;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar5 == plVar1) {
              dVar8 = (double)FUN_01a905a0();
              dVar9 = (double)FUN_01a905a0();
              if ((dVar8 == dVar9) && (!NAN(dVar8) && !NAN(dVar9))) goto LAB_019c2cf5;
            }
          }
        }
      }
    }
    (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x3a0))();
    plVar1 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RSI[0x9d] + 0x3a0))();
      plVar1 = local_40;
      lVar6 = unaff_RSI[0x9d];
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x3e0))();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RSI[0x9d] != 0) {
      unaff_RSI[0x9d] = 0;
      FUN_00d50b20();
      goto LAB_019c2cf5;
    }
LAB_019c2d16:
    FUN_01a904a0();
    uVar4 = FUN_01a90480();
    (**(code **)(*(longlong *)*param_2 + 0x388))();
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    (**(code **)(*unaff_RSI + 0xa18))();
    local_58 = 0;
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_80;
    FUN_01a905a0();
    FUN_01a8bce0(1,uVar4,&local_70,&local_60);
    plVar1 = (longlong *)unaff_RSI[0x9d];
    plVar5 = plVar1;
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_019c2df4;
        }
        FUN_00d50b00();
        plVar1 = (longlong *)unaff_RSI[0x9d];
        unaff_RSI[0x9d] = (longlong)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_019c2df4:
        unaff_RSI[0x9d] = (longlong)plVar5;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x958))();
    plVar1 = local_40;
    lVar6 = unaff_RSI[0x9d];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3d8))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar6 = unaff_RSI[0x9d];
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_019c2f2f:
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


