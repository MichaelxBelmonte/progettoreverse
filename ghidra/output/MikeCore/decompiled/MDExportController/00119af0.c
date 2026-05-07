// Function: FUN_00119af0
// Address: 00119af0
// Size: 1444 bytes
// Class: MDExportController
// String references:
//   "%0.3f kHz"


void FUN_00119af0(void)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  undefined4 uVar7;
  undefined8 *local_c0;
  undefined4 local_b8;
  float local_b4;
  ulonglong local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  uVar3 = FUN_01d70da0();
  if ((int)uVar3 < 0) {
    iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x150) + 0xc);
    if (0 < iVar4) {
      uVar3 = 0;
    }
  }
  else {
    iVar4 = *(int *)(*(longlong *)(unaff_RDI + 0x150) + 0xc);
  }
  uVar2 = iVar4 - 1;
  if ((int)uVar3 < iVar4) {
    uVar2 = uVar3;
  }
  uVar3 = FUN_01d70da0();
  if (uVar2 != uVar3) {
    FUN_01d6ed40();
  }
  FUN_01d6f8d0();
  FUN_01d6f8d0();
  if ((int)uVar2 < 0) {
    return;
  }
  local_b0 = (ulonglong)uVar2;
  iVar4 = FUN_003b9070();
  if (iVar4 == 0) goto LAB_00119faa;
  FUN_003b9120();
  lVar5 = *(longlong *)(unaff_RDI + 0x80);
  lVar6 = lVar5;
  if (lVar5 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == 0) {
        lVar6 = 0;
        goto LAB_00119be1;
      }
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_58;
      lVar6 = local_58;
    }
    else {
      local_50 = '\0';
      lVar6 = local_58;
LAB_00119be1:
      *(longlong *)(unaff_RDI + 0x80) = lVar6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar6 = local_58;
    }
  }
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  FUN_003b90f0();
  lVar5 = *(longlong *)(unaff_RDI + 0x88);
  lVar6 = lVar5;
  if (lVar5 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == 0) {
        lVar6 = 0;
        goto LAB_00119c7a;
      }
      FUN_00d50b00();
      lVar5 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_58;
      lVar6 = local_58;
    }
    else {
      local_50 = '\0';
      lVar6 = local_58;
LAB_00119c7a:
      *(longlong *)(unaff_RDI + 0x88) = lVar6;
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar6 = local_58;
    }
  }
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x80) != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x80);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar4 = -local_40._4_4_;
        }
        else {
          iVar4 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar4 = 0;
        }
        local_40 = CONCAT44(iVar4,(int)local_40);
      }
      lVar5 = (longlong)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(local_48 + 0xc) <= iVar4) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar5 * 8);
      local_b4 = (float)FUN_00d459e0();
      local_b4 = local_b4 / DAT_02393944;
      local_b8 = 1;
      local_c0 = &DAT_024d0b28;
      FUN_00d8cb40(local_b4,&local_c0);
      local_a8 = local_68;
      local_a0 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_a0 = '\x01';
      FUN_01d6f990();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136b80();
  }
  if (*(longlong *)(unaff_RDI + 0x88) != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_48 = *(longlong *)(unaff_RDI + 0x88);
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar4 = -local_40._4_4_;
        }
        else {
          iVar4 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar4 = 0;
        }
        local_40 = CONCAT44(iVar4,(int)local_40);
      }
      lVar5 = (longlong)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (*(int *)(local_48 + 0xc) <= iVar4) break;
      local_58 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar5 * 8);
      FUN_00d45870();
      FUN_00ae7020();
      local_98 = local_68;
      local_90 = 0;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_90 = '\x01';
      FUN_01d6f990();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00136b80();
  }
LAB_00119faa:
  plVar1 = *(longlong **)(unaff_RDI + 0xd0);
  uVar7 = FUN_003b9090();
  local_78 = local_68;
  local_70 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_70 = '\x01';
  FUN_00e427c0(uVar7,&local_78);
  local_88 = local_58;
  local_80 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_80 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}


