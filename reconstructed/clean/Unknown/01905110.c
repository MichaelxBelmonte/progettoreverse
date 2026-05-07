// Function: FUN_01905110
// Address: 01905110
// Size: 2744 bytes
// Class: Unknown

void FUN_01905110(double param_1,uint32_t param_2)

{
  uint64_t uVar1;
  void *pvVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  int in_ECX;
  void* pVar7;
  double *pdVar8;
  int iVar9;
  void*arg1;
  void* unaff_EDI;
  int64_t lVar10;
  uint64_t uVar11;
  double dVar12;
  uint64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  double local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  int local_a8;
  uint32_t local_a4;
  uint64_t local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  uint64_t local_70;
  uint64_t local_60;
  uint64_t local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  local_148 = *arg1;
  local_140 = 0;
  local_80 = param_1;
  FUN_01901690(param_1,&local_148);
  uVar1 = local_40;
  if ((local_38[0] == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (2 < *(int *)(uVar1 + 0xc)) {
    local_a8 = in_ECX;
    pvVar2 = _pthread_getspecific(unaff_EDI);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = FUN_019079b0();
    local_a4 = param_2;
    FUN_00d23340();
    uVar5 = local_40;
    puVar6 = (uint64_t *)local_38;
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    puVar3 = puVar6;
    if (local_38[0] == '\0') {
      puVar3 = &local_58;
    }
    *(char *)puVar3 = '\0';
    if ((local_38[0] != '\0') && (uVar5 != 0)) {
      FUN_00d50b20();
    }
    pVar7 = (void*)puVar6;
    pvVar2 = _pthread_getspecific(pVar7);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_019079b0();
    if (((char)local_58 != '\0') && (uVar5 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar7);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_90 = (double)FUN_01907950();
    FUN_00d23340();
    uVar5 = local_40;
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    puVar6 = (uint64_t *)local_38;
    if (local_38[0] == '\0') {
      puVar6 = &local_58;
    }
    *(char *)puVar6 = '\0';
    if ((local_38[0] != '\0') && (uVar5 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar7);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = (double)FUN_01907950();
    if (((char)local_58 != '\0') && (uVar5 != 0)) {
      FUN_00d50b20();
    }
    uVar11 = 0;
    if ((local_80 == 0.0) && (!NAN(local_80))) {
      lVar10 = **(int64_t **)(uVar1 + 0x10);
      if (lVar10 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_130 = 1;
      local_138 = lVar10;
      local_80 = (double)FUN_018fde50(uVar11,0);
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    uVar11 = FUN_00d23340();
    puVar6 = &local_58;
    if (local_38[0] != '\0') {
      puVar6 = (uint64_t *)local_38;
    }
    local_58 = CONCAT71(local_58._1_7_,local_38[0]);
    *(char *)puVar6 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      uVar11 = FUN_00d50b20();
    }
    if (((char)local_58 == '\0') && (local_40 != 0)) {
      uVar11 = FUN_00d50b00();
    }
    local_108 = local_40;
    local_100 = 1;
    local_98 = (double)FUN_018fde50(uVar11,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    local_40 = uVar4;
    FUN_00e7b970();
    local_f8 = local_40;
    FUN_00c8e690();
    uVar5 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_48 = uVar5;
    FUN_00c92170();
    FUN_00c92160();
    pdVar8 = *(double **)(uVar5 + 0x10);
    *pdVar8 = local_90;
    iVar9 = *(int *)(uVar1 + 0xc);
    if (1 < iVar9) {
      local_98 = local_98 - local_80;
      lVar10 = 1;
      do {
        pVar7 = (void*)pdVar8;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_019079b0();
        FUN_00e7b970();
        uVar5 = local_40;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = FUN_019079b0();
        FUN_00e7b970();
        local_60 = local_40;
        local_40 = uVar5;
        FUN_00e7b820();
        local_70 = CONCAT44(local_70._4_4_,2);
        FUN_00e7c3c0();
        local_58 = local_40;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_019079b0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_70 = FUN_019079b0();
        local_40 = uVar5;
        FUN_00e7b970();
        local_60 = local_40;
        local_88 = (double)FUN_00e7c860();
        local_d0 = (double)FUN_00e7c860();
        dVar12 = (double)FUN_00e7c860();
        pdVar8 = *(double **)(local_48 + 0x10);
        pdVar8[lVar10] =
             (g_023b4df8 / ((local_88 / local_d0) * local_98 + local_80)) * dVar12 +
             pdVar8[lVar10 + -1];
        lVar10 = lVar10 + 1;
        iVar9 = *(int *)(uVar1 + 0xc);
        uVar5 = local_48;
      } while (lVar10 < iVar9);
    }
    local_88 = *(double *)((int64_t)*(int *)(uVar5 + 0x18) + -8 + (int64_t)pdVar8);
    if (local_a8 == 0) {
      local_60 = CONCAT44(local_60._4_4_,0xffffffff);
      FUN_00e7bdb0();
      FUN_00d23340();
      uVar5 = local_40;
      local_70 = CONCAT71(local_70._1_7_,local_38[0]);
      puVar6 = &local_70;
      if (local_38[0] != '\0') {
        puVar6 = (uint64_t *)local_38;
      }
      *(void*)puVar6 = 0;
      if ((local_38[0] != '\0') && (uVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_70 == '\0') {
        if (uVar5 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = local_70 & 0xffffffffffffff00;
      }
      local_c0 = 1;
      local_c8 = uVar5;
      FUN_01900ec0(0,&local_c8);
      uVar4 = local_58;
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      local_f0 = uVar4;
      local_e8 = 1;
      puVar6 = &local_60;
      FUN_01902aa0(local_88 - local_78,&local_f0);
      if (uVar4 != 0) {
        FUN_00d50b20();
      }
      if (uVar5 != 0) {
        FUN_00d50b20();
      }
      if (1 < *(int *)(uVar1 + 0xc)) {
        lVar10 = 1;
        do {
          pvVar2 = _pthread_getspecific((void*)puVar6);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01907cc0(*(void*)(*(int64_t *)(local_48 + 0x10) + lVar10 * 8));
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(uVar1 + 0xc));
      }
    }
    else if (1 < iVar9) {
      local_78 = (local_78 - local_90) / (local_88 - local_90);
      lVar10 = 2;
      while( true ) {
        pdVar8[lVar10 + -1] = (pdVar8[lVar10 + -1] - local_90) * local_78 + local_90;
        pvVar2 = _pthread_getspecific((void*)pdVar8);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01907cc0(*(void*)(*(int64_t *)(local_48 + 0x10) + -8 + lVar10 * 8));
        if (*(int *)(uVar1 + 0xc) <= lVar10) break;
        pdVar8 = *(double **)(local_48 + 0x10);
        lVar10 = lVar10 + 1;
      }
    }
    if ((char)local_a4 != '\0') {
      lVar10 = **(int64_t **)(uVar1 + 0x10);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      local_120 = 1;
      local_128 = lVar10;
      FUN_01900ad0(0,&local_128);
      uVar5 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      if (uVar5 != 0) {
        lVar10 = **(int64_t **)(uVar1 + 0x10);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        local_110 = 1;
        local_118 = lVar10;
        uVar11 = FUN_01900ad0(0,&local_118);
        uVar5 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar11 = FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = uVar5;
        local_38[0] = '\0';
        FUN_00d23370(uVar11,0);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      uVar5 = local_40;
      local_60 = CONCAT71(local_60._1_7_,local_38[0]);
      puVar6 = (uint64_t *)local_38;
      if (local_38[0] == '\0') {
        puVar6 = &local_60;
      }
      *(void*)puVar6 = 0;
      if ((local_38[0] != '\0') && (uVar5 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 == '\0') && (uVar5 != 0)) {
        FUN_00d50b00();
      }
      local_e0 = uVar5;
      local_d8 = 1;
      FUN_01900ec0(0,&local_e0);
      uVar4 = local_58;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (uVar5 != 0) {
        FUN_00d50b20();
      }
      if (uVar4 != 0) {
        FUN_00d23340();
        uVar5 = local_40;
        puVar6 = (uint64_t *)local_38;
        if (local_38[0] == '\0') {
          puVar6 = &local_60;
        }
        local_60 = CONCAT71(local_60._1_7_,local_38[0]);
        *(void*)puVar6 = 0;
        if ((local_38[0] != '\0') && (uVar5 != 0)) {
          FUN_00d50b20();
        }
        if ((char)local_60 == '\0') {
          if (uVar5 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = local_60 & 0xffffffffffffff00;
        }
        local_b0 = 1;
        local_b8 = uVar5;
        FUN_01900ec0(0,&local_b8);
        uVar4 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = uVar4;
        local_38[0] = '\0';
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (uVar4 != 0) {
          FUN_00d50b20();
        }
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
      }
      local_38[0] = '\0';
      local_40 = uVar1;
      FUN_01905f40();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

