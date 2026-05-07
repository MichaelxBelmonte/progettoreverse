// Function: FUN_01b4d260
// Address: 01b4d260
// Size: 1030 bytes
// Class: MUScaleBrowserItem

void FUN_01b4d260(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint32_t uVar5;
  uint8_t auVar6 [16];
  int64_t lVar7;
  void*puVar8;
  uint32_t unaff_ESI;
  int64_t this_ptr;
  float fVar9;
  float fVar11;
  uint64_t in_XMM1_Qb;
  uint8_t auVar10 [16];
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_38;
  char local_30;
  
  FUN_01cecec0(param_1,unaff_ESI);
  plVar1 = *(int64_t **)(local_38 + 0x28);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  fVar9 = (float)FUN_01dcf710();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar8 + 0x27) = 0;
  puVar8[0x2e] = 0;
  *(void*)(puVar8 + 0x2f) = 0;
  puVar8[0x30] = 0;
  *(void*)(puVar8 + 0x31) = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  *(void*)(puVar8 + 0x2a) = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = 0;
  *(void*)((int64_t)puVar8 + 0x165) = 0;
  *(void*)((int64_t)puVar8 + 0x18c) = 0;
  *(void*)((int64_t)puVar8 + 0x194) = 0;
  *(void*)((int64_t)puVar8 + 0x199) = 0;
  puVar8[0x35] = 0;
  puVar8[0x36] = 0;
  puVar8[0x37] = 0;
  puVar8[0x38] = 0;
  *puVar8 = &g_0269c118;
  puVar8[2] = &g_0269cc70;
  puVar8[0x39] = &g_0269ccb0;
  puVar8[0x45] = 0;
  *(void*)(puVar8 + 0x46) = 0;
  puVar8[0x47] = 0;
  puVar8[0x3a] = 0;
  puVar8[0x3b] = 0;
  *(void*)(puVar8 + 0x3c) = 0;
  puVar8[0x3f] = 0;
  puVar8[0x40] = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  *(void*)((int64_t)puVar8 + 0x205) = 0;
  puVar8[0x42] = 0;
  puVar8[0x43] = 0;
  *(void*)((int64_t)puVar8 + 0x21d) = 0;
  (*g_0269c130)();
  puVar2 = *(void**)(this_ptr + 0xa8);
  if (puVar2 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xa8) = puVar8;
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  auVar6._8_8_ = in_XMM1_Qb;
  auVar6._0_8_ = param_2;
  uVar5 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  auVar10._4_4_ = fVar11;
  auVar10._0_4_ = fVar11 + g_02390124;
  auVar10._8_4_ = uVar5;
  auVar10._12_4_ = uVar5;
  auVar10 = insertps(auVar6,auVar10,0x10);
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x4d0))(g_02390d00 + fVar9,auVar10._0_8_);
  lVar4 = g_027ebf00;
  plVar3 = *(int64_t **)(this_ptr + 0xa8);
  if (g_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0xa10))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 0xa8);
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x3a0))();
  lVar4 = g_027e47e0;
  plVar3 = *(int64_t **)(this_ptr + 0xa8);
  if (g_027e47e0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027e47e8;
  if (g_027e47e8 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar7;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d31230(&local_78,&local_88);
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar3 + 0x968))();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  local_60 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar4;
  (**(code **)(*plVar1 + 0x450))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0xab8))();
  FUN_00d50b20();
  return;
}

