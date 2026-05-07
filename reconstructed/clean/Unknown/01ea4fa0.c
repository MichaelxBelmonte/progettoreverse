// Function: FUN_01ea4fa0
// Address: 01ea4fa0
// Size: 1176 bytes
// Class: Unknown

void FUN_01ea4fa0(uint64_t param_1,int64_t *param_2,uint32_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  bool bVar4;
  int64_t *plVar5;
  uint64_t in_RCX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  bool bVar7;
  float extraout_XMM0_Db;
  float fVar9;
  uint64_t in_XMM0_Qb;
  uint8_t auVar8 [16];
  int64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  float local_7c;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_d8 = *param_2;
  local_d0 = 0;
  FUN_01ea4e00(in_RCX,&local_d8,param_3,param_4,*arg1,0);
  plVar6 = *(int64_t **)(*param_2 + 0x10);
  if (plVar6 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b00();
  if (*(char *)((int64_t)this_ptr + 0x19d) == '\0') goto LAB_01ea5419;
  local_58 = plVar6;
  local_c8 = FUN_01ea4860();
  local_7c = *(float *)((int64_t)this_ptr + 0x18c);
  FUN_01ea4860();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_40 + 0x370))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = local_50;
  local_70 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  plVar6 = local_58;
  local_70 = '\x01';
  local_78 = plVar5;
  FUN_01d48a10();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_50 + 0x390))();
  local_68 = local_40;
  local_60 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_60 = '\x01';
  FUN_01d488d0();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((g_028ba200 == (int64_t *)0x0) || (g_028ba209 == '\0')) {
    FUN_00e8cb50();
    if (g_028ba200 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      *plVar5 = (int64_t)&g_0267ba68;
      plVar5[2] = (int64_t)&g_0267c530;
      *(void*)(plVar5 + 0x27) = 0;
      plVar5[0x2e] = 0;
      *(void*)(plVar5 + 0x2f) = 0;
      plVar5[0x30] = 0;
      *(void*)(plVar5 + 0x31) = 0;
      plVar5[0x28] = 0;
      plVar5[0x29] = 0;
      *(void*)(plVar5 + 0x2a) = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2c] = 0;
      *(void*)((int64_t)plVar5 + 0x165) = 0;
      *(void*)((int64_t)plVar5 + 0x18c) = 0;
      *(void*)((int64_t)plVar5 + 0x194) = 0;
      *(void*)((int64_t)plVar5 + 0x199) = 0;
      plVar5[0x35] = 0;
      plVar5[0x36] = 0;
      plVar5[0x37] = 0;
      plVar5[0x38] = 0;
      (*g_0267ba80)();
      if (g_028ba200 == plVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar7 = g_028ba200 != (int64_t *)0x0;
        g_028ba200 = plVar5;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if (g_028ba208 == '\0') {
        g_028ba208 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      (**(code **)(*g_028ba200 + 0x9f0))();
      g_028ba209 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ba209 = '\x01';
      FUN_00e8cb70();
    }
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  local_a0 = *arg1;
  local_98 = '\0';
  (**(code **)(*g_028ba200 + 0xa00))(&local_a0,&local_b0);
  plVar5 = local_40;
  if (local_40 == plVar6) {
LAB_01ea536a:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar6 = plVar5;
      goto LAB_01ea536a;
    }
    FUN_00d50b20();
    local_38 = '\0';
    plVar6 = local_40;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar2._8_8_ = in_XMM0_Qb;
  auVar2._0_8_ = param_1;
  uVar1 = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  fVar9 = (float)((uint64_t)param_1 >> 0x20);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar9 + (local_7c - extraout_XMM0_Db);
  auVar8._8_4_ = uVar1;
  auVar8._12_4_ = uVar1;
  auVar8 = insertps(auVar2,auVar8,0x10);
  local_88 = '\0';
  local_90 = plVar6;
  (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar8._0_8_,(uint32_t)local_c8);
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ea5419:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

