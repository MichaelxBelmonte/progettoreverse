// Function: FUN_01bc8500
// Address: 01bc8500
// Size: 1494 bytes
// Class: Unknown

void FUN_01bc8500(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t in_XMM3 [16];
  int64_t *local_138;
  uint8_t local_130;
  uint64_t local_128;
  uint64_t uStack_120;
  uint64_t local_118;
  uint64_t uStack_110;
  uint8_t local_108 [16];
  int64_t local_f8;
  char local_f0;
  uint8_t local_e8 [16];
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  uint64_t local_88;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_98 = param_2;
  local_88 = param_1;
  local_118 = FUN_01e3f820();
  local_e8._8_8_ = in_XMM1_Qb;
  local_e8._0_8_ = param_2;
  lVar1 = this_ptr[0x2a];
  uStack_110 = extraout_XMM0_Qb;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bc5de0();
  FUN_01bbfb40();
  FUN_01be8270();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01bc8e10();
  local_128 = local_e8._0_8_;
  uStack_120 = local_e8._8_8_;
  local_58 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01bc8624;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01bc8624:
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_50 + 0x3a0))();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)this_ptr[0x2b] == '\0') {
      FUN_01bc6fe0();
    }
    else {
      fVar6 = *(float *)((int64_t)this_ptr + 0x15c) * (float)local_128;
      auVar9 = ZEXT416(g_023945e0 & (uint)fVar6) | g_023945f0;
      auVar9._0_4_ = auVar9._0_4_ + fVar6;
      auVar9 = roundss(in_XMM3,auVar9,0xb);
      if (g_02390124 <= auVar9._0_4_) {
        if (auVar9._0_4_ <= g_02390d00 + (float)local_128) {
          auVar8._8_8_ = uStack_110;
          auVar8._0_8_ = local_118;
          auVar8 = blendps(ZEXT816(0),auVar8,2);
          auVar10 = blendps(local_e8,auVar9,1);
          local_108 = auVar9;
          cVar5 = FUN_00d054a0(auVar8._0_8_,auVar10._0_8_,(uint32_t)local_88);
          if (cVar5 != '\0') {
            uVar7 = FUN_00d05360();
            local_138 = local_58;
            local_130 = 0;
            FUN_01bc6fe0(uVar7,&local_138);
          }
          auVar2._8_8_ = uStack_110;
          auVar2._0_8_ = local_118;
          auVar9 = blendps(auVar2,local_108,1);
          auVar10._4_4_ = local_128._4_4_;
          auVar10._0_4_ = (float)local_128 - local_108._0_4_;
          auVar10._8_4_ = (uint32_t)uStack_120;
          auVar10._12_4_ = uStack_120._4_4_;
          local_e8 = blendps(local_e8,auVar10,1);
          local_108 = auVar9;
          cVar5 = FUN_00d054a0(auVar9._0_8_,local_e8._0_8_,(uint32_t)local_88);
          if (cVar5 != '\0') {
            local_c8 = *arg1;
            local_c0 = '\0';
            FUN_00d05360();
            FUN_01916970();
            bVar3 = false;
            if ((local_c0 == '\0') || (local_c8 == 0)) goto LAB_01bc895e;
            FUN_00d50b20();
          }
        }
        else {
          FUN_01bc6fe0();
        }
      }
      else {
        local_d8 = *arg1;
        local_d0 = '\0';
        FUN_01916970();
        bVar3 = false;
        if ((local_d0 == '\0') || (bVar3 = false, local_d8 == 0)) goto LAB_01bc895e;
        FUN_00d50b20();
      }
    }
    bVar3 = false;
    goto LAB_01bc895e;
  }
  bVar3 = true;
LAB_01bc895e:
  if ((char)this_ptr[0x2b] != '\0') {
    local_b8 = *arg1;
    local_b0 = '\0';
    FUN_01bc9870();
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = this_ptr[0x2e];
    }
    else {
      local_38 = '\0';
      lVar1 = this_ptr[0x2e];
    }
    local_60 = '\x01';
    local_68 = local_40;
    if (lVar1 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_a8 = lVar1;
    FUN_01bcb030();
    FUN_01e3f820();
    (**(code **)(*plVar4 + 0x920))(&local_68,&local_b8,(uint32_t)local_88,0xffffffff);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

