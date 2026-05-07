// Function: FUN_00236ad0
// Address: 00236ad0
// Size: 5735 bytes
// Class: MUTool

void FUN_00236ad0(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint32_t uVar6;
  int64_t **pplVar7;
  void *pvVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void* pVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t this_ptr;
  char cVar14;
  uint64_t uVar15;
  int64_t *local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_70;
  char local_68;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  
  plVar12 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar12))();
  plVar9 = local_48;
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_40[0]);
  pplVar7 = &local_58;
  if (local_40[0] != '\0') {
    pplVar7 = (int64_t **)local_40;
  }
  *(char *)pplVar7 = '\0';
  if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_00236b4c:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_00236b4c;
  uVar15 = (**(code **)(*plVar9 + 0xa50))();
  *(void*)(this_ptr + 0x188) = uVar15;
  *(void*)(this_ptr + 400) = param_2;
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar15 = FUN_00226290();
  if (*arg1 == 0) {
    local_40[0] = '\0';
    local_48 = (int64_t *)0x0;
    FUN_00239240(uVar15,&local_48);
    plVar9 = local_58;
    plVar12 = (int64_t *)*arg1;
    if (plVar12 == local_58) {
      if (((char)arg1[1] == '\0') && (local_58 != (int64_t *)0x0)) {
        if (local_50 != '\0') goto LAB_00236c53;
        FUN_00d50b00();
        goto LAB_00236c36;
      }
LAB_00236c3a:
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar13 = arg1[1];
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)plVar9;
        if (((char)lVar13 != '\0') && (plVar12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00236c36:
        *(void*)(arg1 + 1) = 1;
        goto LAB_00236c3a;
      }
      *arg1 = (int64_t)local_58;
      if (((char)lVar13 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00236c53:
      *(void*)(arg1 + 1) = 1;
    }
    cVar5 = local_40[0];
    plVar9 = local_48;
    plVar12 = (int64_t *)*in_RDX;
    if (plVar12 == local_48) {
      if (((local_40[0] != '\0') && ((char)in_RDX[1] == '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
        *(void*)(in_RDX + 1) = 1;
      }
    }
    else {
      lVar13 = in_RDX[1];
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      *in_RDX = (int64_t)plVar9;
      if (((char)lVar13 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(char *)(in_RDX + 1) = cVar5;
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*arg1 == 0) {
      return;
    }
  }
  if (*in_RDX == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x98) == 0) {
    *(void*)(this_ptr + 0x154) = 0xffffffff;
  }
  else {
    FUN_00d50b00();
    uVar6 = FUN_01c446f0();
    *(void*)(this_ptr + 0x154) = uVar6;
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar2 = true;
  if ((cVar5 == '\0') && (lVar13 = *(int64_t *)(this_ptr + 0xc0), lVar13 != 0)) {
    FUN_00d50b00();
    local_88 = (int64_t *)(lVar13 + 0x10);
    bVar2 = false;
  }
  else {
    local_88 = (int64_t *)0x0;
  }
  local_f0 = 0;
  lVar13 = *in_RDX;
  lVar3 = in_RDX[1];
  if (((char)lVar3 != '\0') && (lVar13 != 0)) {
    FUN_00d50b00();
  }
  local_260 = local_88;
  local_258 = '\0';
  plVar12 = &local_f8;
  local_f8 = lVar13;
  local_f0 = (char)lVar3;
  cVar5 = (**(code **)(&UNK_00001540 + **(int64_t **)(this_ptr + 0x90)))(plVar12,&local_260);
  pVar11 = (void*)plVar12;
  if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
    (**(code **)(*local_260 + 0x10))();
    FUN_00d50b20();
  }
  cVar14 = local_f0;
  lVar13 = local_f8;
  if (cVar5 == '\0') goto LAB_002380e2;
  lVar3 = *in_RDX;
  if (lVar3 == local_f8) {
    if (((local_f0 != '\0') && ((char)in_RDX[1] == '\0')) && (local_f8 != 0)) {
      cVar14 = '\x01';
      FUN_00d50b00();
      goto LAB_00236ec1;
    }
  }
  else {
    lVar4 = in_RDX[1];
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b00();
    }
    *in_RDX = lVar13;
    if (((char)lVar4 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00236ec1:
    *(char *)(in_RDX + 1) = cVar14;
  }
  if (*(int *)(this_ptr + 0x19c) == 1) {
    FUN_00226f20();
    plVar12 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) goto LAB_00236f3f;
    FUN_00226f20();
    plVar12 = local_58;
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a070();
    plVar9 = *(int64_t **)(this_ptr + 0x1b8);
    plVar10 = plVar9;
    if (plVar9 != local_48) {
      if (local_40[0] == '\0') {
        if (local_48 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar9 = *(int64_t **)(this_ptr + 0x1b8);
          plVar10 = local_48;
        }
      }
      else {
        local_40[0] = '\0';
        plVar10 = local_48;
      }
      *(int64_t **)(this_ptr + 0x1b8) = plVar10;
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar10 = local_48;
      }
    }
    if ((local_40[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_00236f3f:
    lVar13 = *in_RDX;
    lVar3 = *(int64_t *)(this_ptr + 0x1b8);
    if (lVar3 != lVar13) {
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x1b8) = lVar13;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  plVar12 = *(int64_t **)(this_ptr + 0x90);
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_248 = '\0';
  local_250 = 0;
  (**(code **)(*plVar12 + 0x980))();
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar13 = *(int64_t *)(this_ptr + 0x90);
  if (lVar13 != 0) {
    FUN_00d50b00();
  }
  local_238 = '\0';
  local_240 = 0;
  FUN_019a4000();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if (lVar13 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  FUN_019f0ee0();
  plVar12 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00234400();
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar12 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar12))();
  plVar9 = local_48;
  pplVar7 = (int64_t **)local_40;
  if (local_40[0] == '\0') {
    pplVar7 = &local_58;
  }
  local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_40[0]);
  *(void*)pplVar7 = 0;
  if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)pplVar7;
  if (plVar9 == (int64_t *)0x0) {
    plVar9 = *(int64_t **)(this_ptr + 0x90);
LAB_002371cf:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_002371cf;
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *plVar9 + 0x38))();
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    lVar13 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar13 != 0) {
      FUN_00d50b00();
    }
    FUN_004405f0();
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)(&UNK_00001668 + *local_70))();
    local_e8 = local_58;
    local_e0 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (*(int64_t *)(this_ptr + 0x1c0) != 0) goto LAB_002372b3;
LAB_002372f3:
      local_e0 = '\x01';
      local_158 = '\0';
      local_160 = 0;
    }
    else {
      local_50 = '\0';
      if (*(int64_t *)(this_ptr + 0x1c0) == 0) goto LAB_002372f3;
LAB_002372b3:
      local_e0 = '\x01';
      FUN_006f3f00();
    }
    FUN_00757c60();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    local_d8 = local_170;
    local_d0 = 0;
    if (local_168 == '\0') {
      if (local_170 != 0) {
        FUN_00d50b00();
      }
      lVar3 = *(int64_t *)(this_ptr + 0xb8);
    }
    else {
      local_168 = '\0';
      lVar3 = *(int64_t *)(this_ptr + 0xb8);
    }
    local_d0 = '\x01';
    if (lVar3 != 0) {
      local_d0 = '\x01';
      FUN_00d50b00();
    }
    FUN_004405c0();
    local_c8 = local_150;
    local_c0 = 0;
    if (local_148 == '\0') {
      if (local_150 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_c0 = '\x01';
    FUN_004b61e0(&local_c8,&local_d8);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar13 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  (**(code **)(*local_48 + 0x400))();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_210 = g_026f6e70;
  if (g_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_208 = '\x01';
  local_130 = 0;
  FUN_00d50b00();
  local_130 = '\x01';
  local_200 = 0;
  local_1f8 = '\0';
  local_138 = this_ptr;
  FUN_00d40470(&local_200,&local_138,1,3);
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  uVar15 = (**(code **)(&UNK_00001668 + *local_70))();
  local_b8 = local_58;
  local_b0 = 0;
  plVar12 = g_026f6de8;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      uVar15 = FUN_00d50b00();
      plVar12 = g_026f6de8;
    }
  }
  else {
    local_50 = '\0';
  }
  local_b0 = '\x01';
  g_026f6de8 = plVar12;
  if (plVar12 != (int64_t *)0x0) {
    local_b0 = '\x01';
    uVar15 = FUN_00d50b00();
  }
  local_40[0] = '\0';
  local_48 = plVar12;
  FUN_00ca0840(uVar15,&local_48);
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_1f0 = g_026f6d80;
  if (g_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  local_120 = 0;
  FUN_00d50b00();
  local_120 = '\x01';
  local_1d8 = '\0';
  pplVar7 = &local_1e0;
  local_1e0 = plVar9;
  local_128 = this_ptr;
  FUN_00d40470(pplVar7,&local_128,3,3);
  pVar11 = (void*)pplVar7;
  if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0021f1f0();
  uVar15 = FUN_00d6f370();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00237ab4;
    uVar15 = FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
LAB_0023792e:
    lVar13 = g_026f6e78;
    if (g_026f6e78 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1d0 = lVar13;
    local_1c8 = '\x01';
    cVar5 = FUN_00d70f90(uVar15,0);
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      uVar15 = (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      local_1c0 = g_026f6e80;
      if (g_026f6e80 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_00d70f90(uVar15,0);
      FUN_019928b0();
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar15 = (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_1b0 = g_026f6e88;
    if (g_026f6e88 != 0) {
      uVar15 = FUN_00d50b00();
    }
    local_1a8 = '\x01';
    FUN_00d70f90(uVar15,1);
    FUN_01946d20();
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
    lVar13 = *(int64_t *)(this_ptr + 0x98);
  }
  else {
    if (local_48 != (int64_t *)0x0) goto LAB_0023792e;
LAB_00237ab4:
    bVar1 = true;
    lVar13 = *(int64_t *)(this_ptr + 0x98);
  }
  if (lVar13 != 0) {
    FUN_00d50b00();
    FUN_0021e520();
    FUN_00d50b20();
    FUN_00d403d0();
    local_1a0 = g_026f6e90;
    if (g_026f6e90 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    local_110 = 0;
    FUN_00d50b00();
    local_110 = '\x01';
    local_190 = 0;
    local_188 = '\0';
    plVar12 = &local_190;
    local_118 = this_ptr;
    FUN_00d40470(plVar12,&local_118,1,3);
    pVar11 = (void*)plVar12;
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  (**(code **)(&UNK_00001668 + *local_58))();
  plVar12 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_140 = plVar12;
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_100 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_108 = (int64_t *)(this_ptr + 0x70);
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d610();
  local_a8 = local_48;
  local_a0 = 0;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_a0 = '\x01';
  local_178 = '\0';
  local_180 = 0;
  FUN_00cbad80(&local_180,&local_a8,0x20);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00239d50();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar12 = g_02709e30;
  if (g_02709e30 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
      (uVar15 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_58 = plVar12;
  local_50 = '\0';
  FUN_000175c0(uVar15,&local_58);
  plVar9 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_40[0] = '\0';
    local_48 = plVar9;
    FUN_00c70bc0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar13 = *local_70;
  (**(code **)(&g_000015c8 + lVar13))();
  pVar11 = (void*)lVar13;
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar12 = local_140;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1f10();
  FUN_00db3760();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00710820();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  local_98 = local_58;
  local_90 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_90 = '\x01';
  FUN_00441f10();
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_002380e2:
  plVar12 = local_88;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && plVar12 != (int64_t *)0x0) {
    (**(code **)(*plVar12 + 0x10))();
    FUN_00d50b20();
  }
  return;
}

