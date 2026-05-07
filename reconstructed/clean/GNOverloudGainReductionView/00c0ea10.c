// Function: FUN_00c0ea10
// Address: 00c0ea10
// Size: 932 bytes
// Class: GNOverloudGainReductionView

uint64_t FUN_00c0ea10(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *in_RDX;
  int unaff_ESI;
  int64_t this_ptr;
  float fVar7;
  uint64_t in_XMM1_Qb;
  uint8_t auVar8 [16];
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  local_88 = *in_RDX;
  local_80 = '\0';
  uVar2 = FUN_00b3c720(param_1,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_ESI != 0) {
    return uVar2;
  }
  FUN_00d23340();
  plVar6 = local_38;
  local_70 = local_30 != '\0';
  local_78 = local_38;
  if ((bool)local_70) {
    local_30 = '\0';
  }
  FUN_00c4d260();
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar5 = &local_78;
      plVar3 = local_78;
      cVar4 = local_70;
      goto joined_r0x00c0eaea;
    }
  }
  pplVar5 = &g_02802688;
  plVar3 = g_02802688;
  cVar4 = g_02802690;
joined_r0x00c0eaea:
  if (cVar4 == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_70 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    fVar7 = (float)(**(code **)(*(int64_t *)plVar3[0x12] + 0x4d8))();
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar6 + 0x27) = 0;
    plVar6[0x2e] = 0;
    *(void*)(plVar6 + 0x2f) = 0;
    plVar6[0x30] = 0;
    *(void*)(plVar6 + 0x31) = 0;
    plVar6[0x28] = 0;
    plVar6[0x29] = 0;
    *(void*)(plVar6 + 0x2a) = 0;
    plVar6[0x2b] = 0;
    plVar6[0x2c] = 0;
    *(void*)((int64_t)plVar6 + 0x165) = 0;
    *(void*)((int64_t)plVar6 + 0x18c) = 0;
    *(void*)((int64_t)plVar6 + 0x194) = 0;
    *(void*)((int64_t)plVar6 + 0x199) = 0;
    plVar6[0x35] = 0;
    plVar6[0x36] = 0;
    plVar6[0x37] = 0;
    plVar6[0x38] = 0;
    *plVar6 = (int64_t)&g_02677e10;
    plVar6[2] = (int64_t)&g_026788e8;
    plVar6[0x39] = (int64_t)&g_02678928;
    *(void*)((int64_t)plVar6 + 500) = 0;
    *(void*)(plVar6 + 0x3f) = 0;
    plVar6[0x43] = 0;
    plVar6[0x3c] = 0;
    plVar6[0x3d] = 0;
    plVar6[0x3a] = 0;
    plVar6[0x3b] = 0;
    *(void*)(plVar6 + 0x3e) = 0;
    *(void*)((int64_t)plVar6 + 0x1fc) = 0;
    *(void*)((int64_t)plVar6 + 0x204) = 0;
    *(void*)((int64_t)plVar6 + 0x20c) = 0;
    (*g_02677e28)();
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
    *(int64_t **)(this_ptr + 0xb8) = plVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar6 = *(int64_t **)(this_ptr + 0xb8);
    }
    auVar8._8_8_ = in_XMM1_Qb;
    auVar8._0_8_ = param_2;
    auVar8 = blendps(auVar8,g_023b5da0,0xd);
    (**(code **)(*plVar6 + 0x4d0))(fVar7 + g_02390d30 + (float)param_2,auVar8._0_8_);
    local_68 = g_0276c280;
    plVar6 = *(int64_t **)(this_ptr + 0xb8);
    if (g_0276c280 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    (**(code **)(*plVar6 + 0x958))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_0276c288;
    plVar6 = *(int64_t **)(this_ptr + 0xb8);
    if (g_0276c288 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    (**(code **)(*plVar6 + 0xa10))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e53c20();
    plVar6 = local_38;
    local_40 = 0;
    local_48 = *(int64_t *)(this_ptr + 0xb8);
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar6 + 0x450))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}

