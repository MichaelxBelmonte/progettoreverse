// Function: FUN_0060c0d0
// Address: 0060c0d0
// Size: 1471 bytes
// Class: Unknown

void FUN_0060c0d0(void)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  byte bVar5;
  int iVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  float fVar8;
  uint32_t extraout_XMM0_Da;
  int64_t *local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  void*local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (0 < *(int *)(this_ptr[0x32] + 0xc)) {
    uVar7 = (**(code **)(*this_ptr + 0x640))();
    local_60 = local_58;
    if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_50 != '\0')) && (local_58 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar4 = g_026e41f0;
    if (g_026e41f0 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_d8 = lVar4;
    local_d0 = '\x01';
    uVar7 = (**(code **)(*local_60 + 0x3b0))(uVar7,&local_d8);
    plVar1 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != (int64_t *)0x0) && (uVar7 = FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar4 = g_026fe4b8;
    local_80 = plVar1;
    if (g_026fe4b8 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_c8 = lVar4;
    local_c0 = '\x01';
    (**(code **)(*local_60 + 0x3b0))(uVar7,&local_c8);
    local_78 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = g_02724b70;
    if (g_02724b70 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar4;
    local_b0 = '\x01';
    (**(code **)(*local_60 + 0x3b0))();
    local_70 = local_58;
    local_68 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = '\x01';
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02680400;
    *(void*)((int64_t)puVar3 + 0xc) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(void*)((int64_t)puVar3 + 0x39) = 0;
    *(void*)((int64_t)puVar3 + 0x41) = 0;
    (*g_02680418)();
    local_88 = puVar3;
    if (this_ptr[0x32] != 0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = this_ptr[0x32];
      while( true ) {
        lVar4 = (int64_t)(int)local_40;
        iVar6 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar6);
        if (*(int *)(local_48 + 0xc) <= iVar6) break;
        local_58 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
        FUN_003a4d40();
        fVar8 = (float)(**(code **)(*this_ptr + 0xae0))();
        if (local_38 == 0 && (int)local_40 == 0) {
          bVar5 = 0x13;
          lVar4 = *arg1;
          if (local_58 != (int64_t *)this_ptr[0x33]) goto LAB_0060c444;
LAB_0060c4ea:
          local_a0 = '\0';
          local_a8 = lVar4;
          uVar7 = (**(code **)(*local_60 + 0x3f0))(fVar8,0x2c,1,1);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            uVar7 = FUN_00d50b20();
          }
        }
        else {
          fVar8 = fVar8 + g_02390d00;
          bVar5 = (int)local_40 == *(int *)(local_48 + 0xc) + -1 | 0x14;
          lVar4 = *arg1;
          if (local_58 == (int64_t *)this_ptr[0x33]) goto LAB_0060c4ea;
LAB_0060c444:
          local_90 = '\0';
          local_98 = lVar4;
          uVar7 = (**(code **)(*local_60 + 0x3f0))(bVar5,0x2c,0,1);
          if ((local_90 != '\0') && (local_98 != 0)) {
            uVar7 = FUN_00d50b20();
          }
        }
        local_108 = local_58;
        local_100 = 0;
        FUN_0060c9f0(uVar7,&local_108);
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar6 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar6 = 0;
          }
          local_40 = CONCAT44(iVar6,(int)local_40);
        }
      }
      FUN_006106b0();
    }
    lVar4 = this_ptr[0x34];
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    local_58 = (int64_t *)lVar4;
    cVar2 = FUN_00d23d70();
    uVar7 = extraout_XMM0_Da;
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if (lVar4 != 0) {
      uVar7 = FUN_00d50b20();
    }
    plVar1 = local_80;
    if (cVar2 != '\0') {
      local_f8 = *arg1;
      local_f0 = 0;
      lVar4 = this_ptr[0x34];
      if (lVar4 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_e0 = 1;
      local_e8 = lVar4;
      FUN_0060d0d0(uVar7,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_88 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

