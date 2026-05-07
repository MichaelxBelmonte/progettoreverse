// Function: FUN_01c88ce0
// Address: 01c88ce0
// Size: 846 bytes
// Class: Unknown

int64_t * FUN_01c88ce0(uint64_t param_1,void*param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void* pVar9;
  void*in_RCX;
  void*puVar10;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint64_t local_70;
  void*local_68;
  uint32_t local_5c;
  void*local_58;
  uint32_t local_4c;
  int64_t local_48;
  uint64_t uStack_40;
  
  local_58 = &local_b0;
  if (param_2 != (void*)0x0) {
    local_58 = param_2;
  }
  if (param_3 == (void*)0x0) {
    local_5c = 0xffffffff;
    param_3 = &local_5c;
  }
  lVar1 = *(int64_t *)(arg1 + 0x158);
  local_88 = param_1;
  local_68 = in_RCX;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pVar9 = (void*)in_RCX;
  pvVar6 = _pthread_getspecific(pVar9);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_016c2ea0();
  if (iVar5 == 0) {
    uVar8 = FUN_00e7bdb0();
    *local_58 = uVar8;
    puVar10 = local_68;
    if (local_68 != (void*)0x0) {
      uVar8 = FUN_00e7bdb0();
      *puVar10 = uVar8;
    }
    *param_3 = 0xffffffff;
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_4c = 0xffffffff;
    pvVar6 = _pthread_getspecific(pVar9);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      plVar2 = *(int64_t **)(arg1 + 0x140);
    }
    else {
      plVar2 = *(int64_t **)(arg1 + 0x140);
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_70 = (**(code **)(*plVar2 + 0x388))();
    FUN_0123fd00();
    pVar9 = (void*)&local_4c;
    uVar8 = FUN_016cb9d0(local_70,1);
    FUN_00d50b20();
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = local_58;
    FUN_016ca840(local_58,uVar8,local_68,param_3);
    lVar7 = local_48;
    pVar9 = (void*)puVar10;
    if (((((char)uStack_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), (char)uStack_40 != '\0')
        ) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_48 = g_023dccec;
    uStack_40 = g_023dccf4;
    local_98 = lVar7;
    local_90 = 0;
    FUN_01c8b390();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(arg1 + 0x140);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar3 = *(int64_t *)(arg1 + 0x158);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c98e0();
    uVar8 = (**(code **)(*plVar2 + 0x390))();
    auVar11._0_4_ = g_023945e0 & (uint)(float)uVar8;
    auVar11._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar8 >> 0x20);
    auVar11._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
    auVar11._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
    auVar12._4_12_ = SUB1612(auVar11 | g_023945f0,4);
    auVar12._0_4_ = SUB164(auVar11 | g_023945f0,0) + (float)uVar8;
    auVar11 = roundss(ZEXT816(0),auVar12,0xb);
    local_48 = CONCAT44(local_48._4_4_,auVar11._0_4_ + (float)local_48);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    cVar4 = FUN_00d05410();
    if (cVar4 == '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *this_ptr = lVar7;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

