// Function: FUN_00b85120
// Address: 00b85120
// Size: 4747 bytes
// Class: GNFilePath
// String references:
//   "%@.mdd"


/* WARNING: Removing unreachable block (ram,0x00b86258) */
/* WARNING: Removing unreachable block (ram,0x00b86264) */
/* WARNING: Removing unreachable block (ram,0x00b85c86) */
/* WARNING: Removing unreachable block (ram,0x00b85c92) */
/* WARNING: Removing unreachable block (ram,0x00b8547b) */
/* WARNING: Removing unreachable block (ram,0x00b854cf) */
/* WARNING: Removing unreachable block (ram,0x00b85bef) */
/* WARNING: Removing unreachable block (ram,0x00b85bff) */
/* WARNING: Removing unreachable block (ram,0x00b85bd1) */
/* WARNING: Removing unreachable block (ram,0x00b85bdd) */
/* WARNING: Removing unreachable block (ram,0x00b85519) */
/* WARNING: Removing unreachable block (ram,0x00b8556d) */
/* WARNING: Removing unreachable block (ram,0x00b85572) */
/* WARNING: Removing unreachable block (ram,0x00b85ea9) */
/* WARNING: Removing unreachable block (ram,0x00b85eb5) */
/* WARNING: Removing unreachable block (ram,0x00b86296) */
/* WARNING: Removing unreachable block (ram,0x00b862a2) */
/* WARNING: Removing unreachable block (ram,0x00b8614b) */
/* WARNING: Removing unreachable block (ram,0x00b8615b) */
/* WARNING: Removing unreachable block (ram,0x00b85ae6) */
/* WARNING: Removing unreachable block (ram,0x00b85aa9) */
/* WARNING: Removing unreachable block (ram,0x00b85ac8) */
/* WARNING: Removing unreachable block (ram,0x00b85924) */
/* WARNING: Removing unreachable block (ram,0x00b85935) */
/* WARNING: Removing unreachable block (ram,0x00b856cf) */
/* WARNING: Removing unreachable block (ram,0x00b856db) */
/* WARNING: Removing unreachable block (ram,0x00b85987) */
/* WARNING: Removing unreachable block (ram,0x00b85a4b) */
/* WARNING: Removing unreachable block (ram,0x00b85ada) */
/* WARNING: Removing unreachable block (ram,0x00b85ab2) */
/* WARNING: Removing unreachable block (ram,0x00b85ca0) */
/* WARNING: Removing unreachable block (ram,0x00b85cac) */
/* WARNING: Removing unreachable block (ram,0x00b86391) */
/* WARNING: Removing unreachable block (ram,0x00b863a1) */

bool FUN_00b85120(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  byte bVar9;
  longlong lVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar11;
  bool bVar12;
  int local_144;
  longlong local_120;
  char local_118;
  undefined4 local_f8;
  undefined4 uStack_f4;
  char local_f0;
  longlong *local_e8;
  uint local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_a8;
  char local_a0;
  longlong *local_88;
  bool local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_58;
  char local_40;
  longlong *local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar1 == 0) goto LAB_00b86356;
  lVar10 = FUN_00e313b0();
  if (lVar10 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_00b7ca00();
  (**(code **)(*DAT_028a53a8 + 0x368))();
  plVar2 = *(longlong **)(unaff_RDI + 0x58);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_e0 = local_e0 & 0xffffff00;
  local_e8 = plVar2;
  FUN_00e383c0();
  if (((char)local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a53a8 + 0x378))();
  plVar2 = *(longlong **)(unaff_RDI + 0x58);
  if (plVar2 == (longlong *)0x0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    FUN_00d50b00();
    plVar11 = plVar2;
  }
  local_78 = plVar2 != (longlong *)0x0;
  if ((*(int *)(unaff_RDI + 0x50) == 1) && (*(char *)(unaff_RDI + 0x28) == '\x02')) {
    local_38 = (longlong *)*unaff_RSI;
    bVar12 = true;
    if ((local_38 == (longlong *)0x0) || ((char)unaff_RSI[1] == '\0')) {
      bVar9 = 0;
      cVar8 = '\0';
    }
    else {
      FUN_00d50b00();
      bVar9 = 1;
      bVar12 = false;
      cVar8 = '\x01';
    }
    local_e0 = local_e0 & 0xffffff00;
    local_e8 = local_38;
    FUN_00b834c0(0,&local_144);
    if (local_a8 == (longlong *)0x0) {
      local_e8 = (longlong *)*unaff_RSI;
      local_f8 = 0;
      local_e0 = local_e0 & 0xffffff00;
      FUN_00b834c0(1,&local_f8);
      if (local_38 != (longlong *)0x0) {
        if (local_a0 == '\0') {
          bVar12 = local_38 != (longlong *)0x0;
          local_40 = '\x01';
          local_38 = local_a8;
          cVar8 = local_40;
          if ((bool)(bVar9 & bVar12)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar12 = local_38 != (longlong *)0x0;
          local_40 = '\x01';
          cVar8 = local_40;
          local_40 = '\x01';
          local_38 = local_a8;
          if ((bool)(bVar9 & bVar12)) {
            FUN_00d50b20();
            cVar8 = local_40;
          }
        }
      }
      local_40 = cVar8;
      local_e8 = (longlong *)*unaff_RSI;
      local_f8 = 1;
      local_e0 = local_e0 & 0xffffff00;
      FUN_00b834c0(1,&local_f8);
      local_58 = (longlong *)0x0;
      local_88 = (longlong *)0x0;
      bVar12 = false;
      local_68 = *(longlong **)(unaff_RDI + 0x58);
      cVar5 = '\0';
joined_r0x00b85b09:
      if (local_68 != (longlong *)0x0) goto LAB_00b859e6;
LAB_00b85b0f:
      bVar6 = false;
      local_68 = (longlong *)0x0;
    }
    else {
      if (local_a0 == '\0') {
        FUN_00d50b00();
      }
      if (local_144 == 0) {
        local_88 = (longlong *)0x0;
        bVar12 = false;
LAB_00b859c9:
        cVar5 = '\x01';
        local_58 = local_a8;
        local_40 = cVar8;
      }
      else {
        FUN_00d50b00();
        if (local_38 == local_a8) {
          local_88 = local_38;
          if (!bVar12) {
            bVar12 = true;
            goto LAB_00b859c9;
          }
          bVar12 = true;
          cVar5 = '\x01';
          local_58 = local_a8;
          FUN_00d50b00();
          local_40 = '\x01';
        }
        else {
          bVar4 = (bool)(bVar9 & local_38 != (longlong *)0x0);
          if (bVar4) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          FUN_00d50b00();
          bVar12 = true;
          local_58 = local_38;
          cVar5 = cVar8;
          if (!bVar4) {
            local_40 = '\x01';
            local_68 = *(longlong **)(unaff_RDI + 0x58);
            local_38 = local_a8;
            local_88 = local_a8;
            goto joined_r0x00b85b09;
          }
          local_88 = local_a8;
          FUN_00d50b20();
          local_40 = '\x01';
          local_38 = local_a8;
        }
      }
      local_68 = *(longlong **)(unaff_RDI + 0x58);
      if (local_68 == (longlong *)0x0) goto LAB_00b85b0f;
LAB_00b859e6:
      FUN_00d50b00();
      bVar6 = true;
    }
    local_70 = *(longlong **)(unaff_RDI + 0x78);
    if (local_70 == (longlong *)0x0) {
      bVar4 = false;
      local_70 = (longlong *)0x0;
      if (param_2 != '\0') goto LAB_00b85b75;
LAB_00b85c2a:
      cVar8 = (**(code **)(*local_68 + 0x438))();
      bVar9 = 1;
      if (cVar8 != '\0') {
        bVar9 = (**(code **)(*local_70 + 0x438))();
        bVar9 = bVar9 ^ 1;
      }
    }
    else {
      FUN_00d50b00();
      bVar4 = true;
      if (param_2 == '\0') goto LAB_00b85c2a;
LAB_00b85b75:
      cVar8 = (**(code **)(*local_68 + 0x440))();
      bVar9 = 1;
      if (cVar8 != '\0') {
        bVar9 = (**(code **)(*local_70 + 0x440))();
        bVar9 = bVar9 ^ 1;
      }
    }
    plVar3 = (longlong *)*unaff_RSI;
    if (plVar3 == local_38) {
      if (((local_40 != '\0') && ((char)unaff_RSI[1] == '\0')) && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
        goto LAB_00b85d41;
      }
    }
    else {
      lVar7 = unaff_RSI[1];
      if ((local_40 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_38;
      if (((char)lVar7 != '\0') && (plVar3 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00b85d41:
      *(char *)(unaff_RSI + 1) = local_40;
    }
    if (bVar9 != 0) {
      plVar3 = (longlong *)*unaff_RSI;
      if (plVar3 == plVar11) {
        if (((plVar2 == (longlong *)0x0) || ((char)unaff_RSI[1] != '\0')) ||
           (plVar11 == (longlong *)0x0)) goto LAB_00b85e32;
        FUN_00d50b00();
        local_78 = true;
      }
      else {
        lVar7 = unaff_RSI[1];
        if (plVar2 != (longlong *)0x0 && plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar11;
        if (((char)lVar7 != '\0') && (plVar3 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(bool *)(unaff_RSI + 1) = local_78;
    }
  }
  else {
    if (param_2 == '\0') {
      (**(code **)(*plVar11 + 0x438))();
    }
    else {
      (**(code **)(*plVar11 + 0x440))();
    }
    local_58 = (longlong *)0x0;
    cVar5 = '\0';
    local_70 = (longlong *)0x0;
    local_88 = (longlong *)0x0;
    bVar4 = false;
    bVar12 = false;
    local_38 = (longlong *)0x0;
    local_40 = '\0';
    bVar6 = false;
    local_68 = (longlong *)0x0;
  }
LAB_00b85e32:
  (**(code **)(*DAT_028a53a8 + 0x368))();
  FUN_00d50b00();
  FUN_00b80860();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a53a8 + 0x378))();
  FUN_00b81b20();
  (**(code **)(*plVar11 + 0x368))();
  local_e0 = 1;
  local_e8 = &DAT_024c5048;
  local_d0 = 0;
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  local_d8 = local_120;
  local_d0 = '\x01';
  FUN_00d8cb40();
  lVar7 = CONCAT44(uStack_f4,local_f8);
  if (local_f0 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_f0 = '\0';
  }
  FUN_00cddf30();
  if (local_a0 == '\0') {
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_a0 = '\0';
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (CONCAT44(uStack_f4,local_f8) != 0)) {
    FUN_00d50b20();
  }
  local_e8 = &DAT_024c5048;
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  cVar8 = (**(code **)(*local_a8 + 0x398))();
  if (cVar8 != '\0') {
    (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
    local_e0 = 1;
    local_e8 = &DAT_024c5048;
    local_d0 = 0;
    if (local_120 != 0) {
      FUN_00d50b00();
    }
    local_d8 = local_120;
    local_d0 = '\x01';
    FUN_00d8cb40();
    lVar7 = CONCAT44(uStack_f4,local_f8);
    if (local_f0 == '\0') {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_f0 = '\0';
    }
    FUN_00cddf30();
    if ((local_a0 == '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (CONCAT44(uStack_f4,local_f8) != 0)) {
      FUN_00d50b20();
    }
    local_e8 = &DAT_024c5048;
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (param_2 == '\0') {
      (**(code **)(*local_a8 + 0x438))();
    }
    else {
      (**(code **)(*local_a8 + 0x440))();
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (lVar10 != 0) {
    FUN_00b7c570();
  }
  FUN_00d50b20();
  if ((bVar12) && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar5 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00b86356:
  return lVar1 != 0;
}


