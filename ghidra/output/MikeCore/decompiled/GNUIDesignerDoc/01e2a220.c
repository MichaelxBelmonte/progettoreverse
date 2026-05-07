// Function: FUN_01e2a220
// Address: 01e2a220
// Size: 1275 bytes
// Class: GNUIDesignerDoc
// String references:
//   "%@.gnui"


void FUN_01e2a220(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  undefined7 uVar11;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar12;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined4 local_94;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  ulonglong local_38;
  
  lVar1 = DAT_027f3810;
  local_e8 = *unaff_RSI;
  if ((local_e8 == 0) || (plVar8 = (longlong *)*param_2, plVar8 == (longlong *)0x0))
  goto LAB_01e2a6dd;
  local_e0 = '\0';
  if (DAT_027f3810 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  uVar4 = (**(code **)(*plVar8 + 0x4f0))(&local_d8,&local_e8);
  plVar8 = local_60;
  if (local_60 == (longlong *)0x0) {
    uVar6 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    plVar8 = (longlong *)0x0;
    local_38 = 0;
  }
  else {
    if ((char)local_58 == '\0') {
      uVar4 = FUN_00d50b00();
      uVar6 = 0;
      local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_58 == '\0') || (local_60 == (longlong *)0x0)) goto LAB_01e2a2f9;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    uVar6 = 0;
  }
LAB_01e2a2f9:
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar8 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar8 + 0x398))(), cVar2 == '\0')) {
    plVar9 = (longlong *)*param_2;
    lVar1 = *unaff_RSI;
    local_58 = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    local_94 = uVar6;
    local_40 = plVar8;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    FUN_00d8cb40();
    local_70 = local_90;
    local_68 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    plVar7 = local_40;
    local_68 = '\x01';
    local_c0 = '\0';
    local_c8 = 0;
    uVar4 = (**(code **)(*plVar9 + 0x4f0))(&local_c8,&local_70);
    plVar8 = local_80;
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    uVar11 = (undefined7)((ulonglong)plVar9 >> 8);
    if (local_80 == plVar7) {
      plVar8 = plVar7;
      if (((byte)local_94 & local_80 != (longlong *)0x0) == 1) {
        if (local_78 != '\0') goto LAB_01e2a469;
        plVar9 = (longlong *)CONCAT71(uVar11,1);
        FUN_00d50b00();
      }
      else {
        plVar9 = (longlong *)(local_38 & 0xffffffff);
      }
LAB_01e2a4cb:
      plVar7 = plVar8;
      if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) {
        local_38 = (ulonglong)plVar9 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        local_38 = (ulonglong)plVar9 & 0xffffffff;
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar9 = (longlong *)CONCAT71(uVar11,1);
        if (((byte)local_38 & plVar7 != (longlong *)0x0) == 1) {
          FUN_00d50b20();
        }
        goto LAB_01e2a4cb;
      }
      bVar12 = plVar7 != (longlong *)0x0;
      plVar7 = local_80;
      if (((byte)local_38 & bVar12) == 1) {
        FUN_00d50b20();
        uVar5 = extraout_var;
      }
LAB_01e2a469:
      local_78 = '\0';
      local_38 = CONCAT71(uVar5,1);
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar7 + 0x398))(), cVar2 == '\0')) {
      local_b8 = *unaff_RSI;
      local_b0 = '\0';
      local_a8 = 0;
      local_a0 = '\0';
      (**(code **)(*(longlong *)*param_2 + 0x4f0))(&local_a8,&local_b8);
      plVar8 = local_60;
      uVar5 = (undefined7)((ulonglong)plVar9 >> 8);
      if (local_60 == plVar7) {
        if (((char)local_38 == '\0') && (local_60 != (longlong *)0x0)) {
          plVar8 = plVar7;
          if ((char)local_58 != '\0') goto LAB_01e2a5ff;
          uVar10 = CONCAT71(uVar5,1);
          FUN_00d50b00();
        }
        else {
          uVar10 = local_38 & 0xffffffff;
          plVar8 = plVar7;
        }
LAB_01e2a665:
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          uVar10 = CONCAT71(uVar5,1);
          if (((char)local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e2a665;
        }
        if (((char)local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e2a5ff:
        local_58 = local_58 & 0xffffff00;
        uVar10 = CONCAT71(uVar5,1);
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_01e2a6dd:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return;
      }
      local_38 = uVar10 & 0xffffffff;
      cVar3 = (**(code **)(*plVar8 + 0x398))();
      cVar2 = (char)uVar10;
      if (cVar3 == '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        if (cVar2 == '\0') {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar8 = plVar7;
      cVar2 = (char)local_38;
    }
    if (cVar2 != '\0') goto LAB_01e2a354;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)uVar6 == '\0') goto LAB_01e2a354;
  }
  FUN_00d50b00();
LAB_01e2a354:
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


