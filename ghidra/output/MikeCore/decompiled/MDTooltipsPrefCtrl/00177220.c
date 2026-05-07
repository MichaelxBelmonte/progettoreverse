// Function: FUN_00177220
// Address: 00177220
// Size: 1487 bytes
// Class: MDTooltipsPrefCtrl


void FUN_00177220(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar10;
  undefined8 uVar11;
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  float local_128;
  float fStack_124;
  float local_118;
  float fStack_114;
  float local_f8;
  float fStack_f4;
  float local_e8;
  float fStack_e4;
  char local_d8;
  undefined7 uStack_d7;
  char local_d0 [8];
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined8 uStack_80;
  undefined8 local_70;
  longlong *local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  char local_38 [8];
  
  uVar8 = DAT_023dcce4;
  fVar3 = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  if (*(char *)(unaff_RDI + 0xa0) == '\0') {
    local_70 = DAT_023dcce4;
    local_40 = DAT_023dcce4;
    FUN_00176c40();
    uVar7 = (**(code **)(*local_68 + 0x938))();
    uVar11 = param_2;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d8))();
    local_b0 = uVar11;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    if (*(char *)(unaff_RDI + 0xb0) == '\0') {
      if ((longlong)*(int *)(unaff_RDI + 0x88) == -1) {
        local_a8 = ZEXT816(0);
        _local_88 = ZEXT816(0);
        auVar12 = ZEXT816(0);
        local_98._0_4_ = 0.0;
      }
      else {
        lVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x80) + 0x10) +
                 (longlong)*(int *)(unaff_RDI + 0x88) * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        FUN_01e53c20();
        plVar1 = local_68;
        pcVar5 = &local_d8;
        if (local_60[0] != '\0') {
          pcVar5 = local_60;
        }
        local_d8 = local_60[0];
        *pcVar5 = '\0';
        if ((local_60[0] != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        local_40 = (**(code **)(*plVar1 + 0x530))();
        uStack_80 = extraout_XMM0_Qb_00;
        local_88 = (undefined1  [8])local_40;
        local_98 = (undefined1  [8])(**(code **)(*plVar1 + 0x528))();
        uStack_90 = extraout_XMM0_Qb_01;
        if (local_d8 != '\0') {
          FUN_00d50b20();
        }
        local_a8._4_4_ = local_88._4_4_;
        local_a8._0_4_ = local_88._4_4_;
        local_a8._8_4_ = uStack_80._4_4_;
        local_a8._12_4_ = uStack_80._4_4_;
        auVar12._4_4_ = local_98._4_4_;
        auVar12._0_4_ = local_98._4_4_;
        auVar12._8_4_ = uStack_90._4_4_;
        auVar12._12_4_ = uStack_90._4_4_;
      }
    }
    else {
      local_98._0_4_ = (undefined4)uVar8;
      _local_88 = ZEXT416((uint)local_98._0_4_);
      auVar12 = ZEXT416((uint)((ulonglong)uVar8 >> 0x20));
      local_a8 = auVar12;
      if (*(longlong *)(unaff_RDI + 0x80) != 0) {
        local_60[0] = '\0';
        local_68 = (longlong *)0x0;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        local_c8._0_16_ = auVar12;
        _local_98 = _local_88;
        local_58 = *(longlong *)(unaff_RDI + 0x80);
        while( true ) {
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar6 = -local_50._4_4_;
            }
            else {
              iVar6 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar6);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar6 = 0;
            }
            local_50 = CONCAT44(iVar6,(int)local_50);
          }
          lVar4 = (longlong)(int)local_50;
          iVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar6);
          if (*(int *)(local_58 + 0xc) <= iVar6) break;
          local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar4 * 8);
          FUN_01e53c20();
          local_38[0] = local_d0[0];
          pcVar5 = local_d0;
          if (local_d0[0] == '\0') {
            pcVar5 = local_38;
          }
          plVar1 = (longlong *)CONCAT71(uStack_d7,local_d8);
          *pcVar5 = '\0';
          if ((local_d0[0] != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            uVar8 = (**(code **)(*plVar1 + 0x530))();
            uVar9 = (**(code **)(*plVar1 + 0x528))();
            local_128 = (float)uVar8;
            fStack_124 = (float)((ulonglong)uVar8 >> 0x20);
            if ((float)local_98._0_4_ <= (float)uVar9) {
              local_98._0_4_ = (float)uVar9;
            }
            fVar10 = (float)((ulonglong)uVar9 >> 0x20);
            if ((float)local_c8._0_4_ <= fVar10) {
              local_c8._0_4_ = fVar10;
            }
            if ((float)local_88._0_4_ <= local_128) {
              local_88._0_4_ = local_128;
            }
            if ((float)local_a8._0_4_ <= fStack_124) {
              local_a8._0_4_ = fStack_124;
            }
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
          }
        }
        local_40 = CONCAT44(local_a8._0_4_,local_88._0_4_);
        FUN_000ad7a0();
        auVar12 = local_c8._0_16_;
      }
    }
    local_e8 = (float)uVar7;
    fStack_e4 = (float)((ulonglong)uVar7 >> 0x20);
    local_118 = (float)param_2;
    fStack_114 = (float)((ulonglong)param_2 >> 0x20);
    fVar10 = local_e8 + local_118 + 0.0;
    fVar13 = (float)local_98._0_4_ + fVar10;
    local_98._0_4_ = fStack_e4 + fStack_114 + 0.0;
    local_98._4_4_ = fStack_e4 + fStack_114;
    uStack_90._0_4_ = extraout_XMM0_Dd + fVar3;
    uStack_90._4_4_ = extraout_XMM0_Dd + fVar3;
    local_70 = CONCAT44(auVar12._0_4_ + (float)local_98._0_4_,fVar13);
    FUN_00176c40();
    plVar1 = local_68;
    local_c8._8_8_ = 0;
    local_c8._0_8_ = local_70;
    FUN_01e4cf40();
    if ((local_60[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar10 = fVar10 + (float)local_88._0_4_;
    fVar3 = (float)local_c8._0_4_;
    if ((float)local_c8._0_4_ <= fVar10) {
      fVar3 = fVar10;
    }
    fVar10 = (float)local_c8._4_4_;
    if ((float)local_c8._4_4_ <= (float)local_98._0_4_ + (float)local_a8._0_4_) {
      fVar10 = (float)local_98._0_4_ + (float)local_a8._0_4_;
    }
    local_40 = CONCAT44(fVar10,fVar3);
    FUN_00176c40();
    uStack_80 = 0;
    local_88 = (undefined1  [8])local_40;
    (**(code **)(*local_68 + 0x9b8))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    cVar2 = (**(code **)(*local_68 + 0x9e8))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    fVar3 = local_88._0_4_;
    local_f8 = fVar3;
    if ((cVar2 != '\0') && (local_f8 = (float)uVar11, local_f8 <= fVar3)) {
      local_f8 = fVar3;
    }
    local_b0 = CONCAT44(local_b0._4_4_,local_f8);
    FUN_00176c40();
    cVar2 = (**(code **)(*local_68 + 0x9e0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    fStack_f4 = (float)local_88._4_4_;
    if ((cVar2 != '\0') &&
       (fStack_f4 = (float)((ulonglong)uVar11 >> 0x20), fStack_f4 <= (float)local_88._4_4_)) {
      fStack_f4 = (float)local_88._4_4_;
    }
    local_b0 = CONCAT44(fStack_f4,(undefined4)local_b0);
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00176c40();
    local_88 = (undefined1  [8])(**(code **)(*local_68 + 0x4d8))();
    uStack_80 = extraout_XMM0_Qb;
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    FUN_00176c40();
    plVar1 = local_68;
    FUN_01e4cf40();
    if ((local_60[0] != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00176c40();
    (**(code **)(*local_68 + 0x4d0))();
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


