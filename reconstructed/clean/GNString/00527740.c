// Function: FUN_00527740
// Address: 00527740
// Size: 4120 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


bool FUN_00527740(uint32_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  char cVar9;
  int64_t **pplVar10;
  uint64_t uVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint32_t extraout_XMM0_Da_18;
  uint32_t extraout_XMM0_Da_19;
  uint32_t extraout_XMM0_Da_20;
  uint32_t extraout_XMM0_Da_21;
  uint32_t extraout_XMM0_Da_22;
  uint32_t extraout_XMM0_Da_23;
  uint32_t extraout_XMM0_Da_24;
  uint32_t extraout_XMM0_Da_25;
  uint32_t extraout_XMM0_Da_26;
  uint32_t extraout_XMM0_Da_27;
  uint32_t extraout_XMM0_Da_28;
  uint32_t extraout_XMM0_Da_29;
  uint32_t extraout_XMM0_Da_30;
  uint32_t extraout_XMM0_Da_31;
  uint32_t extraout_XMM0_Da_32;
  uint32_t extraout_XMM0_Da_33;
  uint32_t extraout_XMM0_Da_34;
  uint32_t extraout_XMM0_Da_35;
  uint32_t extraout_XMM0_Da_36;
  uint32_t extraout_XMM0_Da_37;
  uint32_t extraout_XMM0_Da_38;
  uint32_t extraout_XMM0_Da_39;
  uint32_t extraout_XMM0_Da_40;
  uint32_t extraout_XMM0_Da_41;
  uint32_t extraout_XMM0_Da_42;
  uint32_t extraout_XMM0_Da_43;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  
  plVar6 = g_0270b858;
  local_68 = param_2;
  if (g_0270b858 != (int64_t *)0x0) {
    param_1 = FUN_00d50b00();
  }
  plVar8 = g_0270b850;
  local_80 = plVar6;
  if (*local_68 == 0) goto LAB_00527c8f;
  if (g_0270b850 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar8;
  local_40 = '\0';
  cVar2 = FUN_00ca18c0();
  param_1 = extraout_XMM0_Da;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    param_1 = FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    param_1 = FUN_00d50b20();
  }
  plVar7 = g_0270b870;
  plVar8 = g_0270b810;
  if (cVar2 == '\0') {
    if (*local_68 == 0) goto LAB_00527c8f;
    if (g_0270b870 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar7;
    local_40 = '\0';
    uVar4 = FUN_00ca18c0();
    cVar2 = (char)uVar4;
    param_1 = extraout_XMM0_Da_10;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
      param_1 = extraout_XMM0_Da_11;
    }
    if (plVar7 != (int64_t *)0x0) {
      uVar4 = FUN_00d50b20();
      param_1 = extraout_XMM0_Da_12;
    }
    plVar7 = g_0270b878;
    plVar8 = g_0270b848;
    if (cVar2 != '\0') {
      if (g_0270b878 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
        param_1 = extraout_XMM0_Da_13;
      }
      plVar6 = g_0270b880;
      local_60 = plVar7;
      local_70._0_1_ = plVar7 != (int64_t *)0x0;
      uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
      local_70._1_7_ = uVar5;
      if (g_0270b880 != (int64_t *)0x0) {
        param_1 = FUN_00d50b00();
        uVar5 = extraout_var;
      }
      goto LAB_00527a56;
    }
    if (*local_68 == 0) {
LAB_00527c8f:
      if (plVar6 == (int64_t *)0x0) {
        local_78 = 0;
        plVar6 = (int64_t *)0x0;
        local_70._0_1_ = '\0';
        local_70._1_7_ = 0;
        plVar8 = (int64_t *)0x0;
        local_50 = 0;
        local_58 = (int64_t *)0x0;
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        local_70 = 0;
        local_50 = 0;
        local_58 = (int64_t *)0x0;
        uVar4 = FUN_00d50b00();
        local_70._1_7_ = (undefined7)((uint64_t)uVar4 >> 8);
        local_70._0_1_ = '\x01';
        local_50 = 0;
        local_58 = (int64_t *)0x0;
        uVar4 = FUN_00d50b00();
        local_78 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
        plVar8 = plVar6;
        param_1 = extraout_XMM0_Da_26;
      }
      goto LAB_00527f8e;
    }
    if (g_0270b848 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar8;
    local_40 = '\0';
    cVar2 = FUN_00ca18c0();
    param_1 = extraout_XMM0_Da_15;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      param_1 = FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      param_1 = FUN_00d50b20();
    }
    plVar8 = g_0270b810;
    if (cVar2 == '\0') goto LAB_00527c8f;
    if (g_0270b810 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar8;
    local_40 = '\0';
    uVar4 = FUN_00ca18c0();
    cVar2 = (char)uVar4;
    param_1 = extraout_XMM0_Da_16;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
      param_1 = extraout_XMM0_Da_17;
    }
    plVar7 = g_0270b818;
    cVar9 = '\x01';
    if (cVar2 == '\0') {
      if (g_0270b818 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar7;
      local_40 = '\0';
      uVar4 = FUN_00ca18c0();
      cVar2 = (char)uVar4;
      param_1 = extraout_XMM0_Da_18;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar4 = FUN_00d50b20();
        param_1 = extraout_XMM0_Da_19;
      }
      plVar1 = g_0270b808;
      cVar9 = '\x01';
      if (cVar2 == '\0') {
        if (g_0270b808 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_48 = plVar1;
        local_40 = '\0';
        uVar4 = FUN_00ca18c0();
        cVar9 = (char)uVar4;
        param_1 = extraout_XMM0_Da_20;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar4 = FUN_00d50b20();
          param_1 = extraout_XMM0_Da_21;
        }
        if (plVar1 != (int64_t *)0x0) {
          uVar4 = FUN_00d50b20();
          param_1 = extraout_XMM0_Da_22;
        }
      }
      if (plVar7 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b20();
        param_1 = extraout_XMM0_Da_23;
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar4 = FUN_00d50b20();
      param_1 = extraout_XMM0_Da_24;
    }
    plVar7 = g_0270b888;
    plVar8 = g_0270b810;
    if (cVar9 == '\0') {
      plVar8 = g_0270b888;
      if (g_0270b888 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b00();
        param_1 = extraout_XMM0_Da_33;
      }
      plVar6 = g_0270b890;
      local_60 = plVar7;
      local_70._0_1_ = plVar7 != (int64_t *)0x0;
      uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
      local_70._1_7_ = uVar5;
      if (g_0270b890 != (int64_t *)0x0) {
        param_1 = FUN_00d50b00();
        uVar5 = extraout_var_01;
      }
      goto LAB_00527a56;
    }
    if (g_0270b810 != (int64_t *)0x0) {
      param_1 = FUN_00d50b00();
    }
    local_f0 = plVar8;
    local_e8 = '\x01';
    pplVar10 = &local_48;
    uVar12 = FUN_000175c0(param_1,&local_f0);
    plVar8 = local_48;
    if ((g_026fd0c0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_42, iVar3 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar12 = ___cxa_guard_release();
      plVar6 = local_80;
    }
    if (plVar8 == (int64_t *)0x0) {
LAB_00527c67:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      uVar12 = extraout_XMM0_Da_25;
      if (cVar2 == '\0') goto LAB_00527c67;
    }
    plVar8 = *pplVar10;
    if (plVar8 == (int64_t *)0x0) {
      cVar2 = '\0';
      uVar5 = 0;
      plVar8 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar10 + 1) == '\0') {
        uVar12 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      uVar5 = (undefined7)((uint64_t)pplVar10 >> 8);
      cVar2 = '\x01';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    local_60 = plVar8;
    local_70._0_1_ = cVar2;
    local_70._1_7_ = uVar5;
    if ((plVar8 == (int64_t *)0x0) && (plVar6 != (int64_t *)0x0)) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      uVar4 = FUN_00d50b00();
      local_70._0_1_ = '\x01';
      uVar12 = extraout_XMM0_Da_34;
      local_60 = plVar6;
      local_70._1_7_ = (int7)((uint64_t)uVar4 >> 8);
    }
    plVar8 = g_0270b818;
    if (g_0270b818 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_e0 = plVar8;
    local_d8 = '\x01';
    pplVar10 = &local_48;
    uVar12 = FUN_000175c0(uVar12,&local_e0);
    plVar8 = local_48;
    plVar7 = plVar6;
    if ((g_026fd0c0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_43, iVar3 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      uVar12 = ___cxa_guard_release();
      plVar7 = local_80;
    }
    if (plVar8 == (int64_t *)0x0) {
LAB_00528310:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar2 = FUN_00e85ea0();
      uVar12 = extraout_XMM0_Da_35;
      if (cVar2 == '\0') goto LAB_00528310;
    }
    plVar6 = *pplVar10;
    if (plVar6 == (int64_t *)0x0) {
      uVar11 = 0;
      plVar6 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar10 + 1) == '\0') {
        uVar12 = FUN_00d50b00();
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      uVar11 = CONCAT71((int7)((uint64_t)pplVar10 >> 8),1);
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    plVar8 = local_60;
    if ((plVar6 == (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      uVar12 = FUN_00d50b00();
      local_78 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      plVar6 = plVar7;
    }
    else {
      local_78 = uVar11 & 0xffffffff;
    }
    plVar8 = g_0270b808;
    if (g_0270b808 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_d0 = plVar8;
    local_c8 = '\x01';
    pplVar10 = &local_48;
    FUN_000175c0(uVar12,&local_d0);
    plVar8 = local_48;
    uVar4 = FUN_00053ac0();
    param_1 = extraout_XMM0_Da_36;
    if (plVar8 == (int64_t *)0x0) {
LAB_0052840f:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      uVar4 = FUN_00e85ea0();
      param_1 = extraout_XMM0_Da_37;
      if ((char)uVar4 == '\0') goto LAB_0052840f;
    }
    plVar7 = *pplVar10;
    if (plVar7 == (int64_t *)0x0) {
      local_50 = 0;
      plVar7 = (int64_t *)0x0;
    }
    else {
      if (*(char *)(pplVar10 + 1) == '\0') {
        uVar4 = FUN_00d50b00();
        param_1 = extraout_XMM0_Da_38;
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      local_50 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      param_1 = FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      param_1 = FUN_00d50b20();
    }
    plVar8 = local_60;
    if (plVar7 != (int64_t *)0x0) {
      local_58 = plVar7;
      iVar3 = FUN_00d45870();
      param_1 = extraout_XMM0_Da_39;
      goto LAB_00527f8e;
    }
LAB_00528492:
    iVar3 = 0;
  }
  else {
    if (g_0270b810 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar8;
    local_40 = '\0';
    uVar4 = FUN_00ca18c0();
    cVar2 = (char)uVar4;
    param_1 = extraout_XMM0_Da_00;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
      param_1 = extraout_XMM0_Da_01;
    }
    plVar6 = g_0270b818;
    cVar9 = '\x01';
    if (cVar2 == '\0') {
      if (g_0270b818 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar6;
      local_40 = '\0';
      uVar4 = FUN_00ca18c0();
      cVar2 = (char)uVar4;
      param_1 = extraout_XMM0_Da_02;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar4 = FUN_00d50b20();
        param_1 = extraout_XMM0_Da_03;
      }
      plVar7 = g_0270b808;
      cVar9 = '\x01';
      if (cVar2 == '\0') {
        if (g_0270b808 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_48 = plVar7;
        local_40 = '\0';
        uVar4 = FUN_00ca18c0();
        cVar9 = (char)uVar4;
        param_1 = extraout_XMM0_Da_04;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar4 = FUN_00d50b20();
          param_1 = extraout_XMM0_Da_05;
        }
        if (plVar7 != (int64_t *)0x0) {
          uVar4 = FUN_00d50b20();
          param_1 = extraout_XMM0_Da_06;
        }
      }
      if (plVar6 != (int64_t *)0x0) {
        uVar4 = FUN_00d50b20();
        param_1 = extraout_XMM0_Da_07;
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar4 = FUN_00d50b20();
      param_1 = extraout_XMM0_Da_08;
    }
    plVar7 = local_80;
    plVar8 = g_0270b860;
    plVar6 = g_0270b810;
    if (cVar9 != '\0') {
      if (g_0270b810 != (int64_t *)0x0) {
        param_1 = FUN_00d50b00();
      }
      local_120 = plVar6;
      local_118 = '\x01';
      pplVar10 = &local_48;
      uVar12 = FUN_000175c0(param_1,&local_120);
      plVar6 = local_48;
      if ((g_026fd0c0 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_40, iVar3 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        uVar12 = ___cxa_guard_release();
        plVar7 = local_80;
      }
      if (plVar6 == (int64_t *)0x0) {
LAB_00527964:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar12 = extraout_XMM0_Da_09;
        if (cVar2 == '\0') goto LAB_00527964;
      }
      plVar6 = *pplVar10;
      if (plVar6 == (int64_t *)0x0) {
        cVar2 = '\0';
        uVar5 = 0;
        plVar6 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          uVar12 = FUN_00d50b00();
        }
        else {
          *(void*)(pplVar10 + 1) = 0;
        }
        uVar5 = (undefined7)((uint64_t)pplVar10 >> 8);
        cVar2 = '\x01';
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      local_60 = plVar6;
      local_70._0_1_ = cVar2;
      local_70._1_7_ = uVar5;
      if ((plVar6 == (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
        local_50 = 0;
        local_58 = (int64_t *)0x0;
        uVar4 = FUN_00d50b00();
        local_70._0_1_ = '\x01';
        uVar12 = extraout_XMM0_Da_27;
        local_60 = plVar7;
        local_70._1_7_ = (int7)((uint64_t)uVar4 >> 8);
      }
      plVar6 = g_0270b818;
      if (g_0270b818 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_110 = plVar6;
      local_108 = '\x01';
      pplVar10 = &local_48;
      uVar12 = FUN_000175c0(uVar12,&local_110);
      plVar6 = local_48;
      if ((g_026fd0c0 == '\0') &&
         (iVar3 = ___cxa_guard_acquire(), uVar12 = extraout_XMM0_Da_41, iVar3 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        uVar12 = ___cxa_guard_release();
        plVar7 = local_80;
      }
      if (plVar6 == (int64_t *)0x0) {
LAB_00527dfe:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar6 + 0x360))();
        cVar2 = FUN_00e85ea0();
        uVar12 = extraout_XMM0_Da_28;
        if (cVar2 == '\0') goto LAB_00527dfe;
      }
      plVar6 = *pplVar10;
      if (plVar6 == (int64_t *)0x0) {
        uVar11 = 0;
        plVar6 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          uVar12 = FUN_00d50b00();
        }
        else {
          *(void*)(pplVar10 + 1) = 0;
        }
        uVar11 = CONCAT71((int7)((uint64_t)pplVar10 >> 8),1);
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      plVar8 = local_60;
      if ((plVar6 == (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
        local_50 = 0;
        local_58 = (int64_t *)0x0;
        uVar12 = FUN_00d50b00();
        local_78 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        plVar6 = plVar7;
      }
      else {
        local_78 = uVar11 & 0xffffffff;
      }
      plVar8 = g_0270b808;
      if (g_0270b808 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b00();
      }
      local_100 = plVar8;
      local_f8 = '\x01';
      pplVar10 = &local_48;
      FUN_000175c0(uVar12,&local_100);
      plVar8 = local_48;
      uVar4 = FUN_00053ac0();
      param_1 = extraout_XMM0_Da_29;
      if (plVar8 == (int64_t *)0x0) {
LAB_00527f03:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        uVar4 = FUN_00e85ea0();
        param_1 = extraout_XMM0_Da_30;
        if ((char)uVar4 == '\0') goto LAB_00527f03;
      }
      plVar7 = *pplVar10;
      if (plVar7 == (int64_t *)0x0) {
        local_50 = 0;
        plVar7 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          uVar4 = FUN_00d50b00();
          param_1 = extraout_XMM0_Da_31;
        }
        else {
          *(void*)(pplVar10 + 1) = 0;
        }
        local_50 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        param_1 = FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        param_1 = FUN_00d50b20();
      }
      plVar8 = local_60;
      if (plVar7 != (int64_t *)0x0) {
        local_58 = plVar7;
        iVar3 = FUN_00d45870();
        param_1 = extraout_XMM0_Da_32;
        goto LAB_00527f8e;
      }
      goto LAB_00528492;
    }
    if (g_0270b860 != (int64_t *)0x0) {
      uVar4 = FUN_00d50b00();
      param_1 = extraout_XMM0_Da_14;
    }
    plVar6 = g_0270b868;
    local_60 = plVar8;
    local_70._0_1_ = plVar8 != (int64_t *)0x0;
    uVar5 = (undefined7)((uint64_t)uVar4 >> 8);
    local_70._1_7_ = uVar5;
    if (g_0270b868 != (int64_t *)0x0) {
      param_1 = FUN_00d50b00();
      uVar5 = extraout_var_00;
    }
LAB_00527a56:
    local_78 = CONCAT71(uVar5,plVar6 != (int64_t *)0x0);
    iVar3 = 1;
    local_50 = 0;
  }
  local_58 = (int64_t *)0x0;
  plVar8 = local_60;
LAB_00527f8e:
  plVar7 = g_0270b810;
  local_b8 = '\0';
  local_c0 = plVar8;
  local_60 = plVar8;
  if (g_0270b810 != (int64_t *)0x0) {
    param_1 = FUN_00d50b00();
  }
  plVar8 = local_58;
  local_48 = plVar7;
  local_40 = '\0';
  uVar12 = FUN_00ca0840(param_1,&local_48);
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  plVar7 = g_0270b818;
  local_a8 = '\0';
  local_b0 = plVar6;
  if (g_0270b818 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b00();
  }
  local_48 = plVar7;
  local_40 = '\0';
  FUN_00ca0840(uVar12,&local_48);
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00d46530();
  local_90 = local_a0;
  local_88 = 0;
  plVar7 = g_0270b808;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      uVar12 = FUN_00d50b00();
      plVar7 = g_0270b808;
    }
  }
  else {
    local_98 = '\0';
  }
  local_88 = '\x01';
  g_0270b808 = plVar7;
  if (plVar7 != (int64_t *)0x0) {
    local_88 = '\x01';
    uVar12 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar7;
  FUN_00ca0840(uVar12,&local_48);
  plVar1 = local_80;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return iVar3 - 1U < 0xd;
}

