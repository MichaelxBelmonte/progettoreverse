// Function: FUN_00c17210
// Address: 00c17210
// Size: 1284 bytes
// Class: GNOverloudParametricEQ
// String references:
//   "GNOverloudParametricEQ"
//   "GNOverloudCompressor"

int64_t * FUN_00c17210(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  
  pplVar7 = &local_58;
  FUN_00b37610();
  plVar1 = local_58;
  FUN_00b10020();
  if (plVar1 == (int64_t *)0x0) {
LAB_00c1726a:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c1726a;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c16ff0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)*param_1;
  if ((g_0276d280 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0276d1d0 = FUN_00b10020();
    g_0276d1b8 = "GNOverloudCompressor";
    g_0276d1c0 = 0xe0;
    g_0276d1c8 = FUN_00c40790;
    g_0276d1d8 = 0;
    ram_000000000276d1e0 = 0;
    g_0276d1e8 = 0;
    ram_000000000276d1f0 = 0;
    g_0276d1f8 = 0;
    ram_000000000276d200 = 0;
    g_0276d208 = 0;
    ram_000000000276d210 = 0;
    g_0276d218 = 0;
    ram_000000000276d220 = 0;
    g_0276d228 = 0;
    ram_000000000276d230 = 0;
    g_0276d238 = 0;
    ram_000000000276d240 = 0;
    g_0276d248 = 0;
    ram_000000000276d250 = 0;
    g_0276d258 = 0;
    ram_000000000276d260 = 0;
    g_0276d268 = 0;
    ram_000000000276d270 = 0;
    g_0276d278 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c17300:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c17300;
  }
  lVar3 = g_0276cae0;
  if ((*plVar6 == 0) || (plVar1 == (int64_t *)0x0)) {
LAB_00c1743e:
    plVar6 = (int64_t *)*param_1;
    if ((g_0276d1b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_0276d100 = FUN_00b10020();
      g_0276d0e8 = "GNOverloudParametricEQ";
      g_0276d0f0 = 0xd0;
      g_0276d0f8 = FUN_00c40710;
      g_0276d108 = 0;
      ram_000000000276d110 = 0;
      g_0276d118 = 0;
      ram_000000000276d120 = 0;
      g_0276d128 = 0;
      ram_000000000276d130 = 0;
      g_0276d138 = 0;
      ram_000000000276d140 = 0;
      g_0276d148 = 0;
      ram_000000000276d150 = 0;
      g_0276d158 = 0;
      ram_000000000276d160 = 0;
      g_0276d168 = 0;
      ram_000000000276d170 = 0;
      g_0276d178 = 0;
      ram_000000000276d180 = 0;
      g_0276d188 = 0;
      ram_000000000276d190 = 0;
      g_0276d198 = 0;
      ram_000000000276d1a0 = 0;
      g_0276d1a8 = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (int64_t *)0x0) {
LAB_00c17474:
      param_1 = &g_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00c17474;
    }
    lVar3 = g_0276caf0;
    if ((*param_1 == 0) || (local_58 == (int64_t *)0x0)) {
LAB_00c1751f:
      if ((plVar1 == (int64_t *)0x0) || (cVar4 = FUN_00b378e0(), cVar4 == '\0')) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        local_68 = *param_3;
        local_60 = '\0';
        (**(code **)(*plVar1 + 0x88))(extraout_XMM0_Da_01,&local_68);
        bVar2 = false;
        if ((local_60 == '\0') || (local_68 == 0)) goto LAB_00c1757c;
        FUN_00d50b20();
      }
LAB_00c1757a:
      bVar2 = false;
      goto LAB_00c1757c;
    }
    plVar6 = (int64_t *)*param_3;
    if (g_0276caf0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    cVar4 = (**(code **)(*plVar6 + 0x50))();
    uVar8 = extraout_XMM0_Da_00;
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_00c1751f;
    local_78 = *param_3;
    local_70 = '\0';
    (**(code **)(*local_58 + 0x88))(uVar8,&local_78);
    bVar2 = false;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    plVar6 = (int64_t *)*param_3;
    if (g_0276cae0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar6 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_0276cae8;
    if (cVar4 == '\0') {
      if (g_0276cae8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d8f400();
      uVar8 = extraout_XMM0_Da;
      if (lVar3 != 0) {
        uVar8 = FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_00c1743e;
      local_98 = *param_3;
      local_90 = '\0';
      (**(code **)(*plVar1 + 0x88))(uVar8,&local_98);
      bVar2 = false;
      if ((local_90 == '\0') || (local_98 == 0)) goto LAB_00c1757c;
      FUN_00d50b20();
      goto LAB_00c1757a;
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    bVar2 = true;
LAB_00c1757c:
    if (local_58 == (int64_t *)0x0) goto LAB_00c17589;
  }
  FUN_00d50b20();
LAB_00c17589:
  if ((!bVar2) && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

