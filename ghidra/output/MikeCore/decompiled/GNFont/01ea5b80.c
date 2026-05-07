// Function: FUN_01ea5b80
// Address: 01ea5b80
// Size: 1749 bytes
// Class: GNFont


void FUN_01ea5b80(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined7 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  longlong *local_148;
  undefined1 local_140;
  ulonglong local_138;
  undefined1 local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  iVar4 = FUN_01d3b620();
  if (((iVar4 == 2) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) && (iVar4 = FUN_01d3b630(), iVar4 == 1)
     ) {
    FUN_01d3b620();
                    /* WARNING: Could not recover jumptable at 0x01ea5bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x918))(*(code **)(*unaff_RDI + 0x918));
    return;
  }
  if (((*(char *)((longlong)unaff_RDI + 0x19f) == '\0') || (iVar4 = FUN_01d3a5a0(), iVar4 != 1)) ||
     (iVar4 = FUN_01d3b630(), iVar4 != 1)) goto LAB_01ea60ee;
  (**(code **)(*unaff_RDI + 0x658))();
  plVar5 = local_40;
  plVar8 = (longlong *)*unaff_RSI;
  if (plVar8 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      local_48 = unaff_RSI + 1;
      if (local_38 != '\0') goto LAB_01ea5c7c;
      FUN_00d50b00();
      goto LAB_01ea5cb1;
    }
LAB_01ea5cb8:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = unaff_RSI + 1;
    lVar1 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar5;
      if (((char)lVar1 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ea5cb1:
      *(undefined1 *)local_48 = 1;
      goto LAB_01ea5cb8;
    }
    *unaff_RSI = (longlong)local_40;
    if (((char)lVar1 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ea5c7c:
    *(undefined1 *)local_48 = 1;
  }
  local_60 = 0;
  local_98 = 0;
  local_48 = (longlong *)0x0;
  iVar4 = FUN_01d3a5a0();
  if (iVar4 != 5) goto LAB_01ea60ee;
  FUN_01d3abf0();
  uVar9 = FUN_01e466c0();
  fVar12 = (float)unaff_RDI[0x32];
  auVar10._0_4_ = (float)uVar9 - fVar12;
  fVar13 = (float)((ulonglong)unaff_RDI[0x32] >> 0x20);
  auVar10._4_4_ = (float)((ulonglong)uVar9 >> 0x20) - fVar13;
  auVar10._8_4_ = (float)extraout_XMM0_Qb - 0.0;
  auVar10._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) - 0.0;
  auVar11._4_4_ = (float)((ulonglong)unaff_RDI[0x31] >> 0x20) + fVar13;
  auVar11._0_4_ = (float)unaff_RDI[0x31] + fVar12;
  auVar11._8_8_ = 0;
  auVar11 = divps(auVar10,auVar11);
  uVar7 = (int)auVar11._4_4_ * (int)unaff_RDI[0x33] + (int)auVar11._0_4_;
  if (((int)uVar7 < 0) || (*(int *)(unaff_RDI[0x2b] + 0xc) <= (int)uVar7)) goto LAB_01ea60ee;
  plVar8 = *(longlong **)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + (ulonglong)uVar7 * 8);
  if (plVar8 == (longlong *)0x0) {
    local_98 = 0;
    local_48 = (longlong *)0x0;
  }
  else {
    uVar9 = FUN_00d50b00();
    local_98 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    local_48 = plVar8;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  local_f0 = '\0';
  local_f8 = 0;
  local_50 = plVar5;
  FUN_01d4eaa0(unaff_RDI[0x31]);
  local_138 = CONCAT44(local_138._4_4_,uVar7);
  local_100 = plVar8;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52700();
  FUN_01d52740();
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_118 = 1;
  local_148 = local_48;
  local_140 = 0;
  uVar9 = FUN_01d530c0();
  FUN_01ea4e00(uVar9,&local_148);
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52770();
  uVar9 = FUN_01ca6a90();
  plVar8 = local_40;
  uVar6 = (undefined7)((ulonglong)uVar9 >> 8);
  if (local_40 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_54 = (undefined4)CONCAT71(uVar6,1);
    local_60 = 0;
  }
  else {
    local_60 = CONCAT71(uVar6,1);
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ea5f43;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01ea5f43:
  FUN_01ca5d90();
  plVar5 = (longlong *)unaff_RDI[0x2a];
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
    local_e0 = '\0';
    local_e8 = plVar8;
    cVar3 = (**(code **)(*plVar5 + 0x18))(local_138 & 0xffffffff,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01e42030();
      plVar2 = local_40;
      local_d8 = local_50;
      local_d0 = '\0';
      FUN_01e42030();
      FUN_00d50b00();
      local_138 = FUN_01e437f0();
      plVar5 = local_100;
      local_c8 = *unaff_RSI;
      local_c0 = '\0';
      FUN_01ca6a90();
      local_70 = local_a8;
      local_68 = 0;
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar2 + 0x738))(&local_70,&local_c8,5);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_54 == '\0' && plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar5 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  if ((char)local_54 == '\0' && plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_100 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ea60ee:
  local_b8 = *unaff_RSI;
  local_b0 = '\0';
  FUN_01e459c0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


