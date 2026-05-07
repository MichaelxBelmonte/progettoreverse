// Function: FUN_01ea5b80
// Address: 01ea5b80
// Size: 1749 bytes
// Class: GNFont

void FUN_01ea5b80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  undefined7 uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  float fVar13;
  int64_t *local_148;
  uint8_t local_140;
  uint64_t local_138;
  uint8_t local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  uint32_t local_54;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  iVar4 = FUN_01d3b620();
  if (((iVar4 == 2) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) && (iVar4 = FUN_01d3b630(), iVar4 == 1)
     ) {
    FUN_01d3b620();
                                            (**(code **)(*this_ptr + 0x918))(*(code **)(*this_ptr + 0x918));
    return;
  }
  if (((*(char *)((int64_t)this_ptr + 0x19f) == '\0') || (iVar4 = FUN_01d3a5a0(), iVar4 != 1)) ||
     (iVar4 = FUN_01d3b630(), iVar4 != 1)) goto LAB_01ea60ee;
  (**(code **)(*this_ptr + 0x658))();
  plVar5 = local_40;
  plVar8 = (int64_t *)*arg1;
  if (plVar8 == local_40) {
    if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
      local_48 = arg1 + 1;
      if (local_38 != '\0') goto LAB_01ea5c7c;
      FUN_00d50b00();
      goto LAB_01ea5cb1;
    }
LAB_01ea5cb8:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = arg1 + 1;
    lVar1 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar5;
      if (((char)lVar1 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ea5cb1:
      *(void*)local_48 = 1;
      goto LAB_01ea5cb8;
    }
    *arg1 = (int64_t)local_40;
    if (((char)lVar1 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ea5c7c:
    *(void*)local_48 = 1;
  }
  local_60 = 0;
  local_98 = 0;
  local_48 = (int64_t *)0x0;
  iVar4 = FUN_01d3a5a0();
  if (iVar4 != 5) goto LAB_01ea60ee;
  FUN_01d3abf0();
  uVar9 = FUN_01e466c0();
  fVar12 = (float)this_ptr[0x32];
  auVar10._0_4_ = (float)uVar9 - fVar12;
  fVar13 = (float)((uint64_t)this_ptr[0x32] >> 0x20);
  auVar10._4_4_ = (float)((uint64_t)uVar9 >> 0x20) - fVar13;
  auVar10._8_4_ = (float)extraout_XMM0_Qb - 0.0;
  auVar10._12_4_ = (float)((uint64_t)extraout_XMM0_Qb >> 0x20) - 0.0;
  auVar11._4_4_ = (float)((uint64_t)this_ptr[0x31] >> 0x20) + fVar13;
  auVar11._0_4_ = (float)this_ptr[0x31] + fVar12;
  auVar11._8_8_ = 0;
  auVar11 = divps(auVar10,auVar11);
  uVar7 = (int)auVar11._4_4_ * (int)this_ptr[0x33] + (int)auVar11._0_4_;
  if (((int)uVar7 < 0) || (*(int *)(this_ptr[0x2b] + 0xc) <= (int)uVar7)) goto LAB_01ea60ee;
  plVar8 = *(int64_t **)(*(int64_t *)(this_ptr[0x2b] + 0x10) + (uint64_t)uVar7 * 8);
  if (plVar8 == (int64_t *)0x0) {
    local_98 = 0;
    local_48 = (int64_t *)0x0;
  }
  else {
    uVar9 = FUN_00d50b00();
    local_98 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    local_48 = plVar8;
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  local_f0 = '\0';
  local_f8 = 0;
  local_50 = plVar5;
  FUN_01d4eaa0(this_ptr[0x31]);
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
    if (local_40 != (int64_t *)0x0) {
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
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52770();
  uVar9 = FUN_01ca6a90();
  plVar8 = local_40;
  uVar6 = (undefined7)((uint64_t)uVar9 >> 8);
  if (local_40 == (int64_t *)0x0) {
    plVar8 = (int64_t *)0x0;
    local_54 = (uint32_t)CONCAT71(uVar6,1);
    local_60 = 0;
  }
  else {
    local_60 = CONCAT71(uVar6,1);
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01ea5f43;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01ea5f43:
  FUN_01ca5d90();
  plVar5 = (int64_t *)this_ptr[0x2a];
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_e0 = '\0';
    local_e8 = plVar8;
    cVar3 = (**(code **)(*plVar5 + 0x18))(local_138 & 0xffffffff,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
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
      local_c8 = *arg1;
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
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_54 == '\0' && plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar5 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  if ((char)local_54 == '\0' && plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_100 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ea60ee:
  local_b8 = *arg1;
  local_b0 = '\0';
  FUN_01e459c0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

