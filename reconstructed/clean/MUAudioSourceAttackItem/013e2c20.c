// Function: FUN_013e2c20
// Address: 013e2c20
// Size: 8031 bytes
// Class: MUAudioSourceAttackItem

void FUN_013e2c20(int64_t *param_1,char param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  bool bVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  char cVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  void* pVar35;
  void *pvVar36;
  int64_t lVar37;
  int64_t lVar38;
  int64_t lVar39;
  uint64_t uVar40;
  void*puVar41;
  int64_t **pplVar42;
  void*puVar43;
  int64_t *plVar44;
  int64_t *plVar45;
  uint64_t uVar46;
  int64_t *plVar47;
  uint uVar48;
  uint64_t uVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  int64_t this_ptr;
  uint64_t uVar52;
  int64_t lVar53;
  int64_t lVar54;
  uint64_t uVar55;
  uint32_t uVar56;
  float fVar57;
  float fVar58;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  void*local_c0;
  uint8_t local_b8 [16];
  int local_a8;
  float local_a4;
  int64_t *local_a0;
  int64_t *local_98;
  int64_t *local_90;
  int64_t *local_88;
  float local_7c;
  int64_t *local_78;
  float local_6c;
  void*local_68;
  int64_t *local_60;
  float local_54;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  
  local_7c = SUB84(param_1,0);
  pvVar36 = _pthread_getspecific((void*)local_7c);
  if (pvVar36 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar28 = FUN_01538fa0();
  if (iVar28 == 0) {
    return;
  }
  local_88 = *(int64_t **)(this_ptr + 0x60);
  if (local_88 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b00();
  pvVar36 = _pthread_getspecific((void*)param_1);
  if ((pvVar36 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
    param_1 = local_88;
  }
  FUN_01320d00();
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_013e4b64;
    local_a0 = local_48;
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_a0 = local_48;
    if (local_48 == (int64_t *)0x0) goto LAB_013e4b64;
  }
  FUN_013de560();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      local_50 = local_48;
      FUN_00d50b00();
      goto LAB_013e2d61;
    }
  }
  else {
    local_50 = local_48;
    if (local_48 != (int64_t *)0x0) {
LAB_013e2d61:
      pvVar36 = _pthread_getspecific((void*)param_1);
      if ((pvVar36 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
        param_1 = local_50;
      }
      cVar27 = FUN_014bc070();
      if (cVar27 == '\0') {
        pvVar36 = _pthread_getspecific((void*)param_1);
        plVar47 = local_50;
        if ((pvVar36 != (void *)0x0) && (lVar37 = FUN_00e8b990(), plVar47 = local_50, lVar37 != 0))
        {
          param_1 = local_50;
          plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
        }
        cVar27 = (**(code **)(*plVar47 + 0x3c0))();
        if (cVar27 == '\0') {
          pvVar36 = _pthread_getspecific((void*)param_1);
          plVar47 = local_50;
          if ((pvVar36 != (void *)0x0) && (lVar37 = FUN_00e8b990(), plVar47 = local_50, lVar37 != 0)
             ) {
            param_1 = local_50;
            plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
          }
          cVar27 = (**(code **)(*plVar47 + 0x3c8))();
          if (cVar27 == '\0') {
            pvVar36 = _pthread_getspecific((void*)param_1);
            if (pvVar36 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar56 = FUN_01539000();
            local_68 = (void*)CONCAT44(local_68._4_4_,uVar56);
            pvVar36 = _pthread_getspecific((void*)param_1);
            if (pvVar36 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar56 = FUN_01539010();
            local_60 = (int64_t *)CONCAT44(local_60._4_4_,uVar56);
            pvVar36 = _pthread_getspecific((void*)param_1);
            if (pvVar36 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar29 = FUN_01539080();
            pvVar36 = _pthread_getspecific((void*)param_1);
            if (pvVar36 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar30 = FUN_01539090();
            if (*(int64_t *)(this_ptr + 0x50) == 0) {
              local_c0 = (void*)0x0;
              local_78 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              FUN_00d50b20();
              FUN_013e5500();
              local_78 = local_48;
              if (local_48 == (int64_t *)0x0) {
                local_78 = (int64_t *)0x0;
                local_c0 = (void*)0x0;
              }
              else {
                local_c0 = (void*)CONCAT71((int7)((uint64_t)local_48 >> 8),1);
                if (local_40[0] == '\0') {
                  FUN_00d50b00();
                }
              }
            }
            if ((local_78 != (int64_t *)0x0) || (param_2 != '\0')) {
              if ((local_78 == (int64_t *)0x0) && (local_7c != 0.0)) goto LAB_013e4b4f;
              pvVar36 = _pthread_getspecific((void*)param_1);
              plVar47 = local_a0;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar37 = FUN_00e8b990(), plVar47 = local_a0, lVar37 != 0)) {
                param_1 = local_a0;
                plVar47 = (int64_t *)local_a0[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
              }
              dVar5 = (double)(**(code **)(*plVar47 + 0x370))();
              pvVar36 = _pthread_getspecific((void*)param_1);
              plVar47 = local_50;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar37 = FUN_00e8b990(), plVar47 = local_50, lVar37 != 0)) {
                param_1 = local_50;
                plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar37 + 0x154) & 1) + 4];
              }
              lVar37 = (**(code **)(*plVar47 + 0x380))();
              pvVar36 = _pthread_getspecific((void*)param_1);
              plVar47 = local_50;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar38 = FUN_00e8b990(), plVar47 = local_50, lVar38 != 0)) {
                param_1 = local_50;
                plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar38 + 0x154) & 1) + 4];
              }
              lVar38 = (**(code **)(*plVar47 + 0x388))();
              pvVar36 = _pthread_getspecific((void*)param_1);
              plVar47 = local_50;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar39 = FUN_00e8b990(), plVar47 = local_50, lVar39 != 0)) {
                param_1 = local_50;
                plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
              }
              iVar31 = (**(code **)(*plVar47 + 0x390))();
              pvVar36 = _pthread_getspecific((void*)param_1);
              plVar47 = local_50;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar39 = FUN_00e8b990(), plVar47 = local_50, lVar39 != 0)) {
                param_1 = local_50;
                plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
              }
              pVar35 = (void*)param_1;
              fVar57 = (float)(**(code **)(*plVar47 + 0x3e0))();
              fVar57 = (float)_exp2f(fVar57 * g_023941f4);
              fVar57 = (float)FUN_00e7d850(SUB84(dVar5 / (double)(fVar57 * g_023941f8),0));
              pvVar36 = _pthread_getspecific(pVar35);
              if (pvVar36 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar32 = FUN_01326de0();
              if (iVar32 == 2) {
                fVar57 = (float)FUN_00e7d850(SUB84(dVar5 / g_0240d798,0));
              }
              if (iVar28 != 2) {
                if (iVar29 == 1) {
                  iVar31 = FUN_00e7d850(SUB84((double)(local_68._0_4_ / g_02393944) * dVar5,0));
                }
                else {
                  iVar31 = FUN_00e7d780(local_68._0_4_ * (float)(int)fVar57);
                }
              }
              if (iVar30 == 1) {
                iVar28 = FUN_00e7d850(SUB84((double)(local_60._0_4_ / g_02393944) * dVar5,0));
              }
              else {
                iVar28 = FUN_00e7d780(local_60._0_4_ * (float)(int)fVar57);
              }
              iVar28 = iVar28 / 2;
              local_a4 = (float)(iVar31 - iVar28);
              if ((int)local_a4 < 0) {
                local_a4 = 0.0;
              }
              pvVar36 = _pthread_getspecific((void*)local_a4);
              plVar47 = local_50;
              local_54 = fVar57;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar39 = FUN_00e8b990(), plVar47 = local_50, lVar39 != 0)) {
                plVar47 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
              }
              lVar39 = (**(code **)(*plVar47 + 0x388))();
              uVar48 = iVar28 + iVar31;
              plVar47 = (int64_t *)(int64_t)(int)uVar48;
              uVar40 = (uint64_t)uVar48;
              uVar34 = uVar48;
              if (lVar39 < (int64_t)plVar47) {
                pvVar36 = _pthread_getspecific(uVar48);
                plVar44 = local_50;
                if ((pvVar36 != (void *)0x0) &&
                   (lVar39 = FUN_00e8b990(), plVar44 = local_50, lVar39 != 0)) {
                  plVar47 = local_50;
                  plVar44 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
                }
                uVar34 = (uint)plVar47;
                uVar40 = (**(code **)(*plVar44 + 0x388))();
              }
              local_b8._0_8_ = uVar40;
              FUN_00c8e690();
              plVar47 = local_48;
              if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
                  (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              local_90 = plVar47;
              uVar40 = plVar47[2];
              pvVar36 = _pthread_getspecific(uVar34);
              plVar47 = local_a0;
              if ((pvVar36 != (void *)0x0) &&
                 (lVar39 = FUN_00e8b990(), plVar47 = local_a0, lVar39 != 0)) {
                plVar47 = (int64_t *)local_a0[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar47 + 0x388))((int)g_0238fee8,(int)g_0238fee8,1,lVar37);
              puVar41 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar41 = &g_025f0d98;
              puVar41[2] = 0;
              puVar41[3] = 0;
              puVar41[4] = 0;
              puVar41[5] = 0;
              puVar41[6] = 0;
              puVar41[7] = 0;
              (*g_025f0db0)();
              local_d8 = local_90;
              local_d0 = '\0';
              FUN_00c8e4f0();
              local_c8 = local_48;
              if (local_40[0] == '\0') {
                if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                   (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40[0] = '\0';
              }
              if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar46 = local_b8._0_8_;
              uVar34 = local_b8._0_4_;
              FUN_015c1480((float)(int)local_54 + (float)(int)local_54,local_b8._0_8_ & 0xffffffff);
              uVar55 = uVar46 & 0xffffffff;
              if (0 < (int)uVar34) {
                uVar51 = local_c8[2];
                if (((uint)local_b8._0_4_ < 8) ||
                   ((uVar40 < uVar51 + uVar55 * 4 && (uVar51 < uVar40 + uVar55 * 4)))) {
                  uVar50 = 0;
                }
                else {
                  uVar50 = (uint64_t)(uVar34 & 0xfffffff8);
                  uVar52 = (uVar50 - 8 >> 3) + 1;
                  if (uVar50 - 8 == 0) {
                    lVar39 = 0;
                  }
                  else {
                    lVar53 = -(uVar52 & 0xfffffffffffffffe);
                    lVar39 = 0;
                    do {
                      pfVar1 = (float *)(uVar51 + lVar39 * 4);
                      fVar57 = pfVar1[1];
                      fVar58 = pfVar1[2];
                      fVar6 = pfVar1[3];
                      pfVar2 = (float *)(uVar51 + 0x10 + lVar39 * 4);
                      fVar7 = *pfVar2;
                      fVar8 = pfVar2[1];
                      fVar9 = pfVar2[2];
                      fVar10 = pfVar2[3];
                      pfVar2 = (float *)(uVar40 + lVar39 * 4);
                      fVar11 = pfVar2[1];
                      fVar12 = pfVar2[2];
                      fVar13 = pfVar2[3];
                      pfVar3 = (float *)(uVar40 + 0x10 + lVar39 * 4);
                      fVar14 = *pfVar3;
                      fVar15 = pfVar3[1];
                      fVar16 = pfVar3[2];
                      fVar17 = pfVar3[3];
                      pfVar3 = (float *)(uVar40 + 0x20 + lVar39 * 4);
                      fVar18 = *pfVar3;
                      fVar19 = pfVar3[1];
                      fVar20 = pfVar3[2];
                      fVar21 = pfVar3[3];
                      pfVar3 = (float *)(uVar40 + 0x30 + lVar39 * 4);
                      fVar22 = *pfVar3;
                      fVar23 = pfVar3[1];
                      fVar24 = pfVar3[2];
                      fVar25 = pfVar3[3];
                      pfVar3 = (float *)(uVar40 + lVar39 * 4);
                      *pfVar3 = *pfVar2 - *pfVar1;
                      pfVar3[1] = fVar11 - fVar57;
                      pfVar3[2] = fVar12 - fVar58;
                      pfVar3[3] = fVar13 - fVar6;
                      pfVar1 = (float *)(uVar40 + 0x10 + lVar39 * 4);
                      *pfVar1 = fVar14 - fVar7;
                      pfVar1[1] = fVar15 - fVar8;
                      pfVar1[2] = fVar16 - fVar9;
                      pfVar1[3] = fVar17 - fVar10;
                      pfVar1 = (float *)(uVar51 + 0x20 + lVar39 * 4);
                      fVar57 = pfVar1[1];
                      fVar58 = pfVar1[2];
                      fVar6 = pfVar1[3];
                      pfVar2 = (float *)(uVar51 + 0x30 + lVar39 * 4);
                      fVar7 = *pfVar2;
                      fVar8 = pfVar2[1];
                      fVar9 = pfVar2[2];
                      fVar10 = pfVar2[3];
                      pfVar2 = (float *)(uVar40 + 0x20 + lVar39 * 4);
                      *pfVar2 = fVar18 - *pfVar1;
                      pfVar2[1] = fVar19 - fVar57;
                      pfVar2[2] = fVar20 - fVar58;
                      pfVar2[3] = fVar21 - fVar6;
                      pfVar1 = (float *)(uVar40 + 0x30 + lVar39 * 4);
                      *pfVar1 = fVar22 - fVar7;
                      pfVar1[1] = fVar23 - fVar8;
                      pfVar1[2] = fVar24 - fVar9;
                      pfVar1[3] = fVar25 - fVar10;
                      lVar39 = lVar39 + 0x10;
                      lVar53 = lVar53 + 2;
                    } while (lVar53 != 0);
                  }
                  if ((uVar52 & 1) != 0) {
                    pfVar1 = (float *)(uVar51 + lVar39 * 4);
                    fVar57 = pfVar1[1];
                    fVar58 = pfVar1[2];
                    fVar6 = pfVar1[3];
                    pfVar2 = (float *)(uVar51 + 0x10 + lVar39 * 4);
                    fVar7 = *pfVar2;
                    fVar8 = pfVar2[1];
                    fVar9 = pfVar2[2];
                    fVar10 = pfVar2[3];
                    pfVar2 = (float *)(uVar40 + lVar39 * 4);
                    fVar11 = pfVar2[1];
                    fVar12 = pfVar2[2];
                    fVar13 = pfVar2[3];
                    pfVar3 = (float *)(uVar40 + 0x10 + lVar39 * 4);
                    fVar14 = *pfVar3;
                    fVar15 = pfVar3[1];
                    fVar16 = pfVar3[2];
                    fVar17 = pfVar3[3];
                    pfVar3 = (float *)(uVar40 + lVar39 * 4);
                    *pfVar3 = *pfVar2 - *pfVar1;
                    pfVar3[1] = fVar11 - fVar57;
                    pfVar3[2] = fVar12 - fVar58;
                    pfVar3[3] = fVar13 - fVar6;
                    pfVar1 = (float *)(uVar40 + 0x10 + lVar39 * 4);
                    *pfVar1 = fVar14 - fVar7;
                    pfVar1[1] = fVar15 - fVar8;
                    pfVar1[2] = fVar16 - fVar9;
                    pfVar1[3] = fVar17 - fVar10;
                  }
                  if (uVar50 == uVar55) goto LAB_013e36b0;
                }
                uVar49 = ~uVar50;
                for (uVar52 = uVar46 & 3; uVar52 != 0; uVar52 = uVar52 - 1) {
                  *(float *)(uVar40 + uVar50 * 4) =
                       *(float *)(uVar40 + uVar50 * 4) - *(float *)(uVar51 + uVar50 * 4);
                  uVar50 = uVar50 + 1;
                }
                if (2 < uVar49 + uVar55) {
                  do {
                    *(float *)(uVar40 + uVar50 * 4) =
                         *(float *)(uVar40 + uVar50 * 4) - *(float *)(uVar51 + uVar50 * 4);
                    *(float *)(uVar40 + 4 + uVar50 * 4) =
                         *(float *)(uVar40 + 4 + uVar50 * 4) - *(float *)(uVar51 + 4 + uVar50 * 4);
                    *(float *)(uVar40 + 8 + uVar50 * 4) =
                         *(float *)(uVar40 + 8 + uVar50 * 4) - *(float *)(uVar51 + 8 + uVar50 * 4);
                    *(float *)(uVar40 + 0xc + uVar50 * 4) =
                         *(float *)(uVar40 + 0xc + uVar50 * 4) -
                         *(float *)(uVar51 + 0xc + uVar50 * 4);
                    uVar50 = uVar50 + 4;
                  } while (uVar55 != uVar50);
                }
              }
LAB_013e36b0:
              local_d8 = local_90;
              local_d0 = '\0';
              FUN_00c8e4f0();
              plVar47 = local_48;
              if (local_40[0] == '\0') {
                if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
                   (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40[0] = '\0';
              }
              if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00c92170();
              FUN_00c92160();
              uVar26 = g_02390140;
              lVar39 = plVar47[2];
              if (local_b8._0_4_ < 1) {
                fVar57 = 0.0;
              }
              else {
                uVar55 = (uint64_t)(uint)local_a4;
                if (local_b8._0_4_ == 1) {
                  local_6c = 0.0;
                  uVar51 = 0;
                }
                else {
                  local_6c = 0.0;
                  uVar51 = 0;
                  do {
                    fVar58 = (float)(*(uint *)(uVar40 + uVar51 * 4) & uVar26);
                    *(float *)(lVar39 + uVar51 * 4) = fVar58;
                    fVar57 = local_6c;
                    if ((uVar55 <= uVar51) && (fVar57 = fVar58, fVar58 <= local_6c)) {
                      fVar57 = local_6c;
                    }
                    local_6c = fVar57;
                    fVar58 = (float)(*(uint *)(uVar40 + 4 + uVar51 * 4) & uVar26);
                    *(float *)(lVar39 + 4 + uVar51 * 4) = fVar58;
                    fVar57 = local_6c;
                    if ((uVar55 <= uVar51 + 1) && (fVar57 = fVar58, fVar58 <= local_6c)) {
                      fVar57 = local_6c;
                    }
                    local_6c = fVar57;
                    uVar51 = uVar51 + 2;
                  } while ((uVar34 & 0xfffffffe) != uVar51);
                }
                fVar57 = local_6c;
                if ((uVar46 & 1) != 0) {
                  fVar58 = (float)(*(uint *)(uVar40 + uVar51 * 4) & g_02390140);
                  *(float *)(lVar39 + uVar51 * 4) = fVar58;
                  if ((uVar55 <= uVar51) && (fVar57 = fVar58, fVar58 <= local_6c)) {
                    fVar57 = local_6c;
                  }
                }
              }
              local_6c = fVar57;
              FUN_015b4130(*(float *)(&g_0240d7a0 + (uint64_t)(local_7c != 0.0) * 4) * local_6c,
                           local_b8._0_8_);
              local_60 = local_48;
              if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
                  (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_6c = local_6c * g_0239011c;
              plVar44 = local_60;
              while ((*(int *)((int64_t)plVar44 + 0xc) != 0 &&
                     (iVar29 = FUN_00e7d850((int)*(void*)(*(int64_t *)plVar44[2] + 0x10)),
                     plVar44 = local_60, iVar29 < (int)local_a4))) {
                FUN_00d23620();
              }
              uVar56 = FUN_013e55f0();
              local_98 = local_48;
              if (local_40[0] == '\0') {
                if (((local_48 != (int64_t *)0x0) && (uVar56 = FUN_00d50b00(), local_40[0] != '\0')
                    ) && (local_48 != (int64_t *)0x0)) {
                  uVar56 = FUN_00d50b20();
                }
              }
              else {
                local_40[0] = '\0';
              }
              FUN_00d242c0(uVar56,0);
              if (local_7c != 0.0) {
                iVar29 = *(int *)((int64_t)local_98 + 0xc);
                iVar30 = 10;
                if (iVar29 < 10) {
                  iVar30 = iVar29;
                }
                local_6c = (float)*(double *)
                                   (*(int64_t *)(local_98[2] + (int64_t)(iVar30 / 2) * 8) + 0x18)
                           * g_02394288;
                if (iVar29 != 0) {
                  local_68 = (void*)(double)local_6c;
                  do {
                    FUN_00d23340();
                    plVar44 = local_48;
                    local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_40[0]);
                    pplVar42 = (int64_t **)local_40;
                    if (local_40[0] == '\0') {
                      pplVar42 = &local_d8;
                    }
                    *(void*)pplVar42 = 0;
                    if ((local_40[0] != '\0') && (plVar44 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_d8 == '\0') && (plVar44 != (int64_t *)0x0)) {
                      FUN_00d50b00();
                    }
                    if ((double)local_68 <= (double)plVar44[3]) {
                      FUN_00d50b20();
                      break;
                    }
                    local_40[0] = '\0';
                    local_48 = plVar44;
                    FUN_00d23f50();
                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_40[0] = '\0';
                    local_48 = plVar44;
                    FUN_00d23f50();
                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  } while (*(int *)((int64_t)local_98 + 0xc) != 0);
                }
              }
              iVar29 = FUN_00e7d850(SUB84((double)(int)local_54 * g_023908d0,0));
              puVar43 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar43 = &g_02572358;
              (*g_02572370)();
              local_68 = puVar43;
              if (0 < *(int *)((int64_t)local_98 + 0xc)) {
                lVar39 = 0;
                do {
                  plVar44 = *(int64_t **)(local_98[2] + lVar39 * 8);
                  if (plVar44 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_40[0] = '\0';
                  local_48 = plVar44;
                  cVar27 = FUN_00d23d70();
                  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar27 == '\0') {
                    fVar57 = (float)FUN_00e7d850((int)plVar44[2]);
                    if ((-1 < (int)fVar57) && ((int)fVar57 < (int)local_b8._0_4_)) {
                      fVar58 = *(float *)(local_90[2] + (uint64_t)(uint)fVar57 * 4);
                      local_40[0] = '\0';
                      local_54 = fVar57;
                      local_48 = plVar44;
                      iVar30 = FUN_00d237a0();
                      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (0 < iVar30) {
                        local_a8 = (int)local_54 - iVar29;
                        lVar53 = (uint64_t)(iVar30 - 1) + 1;
                        if (0.0 <= fVar58) {
                          if (fVar58 < 0.0) {
                            do {
                              plVar45 = *(int64_t **)(local_60[2] + -8 + lVar53 * 8);
                              if (plVar45 != (int64_t *)0x0) {
                                FUN_00d50b00();
                              }
                              local_40[0] = '\0';
                              local_48 = plVar45;
                              cVar27 = FUN_00d23d70();
                              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (cVar27 == '\0') {
                                iVar32 = 0xf;
                                if (((double)plVar45[3] < (double)plVar44[3]) &&
                                   (uVar34 = FUN_00e7d850((int)plVar45[2]), local_a8 <= (int)uVar34)
                                   ) {
                                  if ((-1 < (int)uVar34) && ((int)uVar34 < (int)local_b8._0_4_)) {
                                    if (!NAN(*(float *)(local_90[2] + (uint64_t)uVar34 * 4)))
                                    goto LAB_013e3ee1;
                                    local_40[0] = '\0';
                                    local_48 = plVar45;
                                    FUN_00d21140();
                                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                      FUN_00d50b20();
                                    }
                                  }
                                  iVar32 = 0;
                                }
LAB_013e3ee1:
                                FUN_00d50b20();
                                if ((iVar32 != 0x11) && (iVar32 != 0)) break;
                              }
                              else {
                                iVar32 = 0x11;
                                if (plVar45 != (int64_t *)0x0) goto LAB_013e3ee1;
                              }
                              lVar54 = lVar53 + -1;
                              bVar4 = 0 < lVar53;
                              lVar53 = lVar54;
                            } while (lVar54 != 0 && bVar4);
                          }
                          else {
                            do {
                              plVar45 = *(int64_t **)(local_60[2] + -8 + lVar53 * 8);
                              if (plVar45 != (int64_t *)0x0) {
                                FUN_00d50b00();
                              }
                              local_40[0] = '\0';
                              local_48 = plVar45;
                              cVar27 = FUN_00d23d70();
                              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (cVar27 == '\0') {
                                iVar32 = 0xf;
                                if (((double)plVar45[3] < (double)plVar44[3]) &&
                                   (uVar34 = FUN_00e7d850((int)plVar45[2]), local_a8 <= (int)uVar34)
                                   ) {
                                  if ((-1 < (int)uVar34) && ((int)uVar34 < (int)local_b8._0_4_)) {
                                    pfVar1 = (float *)(local_90[2] + (uint64_t)uVar34 * 4);
                                    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) goto LAB_013e3fd3;
                                    local_40[0] = '\0';
                                    local_48 = plVar45;
                                    FUN_00d21140();
                                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                      FUN_00d50b20();
                                    }
                                  }
                                  iVar32 = 0;
                                }
LAB_013e3fd3:
                                FUN_00d50b20();
                                if ((iVar32 != 0x11) && (iVar32 != 0)) break;
                              }
                              else {
                                iVar32 = 0x11;
                                if (plVar45 != (int64_t *)0x0) goto LAB_013e3fd3;
                              }
                              lVar54 = lVar53 + -1;
                              bVar4 = 0 < lVar53;
                              lVar53 = lVar54;
                            } while (lVar54 != 0 && bVar4);
                          }
                        }
                        else if (fVar58 < 0.0) {
                          do {
                            plVar45 = *(int64_t **)(local_60[2] + -8 + lVar53 * 8);
                            if (plVar45 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            local_40[0] = '\0';
                            local_48 = plVar45;
                            cVar27 = FUN_00d23d70();
                            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar27 == '\0') {
                              iVar32 = 0xf;
                              if (((double)plVar45[3] < (double)plVar44[3]) &&
                                 (uVar34 = FUN_00e7d850((int)plVar45[2]), local_a8 <= (int)uVar34))
                              {
                                if ((-1 < (int)uVar34) && ((int)uVar34 < (int)local_b8._0_4_)) {
                                  if (g_0239424c <=
                                      *(float *)(local_90[2] + (uint64_t)uVar34 * 4))
                                  goto LAB_013e3d06;
                                  local_40[0] = '\0';
                                  local_48 = plVar45;
                                  FUN_00d21140();
                                  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                }
                                iVar32 = 0;
                              }
LAB_013e3d06:
                              FUN_00d50b20();
                              if ((iVar32 != 0x11) && (iVar32 != 0)) break;
                            }
                            else {
                              iVar32 = 0x11;
                              if (plVar45 != (int64_t *)0x0) goto LAB_013e3d06;
                            }
                            lVar54 = lVar53 + -1;
                            bVar4 = 0 < lVar53;
                            lVar53 = lVar54;
                          } while (lVar54 != 0 && bVar4);
                        }
                        else {
                          do {
                            plVar45 = *(int64_t **)(local_60[2] + -8 + lVar53 * 8);
                            if (plVar45 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            local_40[0] = '\0';
                            local_48 = plVar45;
                            cVar27 = FUN_00d23d70();
                            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar27 == '\0') {
                              iVar32 = 0xf;
                              if (((double)plVar45[3] < (double)plVar44[3]) &&
                                 (iVar33 = FUN_00e7d850((int)plVar45[2]), local_a8 <= iVar33)) {
                                iVar32 = 0;
                                if ((-1 < iVar33) && (iVar33 < (int)local_b8._0_4_)) {
                                  local_40[0] = '\0';
                                  local_48 = plVar45;
                                  FUN_00d21140();
                                  if ((local_40[0] != '\0') &&
                                     (iVar32 = 0, local_48 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                }
                              }
LAB_013e3dab:
                              FUN_00d50b20();
                              if ((iVar32 != 0x11) && (iVar32 != 0)) break;
                            }
                            else {
                              iVar32 = 0x11;
                              if (plVar45 != (int64_t *)0x0) goto LAB_013e3dab;
                            }
                            lVar54 = lVar53 + -1;
                            bVar4 = 0 < lVar53;
                            lVar53 = lVar54;
                          } while (lVar54 != 0 && bVar4);
                        }
                      }
                      if (iVar30 + 1 < *(int *)((int64_t)local_60 + 0xc)) {
                        local_54 = (float)((int)local_54 + iVar29);
                        lVar53 = (int64_t)(iVar30 + 1);
                        if (0.0 <= fVar58) {
                          if (0.0 <= fVar58) {
                            do {
                              plVar45 = *(int64_t **)(local_60[2] + lVar53 * 8);
                              if (plVar45 != (int64_t *)0x0) {
                                FUN_00d50b00();
                              }
                              local_40[0] = '\0';
                              local_48 = plVar45;
                              cVar27 = FUN_00d23d70();
                              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (cVar27 == '\0') {
                                iVar30 = 0x12;
                                if (((double)plVar45[3] < (double)plVar44[3]) &&
                                   (uVar34 = FUN_00e7d850((int)plVar45[2]),
                                   (int)uVar34 <= (int)local_54)) {
                                  if ((-1 < (int)uVar34) && ((int)uVar34 < (int)local_b8._0_4_)) {
                                    pfVar1 = (float *)(local_90[2] + (uint64_t)uVar34 * 4);
                                    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) goto LAB_013e43f4;
                                    local_40[0] = '\0';
                                    local_48 = plVar45;
                                    FUN_00d21140();
                                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                      FUN_00d50b20();
                                    }
                                  }
                                  iVar30 = 0;
                                }
LAB_013e43f4:
                                FUN_00d50b20();
                                if ((iVar30 != 0x14) && (iVar30 != 0)) break;
                              }
                              else {
                                iVar30 = 0x14;
                                if (plVar45 != (int64_t *)0x0) goto LAB_013e43f4;
                              }
                              lVar53 = lVar53 + 1;
                            } while (lVar53 < *(int *)((int64_t)local_60 + 0xc));
                          }
                          else {
                            do {
                              plVar45 = *(int64_t **)(local_60[2] + lVar53 * 8);
                              if (plVar45 != (int64_t *)0x0) {
                                FUN_00d50b00();
                              }
                              local_40[0] = '\0';
                              local_48 = plVar45;
                              cVar27 = FUN_00d23d70();
                              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (cVar27 == '\0') {
                                iVar30 = 0x12;
                                if (((double)plVar45[3] < (double)plVar44[3]) &&
                                   (uVar34 = FUN_00e7d850((int)plVar45[2]),
                                   (int)uVar34 <= (int)local_54)) {
                                  if ((-1 < (int)uVar34) && ((int)uVar34 < (int)local_b8._0_4_)) {
                                    if (!NAN(*(float *)(local_90[2] + (uint64_t)uVar34 * 4)))
                                    goto LAB_013e42fb;
                                    local_40[0] = '\0';
                                    local_48 = plVar45;
                                    FUN_00d21140();
                                    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                      FUN_00d50b20();
                                    }
                                  }
                                  iVar30 = 0;
                                }
LAB_013e42fb:
                                FUN_00d50b20();
                                if ((iVar30 != 0x14) && (iVar30 != 0)) break;
                              }
                              else {
                                iVar30 = 0x14;
                                if (plVar45 != (int64_t *)0x0) goto LAB_013e42fb;
                              }
                              lVar53 = lVar53 + 1;
                            } while (lVar53 < *(int *)((int64_t)local_60 + 0xc));
                          }
                        }
                        else if (0.0 <= fVar58) {
                          do {
                            plVar45 = *(int64_t **)(local_60[2] + lVar53 * 8);
                            if (plVar45 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            local_40[0] = '\0';
                            local_48 = plVar45;
                            cVar27 = FUN_00d23d70();
                            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar27 == '\0') {
                              iVar30 = 0x12;
                              if (((double)plVar45[3] < (double)plVar44[3]) &&
                                 (iVar32 = FUN_00e7d850((int)plVar45[2]), iVar32 <= (int)local_54))
                              {
                                iVar30 = 0;
                                if ((-1 < iVar32) && (iVar32 < (int)local_b8._0_4_)) {
                                  local_40[0] = '\0';
                                  local_48 = plVar45;
                                  FUN_00d21140();
                                  if ((local_40[0] != '\0') &&
                                     (iVar30 = 0, local_48 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                }
                              }
LAB_013e41bd:
                              FUN_00d50b20();
                              if ((iVar30 != 0x14) && (iVar30 != 0)) break;
                            }
                            else {
                              iVar30 = 0x14;
                              if (plVar45 != (int64_t *)0x0) goto LAB_013e41bd;
                            }
                            lVar53 = lVar53 + 1;
                          } while (lVar53 < *(int *)((int64_t)local_60 + 0xc));
                        }
                        else {
                          do {
                            plVar45 = *(int64_t **)(local_60[2] + lVar53 * 8);
                            if (plVar45 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                            local_40[0] = '\0';
                            local_48 = plVar45;
                            cVar27 = FUN_00d23d70();
                            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (cVar27 == '\0') {
                              iVar30 = 0x12;
                              if (((double)plVar45[3] < (double)plVar44[3]) &&
                                 (uVar34 = FUN_00e7d850((int)plVar45[2]),
                                 (int)uVar34 <= (int)local_54)) {
                                if ((-1 < (int)uVar34) && ((int)uVar34 < (int)local_b8._0_4_)) {
                                  if (g_0239424c <=
                                      *(float *)(local_90[2] + (uint64_t)uVar34 * 4))
                                  goto LAB_013e4111;
                                  local_40[0] = '\0';
                                  local_48 = plVar45;
                                  FUN_00d21140();
                                  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                }
                                iVar30 = 0;
                              }
LAB_013e4111:
                              FUN_00d50b20();
                              if ((iVar30 != 0x14) && (iVar30 != 0)) break;
                            }
                            else {
                              iVar30 = 0x14;
                              if (plVar45 != (int64_t *)0x0) goto LAB_013e4111;
                            }
                            lVar53 = lVar53 + 1;
                          } while (lVar53 < *(int *)((int64_t)local_60 + 0xc));
                        }
                      }
                      goto LAB_013e3b15;
                    }
LAB_013e3b1a:
                    FUN_00d50b20();
                  }
                  else {
LAB_013e3b15:
                    if (plVar44 != (int64_t *)0x0) goto LAB_013e3b1a;
                  }
                  lVar39 = lVar39 + 1;
                } while (lVar39 < *(int *)((int64_t)local_98 + 0xc));
              }
              if (0 < *(int *)((int64_t)local_68 + 0xc)) {
                lVar39 = 0;
                do {
                  plVar44 = *(int64_t **)(local_68[2] + lVar39 * 8);
                  if (plVar44 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_40[0] = '\0';
                  local_48 = plVar44;
                  FUN_00d23f50();
                  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar44 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  lVar39 = lVar39 + 1;
                } while (lVar39 < *(int *)((int64_t)local_68 + 0xc));
              }
              if (local_7c == 0.0) {
                if (*(int *)((int64_t)local_60 + 0xc) < 1) goto LAB_013e4ad3;
                local_54 = (float)iVar28;
                uVar40 = 0xffffffff;
                local_7c = 0.0;
                uVar55 = 0;
                do {
                  lVar39 = *(int64_t *)(local_60[2] + uVar55 * 8);
                  if (lVar39 != 0) {
                    FUN_00d50b00();
                  }
                  iVar28 = FUN_00e7d850((int)*(void*)(lVar39 + 0x10));
                  iVar29 = 0x1a;
                  if (((int)local_a4 <= iVar28) && (iVar29 = 0x18, iVar28 <= (int)uVar48)) {
                    iVar28 = iVar28 - iVar31;
                    iVar29 = -iVar28;
                    if (0 < iVar28) {
                      iVar29 = iVar28;
                    }
                    fVar57 = (float)FUN_00e84a50(g_02390124 - (float)iVar29 / local_54);
                    fVar57 = (float)((double)fVar57 * *(double *)(lVar39 + 0x18));
                    if (local_7c < fVar57) {
                      uVar40 = uVar55 & 0xffffffff;
                      local_7c = fVar57;
                    }
                    iVar29 = 0;
                  }
                  iVar28 = (int)uVar40;
                  FUN_00d50b20();
                } while (((iVar29 == 0x1a) || (iVar29 == 0)) &&
                        (uVar55 = uVar55 + 1,
                        (int64_t)uVar55 < (int64_t)*(int *)((int64_t)local_60 + 0xc)));
                if (iVar28 == -1) goto LAB_013e4aca;
LAB_013e475e:
                iVar29 = FUN_00e7d850(SUB84(g_0240f0f8 * dVar5,0));
                pVar35 = FUN_00e7d850(SUB84(dVar5 * g_0240f100,0));
                iVar28 = FUN_00e7d850((int)*(void*)
                                            (*(int64_t *)(local_60[2] + (int64_t)iVar28 * 8) +
                                            0x10));
                lVar53 = (lVar37 + iVar28) - (int64_t)iVar29;
                lVar39 = (int64_t)iVar29;
                if (lVar53 < lVar37) {
                  lVar53 = lVar37;
                  lVar39 = (int64_t)iVar28;
                }
                lVar54 = (lVar38 + lVar37) - lVar53;
                if (lVar53 + (int)pVar35 <= lVar38 + lVar37) {
                  lVar54 = (int64_t)(int)pVar35;
                }
                if (local_78 == (int64_t *)0x0) {
                  local_78 = (int64_t *)0x0;
                  plVar44 = (int64_t *)FUN_00e8fc40();
                  local_78 = (int64_t *)0x0;
                  FUN_007ef480();
                  *plVar44 = (int64_t)&g_025e6260;
                  plVar44[7] = (int64_t)&g_025e66c0;
                  plVar44[0x1c] = 0;
                  plVar44[0x19] = 0;
                  plVar44[0x1a] = 0;
                  *(void*)(plVar44 + 0x1b) = 0;
                  pVar35 = 0;
                  local_78 = (int64_t *)0x0;
                  (*g_025e6278)();
                  local_c0 = &g_02802501;
                  local_78 = plVar44;
                  pvVar36 = _pthread_getspecific(pVar35);
                  if (pvVar36 != (void *)0x0) {
                    local_78 = plVar44;
                    FUN_00e8b990();
                  }
                  local_78 = plVar44;
                  FUN_014bad20(lVar54,lVar39);
                  pVar35 = (void*)lVar54;
                  plVar45 = (int64_t *)FUN_00115860();
                  (**(code **)(*plVar45 + 0x18))();
                  pvVar36 = _pthread_getspecific(pVar35);
                  if (pvVar36 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd650();
                  pvVar36 = _pthread_getspecific(pVar35);
                  if (pvVar36 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bc440();
                  FUN_013dfce0();
                  pvVar36 = _pthread_getspecific(pVar35);
                  if ((pvVar36 != (void *)0x0) && (lVar37 = FUN_00e8b990(), lVar37 != 0)) {
                    pVar35 = (void*)local_88;
                  }
                  FUN_01329030();
                  uVar46 = FUN_00d50b20();
                  local_c0 = (void*)CONCAT71((int7)((uint64_t)uVar46 >> 8),1);
                  local_78 = plVar44;
                }
                else {
                  pvVar36 = _pthread_getspecific(pVar35);
                  if (pvVar36 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bad20(lVar54,lVar39);
                  pVar35 = (void*)lVar54;
                }
                pvVar36 = _pthread_getspecific(pVar35);
                if (pvVar36 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bcf30();
LAB_013e4aca:
                if (local_68 != (void*)0x0) goto LAB_013e4ad3;
              }
              else {
                if (0 < *(int *)((int64_t)local_60 + 0xc)) {
                  uVar55 = 0xffffffff;
                  uVar40 = 0;
                  fVar57 = g_02391078;
                  do {
                    lVar39 = *(int64_t *)(local_60[2] + uVar40 * 8);
                    local_54 = fVar57;
                    if (lVar39 != 0) {
                      FUN_00d50b00();
                    }
                    iVar30 = FUN_00e7d850((int)*(void*)(lVar39 + 0x10));
                    iVar30 = iVar30 - iVar31;
                    iVar29 = -iVar30;
                    if (0 < iVar30) {
                      iVar29 = iVar30;
                    }
                    local_b8._0_4_ = (float)iVar29;
                    if ((float)iVar29 < local_54) {
                      uVar55 = uVar40 & 0xffffffff;
                    }
                    FUN_00d50b20();
                    fVar57 = (float)local_b8._0_4_;
                    if (local_54 <= (float)local_b8._0_4_) {
                      fVar57 = local_54;
                    }
                    uVar40 = uVar40 + 1;
                  } while ((int64_t)uVar40 < (int64_t)*(int *)((int64_t)local_60 + 0xc));
                  iVar29 = (int)uVar55;
                  if (iVar29 != -1) {
                    if ((int)local_7c < 1) {
LAB_013e463f:
                      iVar28 = iVar29 + (int)local_7c;
                    }
                    else {
                      uVar40 = (uint64_t)iVar29;
                      iVar30 = FUN_00e7d850((int)*(void*)
                                                  (*(int64_t *)(local_60[2] + uVar40 * 8) + 0x10));
                      local_a4 = (float)iVar30;
                      local_54 = (float)iVar28 * g_0239011c;
                      uVar55 = 0xffffffff;
                      do {
                        iVar28 = (int)uVar55;
                        uVar40 = uVar40 + 1;
                        if ((int64_t)*(int *)((int64_t)local_60 + 0xc) <= (int64_t)uVar40) break;
                        lVar39 = *(int64_t *)(local_60[2] + uVar40 * 8);
                        if (lVar39 != 0) {
                          FUN_00d50b00();
                        }
                        iVar28 = FUN_00e7d850((int)*(void*)(lVar39 + 0x10));
                        fVar57 = (float)((uint)((float)iVar28 - local_a4) & g_02390140);
                        local_b8 = ZEXT416((uint)fVar57);
                        if ((fVar57 < local_54) &&
                           (fVar57 = g_02390124 - fVar57 / local_54,
                           fVar57 = (float)((double)(fVar57 * fVar57) * *(double *)(lVar39 + 0x18)),
                           local_6c < fVar57)) {
                          uVar55 = uVar40 & 0xffffffff;
                          local_6c = fVar57;
                        }
                        iVar28 = (int)uVar55;
                        FUN_00d50b20();
                      } while ((float)local_b8._0_4_ < local_54);
                      if (iVar28 == -1) goto LAB_013e463f;
                    }
                    if ((-1 < iVar28) && (iVar28 < *(int *)((int64_t)local_60 + 0xc)))
                    goto LAB_013e475e;
                  }
                  goto LAB_013e4aca;
                }
LAB_013e4ad3:
                FUN_00d50b20();
              }
              if (local_98 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if (plVar47 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (local_c8 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if (puVar41 != (void*)0x0) {
                FUN_00d50b20();
              }
              if (local_90 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if (((char)local_c0 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_013e4b4f:
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_013e4b64:
  FUN_00d50b20();
  return;
}

