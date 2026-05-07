// Function: FUN_0147f490
// Address: 0147f490
// Size: 3837 bytes
// Class: Unknown
// String references:
//   "undoStartedElementAnalyzer"

void*
FUN_0147f490(uint64_t param_1,void*param_2,uint64_t param_3,uint8_t param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint *puVar11;
  void* pVar12;
  int64_t lVar13;
  int64_t *plVar14;
  int iVar15;
  int64_t *arg1;
  void*this_ptr;
  uint *puVar16;
  byte local_res8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  uint64_t local_a8;
  int local_a0;
  void*local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  uint local_78 [2];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  void*local_48;
  int64_t *local_40;
  char local_38;
  
  if (g_028acf00 != 0x0) {
    (*g_028acf00)();
    plVar9 = local_80;
    plVar14 = (int64_t *)*param_2;
    if (plVar14 == local_80) {
      if ((*(char *)(param_2 + 1) != '\0') || (local_80 == (int64_t *)0x0)) goto LAB_0147f57c;
      if ((char)local_78[0] == '\0') {
        FUN_00d50b00();
        goto LAB_0147f579;
      }
    }
    else {
      cVar4 = *(char *)(param_2 + 1);
      if ((char)local_78[0] == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = plVar9;
        if ((cVar4 != '\0') && (plVar14 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0147f579:
        *(void*)(param_2 + 1) = 1;
LAB_0147f57c:
        if (((char)local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0147f5b6;
      }
      *param_2 = local_80;
      if ((cVar4 != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_2 + 1) = 1;
    local_78[0] = local_78[0] & 0xffffff00;
  }
LAB_0147f5b6:
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_0258a670;
  (*g_0258a688)();
  FUN_00e38130(0,0,0);
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02578b00;
  (*g_02578b18)();
  pVar12 = 1;
  FUN_00d7a0f0();
  pcVar2 = g_02572370;
  local_48 = puVar5;
  if ((int64_t *)*arg1 != (int64_t *)0x0) {
    local_78[0] = local_78[0] & 0xffffff00;
    local_80 = (int64_t *)0x0;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_70 = (int64_t *)*arg1;
LAB_0147f6a8:
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar15 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar15 = 0;
        }
        local_68 = CONCAT44(iVar15,(int)local_68);
      }
      lVar7 = (int64_t)(int)local_68;
      iVar15 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar15);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar15) break;
      local_80 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)local_70[2]);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b80();
      lVar7 = local_c0;
      if (local_b8 == '\0') goto LAB_0147f760;
      if (local_c0 != 0) goto LAB_0147f78e;
    }
    plVar14 = local_70;
    FUN_001159b0();
    pVar12 = (void*)plVar14;
  }
  uVar10 = FUN_01480f60();
  plVar14 = local_80;
  if ((char)local_78[0] == '\0') {
    if (local_80 == (int64_t *)0x0) goto LAB_01480133;
    FUN_00d50b00();
    if (((char)local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_80 == (int64_t *)0x0) {
LAB_01480133:
    local_98 = (void*)
               CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1));
    lVar7 = *arg1;
    goto joined_r0x01480148;
  }
  local_78[0] = local_78[0] & 0xffffff00;
  local_80 = (int64_t *)0x0;
  local_70 = plVar14;
  local_68 = 0xffffffff;
  local_60 = 0;
  while( true ) {
    lVar7 = (int64_t)(int)local_68;
    iVar15 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,iVar15);
    if (*(int *)((int64_t)local_70 + 0xc) <= iVar15) break;
    local_80 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
    if (g_02802ec0 != 0x0) {
      (*g_02802ec0)();
    }
    (**(code **)(*local_80 + 0x398))();
    if (local_68._4_4_ != 0) {
      if ((int64_t)local_68 < 0) {
        iVar15 = -local_68._4_4_;
      }
      else {
        local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
        FUN_00d23690();
        local_60 = local_60 + local_68._4_4_;
        iVar15 = 0;
      }
      local_68 = CONCAT44(iVar15,(int)local_68);
    }
  }
  plVar9 = local_70;
  FUN_0079b950();
  pVar12 = (void*)plVar9;
  local_98 = (void*)((uint64_t)local_98 & 0xffffffff00000000);
  lVar7 = *arg1;
joined_r0x01480148:
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0xc) != 0)) {
    FUN_00d23310();
    plVar9 = local_80;
    local_c0 = CONCAT71(local_c0._1_7_,(char)local_78[0]);
    puVar11 = (uint *)&local_c0;
    if ((char)local_78[0] != '\0') {
      puVar11 = local_78;
    }
    *(void*)puVar11 = 0;
    if (((char)local_78[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar12);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar7 = FUN_00e8b990();
    if (((char)local_c0 != '\0') && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((lVar7 != 0 & local_res8) != 0) {
      FUN_00d23310();
      plVar9 = local_80;
      puVar11 = (uint *)&local_58;
      puVar16 = local_78;
      if ((char)local_78[0] == '\0') {
        puVar16 = puVar11;
      }
      local_58 = (char)local_78[0];
      *(void*)puVar16 = 0;
      if (((char)local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific((void*)puVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_014334a0();
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      plVar1 = (int64_t *)*arg1;
      local_78[0] = 1;
      local_80 = &g_024c5048;
      local_68 = local_68 & 0xffffffffffffff00;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      local_70 = plVar1;
      FUN_00db2810(&g_027c1b20,"undoStartedElementAnalyzer",&local_80);
      local_80 = &g_024c5048;
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *this_ptr = plVar14;
  *(void*)(this_ptr + 1) = 1;
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_0147f760:
  if (local_c0 != 0) {
    FUN_00d50b00();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
LAB_0147f78e:
    local_b8 = '\0';
    local_c0 = 0;
    local_b0 = lVar7;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_a8._4_4_ = 0;
    while( true ) {
      if (local_a8._4_4_ != 0) {
        if (local_a8._4_4_ < 1) {
          iVar15 = -local_a8._4_4_;
        }
        else {
          iVar15 = (int)local_a8 - local_a8._4_4_;
          local_a8 = CONCAT44(local_a8._4_4_,iVar15);
          FUN_00d23690();
          local_a0 = local_a0 + local_a8._4_4_;
          iVar15 = 0;
        }
        local_a8 = CONCAT44(iVar15,(int)local_a8);
      }
      lVar7 = (int64_t)(int)local_a8;
      iVar15 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,iVar15);
      if (*(int *)(local_b0 + 0xc) <= iVar15) break;
      lVar13 = *(int64_t *)(local_b0 + 0x10);
      local_c0 = *(int64_t *)(lVar13 + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)lVar13);
      pVar12 = (void*)lVar13;
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef640();
      plVar14 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01480e00();
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (plVar9 == (int64_t *)0x0) {
        plVar9 = (int64_t *)FUN_00e8fc40();
        FUN_000fdf90();
        (**(code **)(*plVar9 + 0x18))();
        FUN_013fb180();
        FUN_013fb350();
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*pcVar2)();
        local_98 = puVar5;
        FUN_00e33de0();
        lVar7 = g_027295d0;
        if (g_027295d0 != 0) {
          FUN_00d50b00();
        }
        local_40 = (int64_t *)lVar7;
        local_38 = '\0';
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        FUN_00d46300();
        lVar13 = local_90;
        lVar7 = g_027295c0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
            lVar7 = g_027295c0;
          }
        }
        else {
          local_88 = '\0';
        }
        g_027295c0 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = (int64_t *)lVar7;
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        FUN_00d46300();
        lVar13 = local_90;
        lVar7 = g_027295c8;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
            lVar7 = g_027295c8;
          }
        }
        else {
          local_88 = '\0';
        }
        g_027295c8 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = (int64_t *)lVar7;
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e33de0();
        pvVar8 = _pthread_getspecific(pVar12);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        lVar13 = local_90;
        lVar7 = g_02729618;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            FUN_00d50b00();
            lVar7 = g_02729618;
          }
        }
        else {
          local_88 = '\0';
        }
        g_02729618 = lVar7;
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = (int64_t *)lVar7;
        FUN_00ca0840();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        FUN_01480eb0();
        FUN_00d50b20();
      }
      local_40 = local_80;
      local_38 = '\0';
      cVar4 = FUN_00d7a850();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_00e33de0();
        lVar7 = g_027295d0;
        if (g_027295d0 != 0) {
          FUN_00d50b00();
        }
        FUN_000175c0();
        plVar3 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        local_40 = local_80;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = local_80;
        local_38 = '\0';
        FUN_00d7a410();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      *(void*)((int64_t)plVar9 + 0xd5) = param_4;
      FUN_00d50b20();
      if (plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_0015edf0();
    FUN_00d50b20();
  }
  goto LAB_0147f6a8;
}

