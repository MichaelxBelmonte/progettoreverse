// Function: FUN_01c89130
// Address: 01c89130
// Size: 1364 bytes
// Class: Unknown

void FUN_01c89130(uint64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  void*puVar4;
  void*puVar5;
  void* pVar6;
  void*arg1;
  int64_t *this_ptr;
  float fVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  int64_t local_d8;
  char local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  float local_58;
  uint32_t uStack_54;
  float local_50;
  uint32_t uStack_4c;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  this_ptr[0x31] = param_2;
  local_c8 = *arg1;
  local_c0 = 0;
  FUN_01c8b390(param_1,&local_c8,&local_58);
  pVar6 = (void*)param_1;
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  local_38 = local_d8;
  plVar1 = (int64_t *)this_ptr[0x28];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar2 = this_ptr[0x2b];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar6);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c98e0();
  uVar8 = (**(code **)(*plVar1 + 0x390))();
  auVar9._0_4_ = g_023945e0 & (uint)(float)uVar8;
  auVar9._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar8 >> 0x20);
  auVar9._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
  auVar9._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar10._4_12_ = SUB1612(auVar9 | g_023945f0,4);
  auVar10._0_4_ = SUB164(auVar9 | g_023945f0,0) + (float)uVar8;
  auVar9 = roundss(ZEXT816(0),auVar10,0xb);
  fVar7 = auVar9._0_4_ + local_58;
  local_58 = fVar7;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_026016d8;
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  (*g_026016f0)();
  FUN_0123ff00();
  FUN_01786a50();
  FUN_01c886d0();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  *puVar4 = &g_026703c8;
  puVar4[2] = 0;
  FUN_00d500e0();
  plVar1 = (int64_t *)puVar4[2];
  if (plVar1 != this_ptr) {
    FUN_00d50b00();
    puVar4[2] = this_ptr;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(void*)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(void*)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(void*)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(void*)((int64_t)puVar5 + 0x165) = 0;
  *(void*)((int64_t)puVar5 + 0x18c) = 0;
  *(void*)((int64_t)puVar5 + 0x194) = 0;
  *(void*)((int64_t)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *puVar5 = &g_0269c118;
  puVar5[2] = &g_0269cc70;
  puVar5[0x39] = &g_0269ccb0;
  puVar5[0x45] = 0;
  *(void*)(puVar5 + 0x46) = 0;
  puVar5[0x47] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  *(void*)(puVar5 + 0x3c) = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  *(void*)((int64_t)puVar5 + 0x205) = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  *(void*)((int64_t)puVar5 + 0x21d) = 0;
  (*g_0269c130)();
  puVar4 = (void*)this_ptr[0x30];
  if (puVar4 == puVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x30] = (int64_t)puVar5;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_58 = fVar7 + g_02394210;
  local_50 = local_50 + g_023908ec;
  plVar1 = (int64_t *)this_ptr[0x30];
  FUN_00d05530(CONCAT44(uStack_54,local_58),CONCAT44(uStack_4c,local_50),g_02390d34);
  (**(code **)(*plVar1 + 0x4d0))();
  (**(code **)(*(int64_t *)this_ptr[0x30] + 0x9c8))();
  (**(code **)(*(int64_t *)this_ptr[0x30] + 0x968))();
  FUN_01e058f0();
  (**(code **)(*(int64_t *)this_ptr[0x30] + 0x3a0))();
  lVar2 = g_027ece20;
  plVar1 = (int64_t *)this_ptr[0x30];
  if (g_027ece20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x30] + 0xa20))();
  (**(code **)(*(int64_t *)this_ptr[0x30] + 0xa80))();
  local_40 = 0;
  local_48 = this_ptr[0x30];
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  (**(code **)(*this_ptr + 0x450))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x30] + 0xac0))();
  FUN_00d50b20();
  FUN_00d50b20();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}

