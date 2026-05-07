// Function: FUN_006da4e0
// Address: 006da4e0
// Size: 1450 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

uint64_t FUN_006da4e0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int64_t lVar6;
  char *pcVar7;
  void *pvVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t this_ptr;
  uint32_t uVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  int64_t local_d8;
  uint8_t local_d0;
  uint8_t local_c0;
  int64_t local_b0;
  char local_a8;
  int local_9c;
  int64_t local_80;
  char local_78 [8];
  int64_t local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  iVar4 = FUN_01caecd0();
  if (iVar4 == 1) {
    uVar11 = FUN_006cb500();
    lVar6 = g_02726cb0;
    if (local_78[0] == '\0') {
      if (local_80 != 0) {
        uVar11 = FUN_00d50b00();
        lVar6 = g_02726cb0;
      }
    }
    else {
      local_78[0] = '\0';
    }
    local_c0 = 1;
    g_02726cb0 = lVar6;
    if (lVar6 != 0) {
      local_c0 = 1;
      uVar11 = FUN_00d50b00();
    }
    local_d0 = 1;
    local_d8 = lVar6;
    FUN_006d9620(uVar11,&local_d8);
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  local_38[0] = local_78[0];
  pcVar5 = local_78;
  if (local_78[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_78[0] != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_9c = iVar4;
  if ((local_38[0] == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e986f0();
  local_3c = (float)FUN_00e991a0();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  local_40 = (float)FUN_01caeac0();
  local_48 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x140) + 0xac0))();
  local_44 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x140) + 0xad0))();
  FUN_006cb500();
  if (local_78[0] == '\0') {
    if (local_80 == 0) goto LAB_006daa98;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_006daa98;
  local_40 = local_40 * g_023908e0 - local_3c;
  local_48 = local_48 * g_023908e0;
  fVar12 = local_44 * g_023908e0;
  local_78[0] = '\0';
  local_70 = local_80;
  local_68 = 0xffffffff;
  local_60 = 0;
  iVar4 = 0;
  local_44 = fVar12;
  while( true ) {
    if (iVar4 != 0) {
      if (iVar4 < 1) {
        iVar4 = -iVar4;
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar4);
        FUN_00d23690(fVar12,iVar4);
        local_60 = local_60 + iVar4;
        iVar4 = 0;
      }
      local_68 = CONCAT44(iVar4,(int)local_68);
    }
    lVar6 = (int64_t)(int)local_68;
    iVar4 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar4);
    if (*(int *)(local_70 + 0xc) <= iVar4) break;
    local_b0 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + 8 + lVar6 * 8);
    local_a8 = '\0';
    FUN_00c9fe40(*(int64_t *)(local_70 + 0x10),&local_b0);
    plVar2 = local_58;
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = pcVar5;
    }
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (void*)pcVar5;
    if ((local_38[0] == '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      local_3c = (float)FUN_01caeac0();
      local_3c = local_3c * g_023908e0;
    }
    else if (*(char *)(this_ptr + 0x1c0) == '\0') {
      local_3c = (float)FUN_00d459e0();
      local_3c = local_3c + local_40;
    }
    else {
      local_3c = (float)FUN_00d459e0();
      fVar12 = (float)FUN_01caeac0();
      local_3c = local_3c + fVar12 * g_023908e0;
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar12 = (float)FUN_012e78c0();
    plVar1 = local_58;
    if ((g_0270c820 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), fVar12 = extraout_XMM0_Da_00, iVar4 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      fVar12 = (float)___cxa_guard_release();
    }
    pplVar10 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar10 = &local_58;
      fVar12 = extraout_XMM0_Da;
      if (cVar3 == '\0') {
        pplVar10 = (int64_t **)&g_02802688;
      }
    }
    plVar1 = *pplVar10;
    if (*(char *)(pplVar10 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        fVar12 = (float)FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    pVar9 = (void*)pplVar10;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar8 = _pthread_getspecific(pVar9);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar12 = local_48;
      if (local_48 <= local_3c) {
        fVar12 = local_3c;
      }
      fVar13 = local_44;
      if (fVar12 <= local_44) {
        fVar13 = fVar12;
      }
      FUN_012c6a20(fVar13);
      fVar12 = (float)FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      fVar12 = (float)FUN_00d50b20();
    }
    iVar4 = local_68._4_4_;
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006daa98:
  if (local_9c == 3) {
    FUN_00ca1340();
  }
  return 1;
}

