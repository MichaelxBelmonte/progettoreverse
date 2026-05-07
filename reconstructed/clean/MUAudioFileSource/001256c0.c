// Function: FUN_001256c0
// Address: 001256c0
// Size: 3844 bytes
// Class: MUAudioFileSource

void FUN_001256c0(double param_1,double param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void*puVar8;
  uint64_t uVar9;
  void*puVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  void* in_ECX;
  void* pVar13;
  int64_t *in_RDX;
  int64_t *plVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint64_t local_e8;
  char local_e0;
  int64_t local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38 [8];
  
  uVar16 = SUB84(param_1,0);
  if (*in_RDX == 0) {
    return;
  }
  local_a8 = param_2;
  local_a0 = param_1;
  if ((char)in_ECX != '\0') {
    uVar16 = FUN_00721410();
  }
  FUN_013133d0(uVar16,0);
  plVar11 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_016cbba0();
  local_80 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015056c0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015127c0();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313b00();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_60 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  plVar14 = local_40;
  local_d8._0_1_ = local_38[0];
  plVar12 = &local_d8;
  plVar6 = (int64_t *)local_38;
  if (local_38[0] == '\0') {
    plVar6 = plVar12;
  }
  *(void*)plVar6 = 0;
  if ((local_38[0] != '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar13 = (void*)plVar12;
  local_88 = plVar14;
  if (((char)local_d8 == '\0') && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar13);
  plVar12 = local_60;
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar12 = local_60, lVar7 != 0)) {
    plVar12 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  pVar13 = *(int *)(plVar12[9] + 0x18) + 7;
  if (pVar13 < 0xf) {
    FUN_00d23310();
    plVar12 = local_40;
    plVar14 = &local_78;
    if (local_38[0] != '\0') {
      plVar14 = (int64_t *)local_38;
    }
    local_78 = CONCAT71(local_78._1_7_,local_38[0]);
    *(void*)plVar14 = 0;
    if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) goto LAB_001263d8;
  }
  if (NAN(local_a0)) {
    local_48 = plVar11;
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar13 = 0;
    FUN_01252670(0,0,&local_78,0);
    plVar11 = local_40;
    local_58[0] = local_38[0];
    plVar12 = (int64_t *)local_58;
    if (local_38[0] != '\0') {
      plVar12 = (int64_t *)local_38;
    }
    *(void*)plVar12 = 0;
    if ((local_38[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012527b0(&local_98,0,0,0);
    plVar12 = local_40;
    plVar11 = &local_50;
    plVar14 = (int64_t *)local_38;
    if (local_38[0] == '\0') {
      plVar14 = plVar11;
    }
    local_50._0_1_ = local_38[0];
    *(void*)plVar14 = 0;
    if ((local_38[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = (void*)plVar11;
    if (((char)local_50 != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar13);
    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pVar13 = (void*)local_80;
    }
    local_a0 = (double)FUN_016c98e0();
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = (double)FUN_016c98e0();
    local_a8 = local_a8 - local_a0;
    plVar11 = local_48;
  }
  local_98 = FUN_00e7bcc0();
  local_70 = '\0';
  local_78 = 0;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &g_02572358;
  *puVar8 = &g_02572358;
  (*g_02572370)();
  dVar20 = local_a0 + local_a8;
  local_68 = puVar8;
  if (dVar20 <= local_a0) {
LAB_001263bb:
    FUN_00d50b20();
  }
  else {
    while( true ) {
      local_48 = plVar11;
      pvVar5 = _pthread_getspecific((void*)puVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_00e7bdb0();
      puVar10 = (void*)FUN_00e7bdb0();
      cVar2 = FUN_01252960(puVar10,uVar9,&local_78,&local_e8);
      if (cVar2 == '\0') break;
      plVar11 = local_48;
      if (((local_78 != 0) && (local_e8 >> 0x20 != 0)) && (local_d8._1_7_ >> 0x18 != 0)) {
        pvVar5 = _pthread_getspecific((void*)puVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_b0 = (double)FUN_016c98e0();
        pvVar5 = _pthread_getspecific((void*)puVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (int64_t *)CONCAT71(local_d8._1_7_,(char)local_d8);
        uVar16 = FUN_00e7b970();
        dVar19 = (double)FUN_016c98e0(uVar16,0);
        plVar11 = local_48;
        if ((local_b0 < dVar20) && (local_a0 < dVar19)) {
          dVar21 = local_a0;
          if (local_a0 <= local_b0) {
            dVar21 = local_b0;
          }
          dVar22 = dVar20;
          if (dVar19 <= dVar20) {
            dVar22 = dVar19;
          }
          if (g_02390448 < dVar22 - dVar21) {
            iVar3 = FUN_01715480();
            fVar17 = (float)iVar3 * g_023908e0 + g_02393948;
            uVar15 = 0;
            lVar7 = 0;
            do {
              puVar10 = (void*)(uVar15 & 0xffffffff);
              uVar4 = (uint)(*(uint64_t *)(local_78 + 0x18) >> ((byte)puVar10 & 0x3f)) & 0xf;
              if (uVar4 != 0xf) {
                fVar18 = (float)(int)lVar7 * g_023908e0 + fVar17;
                fVar1 = fVar18 + g_0239394c;
                if (uVar4 < 7) {
                  fVar1 = fVar18;
                }
                local_b0 = (double)CONCAT44(local_b0._4_4_,fVar1);
                plVar11 = (int64_t *)FUN_00e8fc40();
                FUN_0006e3a0();
                (**(code **)(*plVar11 + 0x18))();
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012642b0(SUB84(dVar21,0));
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar16 = SUB84(dVar22 - dVar21,0);
                FUN_01259540(uVar16);
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01264390(uVar16);
                pvVar5 = _pthread_getspecific((void*)puVar10);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012595a0(local_b0._0_4_);
                local_38[0] = '\0';
                local_40 = plVar11;
                FUN_00d21140();
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              lVar7 = lVar7 + 1;
              uVar15 = uVar15 + 4;
              plVar11 = local_48;
            } while (lVar7 != 0xc);
          }
        }
      }
    }
    pvVar5 = _pthread_getspecific((void*)puVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar11 = local_48;
    FUN_012e6c30();
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar13 = 0x25ee570;
    *puVar8 = &g_025ee570;
    puVar8[6] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *(void*)((int64_t)puVar8 + 0x1c) = 0;
    *(void*)((int64_t)puVar8 + 0x24) = 0;
    (*g_025ee588)();
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    local_d0 = local_40;
    local_c8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_c8 = '\x01';
    FUN_01531f40();
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01532bc0(SUB84(local_a0,0),local_a8);
    (**(code **)(*(int64_t *)*in_RDX + 0x390))();
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_b8 = '\x01';
    FUN_01532bd0();
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = 1;
    FUN_01532c20(1,1,0,0);
    pvVar5 = _pthread_getspecific(pVar13);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    if (local_68 != (void*)0x0) goto LAB_001263bb;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_001263d8:
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

