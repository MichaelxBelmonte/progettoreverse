// Function: FUN_019a40d0
// Address: 019a40d0
// Size: 1170 bytes
// Class: MUEditorSubview


void FUN_019a40d0(void)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  int iVar11;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong local_b0;
  char local_a8;
  ulonglong local_a0;
  char local_98;
  ulonglong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  longlong local_38;
  
  plVar1 = (longlong *)*unaff_RSI;
  plVar8 = (longlong *)unaff_RDI[0x3d];
  if (plVar1 == plVar8) {
    return;
  }
  if (plVar1 != (longlong *)0x0) {
    local_78 = 0;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = plVar8;
    uVar3 = (**(code **)(*plVar1 + 0x50))();
    plVar8 = (longlong *)(ulonglong)uVar3;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      return;
    }
  }
  if (unaff_RDI[0x9e] != 0) {
    unaff_RDI[0x9e] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x990))();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *unaff_RDI + 0x38))();
  FUN_00d216c0();
  if (*unaff_RSI != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    plVar8 = &local_b0;
    local_58 = *unaff_RSI;
    iVar11 = 0;
    while( true ) {
      iVar4 = 0;
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar4 = -iVar11;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)(local_58 + 0xc) <= iVar11) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
      iVar11 = iVar4;
      if (local_68 != 0) {
        local_a8 = '\0';
        local_b0 = local_68;
        FUN_00d21140();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = local_50._4_4_;
      }
    }
    FUN_000be170();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *unaff_RDI + 0x30))();
  (**(code **)(*unaff_RDI + 0x970))();
  lVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_019a42e5;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
LAB_019a42b9:
    local_70 = lVar7;
    uVar5 = FUN_0197c2b0();
    lVar7 = local_68;
    if (local_68 == 0) {
      local_40 = 0;
      local_38 = 0;
joined_r0x019a4302:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = lVar7 != 0;
      if (local_38 != 0) {
        uVar9 = (ulonglong)plVar1 & 0xffffff00;
        goto LAB_019a433d;
      }
      local_38 = 0;
      uVar9 = (ulonglong)plVar1 & 0xffffff00;
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_38 = lVar7;
        goto joined_r0x019a4302;
      }
      uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      bVar2 = true;
      local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_38 = local_68;
LAB_019a433d:
      local_a0 = *unaff_RSI;
      local_98 = '\0';
      FUN_01a17f30();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = FUN_0197c480();
    lVar12 = local_68;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    uVar10 = (undefined7)(uVar9 >> 8);
    if (local_68 == local_38) {
      if (lVar7 == 0) {
        if (local_68 == 0) {
          uVar9 = local_40 & 0xffffffff;
        }
        else {
          lVar12 = local_38;
          if (local_60 != '\0') goto joined_r0x019a43d0;
          uVar9 = CONCAT71(uVar10,1);
          local_40 = 0;
          FUN_00d50b00();
        }
      }
      else {
        uVar9 = local_40 & 0xffffffff;
      }
LAB_019a4463:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        bVar2 = false;
        local_40 = uVar9 & 0xffffffff;
        goto LAB_019a44ce;
      }
      local_40 = uVar9 & 0xffffffff;
      lVar12 = local_38;
    }
    else {
      if (local_60 == '\0') {
        if (local_68 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if ((bool)(bVar2 & local_38 != 0)) {
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          local_38 = lVar12;
          FUN_00d50b20();
          uVar9 = CONCAT71(uVar10,1);
        }
        else {
          uVar9 = CONCAT71(uVar10,1);
          local_38 = lVar12;
        }
        goto LAB_019a4463;
      }
      if ((bool)(bVar2 & local_38 != 0)) {
        local_40 = CONCAT71(uVar6,1);
        local_38 = local_68;
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
joined_r0x019a43d0:
      local_40 = CONCAT71(uVar6,1);
      if (lVar12 == 0) {
        bVar2 = false;
        goto LAB_019a44ce;
      }
    }
    local_90 = *unaff_RSI;
    local_88 = '\0';
    FUN_01a17f30();
    bVar2 = false;
    if ((local_88 != '\0') && (bVar2 = false, local_90 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    if (local_68 != 0) goto LAB_019a42b9;
LAB_019a42e5:
    bVar2 = true;
    local_40 = 0;
LAB_019a44ce:
    lVar12 = 0;
  }
  (**(code **)(*unaff_RDI + 0x998))();
  (**(code **)(*unaff_RDI + 0xa00))();
  lVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *unaff_RDI + 0x40))();
  }
  (**(code **)(&DAT_00001620 + *unaff_RDI))();
  (**(code **)(*unaff_RDI + 0x540))();
  (**(code **)(*unaff_RDI + 0xa48))();
  if (((char)local_40 != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


