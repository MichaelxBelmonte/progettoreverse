// Function: FUN_01ceca90
// Address: 01ceca90
// Size: 521 bytes
// Class: Unknown

void FUN_01ceca90(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint8_t auVar5 [16];
  void*puVar6;
  int iVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  float local_78;
  float fStack_74;
  uint64_t uStack_70;
  uint8_t local_68 [16];
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar6 + 0xc) = 0;
  *puVar6 = &g_02676898;
  puVar6[2] = &g_02676d40;
  puVar6[3] = &g_02676d98;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  *(void*)(puVar6 + 8) = 0;
  FUN_00d500e0();
  lVar2 = *arg1;
  lVar3 = puVar6[4];
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    puVar6[4] = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01ce54a0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01ce5200();
  plVar4 = (int64_t *)puVar6[6];
  iVar1 = *(int *)(this_ptr[0x2a] + 0xc);
  if (-1 < iVar1) {
    iVar7 = 0;
    local_78 = 0.0;
    fStack_74 = 0.0;
    uStack_70 = 0;
    local_68 = ZEXT816(0);
    do {
      FUN_01ce87d0();
      auVar5._4_4_ = fStack_74 + local_68._4_4_;
      auVar5._0_4_ = local_78 + local_68._0_4_;
      auVar5._8_4_ = (float)uStack_70 + local_68._8_4_;
      auVar5._12_4_ = uStack_70._4_4_ + local_68._12_4_;
      local_68 = blendps(local_68,auVar5,0xd);
      iVar7 = iVar7 + 1;
      uStack_70 = extraout_XMM0_Qb;
      local_78 = extraout_XMM0_Da;
      fStack_74 = extraout_XMM0_Db;
    } while (iVar1 + 1 != iVar7);
  }
  (**(code **)(*plVar4 + 0x4d0))();
  FUN_00d21140();
  plVar4 = (int64_t *)this_ptr[0x29];
  lVar2 = puVar6[6];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)((int64_t)this_ptr + 0x18a) != '\0') {
    (**(code **)(*this_ptr + 0x990))();
    (**(code **)(*this_ptr + 0x938))();
  }
  (**(code **)(*(int64_t *)puVar6[5] + 0x920))();
  FUN_00d50b20();
  return;
}

