// Function: FUN_00b82750
// Address: 00b82750
// Size: 2325 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b82c9d) */
/* WARNING: Removing unreachable block (ram,0x00b82ca9) */
/* WARNING: Removing unreachable block (ram,0x00b82c18) */
/* WARNING: Removing unreachable block (ram,0x00b82b63) */
/* WARNING: Removing unreachable block (ram,0x00b82b68) */
/* WARNING: Removing unreachable block (ram,0x00b829b7) */
/* WARNING: Removing unreachable block (ram,0x00b82b90) */
/* WARNING: Removing unreachable block (ram,0x00b82b9c) */
/* WARNING: Removing unreachable block (ram,0x00b82c70) */
/* WARNING: Removing unreachable block (ram,0x00b82c75) */
/* WARNING: Removing unreachable block (ram,0x00b82b10) */
/* WARNING: Removing unreachable block (ram,0x00b82b20) */
/* WARNING: Removing unreachable block (ram,0x00b83032) */
/* WARNING: Removing unreachable block (ram,0x00b8303f) */
/* WARNING: Removing unreachable block (ram,0x00b82a37) */
/* WARNING: Removing unreachable block (ram,0x00b82a44) */
/* WARNING: Removing unreachable block (ram,0x00b828c4) */
/* WARNING: Removing unreachable block (ram,0x00b828cd) */

void FUN_00b82750(undefined8 param_1,int param_2,undefined4 param_3,uint param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 in_ECX;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar8;
  longlong *local_res8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 local_90;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_60;
  char local_58;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  uVar5 = (uint)((char)in_ECX == '\x02');
  if (param_4 != 1) {
    uVar5 = param_4;
  }
  *(uint *)(unaff_RDI + 0x50) = uVar5;
  lVar1 = *local_res8;
  local_90 = param_1;
  local_80 = in_ECX;
  if (lVar1 != 0) {
    lVar6 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar6 != lVar1) {
      FUN_00d50b00();
      *(longlong *)(unaff_RDI + 0x40) = lVar1;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    uVar5 = *(uint *)(unaff_RDI + 0x50);
  }
  if (uVar5 == 1) {
    local_84 = 0;
    local_40 = *unaff_RSI;
    FUN_00b834c0(0,&local_84);
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
        goto LAB_00b828d2;
      }
LAB_00b829d4:
      local_7c = 0;
      FUN_00b834c0(1,&local_7c);
      local_48 = local_60;
      if (local_60 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
        if (local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      local_40 = *unaff_RSI;
      local_7c = 1;
      FUN_00b834c0(1,&local_7c);
      if (local_60 == 0) {
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
    }
    else {
      if (local_60 == 0) goto LAB_00b829d4;
LAB_00b828d2:
      if (local_84 == 0) {
        FUN_00d50b00();
        local_48 = *unaff_RSI;
        bVar3 = true;
        if (local_48 == 0) {
          bVar4 = false;
          local_48 = 0;
        }
        else if ((char)unaff_RSI[1] == '\0') {
          bVar4 = false;
        }
        else {
          bVar3 = true;
          FUN_00d50b00(local_48);
          bVar4 = true;
        }
      }
      else {
        lVar1 = *unaff_RSI;
        bVar3 = false;
        if ((lVar1 != 0) && ((char)unaff_RSI[1] != '\0')) {
          bVar3 = true;
          FUN_00d50b00();
        }
        bVar4 = true;
        FUN_00d50b00();
        local_48 = local_60;
        local_60 = lVar1;
      }
      FUN_00d50b20();
    }
    local_b8 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_c0 = lVar1;
    FUN_00bb9c80(local_90,param_2,param_3,&local_c0);
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar1 != local_40) {
      if (local_40 == 0) {
        *(undefined8 *)(unaff_RDI + 0x70) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x70);
        *(longlong *)(unaff_RDI + 0x70) = local_40;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_a8 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00bb9c80(local_90,param_2,param_3,&local_b0);
    lVar1 = *(longlong *)(unaff_RDI + 0x88);
    if (lVar1 != local_40) {
      if (local_40 == 0) {
        *(undefined8 *)(unaff_RDI + 0x88) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x88);
        *(longlong *)(unaff_RDI + 0x88) = local_40;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_38 = '\0';
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x58) = local_48;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
    if (lVar1 != local_60) {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x78) = local_60;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((bVar3) && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_a0 = lVar1;
    FUN_00bb9c80(local_90,param_2,param_3,&local_a0);
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    lVar6 = lVar1;
    if (lVar1 != local_40) {
      lVar6 = local_40;
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar6 = 0;
          goto LAB_00b82894;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x70);
        *(longlong *)(unaff_RDI + 0x70) = local_40;
      }
      else {
        local_38 = '\0';
LAB_00b82894:
        *(longlong *)(unaff_RDI + 0x70) = lVar6;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02764880;
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    if (DAT_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(unaff_RDI + 0x28) = local_80;
  *(undefined8 *)(unaff_RDI + 0x30) = local_90;
  *(undefined4 *)(unaff_RDI + 0x2c) = param_3;
  plVar2 = (longlong *)*unaff_RSI;
  plVar7 = *(longlong **)(unaff_RDI + 0x58);
  if (plVar7 == plVar2) {
LAB_00b82d95:
    *(int *)(unaff_RDI + 0x24) = param_2;
    plVar2 = plVar7;
  }
  else {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x58) = plVar2;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = *(longlong **)(unaff_RDI + 0x58);
      goto LAB_00b82d95;
    }
    *(int *)(unaff_RDI + 0x24) = param_2;
  }
  if (plVar2 == (longlong *)0x0) goto joined_r0x00b82e56;
  (**(code **)(*plVar2 + 0x3c0))();
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_00b82dd3;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x60);
      *(longlong *)(unaff_RDI + 0x60) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00b82dd3:
      *(longlong *)(unaff_RDI + 0x60) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  param_2 = *(int *)(unaff_RDI + 0x24);
joined_r0x00b82e56:
  if (param_2 != 10) {
    (**(code **)(*DAT_028a53a8 + 0x368))();
    uVar8 = FUN_00d50b00();
    local_c8 = 0;
    local_d0 = *(longlong *)(unaff_RDI + 0x58);
    if (local_d0 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_c8 = '\x01';
    FUN_00b80860(uVar8,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*DAT_028a53a8 + 0x378))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x48) + 0x368))();
    FUN_00e31650();
    FUN_00b822a0();
    (**(code **)(**(longlong **)(unaff_RDI + 0x48) + 0x378))();
  }
  return;
}


