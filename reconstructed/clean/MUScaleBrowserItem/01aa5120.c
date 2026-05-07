// Function: FUN_01aa5120
// Address: 01aa5120
// Size: 2278 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

void FUN_01aa5120(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar9;
  bool bVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float fVar14;
  float local_f8;
  uint32_t uStack_f4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  float local_9c;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  int64_t *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  bool local_50;
  char local_41;
  int64_t *local_40;
  char local_38 [8];
  
  local_d8 = *param_2;
  local_d0 = '\0';
  local_c8 = *param_1;
  local_c0 = '\0';
  FUN_01cec030(&local_c8,&local_d8);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)*arg1;
  if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e2e88 = FUN_00d4fe50();
    g_027e2e70 = "MUScaleBrowserItem";
    g_027e2e78 = 0x20;
    g_027e2e80 = FUN_00841ad0;
    g_027e2e90 = 0;
    ram_00000000027e2e98 = 0;
    g_027e2ea0 = 0;
    ram_00000000027e2ea8 = 0;
    g_027e2eb0 = 0;
    ram_00000000027e2eb8 = 0;
    g_027e2ec0 = 0;
    ram_00000000027e2ec8 = 0;
    g_027e2ed0 = 0;
    ram_00000000027e2ed8 = 0;
    g_027e2ee0 = 0;
    ram_00000000027e2ee8 = 0;
    g_027e2ef0 = 0;
    ram_00000000027e2ef8 = 0;
    g_027e2f00 = 0;
    ram_00000000027e2f08 = 0;
    g_027e2f10 = 0;
    ram_00000000027e2f18 = 0;
    g_027e2f20 = 0;
    ram_00000000027e2f28 = 0;
    g_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_01aa520d:
    arg1 = (int64_t *)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01aa520d;
  }
  lVar1 = *arg1;
  local_41 = (char)arg1[1];
  if ((local_41 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  (**(code **)(*(int64_t *)*param_2 + 0x9e8))();
  local_70 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_01aa3ef0();
  if (cVar4 == '\0') {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) != 0) {
      plVar9 = (int64_t *)*param_2;
      FUN_01d44be0(extraout_XMM0_Qa_00,2);
      local_88 = local_40;
      local_80 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_80 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar6 = FUN_01d449a0();
    if ((uVar6 & 2) == 0) {
      plVar9 = (int64_t *)*param_2;
      FUN_01d44a40(extraout_XMM0_Qa,2);
      local_98 = local_40;
      local_90 = 0;
      if (local_38[0] == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_90 = '\x01';
      (**(code **)(*plVar9 + 0x9d8))();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01ce9490();
  plVar9 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    local_78 = 0;
    plVar9 = (int64_t *)0x0;
  }
  else {
    FUN_01ce9490();
    FUN_00d23340();
    plVar9 = local_40;
    bVar10 = local_38[0] == '\0';
    local_58 = local_40;
    if (bVar10) {
      local_50 = false;
    }
    else {
      local_50 = true;
      local_38[0] = '\0';
    }
    local_50 = !bVar10;
    if ((g_02737920 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027e2e88 = FUN_00d4fe50();
      g_027e2e70 = "MUScaleBrowserItem";
      g_027e2e78 = 0x20;
      g_027e2e80 = FUN_00841ad0;
      g_027e2e90 = 0;
      ram_00000000027e2e98 = 0;
      g_027e2ea0 = 0;
      ram_00000000027e2ea8 = 0;
      g_027e2eb0 = 0;
      ram_00000000027e2eb8 = 0;
      g_027e2ec0 = 0;
      ram_00000000027e2ec8 = 0;
      g_027e2ed0 = 0;
      ram_00000000027e2ed8 = 0;
      g_027e2ee0 = 0;
      ram_00000000027e2ee8 = 0;
      g_027e2ef0 = 0;
      ram_00000000027e2ef8 = 0;
      g_027e2f00 = 0;
      ram_00000000027e2f08 = 0;
      g_027e2f10 = 0;
      ram_00000000027e2f18 = 0;
      g_027e2f20 = 0;
      ram_00000000027e2f28 = 0;
      g_027e2f30 = 0;
      ___cxa_guard_release();
    }
    if (plVar9 == (int64_t *)0x0) {
LAB_01aa548f:
      pplVar7 = &g_02802688;
      plVar9 = g_02802688;
      if (g_02802688 != (int64_t *)0x0) goto LAB_01aa549e;
LAB_01aa54b6:
      local_78 = 0;
      plVar9 = (int64_t *)0x0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01aa548f;
      pplVar7 = &local_58;
      plVar9 = local_58;
      if (local_58 == (int64_t *)0x0) goto LAB_01aa54b6;
LAB_01aa549e:
      if (*(char *)(pplVar7 + 1) == '\0') {
        pplVar7 = (int64_t **)FUN_00d50b00();
      }
      else {
        *(void*)(pplVar7 + 1) = 0;
      }
      local_78 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
    }
    if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
  }
  fVar14 = 0.0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  if (((*(float *)(this_ptr + 0x198) == 0.0) && (!NAN(*(float *)(this_ptr + 0x198)))) ||
     ((int64_t *)*param_2 == (int64_t *)0x0)) goto LAB_01aa586a;
  (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01aa586a;
  (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
  FUN_00d23340();
  plVar3 = local_40;
  local_68 = local_38[0];
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar11 = (**(code **)(*plVar3 + 0x4d8))();
  local_f8 = fVar14;
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*(int64_t *)*param_2 + 0xac8))();
  if (cVar4 == '\0') {
    FUN_01e3f820();
    local_9c = g_023942a8;
  }
  else {
    if (plVar9 == (int64_t *)0x0) {
LAB_01aa5737:
      (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_b8 = local_a8;
      local_b0 = '\0';
      cVar4 = (**(code **)(*plVar9 + 0x50))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_01aa5737;
      (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
      FUN_00d23340();
      plVar3 = local_40;
      local_68 = local_38[0];
      pcVar8 = local_38;
      if (local_38[0] == '\0') {
        pcVar8 = &local_68;
      }
      *pcVar8 = '\0';
      if ((local_38[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar3 + 0x928))();
      if (local_68 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e3f820();
    local_9c = g_023941fc;
  }
  (**(code **)(*(int64_t *)*param_2 + 0x4a0))();
  FUN_00d23340();
  pcVar8 = local_38;
  if (local_38[0] == '\0') {
    pcVar8 = &local_68;
  }
  local_68 = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar2._4_4_ = uStack_f4;
  auVar2._0_4_ = local_f8;
  auVar2._8_4_ = uStack_f0;
  auVar2._12_4_ = uStack_ec;
  auVar12._4_12_ = auVar2._4_12_;
  auVar12._0_4_ = local_f8 + local_9c;
  auVar13._8_8_ = extraout_XMM0_Qb;
  auVar13._0_8_ = uVar11;
  auVar13 = blendps(auVar12,auVar13,0xe);
  (**(code **)(*local_40 + 0x4d0))(auVar13._0_8_,fVar14);
  if (local_68 != '\0') {
    FUN_00d50b20();
  }
  if ((local_50 != false) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01aa586a:
  if (((char)local_78 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_41 != '\0') {
    FUN_00d50b20();
  }
  return;
}

