// Function: FUN_004ac180
// Address: 004ac180
// Size: 737 bytes
// Class: MDErrorController

void FUN_004ac180(uint64_t param_1,float param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_004aa180();
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar2 + 0x27) = 0;
  plVar2[0x2e] = 0;
  *(void*)(plVar2 + 0x2f) = 0;
  plVar2[0x30] = 0;
  *(void*)(plVar2 + 0x31) = 0;
  plVar2[0x28] = 0;
  plVar2[0x29] = 0;
  *(void*)(plVar2 + 0x2a) = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2c] = 0;
  *(void*)((int64_t)plVar2 + 0x165) = 0;
  *(void*)((int64_t)plVar2 + 0x18c) = 0;
  *(void*)((int64_t)plVar2 + 0x194) = 0;
  *(void*)((int64_t)plVar2 + 0x199) = 0;
  plVar2[0x3c] = 0;
  plVar2[0x3d] = 0;
  *(void*)(plVar2 + 0x3e) = 0;
  plVar2[0x35] = 0;
  plVar2[0x36] = 0;
  plVar2[0x37] = 0;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  *(void*)(plVar2 + 0x3b) = 0;
  *plVar2 = (int64_t)&g_024c6e90;
  plVar2[2] = (int64_t)&g_024c7960;
  plVar2[0x3f] = 0;
  (*g_024c6ea8)();
  auVar5._0_8_ = FUN_01e3f820();
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar4._4_12_ = auVar5._4_12_;
  auVar4._0_4_ = (float)auVar5._0_8_ + param_2 + g_02390d00 + g_023b45d0;
  auVar5 = blendps(auVar4,g_023b45e0,0xe);
  (**(code **)(*plVar2 + 0x4d0))(auVar5._0_8_,g_023b45f0);
  (**(code **)(*plVar2 + 0x558))();
  FUN_01e3b6a0();
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x450))();
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x570))();
  FUN_01e534b0();
  FUN_00d50b00();
  local_70 = g_02703fe0;
  if (g_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026fce70;
  local_68 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  lVar3 = lVar1;
  if (lVar1 == local_40) goto LAB_004ac3e7;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar3 = 0;
      goto LAB_004ac3a5;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    *(int64_t *)(this_ptr + 0x78) = local_40;
    lVar3 = local_40;
  }
  else {
    local_38 = '\0';
    lVar3 = local_40;
LAB_004ac3a5:
    *(int64_t *)(this_ptr + 0x78) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_40;
  }
LAB_004ac3e7:
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

