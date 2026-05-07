// Function: FUN_003726c0
// Address: 003726c0
// Size: 1948 bytes
// Class: MDFileBrowserInsp
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_003726c0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t **pplVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  float fVar10;
  float fVar11;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_01c33af0();
  pplVar6 = &local_40;
  (**(code **)(*this_ptr + 0xae0))();
  plVar5 = local_40;
  FUN_0038aac0();
  if (plVar5 == (int64_t *)0x0) {
LAB_0037274e:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0037274e;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) goto LAB_00372d22;
  pplVar6 = &local_40;
  FUN_01c19440();
  plVar5 = local_40;
  FUN_0038ad10();
  if (plVar5 == (int64_t *)0x0) {
LAB_003727cb:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_003727cb;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    bVar2 = false;
    plVar5 = (int64_t *)0x0;
  }
  else {
    FUN_01c19c80();
    FUN_01c19d80();
    if (*(int *)(local_130 + 0xc) == 0) {
      cVar4 = '\0';
    }
    else {
      FUN_01c19c80();
      FUN_01c19d80();
      local_38 = '\0';
      local_40 = plVar5;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        FUN_01c0b7c0();
        plVar5 = local_40;
        FUN_01c0a900();
        local_60 = local_80;
        local_58 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_58 = '\x01';
        cVar4 = (**(code **)(*plVar5 + 0x50))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02703f90;
    if (cVar4 == '\0') {
      bVar2 = false;
      plVar5 = (int64_t *)0x0;
    }
    else {
      if (g_02703f90 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        bVar2 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar5 != (int64_t *)0x0) {
    if (this_ptr[0x40] == 0) {
      uVar7 = FUN_01e3f820();
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
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
      *plVar5 = (int64_t)&g_02677e10;
      plVar5[2] = (int64_t)&g_026788e8;
      plVar5[0x39] = (int64_t)&g_02678928;
      *(void*)((int64_t)plVar5 + 500) = 0;
      *(void*)(plVar5 + 0x3f) = 0;
      plVar5[0x43] = 0;
      plVar5[0x3c] = 0;
      plVar5[0x3d] = 0;
      plVar5[0x3a] = 0;
      plVar5[0x3b] = 0;
      *(void*)(plVar5 + 0x3e) = 0;
      *(void*)((int64_t)plVar5 + 0x1fc) = 0;
      *(void*)((int64_t)plVar5 + 0x204) = 0;
      *(void*)((int64_t)plVar5 + 0x20c) = 0;
      (*g_02677e28)();
      lVar1 = this_ptr[0x40];
      this_ptr[0x40] = (int64_t)plVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar5 = (int64_t *)this_ptr[0x40];
      }
      auVar8._0_4_ = fVar10 - fVar11;
      auVar8._4_4_ = fVar11 - fVar11;
      auVar8._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
      auVar8._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
      auVar9._8_8_ = extraout_XMM0_Qb;
      auVar9._0_8_ = uVar7;
      auVar9 = blendps(auVar8,auVar9,2);
      (**(code **)(*plVar5 + 0x4d0))(auVar9._0_8_);
      FUN_01cef490();
      (**(code **)(*(int64_t *)this_ptr[0x40] + 0x558))();
      FUN_01cef3b0();
      FUN_01e3b6a0();
      lVar1 = g_02725a10;
      plVar5 = (int64_t *)this_ptr[0x40];
      if (g_02725a10 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0xa10))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_02703fa0;
      plVar5 = (int64_t *)this_ptr[0x40];
      if (g_02703fa0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_02703fa8;
      if (g_02703fa8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      local_90 = 0;
      local_88 = '\0';
      FUN_00d31230(&local_90,&local_a0);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar5 + 0x6a8))();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_68 = 0;
      lVar1 = this_ptr[0x40];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar1;
      (**(code **)(*this_ptr + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar2) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_00372d22:
  if (((int64_t *)this_ptr[0x40] != (int64_t *)0x0) &&
     ((**(code **)(*(int64_t *)this_ptr[0x40] + 0x478))(), this_ptr[0x40] != 0)) {
    this_ptr[0x40] = 0;
    FUN_00d50b20();
  }
  return;
}

