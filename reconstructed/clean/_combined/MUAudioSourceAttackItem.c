// ===================================================================
// MUAudioSourceAttackItem — Complete reconstructed pseudocode
// 18 functions
// ===================================================================


// ============================================================
// 013e2c20
// ============================================================
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



// ============================================================
// 0125a5f0
// ============================================================
// Function: FUN_0125a5f0
// Address: 0125a5f0
// Size: 12017 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

void FUN_0125a5f0(int64_t **param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  double dVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  char cVar6;
  byte bVar7;
  uint32_t uVar8;
  int64_t lVar9;
  void *pvVar10;
  int64_t *plVar11;
  int64_t **pplVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  undefined7 extraout_var;
  undefined7 uVar16;
  undefined7 extraout_var_00;
  int64_t **pplVar15;
  void* pVar17;
  int64_t *plVar18;
  char *pcVar19;
  int64_t **pplVar20;
  uint32_t unaff_ESI;
  int iVar21;
  int64_t this_ptr;
  bool bVar22;
  undefined7 uVar24;
  double *pdVar23;
  int64_t **unaff_R13;
  uint32_t extraout_XMM0_Da;
  double dVar25;
  uint32_t uVar26;
  uint32_t extraout_XMM0_Db;
  double dVar27;
  double dVar28;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  uint8_t local_270;
  uint64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  uint64_t local_208;
  uint8_t local_200;
  double local_1f8;
  double local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t **local_1d8;
  char local_1d0;
  uint32_t local_1c4;
  int64_t **local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  undefined7 uStack_1a7;
  char local_1a0;
  uint64_t local_198;
  double local_190;
  int64_t *local_188;
  char local_180;
  uint32_t local_174;
  uint64_t local_170;
  double local_168;
  int64_t **local_160;
  double local_158;
  double local_150;
  int64_t **local_148;
  double local_140;
  int64_t **local_138;
  char local_130 [8];
  int64_t **local_128;
  uint64_t local_120;
  int local_118;
  double local_110;
  int64_t **local_108;
  double dStack_100;
  uint8_t local_f8 [24];
  int64_t **local_e0;
  double local_d8;
  int64_t **local_d0;
  int64_t **local_c8;
  double local_b8 [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_174 = unaff_ESI;
  uVar8 = FUN_0126b4b0();
  FUN_0125e7c0();
  local_d0 = local_138;
  if ((((local_130[0] == '\0') && (local_138 != (int64_t **)0x0)) &&
      (FUN_00d50b00(), local_130[0] != '\0')) && (local_138 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  local_110 = (double)CONCAT44(local_110._4_4_,uVar8);
  if (*(int64_t ***)(this_ptr + 0xe0) == (int64_t **)0x0) {
    local_198 = 0;
    plVar18 = (int64_t *)0x0;
  }
  else {
    local_130[0] = '\0';
    local_138 = (int64_t **)0x0;
    local_120 = 0xffffffff;
    local_118 = 0;
    unaff_R13 = &local_188;
    local_120._4_4_ = 0;
    local_198 = 0;
    local_128 = *(int64_t ***)(this_ptr + 0xe0);
    while( true ) {
      if (local_120._4_4_ != 0) {
        if (local_120._4_4_ < 1) {
          iVar21 = -local_120._4_4_;
        }
        else {
          iVar21 = (int)local_120 - local_120._4_4_;
          local_120 = CONCAT44(local_120._4_4_,iVar21);
          FUN_00d23690();
          local_118 = local_118 + local_120._4_4_;
          iVar21 = 0;
        }
        local_120 = CONCAT44(iVar21,(int)local_120);
      }
      lVar9 = (int64_t)(int)local_120;
      iVar21 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,iVar21);
      if (*(int *)((int64_t)local_128 + 0xc) <= iVar21) break;
      plVar18 = local_128[2];
      local_138 = (int64_t **)plVar18[lVar9 + 1];
      pvVar10 = _pthread_getspecific((void*)plVar18);
      pVar17 = (void*)plVar18;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar18 = local_188;
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        pvVar10 = _pthread_getspecific(pVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar10 = _pthread_getspecific(pVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        plVar18 = local_188;
        if ((g_02790f20 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
          g_0272f7c8 = FUN_007ef2d0();
          g_0272f7b0 = "MUAudioSourceAttackItem";
          g_0272f7b8 = 0xe8;
          g_0272f7c0 = FUN_007ef270;
          g_0272f7d0 = 0;
          ram_000000000272f7d8 = 0;
          g_0272f7e0 = 0;
          ram_000000000272f7e8 = 0;
          g_0272f7f0 = 0;
          ram_000000000272f7f8 = 0;
          g_0272f800 = 0;
          ram_000000000272f808 = 0;
          g_0272f810 = 0;
          ram_000000000272f818 = 0;
          g_0272f820 = 0;
          ram_000000000272f828 = 0;
          g_0272f830 = 0;
          ram_000000000272f838 = 0;
          g_0272f840 = 0;
          ram_000000000272f848 = 0;
          g_0272f850 = 0;
          ram_000000000272f858 = 0;
          g_0272f860 = 0;
          ram_000000000272f868 = 0;
          g_0272f870 = 0;
          ___cxa_guard_release();
        }
        param_1 = (int64_t **)&g_02802688;
        if (plVar18 != (int64_t *)0x0) {
          (**(code **)(*plVar18 + 0x360))();
          cVar6 = FUN_00e85ea0();
          param_1 = unaff_R13;
          if (cVar6 == '\0') {
            param_1 = (int64_t **)&g_02802688;
          }
        }
        plVar18 = *param_1;
        if (plVar18 == (int64_t *)0x0) {
          plVar18 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(param_1 + 1) == '\0') {
            plVar11 = (int64_t *)FUN_00d50b00();
          }
          else {
            *(void*)(param_1 + 1) = 0;
            plVar11 = plVar18;
          }
          local_198 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
        }
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (CONCAT71(uStack_1a7,local_1a8) != 0)) {
          FUN_00d50b20();
        }
        if (plVar18 != (int64_t *)0x0) goto LAB_0125a9c6;
      }
    }
    plVar18 = (int64_t *)0x0;
    param_1 = local_128;
LAB_0125a9c6:
    FUN_0015edf0();
  }
  local_160 = *(int64_t ***)(this_ptr + 0xd8);
  uVar8 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  local_1b0 = plVar18;
  if (local_160 == (int64_t **)0x0) {
LAB_0125aac0:
    pplVar12 = (int64_t **)0x0;
    uVar13 = 0;
LAB_0125aac5:
    local_f8._0_8_ = *(void*)(this_ptr + 0xf0);
  }
  else {
    FUN_00d50b00();
    pvVar10 = _pthread_getspecific((void*)param_1);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      param_1 = local_160;
    }
    FUN_011ef460();
    pplVar12 = local_138;
    if (local_138 == (int64_t **)0x0) goto LAB_0125aac0;
    if (((local_130[0] == '\0') && (FUN_00d50b00(), local_130[0] != '\0')) &&
       (local_138 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((void*)param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pplVar20 = local_138;
    if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    if (pplVar20 == (int64_t **)0x0) {
      uVar8 = 0;
      uVar13 = 1;
      goto LAB_0125aac5;
    }
    pvVar10 = _pthread_getspecific((void*)param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = CONCAT71((int7)((uint64_t)pplVar20 >> 8),1);
    uVar2 = FUN_013dd130();
    local_f8._0_8_ = uVar2;
    uVar8 = 0;
  }
  local_1c4 = uVar8;
  local_170 = uVar13;
  local_148 = pplVar12;
  if (plVar18 == (int64_t *)0x0) {
LAB_0125abb5:
    if (local_110._0_4_ != 2) {
      local_1f8 = (double)FUN_0128e0e0();
      local_150 = (double)FUN_0128f040();
      local_d8 = 0.0;
      local_108 = (int64_t **)0x0;
      local_e0 = (int64_t **)0x0;
      local_c8 = (int64_t **)0x0;
      local_158 = (double)FUN_0128e760();
      uVar24 = (undefined7)((uint64_t)pplVar12 >> 8);
      bVar22 = NAN(local_158) || local_d0 == (int64_t **)0x0;
      local_190 = 0.0;
      local_140 = 0.0;
      local_168 = 0.0;
      if (bVar22) {
LAB_0125b711:
        pdVar23 = (double *)(CONCAT71(uVar24,bVar22) ^ 1);
        dVar25 = *(double *)(this_ptr + 0xb8);
        if ((*(double *)(this_ptr + 0x140) != dVar25) ||
           (NAN(*(double *)(this_ptr + 0x140)) || NAN(dVar25))) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          local_158 = dVar25;
          FUN_00d64850();
          *(double *)(this_ptr + 0x140) = local_158;
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          FUN_00d64910();
          bVar7 = 0;
LAB_0125b649:
          lVar9 = *(int64_t *)(this_ptr + 0xa0);
        }
        else {
          bVar7 = 0;
          lVar9 = *(int64_t *)(this_ptr + 0xa0);
        }
        if (lVar9 != 0) goto LAB_0125b660;
LAB_0125b7e2:
        local_130[0] = '\0';
        local_138 = (int64_t **)0x0;
        lVar9 = this_ptr;
LAB_0125b7f4:
        cVar6 = '\0';
        iVar21 = local_110._0_4_;
      }
      else {
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            param_1 = local_d0;
          }
        }
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        dVar25 = (double)FUN_013de8d0();
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        local_140 = (double)FUN_0128e2f0(SUB84(local_158 - dVar25,0));
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            param_1 = local_d0;
          }
        }
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        dVar25 = (double)FUN_013def20();
        local_168 = 0.0;
        if ((dVar25 != 0.0) || (NAN(dVar25))) {
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_d0;
          }
          FUN_013def20();
          dVar25 = (double)FUN_0128e2f0();
          local_c8 = (int64_t **)(dVar25 / local_150);
          local_168 = 0.0;
          if (((local_150 != local_1f8) || (NAN(local_150) || NAN(local_1f8))) &&
             ((char)local_174 != '\0')) {
            dVar25 = *(double *)(this_ptr + 0xf0);
            uVar8 = SUB84(dVar25,0);
            uVar26 = (uint32_t)((uint64_t)dVar25 >> 0x20);
            local_d8 = *(double *)(this_ptr + 0xb8) - (double)local_c8;
            local_108 = (int64_t **)(dVar25 - local_d8);
            if (g_0241b6a8 <= (double)local_108) {
              dVar25 = *(double *)(this_ptr + 0xe8);
              dVar27 = local_d8 + dVar25;
              if ((dVar25 != dVar27) || (NAN(dVar25) || NAN(dVar27))) {
                local_e0 = (int64_t **)dVar27;
                FUN_00d64850();
                *(int64_t ***)(this_ptr + 0xe8) = local_e0;
                FUN_00d64910();
                uVar8 = (uint32_t)*(void*)(this_ptr + 0xf0);
                uVar26 = (uint32_t)((uint64_t)*(void*)(this_ptr + 0xf0) >> 0x20);
              }
              if (((double)CONCAT44(uVar26,uVar8) != (double)local_108) ||
                 (NAN((double)CONCAT44(uVar26,uVar8)) || NAN((double)local_108))) {
                FUN_00d64850();
                *(int64_t ***)(this_ptr + 0xf0) = local_108;
                FUN_00d64910();
                local_168 = local_d8;
              }
              else {
                local_168 = local_d8;
              }
            }
          }
          if ((*(double *)(this_ptr + 0xb8) != (double)local_c8) ||
             (NAN(*(double *)(this_ptr + 0xb8)) || NAN((double)local_c8))) {
            FUN_00d64850();
            *(int64_t ***)(this_ptr + 0xb8) = local_c8;
            FUN_00d64910();
          }
        }
        local_190 = local_140 / local_150;
        if ((local_190 == g_02390448) && (!NAN(local_190) && !NAN(g_02390448)))
        goto LAB_0125b711;
        bVar7 = 1;
        if ((*(double *)(this_ptr + 0x140) != local_190) ||
           (NAN(*(double *)(this_ptr + 0x140)) || NAN(local_190))) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          FUN_00d64850();
          *(double *)(this_ptr + 0x140) = local_190;
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          FUN_00d64910();
          pdVar23 = (double *)CONCAT71(uVar24,1);
          goto LAB_0125b649;
        }
        pdVar23 = (double *)CONCAT71(uVar24,1);
        if (*(int64_t *)(this_ptr + 0xa0) == 0) goto LAB_0125b7e2;
LAB_0125b660:
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_012dff00();
        if (local_138 == (int64_t **)0x0) goto LAB_0125b7f4;
        lVar1 = *(int64_t *)(this_ptr + 0xa0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar10 = _pthread_getspecific((void*)param_1);
        iVar21 = local_110._0_4_;
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_012df8c0();
        cVar6 = (char)lVar9;
        if (lVar1 != 0) {
          lVar9 = FUN_00d50b20();
        }
      }
      if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
        lVar9 = FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        local_d8 = g_0238fee8;
      }
      else {
        if (*(int64_t *)(this_ptr + 0xa0) == 0) {
          local_130[0] = '\0';
          local_138 = (int64_t **)0x0;
        }
        else {
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
        }
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_0128e0e0();
        local_d8 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
          lVar9 = FUN_00d50b20();
        }
      }
      if (iVar21 == 1) {
        pplVar12 = (int64_t **)FUN_000bea40();
        (*(*pplVar12)[3])();
        pvVar10 = _pthread_getspecific((void*)param_1);
        pplVar20 = pplVar12;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pplVar20 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        (*(*pplVar20)[0x83])(0,0);
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
        dVar25 = (double)local_f8._0_8_;
        if ((local_140 < (double)local_f8._0_8_) &&
           (param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),local_140 != 0.0),
           (bool)(bVar7 & local_140 != 0.0))) {
          pvVar10 = _pthread_getspecific((void*)param_1);
          pplVar20 = pplVar12;
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pplVar20 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (*(*pplVar20)[0x83])(SUB84(local_190,0),SUB84(local_140,0));
          if ((local_240 != '\0') && (local_248 != 0)) {
            FUN_00d50b20();
          }
          dVar25 = (local_190 - local_140) + (double)local_f8._0_8_;
        }
        dVar27 = *(double *)(this_ptr + 0xf0);
        local_c8 = (int64_t **)dVar27;
        if (dVar27 <= dVar25) {
          local_c8 = (int64_t **)dVar25;
        }
        *(bool *)(this_ptr + 0x180) = dVar27 < (double)local_c8;
        pvVar10 = _pthread_getspecific((void*)param_1);
        pplVar20 = pplVar12;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pplVar20 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        (*(*pplVar20)[0x83])((int)local_c8,local_f8._0_4_);
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b00();
        FUN_00d50b20();
        uVar13 = 0;
        local_d8 = 0.0;
        pplVar20 = (int64_t **)0x0;
LAB_0125c94a:
        local_e0 = (int64_t **)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        local_108 = (int64_t **)0x0;
        local_c8 = pplVar12;
        FUN_00d50b00();
        local_158 = 0.0;
        uVar24 = (undefined7)((uint64_t)pdVar23 >> 8);
        bVar7 = 1;
        local_f8._0_8_ = pplVar12;
        if (*(int64_t *)(this_ptr + 0x160) == 0) goto LAB_0125cc42;
LAB_0125c997:
        FUN_00d50b00();
        uVar8 = FUN_00d50b20();
        if (local_d0 == (int64_t **)0x0) {
LAB_0125cbd5:
          lVar9 = *(int64_t *)(this_ptr + 0x160);
          local_1c0 = local_c8;
          local_1b8 = '\0';
          if (lVar9 == 0) goto LAB_0125cc6d;
          uVar8 = FUN_00d50b00();
          bVar22 = false;
        }
        else {
          FUN_0125e7c0();
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_108 = (int64_t **)FUN_013de9b0();
          if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          lVar9 = *(int64_t *)(this_ptr + 0x160);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013f2b00();
          FUN_00d23340();
          pplVar12 = local_138;
          param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),local_130[0]);
          pcVar19 = &local_1a8;
          if (local_130[0] != '\0') {
            pcVar19 = local_130;
          }
          local_1a8 = local_130[0];
          *pcVar19 = '\0';
          if ((local_130[0] != '\0') && (pplVar12 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_110 = (double)FUN_013faed0();
          if ((local_1a8 != '\0') && (pplVar12 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          uVar8 = SUB84(local_110,0);
          if ((local_110 == (double)local_108) && (!NAN(local_110) && !NAN((double)local_108)))
          goto LAB_0125cbd5;
          lVar9 = *(int64_t *)(this_ptr + 0x160);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          local_220 = 1;
          local_228 = lVar9;
          uVar8 = FUN_012902c0((int)local_108);
          if (lVar9 != 0) {
            uVar8 = FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 0x160) != 0) {
            FUN_00d50b00();
            uVar8 = FUN_00d50b20();
            goto LAB_0125cbd5;
          }
LAB_0125cc6d:
          local_1b8 = '\0';
          bVar22 = true;
          lVar9 = 0;
          local_1c0 = local_c8;
        }
        local_210 = 1;
        local_218 = lVar9;
        uVar13 = FUN_0128f850(uVar8,&local_218);
        pplVar12 = local_138;
        uVar16 = (undefined7)((uint64_t)uVar13 >> 8);
        if (local_138 == (int64_t **)local_f8._0_8_) {
          bVar7 = local_138 != (int64_t **)0x0 & local_158._0_1_;
          param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),bVar7);
          if (bVar7 == 1) {
            if (local_130[0] != '\0') {
              local_130[0] = '\0';
              goto joined_r0x0125cd0a;
            }
            uVar14 = CONCAT71(uVar24,1);
            FUN_00d50b00();
          }
          else {
            uVar14 = (uint64_t)local_e0 & 0xffffffff;
            param_1 = local_e0;
            if ((local_130[0] != '\0') &&
               (uVar14 = (uint64_t)local_e0 & 0xffffffff, local_138 != (int64_t **)0x0)) {
              FUN_00d50b20();
              uVar14 = (uint64_t)local_e0 & 0xffffffff;
            }
          }
          local_108 = (int64_t **)(uVar14 & 0xffffffff);
        }
        else {
          if (local_130[0] == '\0') {
            if (local_138 != (int64_t **)0x0) {
              uVar13 = FUN_00d50b00();
            }
            uVar16 = (undefined7)((uint64_t)uVar13 >> 8);
            if ((bool)(bVar7 & local_f8._0_8_ != 0)) {
              local_f8._0_8_ = pplVar12;
              FUN_00d50b20();
              uVar16 = extraout_var_00;
            }
          }
          else {
            if ((bool)(bVar7 & (int64_t **)local_f8._0_8_ != (int64_t **)0x0)) {
              FUN_00d50b20();
              uVar16 = extraout_var;
            }
            local_130[0] = '\0';
          }
          local_f8._0_8_ = pplVar12;
joined_r0x0125cd0a:
          uVar14 = CONCAT71(uVar24,1);
          local_108 = (int64_t **)CONCAT71(uVar16,1);
        }
        if (!bVar22) {
          FUN_00d50b20();
          local_108 = (int64_t **)(uVar14 & 0xffffffff);
        }
        if ((local_1b8 != '\0') && (local_1c0 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_158 = (double)CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
        if (iVar21 == 0) {
          pplVar12 = (int64_t **)FUN_011114e0();
          (*(*pplVar12)[3])();
          local_c8 = pplVar12;
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_c8;
          }
          FUN_013ef430((int)g_02391038,(int)g_02391038);
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_c8;
          }
          dVar27 = 4.94065645841247e-324;
          FUN_013eb4a0();
          local_108 = *(int64_t ***)(this_ptr + 0xf0);
          local_b8[0] = 0.0;
          local_b8[1] = 0.0;
          local_b8[2] = local_150;
          local_1f0 = 0.0;
          dVar25 = 0.0;
          if ((char)pdVar23 != '\0') {
            local_b8[3] = local_190;
            local_b8[4] = local_140;
            local_b8[5] = local_150;
            dVar27 = 9.88131291682493e-324;
            local_1f0 = local_140;
            dVar25 = local_190;
          }
          local_140 = dVar25;
          if (local_d0 == (int64_t **)0x0) {
LAB_0125bd65:
            uVar8 = local_f8._0_4_;
            uVar26 = local_f8._4_4_;
LAB_0125bd75:
            local_110 = (double)CONCAT44(uVar26,uVar8);
            pplVar12 = local_108;
          }
          else {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_d0;
            }
            cVar6 = FUN_013deec0();
            if (cVar6 == '\0') goto LAB_0125bd65;
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_d0;
            }
            local_110 = (double)FUN_013df130();
            local_e0 = *(int64_t ***)(this_ptr + 0xf0);
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_d0;
            }
            dVar25 = (double)FUN_013de9b0();
            uVar8 = local_f8._0_4_;
            uVar26 = local_f8._4_4_;
            if ((double)local_f8._0_8_ <= local_110) goto LAB_0125bd75;
            dVar25 = (double)local_e0 - (dVar25 - local_110);
            pplVar12 = (int64_t **)(g_02391030 + local_140);
            if (g_02391030 + local_140 <= dVar25) {
              pplVar12 = (int64_t **)dVar25;
            }
            if (*(double *)(this_ptr + 0xf0) <= (double)pplVar12) goto LAB_0125bd65;
            local_b8[(int64_t)dVar27 * 3] = (double)pplVar12;
            local_b8[(int64_t)dVar27 * 3 + 1] = local_110;
            param_1 = (int64_t **)0x0;
            local_b8[(int64_t)dVar27 * 3 + 2] = 1.0;
            dVar27 = (double)(uint64_t)(SUB84(dVar27,0) + 1);
          }
          dVar25 = *(double *)(this_ptr + 0xf0);
          local_b8[(int64_t)dVar27 * 3] = dVar25;
          local_b8[(int64_t)dVar27 * 3 + 1] = (double)CONCAT44(uVar26,uVar8);
          local_b8[(int64_t)dVar27 * 3 + 2] = local_d8;
          local_e0 = (int64_t **)dVar27;
          if ((g_023e16a0 <= (double)CONCAT44(uVar26,uVar8) &&
               (double)CONCAT44(uVar26,uVar8) != g_023e16a0) && (local_d0 != (int64_t **)0x0)) {
            dVar25 = dVar25 / (double)local_f8._0_8_;
            if (dVar25 < g_0238fee8) {
              local_f8._0_8_ = (double)pplVar12 - local_140;
              if ((double)pplVar12 - local_140 < g_02420c40) {
                local_d8 = 0.0;
                local_140 = (double)pplVar12;
                local_108 = (int64_t **)dVar25;
                pvVar10 = _pthread_getspecific((void*)param_1);
                if (pvVar10 != (void *)0x0) {
                  local_d8 = 0.0;
                  lVar9 = FUN_00e8b990();
                  if (lVar9 != 0) {
                    param_1 = local_d0;
                  }
                }
                local_d8 = 0.0;
                cVar6 = FUN_013dee00();
                if (cVar6 == '\0') {
                  pvVar10 = _pthread_getspecific((void*)param_1);
                  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    param_1 = local_d0;
                  }
                  bVar7 = FUN_013dee60();
                  dVar25 = ((double)local_f8._0_8_ + g_0241d658) / g_0240cfc0;
                  local_d8 = 0.0;
                  if (0.0 <= dVar25) {
                    local_d8 = dVar25;
                  }
                  param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),1 < (int)local_e0)
                  ;
                  if ((bVar7 & 1 < (int)local_e0) == 1) {
                    local_b8[3] = (g_0238fee8 - local_d8) * local_1f0 * (double)local_108 +
                                  local_b8[3] * local_d8;
                    local_b8[5] = (local_b8[4] - local_b8[1]) / (local_b8[3] - local_b8[0]);
                    local_f8._0_8_ = local_b8[3];
                    if ((*(double *)(this_ptr + 0xb8) != local_b8[3]) ||
                       (NAN(*(double *)(this_ptr + 0xb8)) || NAN(local_b8[3]))) {
                      FUN_00d64850();
                      *(void*)(this_ptr + 0xb8) = local_f8._0_8_;
                      FUN_00d64910();
                    }
                    if ((*(double *)(this_ptr + 0x140) != (double)local_f8._0_8_) ||
                       (NAN(*(double *)(this_ptr + 0x140)) || NAN((double)local_f8._0_8_))) {
                      FUN_00d64850();
                      *(void*)(this_ptr + 0x140) = local_f8._0_8_;
                      FUN_00d64910();
                    }
                  }
                  pvVar10 = _pthread_getspecific((void*)param_1);
                  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    param_1 = local_d0;
                  }
                  cVar6 = FUN_013deec0();
                  if (((cVar6 != '\0') && (local_140 < *(double *)(this_ptr + 0xf0))) &&
                     (1 < (int)local_e0)) {
                    uVar14 = (uint64_t)((int)local_e0 - 1);
                    param_1 = (int64_t **)(uVar14 * 3);
                    dVar25 = (g_0238fee8 - local_d8) * local_110 * (double)local_108 +
                             local_d8 * local_b8[uVar14 * 3];
                    local_b8[uVar14 * 3] = dVar25;
                    local_b8[uVar14 * 3 + 2] =
                         (local_b8[(int64_t)dVar27 * 3 + 1] - local_b8[uVar14 * 3 + 1]) /
                         (local_b8[(int64_t)dVar27 * 3] - dVar25);
                  }
                }
              }
            }
          }
          local_110 = (double)(uint64_t)((int)local_e0 + 1);
          pdVar23 = local_b8;
          dVar25 = 0.0;
          local_d8 = 0.0;
          pplVar12 = (int64_t **)0x0;
          do {
            uVar14 = (uint64_t)local_d8 & 0xffffffff;
            pvVar10 = _pthread_getspecific((void*)param_1);
            pplVar20 = local_c8;
            if ((pvVar10 != (void *)0x0) &&
               (lVar9 = FUN_00e8b990(), pplVar20 = local_c8, lVar9 != 0)) {
              param_1 = local_c8;
              pplVar20 = (int64_t **)local_c8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            uVar13 = (*(*pplVar20)[0x81])();
            pplVar20 = local_138;
            cVar6 = (char)uVar14;
            if (local_138 == pplVar12) {
              pplVar20 = pplVar12;
              local_d8 = (double)uVar14;
              if ((cVar6 == '\0') && (local_138 != (int64_t **)0x0)) {
                if (local_130[0] != '\0') goto LAB_0125c316;
                local_d8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                FUN_00d50b00();
              }
            }
            else if (local_130[0] == '\0') {
              if (local_138 != (int64_t **)0x0) {
                uVar13 = FUN_00d50b00();
              }
              local_d8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
              if ((cVar6 != '\0') && (pplVar12 != (int64_t **)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((cVar6 != '\0') && (pplVar12 != (int64_t **)0x0)) {
                uVar13 = FUN_00d50b20();
              }
LAB_0125c316:
              local_130[0] = '\0';
              local_d8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            }
            if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013fae90(SUB84(*pdVar23,0));
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013faee0(SUB84(pdVar23[1],0));
            if (dVar25 == 0.0) {
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c830(SUB84(g_0240d3e0,0));
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c880(SUB84(local_b8[2] * g_0240d3e0,0));
            }
            else {
              uVar14 = (uint64_t)(SUB84(dVar25,0) - 1);
              dVar28 = *pdVar23 - local_b8[uVar14 * 3];
              dStack_100 = pdVar23[1] - local_b8[uVar14 * 3 + 1];
              dVar27 = pdVar23[2];
              dVar3 = (SQRT(dStack_100 * dStack_100 + dVar28 * dVar28) * g_0241ea50) /
                      SQRT(dVar27 * dVar27 + g_0238fee8);
              dVar27 = dVar27 * dVar3;
              local_f8._0_8_ = dVar28 * g_0241ea50;
              if (dVar3 <= (double)local_f8._0_8_) {
                local_f8._8_8_ = 0;
                local_f8._0_8_ = dVar3;
                if (dVar27 <= dStack_100 * g_0241ea50) goto LAB_0125c4bd;
LAB_0125c52a:
                local_108 = (int64_t **)(dStack_100 * g_0241ea50);
                uVar8 = local_f8._12_4_;
                local_f8._8_4_ = local_f8._8_4_;
                local_f8._0_8_ = (local_f8._0_8_ * (double)local_108) / dVar27;
                local_f8._12_4_ = uVar8;
              }
              else {
                local_f8._8_8_ = dStack_100;
                dVar27 = (dVar27 * (double)local_f8._0_8_) / dVar3;
                if (dStack_100 * g_0241ea50 < dVar27) goto LAB_0125c52a;
LAB_0125c4bd:
                dStack_100 = 0.0;
                local_108 = (int64_t **)dVar27;
              }
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c830(local_f8._0_4_ ^ g_023945b0);
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c880((uint)local_108 ^ g_023945b0);
            }
            if ((uint64_t)dVar25 < local_e0) {
              dVar28 = pdVar23[3] - *pdVar23;
              dStack_100 = pdVar23[4] - pdVar23[1];
              dVar27 = pdVar23[2];
              dVar3 = (SQRT(dStack_100 * dStack_100 + dVar28 * dVar28) * g_0241ea50) /
                      SQRT(dVar27 * dVar27 + g_0238fee8);
              dVar27 = dVar27 * dVar3;
              local_f8._0_8_ = dVar28 * g_0241ea50;
              if (dVar3 <= (double)local_f8._0_8_) {
                local_f8._8_8_ = 0;
                local_f8._0_8_ = dVar3;
                if (dVar27 <= dStack_100 * g_0241ea50) goto LAB_0125c6f8;
LAB_0125c7de:
                local_108 = (int64_t **)(dStack_100 * g_0241ea50);
                uVar8 = local_f8._12_4_;
                local_f8._8_4_ = local_f8._8_4_;
                local_f8._0_8_ = (local_f8._0_8_ * (double)local_108) / dVar27;
                local_f8._12_4_ = uVar8;
              }
              else {
                local_f8._8_8_ = dStack_100;
                dVar27 = (dVar27 * (double)local_f8._0_8_) / dVar3;
                if (dStack_100 * g_0241ea50 < dVar27) goto LAB_0125c7de;
LAB_0125c6f8:
                dStack_100 = 0.0;
                local_108 = (int64_t **)dVar27;
              }
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c8d0(local_f8._0_4_);
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c920((uint)local_108);
            }
            else {
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c8d0(SUB84(g_023944e0,0));
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c920(SUB84(pdVar23[2] * g_023944e0,0));
            }
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_c8;
            }
            local_1d0 = '\0';
            local_1d8 = pplVar20;
            FUN_013ecb30();
            if ((local_1d0 != '\0') && (local_1d8 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            dVar25 = (double)((int64_t)dVar25 + 1);
            pdVar23 = pdVar23 + 3;
            pplVar12 = pplVar20;
          } while (local_110 != dVar25);
          *(void*)(this_ptr + 0x180) = 0;
          if (local_c8 != (int64_t **)0x0) {
            FUN_00d50b00();
            pplVar12 = local_c8;
            uVar13 = FUN_00d50b20();
            goto LAB_0125c94a;
          }
        }
        else {
          pplVar20 = (int64_t **)0x0;
          local_d8 = 0.0;
        }
        local_c8 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        bVar7 = 0;
        uVar24 = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_f8._8_8_;
        local_f8._0_16_ = auVar4 << 0x40;
        if (*(int64_t *)(this_ptr + 0x160) != 0) goto LAB_0125c997;
LAB_0125cc42:
        local_108 = local_e0;
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      pVar17 = (void*)param_1;
      if (pvVar10 == (void *)0x0) {
        pplVar12 = (int64_t **)local_f8._0_8_;
      }
      else {
        lVar9 = FUN_00e8b990();
        pplVar12 = (int64_t **)local_f8._0_8_;
        if (lVar9 != 0) {
          param_1 = (int64_t **)local_f8._0_8_;
          pplVar12 = *(int64_t ***)
                      (local_f8._0_8_ + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
        }
        pVar17 = (void*)param_1;
      }
      cVar6 = (*(*pplVar12)[0x6e])();
      if (cVar6 == '\0') {
        FUN_0128de60();
        lVar9 = *(int64_t *)(this_ptr + 0xd0);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(this_ptr + 0x158) != lVar9) {
          FUN_00d64850();
          lVar1 = *(int64_t *)(this_ptr + 0x158);
          if (lVar1 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(this_ptr + 0x158) = lVar9;
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (local_d0 != (int64_t **)0x0) {
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pVar17 = (void*)local_d0;
          }
          local_150 = (double)FUN_013de9b0();
          local_150 = local_150 / *(double *)(this_ptr + 0xf0);
          goto LAB_0125d013;
        }
      }
      else {
        local_208 = local_f8._0_8_;
        local_200 = 0;
        FUN_01265f70();
        if (*(int64_t ***)(this_ptr + 0x158) != local_c8) {
          FUN_00d64850();
          pplVar12 = *(int64_t ***)(this_ptr + 0x158);
          if (pplVar12 != local_c8) {
            if (local_158._0_1_ == '\0') {
              FUN_00d50b00();
            }
            *(int64_t ***)(this_ptr + 0x158) = local_c8;
            if (pplVar12 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (local_d0 != (int64_t **)0x0) {
LAB_0125d013:
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pVar17 = (void*)local_d0;
          }
          FUN_013defa0();
          dVar25 = (double)FUN_01264500();
          if ((*(double *)(this_ptr + 0xc0) != dVar25) ||
             (NAN(*(double *)(this_ptr + 0xc0)) || NAN(dVar25))) {
            local_110 = dVar25;
            FUN_00d64850();
            *(double *)(this_ptr + 0xc0) = local_110;
            FUN_00d64910();
          }
        }
      }
      if (*(double *)(this_ptr + 0xf0) < *(double *)(this_ptr + 0xc0)) {
        *(double *)(this_ptr + 0xc0) = *(double *)(this_ptr + 0xf0);
      }
      if ((local_150 != local_1f8) || (NAN(local_150) || NAN(local_1f8))) {
        if ((*(double *)(this_ptr + 0x148) != local_150) ||
           (NAN(*(double *)(this_ptr + 0x148)) || NAN(local_150))) {
          FUN_00d64850();
          *(double *)(this_ptr + 0x148) = local_150;
          FUN_00d64910();
        }
        cVar6 = (char)local_170;
        if (*(int64_t *)(this_ptr + 0xa8) != 0) {
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          pplVar12 = local_138;
          if (local_130[0] == '\0') {
            if (local_138 == (int64_t **)0x0) goto LAB_0125d49c;
            FUN_00d50b00();
            if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            iVar21 = *(int *)(this_ptr + 0x54);
          }
          else {
            if (local_138 == (int64_t **)0x0) goto LAB_0125d49c;
            iVar21 = *(int *)(this_ptr + 0x54);
          }
          if (iVar21 != 0) {
            pvVar10 = _pthread_getspecific(pVar17);
            pplVar15 = pplVar12;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pplVar15 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            *(int *)((int64_t)pplVar15 + 0x54) = *(int *)((int64_t)pplVar15 + 0x54) + 1;
          }
          if ((local_168 != 0.0) || (NAN(local_168))) {
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            pplVar15 = pplVar12;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pplVar15 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            if ((double)pplVar15[0x1e] + local_168 <= g_0241b6a8) {
              lVar9 = *(int64_t *)(this_ptr + 0xa8);
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a5f0();
            }
            else {
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012756a0(SUB84(local_168,0));
            }
          }
          else {
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
          }
          if (*(int *)(this_ptr + 0x54) != 0) {
            pvVar10 = _pthread_getspecific(pVar17);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pplVar12 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            *(int *)((int64_t)pplVar12 + 0x54) = *(int *)((int64_t)pplVar12 + 0x54) + -1;
          }
          FUN_00d50b20();
        }
      }
      else {
        cVar6 = (char)local_170;
      }
      goto LAB_0125d49c;
    }
  }
  else {
    pvVar10 = _pthread_getspecific((void*)param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar25 = (double)FUN_014bb310();
    if (dVar25 < (double)local_f8._0_8_) goto LAB_0125abb5;
  }
  plVar11 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar11 + 0x18))();
  pvVar10 = _pthread_getspecific((void*)param_1);
  plVar18 = plVar11;
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar18 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar18 + 0x410))(0,0);
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific((void*)param_1);
  plVar18 = plVar11;
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar18 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar18 + 0x410))((int)*(void*)(this_ptr + 0xf0),local_f8._0_4_);
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x160) == 0) {
    local_108 = (int64_t **)CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    FUN_00d50b00();
    local_f8._0_8_ = plVar11;
  }
  else {
    FUN_00d50b00();
    uVar8 = FUN_00d50b20();
    local_1e0 = '\0';
    lVar9 = *(int64_t *)(this_ptr + 0x160);
    local_1e8 = plVar11;
    if (lVar9 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_270 = 1;
    local_278 = lVar9;
    FUN_0128f850(uVar8,&local_278);
    local_f8._0_8_ = local_138;
    param_1 = local_138;
    if (local_138 == (int64_t **)0x0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f8._8_8_;
      local_f8._0_16_ = auVar5 << 0x40;
      local_108 = (int64_t **)0x0;
    }
    else {
      local_108 = (int64_t **)CONCAT71((int7)((uint64_t)local_138 >> 8),1);
      if (local_130[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar10 = _pthread_getspecific((void*)param_1);
  pVar17 = (void*)param_1;
  if (pvVar10 == (void *)0x0) {
    pplVar12 = (int64_t **)local_f8._0_8_;
  }
  else {
    lVar9 = FUN_00e8b990();
    pplVar12 = (int64_t **)local_f8._0_8_;
    if (lVar9 != 0) {
      param_1 = (int64_t **)local_f8._0_8_;
      pplVar12 = *(int64_t ***)
                  (local_f8._0_8_ + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
    }
    pVar17 = (void*)param_1;
  }
  cVar6 = (*(*pplVar12)[0x6e])();
  if (cVar6 == '\0') {
    FUN_0128de60();
    lVar9 = *(int64_t *)(this_ptr + 0xd0);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    if (*(int64_t *)(this_ptr + 0x158) != lVar9) {
      FUN_00d64850();
      lVar1 = *(int64_t *)(this_ptr + 0x158);
      if (lVar1 != lVar9) {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x158) = lVar9;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_268 = local_f8._0_8_;
    local_260 = 0;
    FUN_01265f70();
    if (*(int64_t **)(this_ptr + 0x158) != plVar11) {
      FUN_00d64850();
      plVar18 = *(int64_t **)(this_ptr + 0x158);
      if (plVar18 != plVar11) {
        FUN_00d50b00();
        *(int64_t **)(this_ptr + 0x158) = plVar11;
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
  }
  if (local_d0 != (int64_t **)0x0) {
    pvVar10 = _pthread_getspecific(pVar17);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013defa0();
    dVar25 = (double)FUN_01264500();
    if ((*(double *)(this_ptr + 0xc0) != dVar25) ||
       (NAN(*(double *)(this_ptr + 0xc0)) || NAN(dVar25))) {
      local_c8 = (int64_t **)dVar25;
      FUN_00d64850();
      *(int64_t ***)(this_ptr + 0xc0) = local_c8;
      FUN_00d64910();
    }
  }
  if (*(double *)(this_ptr + 0xf0) < *(double *)(this_ptr + 0xc0)) {
    *(double *)(this_ptr + 0xc0) = *(double *)(this_ptr + 0xf0);
  }
  FUN_00d50b20();
  cVar6 = (char)local_170;
  local_d8 = 0.0;
  pplVar20 = (int64_t **)0x0;
  local_e0 = (int64_t **)0x0;
  local_c8 = (int64_t **)0x0;
LAB_0125d49c:
  if (local_160 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  plVar18 = local_1b0;
  if (cVar6 != '\0' && (char)local_1c4 == '\0') {
    FUN_00d50b20();
  }
  if (local_d0 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  if ((local_d8._0_1_ != '\0') && (pplVar20 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_108 != '\0') && (local_f8._0_8_ != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_c8 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_198 != '\0') && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 012912a0
// ============================================================
// Function: FUN_012912a0
// Address: 012912a0
// Size: 7923 bytes
// Class: MUAudioSourceAttackItem

double ***** FUN_012912a0(double *******param_1,int64_t *param_2,double *param_3,void *param_4)

{
  bool bVar1;
  double dVar2;
  double *******pppppppdVar3;
  double *******pppppppdVar4;
  double *******pppppppdVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int64_t lVar9;
  void *pvVar10;
  double *******pppppppdVar11;
  double *******pppppppdVar12;
  int64_t lVar13;
  double *******pppppppdVar14;
  double *******pppppppdVar15;
  undefined7 uVar16;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int iVar17;
  void* pVar18;
  double ******ppppppdVar19;
  double *******pppppppdVar20;
  char unaff_SIL;
  int iVar21;
  int64_t *this_ptr;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  uint64_t uVar26;
  bool bVar27;
  float fVar28;
  double dVar29;
  double *****pppppdVar30;
  double dVar31;
  uint64_t uVar32;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int *in_stack_fffffffffffffeb8;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  double *****local_e0;
  double *******local_d8;
  double ******local_b0;
  char local_a8;
  double local_a0;
  double *******local_98;
  double *******local_90;
  double *******local_88;
  double *******local_78;
  char local_70;
  double *******local_68;
  double ******local_60;
  double *******local_58;
  uint64_t local_50;
  int local_48;
  double *******local_40;
  double *******local_38;
  
  local_90 = (double *******)param_3;
  local_38 = param_1;
  FUN_00c8e690();
  pppppppdVar3 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (double *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  pppppppdVar4 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (double *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  pppppppdVar5 = local_68;
  if (((char)local_60 == '\0') && (local_68 != (double *******)0x0)) {
    FUN_00d50b00();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_004f2260(0);
  pppppppdVar12 = local_68;
  pppppppdVar20 = (double *******)*this_ptr;
  if (pppppppdVar20 == local_68) {
    if (((char)this_ptr[1] != '\0') || (local_68 == (double *******)0x0)) goto LAB_012914cd;
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      goto LAB_012914c4;
    }
LAB_01291489:
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar9 = this_ptr[1];
    if ((char)local_60 != '\0') {
      *this_ptr = (int64_t)local_68;
      if (((char)lVar9 != '\0') && (pppppppdVar20 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01291489;
    }
    if (local_68 != (double *******)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = (int64_t)pppppppdVar12;
    if (((char)lVar9 != '\0') && (pppppppdVar20 != (double *******)0x0)) {
      FUN_00d50b20();
    }
LAB_012914c4:
    *(void*)(this_ptr + 1) = 1;
LAB_012914cd:
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((double *******)*this_ptr != (double *******)0x0) {
    local_60 = (double ******)((uint64_t)local_60 & 0xffffffffffffff00);
    local_68 = (double *******)0x0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    local_58 = (double *******)*this_ptr;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if ((int)local_50._4_4_ < 1) {
          iVar21 = -local_50._4_4_;
        }
        else {
          iVar21 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar21);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar21 = 0;
        }
        local_50 = CONCAT44(iVar21,(int)local_50);
      }
      lVar9 = (int64_t)(int)local_50;
      iVar21 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar21);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar21) break;
      ppppppdVar19 = local_58[2];
      local_68 = (double *******)ppppppdVar19[lVar9 + 1];
      pvVar10 = _pthread_getspecific((void*)ppppppdVar19);
      pVar18 = (void*)ppppppdVar19;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pppppppdVar20 = local_78;
      if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      pppppppdVar12 = local_68;
      if (pppppppdVar20 != (double *******)0x0) {
        pvVar10 = _pthread_getspecific(pVar18);
        pppppppdVar20 = local_68;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar12 = pppppppdVar20, lVar9 != 0)) {
          pppppppdVar12 =
               (double *******)pppppppdVar20[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        local_98 = (double *******)((double)pppppppdVar12[0x1d] + (double)pppppppdVar12[0x17]);
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013de8d0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013def20();
        local_40 = (double *******)FUN_0128e2f0();
        if ((local_a8 != '\0') && (CONCAT71(local_b0._1_7_,(char)local_b0) != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        pppppppdVar20 = local_68;
        pppppdVar30 = (double *****)((double)local_98 - (dVar29 + (double)local_40));
        local_98 = (double *******)pppppdVar30;
        if (unaff_SIL != '\0') {
          pvVar10 = _pthread_getspecific(pVar18);
          pppppppdVar12 = local_68;
          if ((pvVar10 != (void *)0x0) &&
             (lVar9 = FUN_00e8b990(), pppppppdVar20 = pppppppdVar12, lVar9 != 0)) {
            pppppppdVar20 =
                 (double *******)pppppppdVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          pppppdVar30 = (double *****)((double)local_98 - (double)pppppppdVar20[0x36]);
        }
        pppppppdVar20 = local_68;
        lVar9 = (int64_t)local_48 + (int64_t)(int)local_50;
        pppppppdVar3[2][lVar9] = pppppdVar30;
        pvVar10 = _pthread_getspecific((void*)lVar9);
        pppppppdVar12 = local_68;
        pVar18 = (void*)lVar9;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar20 = pppppppdVar12, lVar9 != 0)) {
          pppppppdVar20 =
               (double *******)pppppppdVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        local_98 = (double *******)pppppppdVar20[0x1e];
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific(pVar18);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013de9b0();
        pppppppdVar4[2][(int64_t)local_48 + (int64_t)(int)local_50] =
             (double *****)((double)local_98 / dVar29);
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
  }
  if (*(int *)(pppppppdVar3 + 3) + 7U < 0xf) {
    if (local_90 != (double *******)0x0) {
      *local_90 = (double ******)0x3ff0000000000000;
    }
    local_e0 = (double *****)0x0;
    if (local_38 != (double *******)0x0) {
      *local_38 = (double ******)0x0;
    }
    goto LAB_012931b6;
  }
  local_78 = pppppppdVar3;
  local_70 = '\0';
  FUN_00c8e4f0();
  pppppppdVar20 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (double *******)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = (double ******)((uint64_t)local_60 & 0xffffffffffffff00);
  }
  if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_68 = (double *******)0x0;
  local_60 = (double ******)FUN_00e8b590;
  _qsort_r(&local_68,8,0x1708ec0,param_4,in_stack_fffffffffffffeb8);
  iVar21 = *(int *)(pppppppdVar20 + 3);
  iVar17 = iVar21 + 0xf;
  if (-1 < iVar21) {
    iVar17 = iVar21;
  }
  iVar21 = *(int *)(pppppppdVar3 + 3);
  iVar6 = iVar21 + 7;
  if (-1 < iVar21) {
    iVar6 = iVar21;
  }
  local_e0 = pppppppdVar20[2][iVar17 >> 4];
  local_d8 = (double *******)0x0;
  lVar9 = 0;
  do {
    if (iVar6 >> 3 <= (int)lVar9) goto LAB_01291a81;
    ppppppdVar19 = pppppppdVar3[2] + lVar9;
    lVar9 = lVar9 + 1;
  } while (((double)*ppppppdVar19 != (double)local_e0) ||
          (NAN((double)*ppppppdVar19) || NAN((double)local_e0)));
  local_d8 = *(double ********)(*(int64_t *)(*this_ptr + 0x10) + -8 + lVar9 * 8);
LAB_01291a81:
  dVar29 = 0.0;
  if (pppppppdVar4 != (double *******)0x0) {
    iVar21 = *(int *)(pppppppdVar4 + 3);
    iVar17 = iVar21 + 7;
    if (-1 < iVar21) {
      iVar17 = iVar21;
    }
    if (7 < iVar21) {
      uVar7 = iVar17 >> 3;
      ppppppdVar19 = pppppppdVar4[2];
      if (uVar7 - 1 < 7) {
        dVar29 = 0.0;
        uVar26 = 0;
      }
      else {
        dVar29 = 0.0;
        uVar26 = 0;
        do {
          dVar29 = dVar29 + (double)ppppppdVar19[uVar26] + (double)ppppppdVar19[uVar26 + 1] +
                   (double)ppppppdVar19[uVar26 + 2] + (double)ppppppdVar19[uVar26 + 3] +
                   (double)ppppppdVar19[uVar26 + 4] + (double)ppppppdVar19[uVar26 + 5] +
                   (double)ppppppdVar19[uVar26 + 6] + (double)ppppppdVar19[uVar26 + 7];
          uVar26 = uVar26 + 8;
        } while ((uVar7 & 0xfffffff8) != (uint)uVar26);
      }
      if ((uVar7 & 7) != 0) {
        lVar9 = 0;
        do {
          dVar29 = dVar29 + (double)ppppppdVar19[(uVar26 & 0xffffffff) + lVar9];
          lVar9 = lVar9 + 1;
        } while ((uVar7 & 7) != (uint)lVar9);
      }
    }
  }
  uVar7 = *(uint *)(pppppppdVar4 + 3);
  dVar2 = g_0238fee8;
  if (0xe < uVar7 + 7) {
    uVar8 = uVar7 + 7;
    if (-1 < (int)uVar7) {
      uVar8 = uVar7;
    }
    dVar2 = dVar29 / (double)((int)uVar8 >> 3);
  }
  if (local_90 != (double *******)0x0) {
    *local_90 = (double ******)dVar2;
  }
  pppppppdVar12 = local_38;
  if (local_38 != (double *******)0x0) {
    pvVar10 = _pthread_getspecific((void*)local_38);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    *local_38 = (double ******)((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x17]);
  }
  pVar18 = (void*)pppppppdVar12;
  if (param_2 != (int64_t *)0x0) {
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    pppppppdVar12 = (double *******)0x0;
    FUN_004f2260(0,FUN_012730d0);
    local_98 = local_68;
    if ((char)local_60 == '\0') {
      if (local_68 != (double *******)0x0) {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = (double ******)((uint64_t)local_60 & 0xffffffffffffff00);
    }
    if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    if (local_98 != (double *******)0x0) {
      local_60 = (double ******)((uint64_t)local_60 & 0xffffffffffffff00);
      local_68 = (double *******)0x0;
      local_58 = local_98;
      local_50 = 0xffffffff;
      local_48 = 0;
      uVar7 = 0;
      while( true ) {
        if (uVar7 != 0) {
          if ((int)uVar7 < 1) {
            iVar21 = -uVar7;
          }
          else {
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar7);
            FUN_00d23690(uVar7,uVar7);
            local_48 = local_48 + local_50._4_4_;
            iVar21 = 0;
          }
          local_50 = CONCAT44(iVar21,(int)local_50);
        }
        lVar9 = (int64_t)(int)local_50;
        iVar21 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar21);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar21) break;
        ppppppdVar19 = local_58[2];
        pppppppdVar12 = (double *******)ppppppdVar19[lVar9 + 1];
        local_68 = pppppppdVar12;
        pvVar10 = _pthread_getspecific((void*)ppppppdVar19);
        pppppppdVar11 = local_68;
        pVar18 = (void*)ppppppdVar19;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar12 = pppppppdVar11, lVar9 != 0)) {
          pppppppdVar12 =
               (double *******)pppppppdVar11[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        if (pppppppdVar12[0x1b] == (double ******)0x0) {
          local_70 = '\0';
          local_78 = (double *******)0x0;
        }
        else {
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef490();
        }
        pvVar10 = _pthread_getspecific(pVar18);
        if ((pvVar10 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          if (local_d8[0x1b] == (double ******)0x0) goto LAB_01291e41;
LAB_01291e6f:
          pvVar10 = _pthread_getspecific(pVar18);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef490();
          bVar27 = local_78 == (double *******)CONCAT71(local_b0._1_7_,(char)local_b0);
          if ((local_a8 != '\0') &&
             ((double *******)CONCAT71(local_b0._1_7_,(char)local_b0) != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4][0x1b] != (double *****)0x0)
          goto LAB_01291e6f;
LAB_01291e41:
          bVar27 = local_78 == (double *******)0x0;
        }
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = local_50._4_4_;
        if (!bVar27) {
          uVar7 = ~local_50._4_4_;
          local_50 = CONCAT44(uVar7,(int)local_50);
        }
      }
      pppppppdVar12 = local_58;
      FUN_001159b0();
    }
    pppppppdVar11 = (double *******)FUN_000bea40();
    (*(*pppppppdVar11)[3])();
    local_60 = (double ******)((uint64_t)local_60 & 0xffffffffffffff00);
    local_68 = local_d8;
    local_38 = pppppppdVar11;
    iVar21 = FUN_00d237a0();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_90 = (double *******)((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x17]);
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = (double)FUN_013df0a0();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    pppppppdVar11 = local_38;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_38, lVar9 != 0))
    {
      pppppppdVar12 = local_38;
      pppppppdVar11 = (double *******)local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    (*(*pppppppdVar11)[0x82])(local_90,local_a0);
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    uVar26 = (uint64_t)(iVar21 - 1);
    local_88 = local_d8;
    do {
      pVar18 = (void*)pppppppdVar12;
      if ((int)uVar26 < 1) break;
      pppppppdVar11 = (double *******)local_98[2][uVar26];
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pppppppdVar15 = local_68;
      local_78 = (double *******)CONCAT71(local_78._1_7_,(char)local_60);
      pppppppdVar12 = (double *******)&local_78;
      pppppppdVar14 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar14 = pppppppdVar12;
      }
      *(void*)pppppppdVar14 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppppdVar15 == (double *******)0x0) {
LAB_01292340:
        bVar1 = true;
        bVar27 = true;
      }
      else {
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        pppppppdVar14 = pppppppdVar11;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pppppppdVar14 =
               (double *******)pppppppdVar11[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        local_40 = (double *******)((double)pppppppdVar14[0x1d] + (double)pppppppdVar14[0x17]);
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013df0a0();
        if (((((double)local_40 < (double)local_90) && (dVar29 < local_a0)) &&
            (dVar31 = ((double)local_40 - (double)local_90) / (dVar29 - local_a0),
            g_024119b8 <= dVar31)) && (dVar31 <= g_023b3bc0)) {
          pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
          pppppppdVar14 = local_38;
          if ((pvVar10 != (void *)0x0) &&
             (lVar9 = FUN_00e8b990(), pppppppdVar14 = local_38, lVar9 != 0)) {
            pppppppdVar12 = local_38;
            pppppppdVar14 = (double *******)local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (*(*pppppppdVar14)[0x82])(local_40,dVar29);
          if ((local_150 == '\0') || (local_158 == 0)) {
            local_90 = local_40;
            local_a0 = dVar29;
            local_88 = pppppppdVar11;
          }
          else {
            FUN_00d50b20();
            local_90 = local_40;
            local_a0 = dVar29;
            local_88 = pppppppdVar11;
          }
        }
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013de8d0();
        if ((dVar29 != g_02390448) || (NAN(dVar29) || NAN(g_02390448))) goto LAB_01292340;
        bVar1 = false;
        bVar27 = false;
      }
      if (((char)local_78 != '\0') && (bVar27 = bVar1, pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      pVar18 = (void*)pppppppdVar12;
      uVar26 = uVar26 - 1;
    } while (bVar27);
    pvVar10 = _pthread_getspecific(pVar18);
    pppppppdVar12 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar12 = (double *******)local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_90 = (double *******)((double)pppppppdVar12[0x1d] + (double)pppppppdVar12[0x17]);
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    pvVar10 = _pthread_getspecific(pVar18);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = (double)FUN_013df0a0();
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = (int64_t)(iVar21 + 1);
    do {
      pppppppdVar12 = local_98;
      if (*(int *)((int64_t)local_98 + 0xc) <= lVar9) break;
      pppppppdVar11 = (double *******)local_98[2][lVar9];
      pvVar10 = _pthread_getspecific((void*)local_98);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pppppppdVar15 = local_68;
      local_b0._0_1_ = (char)local_60;
      pppppppdVar12 = &local_b0;
      pppppppdVar14 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar14 = pppppppdVar12;
      }
      *(void*)pppppppdVar14 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppppdVar15 == (double *******)0x0) {
LAB_012927e0:
        bVar1 = true;
        bVar27 = true;
      }
      else {
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        pppppppdVar14 = pppppppdVar11;
        if ((pvVar10 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pppppppdVar14 =
               (double *******)pppppppdVar11[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        local_40 = (double *******)((double)pppppppdVar14[0x1d] + (double)pppppppdVar14[0x17]);
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar29 = (double)FUN_013df0a0();
        if (((((double)local_90 < (double)local_40) && (local_a0 < dVar29)) &&
            (dVar31 = ((double)local_40 - (double)local_90) / (dVar29 - local_a0),
            g_024119b8 <= dVar31)) && (dVar31 <= g_023b3bc0)) {
          pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
          pppppppdVar14 = local_38;
          if ((pvVar10 != (void *)0x0) &&
             (lVar13 = FUN_00e8b990(), pppppppdVar14 = local_38, lVar13 != 0)) {
            pppppppdVar12 = local_38;
            pppppppdVar14 = (double *******)local_38[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4]
            ;
          }
          (*(*pppppppdVar14)[0x82])(local_40,dVar29);
          local_d8 = pppppppdVar11;
          if ((local_140 == '\0') || (in_stack_fffffffffffffeb8 == (int *)0x0)) {
            local_90 = local_40;
            local_a0 = dVar29;
          }
          else {
            FUN_00d50b20();
            local_90 = local_40;
            local_a0 = dVar29;
          }
        }
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = (double *******)FUN_013dea30();
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df480();
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        pppppppdVar11 = local_68;
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        pppppppdVar14 = local_68;
        if ((pvVar10 != (void *)0x0) &&
           (lVar13 = FUN_00e8b990(), pppppppdVar11 = pppppppdVar14, lVar13 != 0)) {
          pppppppdVar11 =
               (double *******)pppppppdVar14[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
        dVar29 = (double)(*(*pppppppdVar11)[0x73])();
        if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        if (((double)local_40 != dVar29) || (NAN((double)local_40) || NAN(dVar29)))
        goto LAB_012927e0;
        bVar1 = false;
        bVar27 = false;
      }
      if (((char)local_b0 != '\0') && (bVar27 = bVar1, pppppppdVar15 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
    } while (bVar27);
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    pppppppdVar11 = local_88;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_88, lVar9 != 0))
    {
      pppppppdVar11 = (double *******)local_88[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      pppppppdVar12 = local_88;
    }
    local_40 = (double *******)pppppppdVar11[0x1d];
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    if ((pvVar10 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
      if ((double)local_40 < (double)local_88[0x1d] + (double)local_88[0x17]) goto LAB_012928b6;
    }
    else {
      pppppppdVar12 = local_88;
      if ((double)local_40 <
          (double)local_88[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4][0x1d] +
          (double)local_88[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4][0x17]) {
LAB_012928b6:
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        pppppppdVar11 = local_38;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_38, lVar9 != 0)) {
          pppppppdVar12 = local_38;
          pppppppdVar11 = (double *******)local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        pppppppdVar15 = local_88;
        if ((pvVar10 != (void *)0x0) &&
           (lVar9 = FUN_00e8b990(), pppppppdVar15 = local_88, lVar9 != 0)) {
          pppppppdVar15 = (double *******)local_88[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          pppppppdVar12 = local_88;
        }
        local_40 = (double *******)pppppppdVar15[0x1d];
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pppppppdVar12 = (double *******)local_88[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          local_88 = pppppppdVar12;
        }
        FUN_0125e7c0();
        pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar32 = FUN_013de8d0();
        (*(*pppppppdVar11)[0x82])(local_40,uVar32);
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    local_40 = (double *******)((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x1e]);
    pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
    pppppppdVar11 = local_d8;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    pVar18 = (void*)pppppppdVar12;
    if ((double)pppppppdVar11[0x1d] + (double)pppppppdVar11[0x17] < (double)local_40) {
      pvVar10 = _pthread_getspecific(pVar18);
      pppppppdVar11 = local_38;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar11 = local_38, lVar9 != 0)
         ) {
        pppppppdVar12 = local_38;
        pppppppdVar11 = (double *******)local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      pVar18 = (void*)pppppppdVar12;
      pvVar10 = _pthread_getspecific(pVar18);
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        local_d8 = (double *******)local_d8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      local_40 = (double *******)((double)local_d8[0x1d] + (double)local_d8[0x1e]);
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar32 = FUN_013dea30();
      (*(*pppppppdVar11)[0x82])(local_40,uVar32);
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar10 = _pthread_getspecific(pVar18);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pVar18 = (void*)local_38;
    }
    FUN_013f2b00();
    iVar21 = *(int *)((int64_t)local_68 + 0xc);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    if (iVar21 != 0) {
      if ((((dVar2 != 0.0) || (fVar28 = g_02390124, NAN(dVar2))) &&
          (fVar28 = g_02394298, dVar2 <= g_023b3bc0)) &&
         (fVar28 = g_024229e8, g_024119b8 <= dVar2)) {
        fVar28 = (float)dVar2;
      }
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      FUN_00d23310();
      pppppppdVar11 = local_68;
      local_b0._0_1_ = (char)local_60;
      pppppppdVar12 = &local_b0;
      pppppppdVar15 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar15 = pppppppdVar12;
      }
      *(void*)pppppppdVar15 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar11 != (double *******)0x0)) {
        pppppppdVar15 = (double *******)FUN_00d50b20();
      }
      if (pppppppdVar11 == (double *******)0x0) {
        bVar24 = 0;
        bVar25 = 0;
        bVar22 = 1;
        bVar23 = 1;
        local_40 = (double *******)0x0;
        pppppppdVar11 = (double *******)0x0;
      }
      else if ((char)local_b0 == '\0') {
        uVar32 = FUN_00d50b00();
        bVar24 = 1;
        bVar25 = 1;
        bVar22 = 0;
        bVar23 = 0;
        local_40 = (double *******)CONCAT71((int7)((uint64_t)uVar32 >> 8),1);
      }
      else {
        bVar22 = 0;
        bVar23 = 0;
        bVar24 = 1;
        bVar25 = 1;
        local_40 = (double *******)CONCAT71((int7)((uint64_t)pppppppdVar15 >> 8),1);
      }
      if ((local_70 != '\0') && (bVar25 = bVar24, bVar23 = bVar22, local_78 != (double *******)0x0))
      {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((void*)pppppppdVar12);
      pppppppdVar15 = local_38;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar15 = local_38, lVar9 != 0)
         ) {
        pppppppdVar12 = local_38;
        pppppppdVar15 = (double *******)local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      pVar18 = (void*)pppppppdVar12;
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = (double *******)FUN_013faed0();
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar29 = (double)FUN_013faf20();
      (*(*pppppppdVar15)[0x82])((double)local_90 - (double)fVar28,dVar29 + g_023b19a0);
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      uVar32 = FUN_00d23340();
      pppppppdVar12 = local_68;
      uVar16 = (undefined7)((uint64_t)uVar32 >> 8);
      pppppppdVar15 = &local_60;
      if ((char)local_60 == '\0') {
        pppppppdVar15 = &local_b0;
      }
      local_b0._0_1_ = (char)local_60;
      *(void*)pppppppdVar15 = 0;
      if (((char)local_60 != '\0') && (pppppppdVar12 != (double *******)0x0)) {
        FUN_00d50b20();
        uVar16 = extraout_var;
      }
      if (pppppppdVar12 == pppppppdVar11) {
        pppppppdVar14 = pppppppdVar11;
        if ((bool)(bVar23 & pppppppdVar12 != (double *******)0x0)) {
          pppppppdVar15 = (double *******)CONCAT71((int7)((uint64_t)pppppppdVar15 >> 8),1);
          local_40 = pppppppdVar15;
          if ((char)local_b0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_b0 != '\0') && (pppppppdVar12 != (double *******)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        pppppppdVar14 = pppppppdVar12;
        if ((char)local_b0 == '\0') {
          if (pppppppdVar12 != (double *******)0x0) {
            FUN_00d50b00();
            uVar16 = extraout_var_00;
          }
          if ((bool)(bVar25 & pppppppdVar11 != (double *******)0x0)) {
            uVar32 = FUN_00d50b20();
            local_40 = (double *******)CONCAT71((int7)((uint64_t)uVar32 >> 8),1);
          }
          else {
            local_40 = (double *******)CONCAT71(uVar16,1);
          }
        }
        else {
          local_40 = (double *******)CONCAT71(uVar16,1);
          if ((bool)(bVar25 & pppppppdVar11 != (double *******)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_70 != '\0') && (local_78 != (double *******)0x0)) {
        FUN_00d50b20();
      }
      pvVar10 = _pthread_getspecific((void*)pppppppdVar15);
      pppppppdVar12 = local_38;
      if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), pppppppdVar12 = local_38, lVar9 != 0)
         ) {
        pppppppdVar15 = local_38;
        pppppppdVar12 = (double *******)local_38[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      pVar18 = (void*)pppppppdVar15;
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = (double *******)FUN_013faed0();
      pvVar10 = _pthread_getspecific(pVar18);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar29 = (double)FUN_013faf20();
      (*(*pppppppdVar12)[0x82])((double)local_90 + (double)fVar28,dVar29 + g_0238fee8);
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_40 != '\0') && (pppppppdVar14 != (double *******)0x0)) {
        FUN_00d50b20();
      }
    }
    pppppppdVar12 = local_38;
    pvVar10 = _pthread_getspecific(pVar18);
    pppppppdVar11 = pppppppdVar12;
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      pppppppdVar11 = (double *******)pppppppdVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    (*(*pppppppdVar11)[0x6f])();
    pppppppdVar11 = local_68;
    if (((char)local_60 != '\0') && (local_68 != (double *******)0x0)) {
      FUN_00d50b20();
    }
    if (pppppppdVar11 == (double *******)0x0) {
      if (*param_2 != 0) {
        *param_2 = 0;
        if ((char)param_2[1] != '\0') {
          FUN_00d50b20();
        }
        *(void*)(param_2 + 1) = 0;
        pppppppdVar12 = local_38;
      }
LAB_0129318c:
      if (pppppppdVar12 != (double *******)0x0) goto LAB_01293191;
    }
    else {
      pppppppdVar11 = (double *******)*param_2;
      lVar9 = param_2[1];
      if (pppppppdVar11 != pppppppdVar12) {
        if (pppppppdVar12 != (double *******)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (int64_t)local_38;
        if (((char)lVar9 != '\0') && (pppppppdVar11 != (double *******)0x0)) {
          FUN_00d50b20();
        }
        *(void*)(param_2 + 1) = 1;
        pppppppdVar12 = local_38;
        goto LAB_0129318c;
      }
      if (((char)lVar9 != '\0') || (pppppppdVar12 == (double *******)0x0)) goto LAB_0129318c;
      FUN_00d50b00();
      *(void*)(param_2 + 1) = 1;
LAB_01293191:
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (pppppppdVar20 != (double *******)0x0) {
    FUN_00d50b20();
  }
LAB_012931b6:
  if (pppppppdVar5 != (double *******)0x0) {
    FUN_00d50b20();
  }
  if (pppppppdVar4 != (double *******)0x0) {
    FUN_00d50b20();
  }
  if (pppppppdVar3 != (double *******)0x0) {
    FUN_00d50b20();
  }
  return local_e0;
}



// ============================================================
// 013e1740
// ============================================================
// Function: FUN_013e1740
// Address: 013e1740
// Size: 3873 bytes
// Class: MUAudioSourceAttackItem

void FUN_013e1740(int64_t *param_1)

{
  float fVar1;
  bool bVar2;
  code *pcVar3;
  void*puVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  uint64_t uVar13;
  void*puVar14;
  uint64_t uVar15;
  undefined7 uVar17;
  int64_t lVar16;
  void* pVar18;
  int64_t *plVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int64_t this_ptr;
  int64_t *plVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  uint32_t uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int64_t *local_190;
  char local_188;
  void*local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  void*local_130;
  char local_128;
  void*local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int local_ec;
  int local_e8;
  int local_e4;
  uint64_t local_e0;
  int64_t local_d8;
  int64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  void*local_a0;
  uint64_t local_98;
  int64_t local_90;
  int64_t *local_88;
  int64_t local_80;
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  uint32_t uStack_64;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  uint64_t local_48;
  void*local_40;
  void*local_38;
  
  lVar11 = *(int64_t *)(this_ptr + 0x60);
  if (lVar11 == 0) {
    return;
  }
  FUN_00d50b00();
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01320d00();
  local_88 = (int64_t *)CONCAT44(uStack_64,local_68);
  if (local_60 == '\0') {
    if (local_88 == (int64_t *)0x0) goto LAB_013e266c;
    FUN_00d50b00();
    if ((local_60 != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == (int64_t *)0x0) goto LAB_013e266c;
  FUN_013de560();
  local_58 = (int64_t *)CONCAT44(uStack_64,local_68);
  if ((local_60 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = local_58;
  }
  cVar5 = FUN_014bc070();
  if ((cVar5 == '\0') && (*(int64_t *)(this_ptr + 0x50) != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_013e5500();
    local_78 = (int64_t *)CONCAT44(uStack_64,local_68);
    if (local_78 != (int64_t *)0x0) {
      local_80 = lVar11;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
      pvVar9 = _pthread_getspecific((void*)param_1);
      plVar19 = local_88;
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), plVar19 = local_88, lVar11 != 0)) {
        param_1 = local_88;
        plVar19 = (int64_t *)local_88[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      pVar18 = (void*)param_1;
      local_38 = (void*)(**(code **)(*plVar19 + 0x370))();
      local_40 = (void*)(g_023934c8 * (double)local_38);
      local_ec = FUN_00e7d850();
      local_e8 = FUN_00e7d850(SUB84(g_0240f0f8 * (double)local_38,0));
      local_e4 = FUN_00e7d850(SUB84(g_0240f100 * (double)local_38,0));
      lVar11 = FUN_013de790();
      if (*(int64_t *)(this_ptr + 0x60) == 0) {
        dVar27 = 0.0;
      }
      else {
        pvVar9 = _pthread_getspecific(pVar18);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar27 = (double)FUN_013279f0();
      }
      uVar28 = SUB84(local_40,0);
      if ((double)lVar11 * dVar27 * g_023942d0 < g_023934c8) {
        lVar11 = FUN_013de790();
        if (*(int64_t *)(this_ptr + 0x60) == 0) {
          dVar27 = 0.0;
        }
        else {
          pvVar9 = _pthread_getspecific(pVar18);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar27 = (double)FUN_013279f0();
        }
        uVar28 = SUB84((double)lVar11 * dVar27 * g_023942d0 * (double)local_38,0);
      }
      uVar6 = FUN_00e7d850(uVar28);
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_025f1800;
      puVar12[7] = 0;
      *(void*)(puVar12 + 8) = 0;
      *(void*)(puVar12 + 0xc) = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      *(void*)(puVar12 + 6) = 0;
      puVar12[9] = 0;
      puVar12[10] = 0;
      *(void*)((int64_t)puVar12 + 0x55) = 0;
      puVar12[0xd] = 0;
      puVar12[0xe] = 0;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0;
      (*g_025f1818)();
      local_a0 = puVar12;
      FUN_015c6ee0((int)local_38);
      uVar7 = *(uint *)(puVar12 + 6);
      local_d8 = (int64_t)(int)uVar7;
      plVar19 = (int64_t *)((uint64_t)(int64_t)(int)(uVar6 | uVar7) >> 0x20);
      if (plVar19 == (int64_t *)0x0) {
        uVar13 = (uint64_t)uVar6 / (uint64_t)uVar7;
        uVar21 = (uint64_t)uVar6 % (uint64_t)uVar7;
      }
      else {
        uVar13 = (int64_t)(int)uVar6 / local_d8;
        uVar21 = (int64_t)(int)uVar6 % local_d8;
      }
      uVar7 = *(uint *)((int64_t)puVar12 + 0x24);
      GNFastFourierTransformer_create(plVar19,uVar21);
      lVar11 = CONCAT44(uStack_64,local_68);
      if ((((local_60 == '\0') && (lVar11 != 0)) && (FUN_00d50b00(), local_60 != '\0')) &&
         (CONCAT44(uStack_64,local_68) != 0)) {
        FUN_00d50b20();
      }
      local_a8 = lVar11;
      local_c8 = FUN_00e83da0();
      local_c0 = FUN_00e83010();
      local_e0 = (uint64_t)uVar7;
      local_b8 = FUN_00e83010();
      local_b0 = uVar13;
      FUN_00c8e690();
      local_90 = CONCAT44(uStack_64,local_68);
      if (((local_60 == '\0') && (local_90 != 0)) &&
         ((FUN_00d50b00(), local_60 != '\0' && (CONCAT44(uStack_64,local_68) != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      uVar13 = CONCAT44(uStack_64,local_68);
      if (((local_60 == '\0') && (uVar13 != 0)) &&
         ((FUN_00d50b00(), local_60 != '\0' && (CONCAT44(uStack_64,local_68) != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      local_98 = uVar13;
      pvVar9 = _pthread_getspecific((void*)plVar19);
      plVar23 = local_58;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar23 = local_58, lVar10 != 0)) {
        plVar19 = local_58;
        plVar23 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      pVar18 = (void*)plVar19;
      local_d0 = (**(code **)(*plVar23 + 0x380))();
      pvVar9 = _pthread_getspecific(pVar18);
      plVar19 = local_58;
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar19 = local_58, lVar10 != 0)) {
        plVar19 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      lVar10 = (**(code **)(*plVar19 + 0x388))();
      puVar14 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar14 = &g_025f1488;
      *(void*)((int64_t)puVar14 + 0xc) = 0;
      *(void*)((int64_t)puVar14 + 0x14) = 0;
      *(void*)((int64_t)puVar14 + 0x1c) = 0;
      *(void*)((int64_t)puVar14 + 0x24) = 0;
      *(void*)((int64_t)puVar14 + 0x2c) = 0;
      *(void*)((int64_t)puVar14 + 0x34) = 0;
      *(void*)((int64_t)puVar14 + 0x3c) = 0;
      *(void*)((int64_t)puVar14 + 0x44) = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      pcVar3 = g_025f14a0;
      (*g_025f14a0)();
      local_190 = local_88;
      local_188 = '\0';
      local_178 = '\0';
      local_170 = 0;
      local_168 = '\0';
      local_158 = '\0';
      local_150 = 0;
      local_148 = '\0';
      local_180 = puVar12;
      local_160 = lVar11;
      local_40 = puVar14;
      FUN_015c4d90(0,local_b8,&local_190,&local_180,&local_160,local_c8,0,6,&local_150);
      uVar13 = local_e0;
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((int)local_b0 < -3) {
        uVar21 = CONCAT71((int7)(uVar13 >> 8),1);
        local_70 = 0;
        local_38 = (void*)0x0;
      }
      else {
        uVar7 = (int)local_b0 + 4;
        uVar20 = 1;
        if (1 < (int)uVar7) {
          uVar20 = (uint64_t)uVar7;
        }
        local_50 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
        uVar22 = 0;
        local_38 = (void*)0x0;
        local_70 = 0;
        do {
          local_48 = local_70;
          puVar12 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &g_025f1488;
          *(void*)((int64_t)puVar12 + 0xc) = 0;
          *(void*)((int64_t)puVar12 + 0x14) = 0;
          *(void*)((int64_t)puVar12 + 0x1c) = 0;
          *(void*)((int64_t)puVar12 + 0x24) = 0;
          *(void*)((int64_t)puVar12 + 0x2c) = 0;
          *(void*)((int64_t)puVar12 + 0x34) = 0;
          *(void*)((int64_t)puVar12 + 0x3c) = 0;
          *(void*)((int64_t)puVar12 + 0x44) = 0;
          puVar12[9] = 0;
          puVar12[10] = 0;
          uVar15 = (*pcVar3)();
          uVar21 = local_48;
          uVar17 = (undefined7)((uint64_t)uVar15 >> 8);
          if (puVar12 == local_38) {
            if ((char)local_48 == '\0') {
              local_70 = CONCAT71(uVar17,1);
              puVar12 = local_38;
            }
            else {
              FUN_00d50b20();
              local_70 = uVar21;
              puVar12 = local_38;
            }
          }
          else {
            local_70 = CONCAT71(uVar17,1);
            if (((char)local_48 != '\0') && (local_38 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          local_140 = local_88;
          local_138 = '\0';
          local_130 = local_a0;
          local_128 = '\0';
          local_120 = local_40;
          local_118 = '\0';
          local_110 = local_a8;
          local_108 = '\0';
          local_100 = 0;
          local_f8 = '\0';
          local_38 = puVar12;
          FUN_015c4d90(0,local_b8,&local_140,&local_130,&local_110,local_c8,0,0x1e,&local_100);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          puVar12 = local_40;
          if ((local_108 != '\0') && (local_110 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          puVar14 = local_38;
          lVar11 = FUN_015c6b60();
          lVar16 = FUN_015c6ba0();
          puVar4 = local_38;
          if ((int)local_e0 < 1) {
            fVar29 = 0.0;
            fVar25 = 0.0;
          }
          else {
            fVar25 = 0.0;
            uVar21 = 0;
            fVar29 = 0.0;
            if ((int)local_e0 != 1) {
              do {
                fVar26 = *(float *)(lVar16 + uVar21 * 4);
                fVar30 = g_02390124;
                if (fVar26 <= g_02390124) {
                  fVar30 = fVar26;
                }
                fVar26 = *(float *)(lVar11 + uVar21 * 4);
                fVar32 = *(float *)(lVar11 + 4 + uVar21 * 4);
                fVar1 = *(float *)(lVar16 + 4 + uVar21 * 4);
                fVar31 = g_02390124;
                if (fVar1 <= g_02390124) {
                  fVar31 = fVar1;
                }
                fVar29 = fVar29 + fVar26 + fVar32;
                fVar25 = (g_02390124 - fVar31) * fVar32 +
                         (g_02390124 - fVar30) * fVar26 + fVar25;
                uVar21 = uVar21 + 2;
              } while (((uint)uVar13 & 0xfffffffe) != uVar21);
            }
            if ((local_e0 & 1) != 0) {
              fVar26 = *(float *)(lVar11 + uVar21 * 4);
              fVar30 = *(float *)(lVar16 + uVar21 * 4);
              fVar32 = g_02390124;
              if (fVar30 <= g_02390124) {
                fVar32 = fVar30;
              }
              fVar25 = fVar25 + (g_02390124 - fVar32) * fVar26;
              fVar29 = fVar29 + fVar26;
            }
          }
          *(float *)(*(int64_t *)(local_98 + 0x10) + uVar22 * 4) = fVar29;
          *(float *)(*(int64_t *)(local_90 + 0x10) + uVar22 * 4) = fVar25;
          if (puVar12 == local_38) {
            if (((char)local_50 == '\0') && (puVar12 != (void*)0x0)) {
              uVar21 = CONCAT71((int7)((uint64_t)puVar14 >> 8),1);
              local_50 = 0;
              FUN_00d50b00();
            }
            else {
              uVar21 = local_50 & 0xffffffff;
            }
          }
          else {
            if (local_38 != (void*)0x0) {
              FUN_00d50b00();
            }
            uVar21 = local_70 & 0xffffffff;
            puVar12 = puVar4;
            if (((char)local_50 != '\0') &&
               (uVar21 = local_70 & 0xffffffff, local_40 != (void*)0x0)) {
              local_40 = puVar4;
              FUN_00d50b20();
              uVar21 = local_70 & 0xffffffff;
            }
          }
          uVar22 = uVar22 + 1;
          local_50 = uVar21 & 0xffffffff;
          local_40 = puVar12;
        } while (uVar22 != uVar20);
      }
      local_48 = local_70;
      local_50 = uVar21 & 0xffffffff;
      iVar24 = (int)local_b0;
      FUN_015b32a0(g_02391074,&local_68);
      fVar25 = (float)FUN_00e83930(g_02391090,local_68);
      iVar8 = FUN_00e7d780(fVar25 * (float)(int)local_d8);
      fVar25 = (float)(local_68 + 4);
      lVar11 = *(int64_t *)(local_98 + 0x10);
      uVar7 = (uint)(g_02390d00 + fVar25);
      if ((int)uVar7 < 1) {
        fVar29 = 0.0;
        uVar13 = local_98;
      }
      else {
        if ((uint64_t)uVar7 - 1 < 7) {
          fVar29 = 0.0;
          uVar13 = 0;
        }
        else {
          fVar29 = 0.0;
          uVar13 = 0;
          do {
            fVar29 = fVar29 + *(float *)(lVar11 + uVar13 * 4) + *(float *)(lVar11 + 4 + uVar13 * 4)
                     + *(float *)(lVar11 + 8 + uVar13 * 4) + *(float *)(lVar11 + 0xc + uVar13 * 4) +
                     *(float *)(lVar11 + 0x10 + uVar13 * 4) + *(float *)(lVar11 + 0x14 + uVar13 * 4)
                     + *(float *)(lVar11 + 0x18 + uVar13 * 4) +
                     *(float *)(lVar11 + 0x1c + uVar13 * 4);
            uVar13 = uVar13 + 8;
          } while ((uVar7 & 0xfffffff8) != uVar13);
        }
        if ((uint64_t)(uVar7 & 7) != 0) {
          lVar16 = uVar13 * 4;
          uVar13 = 0;
          do {
            fVar29 = fVar29 + *(float *)(lVar11 + lVar16 + uVar13 * 4);
            uVar13 = uVar13 + 1;
          } while ((uVar7 & 7) != uVar13);
        }
        fVar29 = fVar29 / (float)(int)uVar7;
        iVar24 = (int)local_b0;
      }
      bVar2 = iVar8 <= local_ec;
      fVar26 = *(float *)(lVar11 + (int64_t)fVar25 * 4) * g_0239011c;
      pvVar9 = _pthread_getspecific((void*)uVar13);
      if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        local_78 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      lVar11 = (**(code **)(*local_78 + 0x3a0))();
      lVar16 = (int64_t)iVar8;
      if ((lVar16 <= lVar10 / 2) &&
         (lVar11 <= local_d0 + lVar16 &&
          (fVar29 <= fVar26 && (bVar2 && fVar25 < (float)(iVar24 + 3))))) {
        iVar24 = local_e8;
        if (iVar8 < local_e8) {
          iVar24 = iVar8;
        }
        uVar13 = lVar16 - iVar24;
        lVar11 = uVar13 + (int64_t)local_e4;
        lVar16 = ~uVar13 + lVar10;
        if (lVar11 < lVar10) {
          lVar16 = (int64_t)local_e4;
        }
        pvVar9 = _pthread_getspecific((void*)lVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bad20(lVar16,(int64_t)iVar24);
        pvVar9 = _pthread_getspecific((void*)lVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bcf30();
      }
      puVar12 = local_38;
      uVar13 = local_48;
      FUN_00e83070();
      FUN_00e83070();
      FUN_00e83070();
      if (local_98 != 0) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (((char)uVar13 != '\0') && (puVar12 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_a0 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_013e266c:
  FUN_00d50b20();
  return;
}



// ============================================================
// 013dfef0
// ============================================================
// Function: FUN_013dfef0
// Address: 013dfef0
// Size: 2820 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

void FUN_013dfef0(void* param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  void* pVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t **pplVar14;
  double dVar15;
  double local_a8;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  double local_50;
  int64_t *local_48;
  char local_40;
  
  FUN_013de560();
  plVar3 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar13 = plVar3;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  cVar4 = (**(code **)(*plVar13 + 0x3c0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    cVar4 = (**(code **)(*plVar13 + 0x3c8))();
    if (cVar4 != '\0') {
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      lVar8 = (**(code **)(*plVar13 + 0x3b0))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      lVar10 = (**(code **)(*plVar13 + 0x388))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      lVar11 = (**(code **)(*plVar13 + 0x390))();
      pvVar7 = _pthread_getspecific(param_1);
      plVar13 = plVar3;
      if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
      lVar9 = (**(code **)(*plVar13 + 0x3b0))();
      local_50 = (double)lVar8 / (double)lVar10;
      if ((lVar11 < lVar9) || (g_023942d0 < local_50)) {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_0133aef0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_50 <= g_023942d0) && (*(int64_t *)(this_ptr + 0x50) == 0)) {
        pvVar7 = _pthread_getspecific(param_1);
        plVar13 = plVar3;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x380))();
        pvVar7 = _pthread_getspecific(param_1);
        plVar13 = plVar3;
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        lVar10 = (**(code **)(*plVar13 + 0x3b0))();
        local_50 = (double)(lVar10 + lVar8);
        if (unaff_SIL == '\0') {
          if (*(int64_t *)(this_ptr + 0x60) == 0) {
            dVar15 = 0.0;
          }
          else {
            pvVar7 = _pthread_getspecific(param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar15 = (double)FUN_01327990();
          }
          pVar5 = FUN_00e7d850(dVar15 * g_023944e0);
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = 0;
          FUN_00d50b00();
          local_68 = '\x01';
          param_1 = 0;
          local_70 = this_ptr;
          FUN_0135d2e0(0,&local_70);
          plVar13 = local_48;
          if (local_48 == (int64_t *)0x0) {
            bVar1 = true;
            bVar2 = false;
            plVar13 = (int64_t *)0x0;
          }
          else {
            if (local_40 == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              bVar2 = true;
              if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_013e0820;
              FUN_00d50b20();
            }
            else {
              local_40 = '\0';
            }
            bVar2 = true;
            bVar1 = false;
          }
LAB_013e0820:
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific(param_1);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            lVar8 = (**(code **)(*plVar13 + 0x3a0))();
            lVar10 = (int64_t)(int)pVar5;
            if (lVar8 <= (int64_t)local_50 + lVar10) goto LAB_013e08a4;
            param_1 = pVar5;
            if (!bVar1) {
              FUN_00d50b20();
              param_1 = (void*)lVar10;
            }
          }
        }
        else {
          if (*(int64_t *)(this_ptr + 0x60) == 0) {
            local_a8 = 0.0;
          }
          else {
            pvVar7 = _pthread_getspecific(param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_a8 = (double)FUN_01327990();
          }
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_50 = (double)(int64_t)local_50 / local_a8 + g_023b67d8;
          FUN_013671d0(g_0240d788 + local_50,g_0240d790 + local_50);
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          pVar5 = 0;
          FUN_01364d50(local_50,0);
          param_1 = pVar5;
          if (local_48 != (int64_t *)0x0) {
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = true;
LAB_013e08a4:
            pvVar7 = _pthread_getspecific(pVar5);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_58 = 0;
            FUN_00d50b00();
            local_58 = '\x01';
            local_60 = this_ptr;
            FUN_0135d2a0();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            param_1 = pVar5;
            if (bVar2) {
              FUN_00d50b20();
              param_1 = pVar5;
            }
          }
        }
      }
    }
  }
  else {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50b00();
    FUN_0133aef0();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar13 = plVar3;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  cVar4 = (**(code **)(*plVar13 + 0x3c0))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    lVar8 = (**(code **)(*plVar13 + 0x3b0))();
    if (lVar8 < 1) goto LAB_013e0269;
    pvVar7 = _pthread_getspecific(param_1);
    plVar13 = plVar3;
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      plVar13 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    lVar8 = (**(code **)(*plVar13 + 0x3b0))();
  }
  else {
LAB_013e0269:
    lVar8 = 0;
  }
  if (*(int64_t *)(this_ptr + 0x50) == 0) goto LAB_013e03fb;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  pplVar14 = &local_48;
  FUN_013dd6a0();
  plVar13 = local_48;
  if ((g_02790f20 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (int64_t *)0x0) {
LAB_013e030e:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_013e030e;
  }
  plVar13 = *pplVar14;
  if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar14 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    plVar12 = plVar13;
    if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar12 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    }
    lVar10 = (**(code **)(*plVar12 + 0x3a0))();
    lVar11 = FUN_013de650();
    if (lVar8 < lVar10 - lVar11) {
      pvVar7 = _pthread_getspecific(param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar13 + 0x3a0))();
      FUN_013de650();
    }
    FUN_00d50b20();
  }
LAB_013e03fb:
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bcf30();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_01334f30();
  if (cVar4 != '\0') {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bd190();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0128e760
// ============================================================
// Function: FUN_0128e760
// Address: 0128e760
// Size: 1870 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

double FUN_0128e760(void* param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t **pplVar10;
  int iVar11;
  int64_t this_ptr;
  int64_t *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  int64_t *local_60;
  char local_58;
  int64_t **local_50;
  uint64_t local_48;
  int local_40;
  
  if (*(int64_t ***)(this_ptr + 0xe0) == (int64_t **)0x0) {
    local_68 = 0;
    plVar9 = (int64_t *)0x0;
  }
  else {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_68 = 0;
    local_50 = *(int64_t ***)(this_ptr + 0xe0);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar11 = -local_48._4_4_;
        }
        else {
          iVar11 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar11);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(int)local_48);
      }
      lVar4 = (int64_t)(int)local_48;
      iVar11 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar11);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar11) break;
      plVar9 = local_50[2];
      local_60 = (int64_t *)plVar9[lVar4 + 1];
      pvVar5 = _pthread_getspecific((void*)plVar9);
      pVar8 = (void*)plVar9;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar9 = local_78;
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        plVar9 = local_78;
        uVar6 = 0;
        if ((g_02790f20 == '\0') && (uVar6 = ___cxa_guard_acquire(), (int)uVar6 != 0)) {
          g_0272f7c8 = FUN_007ef2d0();
          g_0272f7b0 = "MUAudioSourceAttackItem";
          g_0272f7b8 = 0xe8;
          g_0272f7c0 = FUN_007ef270;
          g_0272f7d0 = 0;
          ram_000000000272f7d8 = 0;
          g_0272f7e0 = 0;
          ram_000000000272f7e8 = 0;
          g_0272f7f0 = 0;
          ram_000000000272f7f8 = 0;
          g_0272f800 = 0;
          ram_000000000272f808 = 0;
          g_0272f810 = 0;
          ram_000000000272f818 = 0;
          g_0272f820 = 0;
          ram_000000000272f828 = 0;
          g_0272f830 = 0;
          ram_000000000272f838 = 0;
          g_0272f840 = 0;
          ram_000000000272f848 = 0;
          g_0272f850 = 0;
          ram_000000000272f858 = 0;
          g_0272f860 = 0;
          ram_000000000272f868 = 0;
          g_0272f870 = 0;
          uVar6 = ___cxa_guard_release();
        }
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          uVar6 = FUN_00e85ea0();
          pplVar10 = &local_78;
          if ((char)uVar6 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = *pplVar10;
        if (plVar9 == (int64_t *)0x0) {
          plVar9 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            uVar6 = FUN_00d50b00();
          }
          else {
            *(void*)(pplVar10 + 1) = 0;
          }
          local_68 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) goto LAB_0128ea56;
      }
    }
    plVar9 = (int64_t *)0x0;
    pplVar10 = local_50;
LAB_0128ea56:
    param_1 = (void*)pplVar10;
    FUN_0015edf0();
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0128eab0;
    }
LAB_0128eb39:
    bVar2 = true;
    bVar1 = true;
    dVar15 = g_023908c8;
joined_r0x0128ec0f:
    if (plVar9 != (int64_t *)0x0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_014bb4b0();
      bVar1 = bVar2;
    }
    if (bVar1) goto LAB_0128ee8b;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_0128eb39;
LAB_0128eab0:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    plVar3 = local_60;
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      bVar2 = false;
      bVar1 = false;
      dVar15 = g_023908c8;
      goto joined_r0x0128ec0f;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    plVar3 = local_60;
    if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) && (FUN_00d50b00(), local_58 != '\0')
        ) && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_014bd180();
    dVar15 = g_023908c8;
    if (0 < lVar4) {
      pvVar5 = _pthread_getspecific(param_1);
      plVar12 = plVar3;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar12 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      lVar7 = (**(code **)(*plVar12 + 0x380))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013df730();
      dVar15 = (double)(lVar7 + lVar4) / dVar15;
      if (plVar9 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_014bacf0();
        if (dVar15 < dVar13) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_014bacf0();
        }
      }
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (NAN(dVar15)) {
      bVar2 = false;
      bVar1 = false;
      goto joined_r0x0128ec0f;
    }
  }
  if (!NAN(dVar15)) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_013de8d0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar14 = (double)FUN_013de9b0();
    if (g_023942d0 < (dVar15 - dVar13) / dVar14) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013de9b0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_013de8d0();
      dVar15 = dVar13 * g_023942d0 + dVar15;
    }
  }
  FUN_00d50b20();
LAB_0128ee8b:
  if (((char)local_68 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return dVar15;
}



// ============================================================
// 007ee1b0
// ============================================================
// Function: FUN_007ee1b0
// Address: 007ee1b0
// Size: 1577 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

uint64_t FUN_007ee1b0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t **pplVar9;
  int iVar10;
  int64_t *plVar11;
  uint32_t uVar12;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar12 = FUN_007ec8d0();
  lVar5 = local_70;
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_007ee80d;
    uVar12 = FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_007ee80d;
  local_68 = '\0';
  local_70 = 0;
  local_60 = lVar5;
  local_58 = 0xffffffff;
  local_50 = 0;
  iVar10 = 0;
  while( true ) {
    if (iVar10 != 0) {
      if (iVar10 < 1) {
        iVar10 = -iVar10;
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar10);
        FUN_00d23690(uVar12,iVar10);
        local_50 = local_50 + iVar10;
        iVar10 = 0;
      }
      local_58 = CONCAT44(iVar10,(int)local_58);
    }
    lVar5 = (int64_t)(int)local_58;
    iVar10 = (int)local_58 + 1;
    local_58 = CONCAT44(local_58._4_4_,iVar10);
    if (*(int *)(local_60 + 0xc) <= iVar10) break;
    lVar8 = *(int64_t *)(local_60 + 0x10);
    local_70 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((void*)lVar8);
    pVar7 = (void*)lVar8;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    plVar3 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_48 = plVar3;
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    plVar3 = local_40;
    if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_007ee400;
      }
LAB_007ee4b0:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = plVar3;
      local_98 = '\0';
      pVar7 = 0;
      uVar12 = FUN_0135d2e0(0,&local_a0);
      plVar11 = local_40;
      if (local_40 == (int64_t *)0x0) {
        bVar2 = false;
        plVar11 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        uVar12 = FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      bVar1 = true;
      if (plVar11 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_88 = '\0';
        local_80 = plVar3;
        local_78 = '\0';
        local_90 = plVar11;
        uVar12 = FUN_01367c80();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          uVar12 = FUN_00d50b20();
        }
        goto LAB_007ee700;
      }
      plVar11 = (int64_t *)0x0;
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_007ee4b0;
LAB_007ee400:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd6a0();
      plVar11 = local_40;
      if ((g_02790f20 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        g_0272f7c8 = FUN_007ef2d0();
        g_0272f7b0 = "MUAudioSourceAttackItem";
        g_0272f7b8 = 0xe8;
        g_0272f7c0 = FUN_007ef270;
        g_0272f7d0 = 0;
        ram_000000000272f7d8 = 0;
        g_0272f7e0 = 0;
        ram_000000000272f7e8 = 0;
        g_0272f7f0 = 0;
        ram_000000000272f7f8 = 0;
        g_0272f800 = 0;
        ram_000000000272f808 = 0;
        g_0272f810 = 0;
        ram_000000000272f818 = 0;
        g_0272f820 = 0;
        ram_000000000272f828 = 0;
        g_0272f830 = 0;
        ram_000000000272f838 = 0;
        g_0272f840 = 0;
        ram_000000000272f848 = 0;
        g_0272f850 = 0;
        ram_000000000272f858 = 0;
        g_0272f860 = 0;
        ram_000000000272f868 = 0;
        g_0272f870 = 0;
        ___cxa_guard_release();
      }
      pplVar9 = (int64_t **)&g_02802688;
      if (plVar11 != (int64_t *)0x0) {
        (**(code **)(*plVar11 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar9 = &local_40;
        if (cVar4 == '\0') {
          pplVar9 = (int64_t **)&g_02802688;
        }
      }
      plVar11 = *pplVar9;
      if (plVar11 == (int64_t *)0x0) {
        plVar11 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        if (*(char *)(pplVar9 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar9 + 1) = 0;
        }
        bVar2 = true;
      }
      pVar7 = (void*)pplVar9;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01367c80();
      bVar1 = false;
LAB_007ee700:
      if (!bVar1) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((bVar2) && (plVar11 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_48;
    if (plVar3 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    iVar10 = local_58._4_4_;
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_007ee80d:
  FUN_007ebe20();
  return 1;
}



// ============================================================
// 0128f850
// ============================================================
// Function: FUN_0128f850
// Address: 0128f850
// Size: 1936 bytes
// Class: MUAudioSourceAttackItem

int64_t * FUN_0128f850(int64_t *param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t local_b8;
  char local_b0;
  uint32_t local_98;
  uint32_t uStack_94;
  char local_90;
  int64_t *local_60;
  char local_58;
  void* local_48;
  
  plVar2 = local_60;
  plVar6 = (int64_t *)*param_2;
  if (plVar6 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = *arg1;
    if ((char)arg1[1] != '\0') {
      *this_ptr = lVar4;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      return this_ptr;
    }
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar4;
    *(void*)(this_ptr + 1) = 1;
    return this_ptr;
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*param_2;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)*arg1;
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    plVar6 = (int64_t *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar6 + 0x3f8))();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_90 != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb6d0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb4a0();
  pvVar3 = _pthread_getspecific((void*)param_1);
  plVar6 = local_60;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  bVar9 = local_60 == (int64_t *)0x0;
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      bVar10 = true;
      goto LAB_0128fd8c;
    }
    FUN_00d50b00();
  }
  bVar10 = local_60 == (int64_t *)0x0;
  if ((local_60 != (int64_t *)0x0) && (local_60 != (int64_t *)0x0)) {
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    while( true ) {
      lVar4 = (int64_t)(int)local_48;
      local_48 = local_48 + 1;
      uVar1 = *(uint *)((int64_t)plVar2 + 0xc);
      param_1 = (int64_t *)(uint64_t)uVar1;
      if ((int)uVar1 <= (int)local_48) break;
      local_60 = *(int64_t **)(plVar2[2] + 8 + lVar4 * 8);
      if ((local_48 != 0) && (pVar5 = uVar1 - 1, local_48 != pVar5)) {
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar3 = _pthread_getspecific(pVar5);
        plVar6 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar3 = _pthread_getspecific(pVar5);
        plVar7 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar7 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        uVar12 = (**(code **)(*plVar7 + 0x380))(uVar11);
        (**(code **)(*plVar6 + 0x410))(uVar12,uVar11);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
    bVar10 = false;
    bVar9 = false;
  }
LAB_0128fd8c:
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)param_1);
  plVar6 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x378))();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != (int64_t *)0x0) {
    for (iVar8 = 0; iVar8 < *(int *)((int64_t)local_60 + 0xc); iVar8 = iVar8 + 1) {
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      plVar6 = plVar2;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = plVar2;
        plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      pvVar3 = _pthread_getspecific((void*)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faf20();
      (**(code **)(*plVar6 + 0x3b8))();
      FUN_013faee0();
    }
    FUN_01a81420();
  }
  *this_ptr = (int64_t)plVar2;
  *(void*)(this_ptr + 1) = 1;
  if (local_60 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (!bVar10) {
    FUN_00d50b20();
  }
  if (!bVar9) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0128f040
// ============================================================
// Function: FUN_0128f040
// Address: 0128f040
// Size: 1669 bytes
// Class: MUAudioSourceAttackItem

double FUN_0128f040(void* param_1)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  double local_68;
  double local_58;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  FUN_0125e7c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_0128e760();
  if (NAN(dVar6)) {
    if (local_40 == 0) {
      return *(double *)(this_ptr + 0x150);
    }
    dVar6 = *(double *)(this_ptr + 0xf0);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_013de9b0();
    dVar6 = dVar6 / dVar7;
    local_68 = dVar6;
    if (*(int64_t *)(this_ptr + 0xa8) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (*(int64_t *)(this_ptr + 0xa8) == 0) {
          local_38 = '\0';
          local_40 = 0;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
        }
        pvVar2 = _pthread_getspecific(param_1);
        lVar3 = local_40;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar3 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        dVar7 = *(double *)(lVar3 + 0xf0);
        if (*(int64_t *)(this_ptr + 0xa8) == 0) {
          local_80 = '\0';
          local_88 = 0;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013de9b0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_68 = dVar7 / dVar8;
      }
    }
    dVar7 = dVar6;
    if (dVar6 < g_0238fee8) {
      dVar7 = g_0238fee8 / dVar6;
    }
    bVar1 = dVar6 < g_0238fee8 && g_0238fee8 < local_68;
    dVar8 = local_68;
    if (local_68 < g_0238fee8) {
      bVar1 = bVar1 != dVar7 < g_0238fee8;
      dVar8 = g_0238fee8 / local_68;
    }
    if (bVar1) {
      dVar6 = dVar6 * local_68;
    }
    else {
      dVar6 = (double)(~-(uint64_t)(dVar7 < dVar8) & (uint64_t)local_68 |
                      (uint64_t)dVar6 & -(uint64_t)(dVar7 < dVar8));
    }
    local_58 = (g_0238fee8 / dVar6) * *(double *)(this_ptr + 0x150);
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_013de8d0();
    local_58 = (double)FUN_0128e2f0(dVar6 - dVar7);
    dVar7 = local_58;
    if (local_40 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_014bd180();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar10._0_8_ = FUN_013de3b0();
        auVar10._8_8_ = extraout_XMM0_Qb;
        if ((!NAN((float)auVar10._0_8_)) && (!NAN(*(float *)(this_ptr + 0xf8)))) {
          auVar11._4_12_ = auVar10._4_12_;
          auVar11._0_4_ = ((float)auVar10._0_8_ - *(float *)(this_ptr + 0xf8)) * g_023941f4;
          fVar5 = (float)_exp2f(auVar11._0_8_);
          fVar12 = g_02390d2c;
          if (fVar5 <= g_02390d2c) {
            fVar12 = fVar5;
          }
          fVar5 = g_0239426c;
          if (g_0239426c <= fVar12) {
            fVar5 = fVar12;
          }
          dVar7 = (double)fVar5 * local_58;
        }
      }
    }
    dVar7 = dVar7 / *(double *)(this_ptr + 0x150);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar8 = (double)FUN_014bb4b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    dVar9 = dVar8 - dVar6;
    if (g_023944e0 <= dVar8 - dVar6) {
      dVar9 = g_023944e0;
    }
    dVar9 = *(double *)(this_ptr + 0xf0) - dVar9;
    if (dVar7 <= dVar9) {
      dVar9 = dVar7;
    }
    if (dVar9 < 0.0) {
      dVar9 = *(double *)(this_ptr + 0xf0) / g_023b3bc0;
    }
    local_58 = local_58 / dVar9;
    if (local_40 == 0) {
      return local_58;
    }
  }
  FUN_00d50b20();
  return local_58;
}



// ============================================================
// 01290750
// ============================================================
// Function: FUN_01290750
// Address: 01290750
// Size: 1585 bytes
// Class: MUAudioSourceAttackItem

void* FUN_01290750(double param_1)

{
  bool bVar1;
  void *pvVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void* in_ECX;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar9;
  double dVar10;
  double dVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  double dVar14;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_68;
  char local_60;
  int local_50;
  
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  plVar5 = (int64_t *)*arg1;
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    plVar5 = (int64_t *)*arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  pVar7 = 0;
  dVar10 = (double)(**(code **)(*plVar5 + 0x380))(param_1);
  plVar5 = (int64_t *)FUN_011114e0();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar7);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013ef430(g_02391038,g_02391038);
  if (local_68 == 0) {
    bVar1 = false;
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_50 = -1;
    bVar1 = false;
    plVar6 = (int64_t *)0x0;
    while (local_50 = local_50 + 1, local_50 < *(int *)(local_68 + 0xc)) {
      plVar8 = *(int64_t **)(local_68 + 0x10);
      pvVar2 = _pthread_getspecific((void*)plVar8);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_013faed0();
      pVar7 = (void*)plVar8;
      if (param_1 <= dVar11) {
        if (plVar6 == (int64_t *)0x0) {
          pvVar2 = _pthread_getspecific(pVar7);
          plVar6 = plVar5;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = plVar5;
            plVar6 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          pVar7 = (void*)plVar8;
          (**(code **)(*plVar6 + 0x418))(param_1,dVar10);
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          plVar6 = (int64_t *)FUN_011114e0();
          (**(code **)(*plVar6 + 0x18))();
          pvVar2 = _pthread_getspecific(pVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013ef430(g_02391038,g_02391038);
          pvVar2 = _pthread_getspecific(pVar7);
          plVar8 = plVar6;
          if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            plVar8 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar8 + 0x418))(0,0);
          bVar1 = true;
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar2 = _pthread_getspecific(pVar7);
        plVar8 = plVar6;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013faf20();
        (**(code **)(*plVar8 + 0x418))(dVar11 - param_1,dVar14 - dVar10);
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar7);
        plVar9 = plVar5;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar8 = plVar5;
          plVar9 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pVar7 = (void*)plVar8;
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar12 = FUN_013faed0();
        pvVar2 = _pthread_getspecific(pVar7);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_013faf20();
        (**(code **)(*plVar9 + 0x418))(uVar12,uVar13);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01a81420();
  }
  FUN_00d21140();
  FUN_00d21140();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 0128d130
// ============================================================
// Function: FUN_0128d130
// Address: 0128d130
// Size: 1166 bytes
// Class: MUAudioSourceAttackItem

uint32_t FUN_0128d130(void* param_1)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  bool bVar9;
  bool bVar10;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  
  FUN_0125e7c0();
  if (local_58 == 0) {
    return 0;
  }
  if (local_50 == '\0') {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = (void*)local_58;
  }
  FUN_013dfdd0();
  plVar8 = local_68;
  if (local_58 == 0) {
    bVar2 = false;
    bVar9 = false;
    bVar1 = false;
    plVar8 = (int64_t *)0x0;
    lVar5 = 0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_50 = '\0';
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_68 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      bVar1 = false;
LAB_0128d276:
      bVar9 = plVar8 != (int64_t *)0x0;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_60 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto LAB_0128d276;
      }
      bVar9 = true;
      bVar1 = true;
    }
    bVar2 = true;
    lVar5 = local_58;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar9) {
    pvVar4 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar7 + 0x440))();
    goto joined_r0x0128d540;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (void*)local_58;
  }
  FUN_013dfcb0();
  if (local_58 == lVar5) {
joined_r0x0128d4d7:
    if (lVar5 != 0) goto LAB_0128d3e0;
LAB_0128d4dd:
    bVar10 = false;
  }
  else {
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      if (local_58 != 0 && lVar5 != 0) {
        FUN_00d50b20();
        bVar2 = true;
        lVar5 = local_58;
        goto joined_r0x0128d4d7;
      }
    }
    else {
      if (local_58 != 0 && lVar5 != 0) {
        FUN_00d50b20();
      }
      local_50 = '\0';
    }
    bVar2 = true;
    lVar5 = local_58;
    if (local_58 == 0) goto LAB_0128d4dd;
LAB_0128d3e0:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_68 == plVar8) {
      bVar9 = bVar1;
      if ((!bVar1) && (local_68 != (int64_t *)0x0)) {
        bVar9 = true;
        plVar7 = plVar8;
        if (local_60 != '\0') goto LAB_0128d4b8;
        FUN_00d50b00();
        bVar9 = true;
      }
LAB_0128d4a4:
      plVar7 = plVar8;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar7 = local_68;
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar9 = true;
        if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar8 = local_68;
          goto LAB_0128d4a4;
        }
      }
      else {
        bVar9 = true;
        if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0128d4b8:
    bVar10 = plVar7 != (int64_t *)0x0;
    plVar8 = plVar7;
    bVar1 = bVar9;
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    pvVar4 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar7 + 0x440))();
  }
  else {
    uVar3 = 0;
  }
joined_r0x0128d540:
  if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar3;
}



// ============================================================
// 0128d760
// ============================================================
// Function: FUN_0128d760
// Address: 0128d760
// Size: 1173 bytes
// Class: MUAudioSourceAttackItem

uint32_t FUN_0128d760(void* param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  bool bVar9;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_38;
  
  FUN_0125e7c0();
  if (local_60 == 0) {
    return 0xffffffff;
  }
  if (local_58 == '\0') {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (void*)local_60;
  }
  FUN_013dfdd0();
  plVar7 = local_70;
  if (local_60 == 0) {
    bVar3 = false;
    local_38 = 0;
    bVar9 = false;
    bVar1 = false;
    plVar7 = (int64_t *)0x0;
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_58 = '\0';
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_70 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      bVar1 = false;
LAB_0128d8a5:
      bVar9 = plVar7 != (int64_t *)0x0;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_68 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        goto LAB_0128d8a5;
      }
      bVar9 = true;
      bVar1 = true;
    }
    bVar3 = true;
    local_38 = local_60;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = plVar7;
  bVar2 = bVar1;
  if (bVar9) {
    pvVar5 = _pthread_getspecific(param_1);
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar4 = (**(code **)(*plVar7 + 0x448))();
    goto joined_r0x0128db8b;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    param_1 = (void*)local_60;
  }
  FUN_013dfcb0();
  if (local_60 != local_38) {
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      if (local_60 == 0 || local_38 == 0) {
        bVar3 = true;
        local_38 = local_60;
      }
      else {
        FUN_00d50b20();
        bVar3 = true;
        local_38 = local_60;
      }
    }
    else {
      if (local_60 != 0 && local_38 != 0) {
        FUN_00d50b20();
      }
      local_58 = '\0';
      bVar3 = true;
      local_38 = local_60;
    }
  }
  if (local_38 == 0) {
    bVar9 = false;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_70 == plVar7) {
      if ((!bVar1) && (local_70 != (int64_t *)0x0)) {
        bVar2 = true;
        if (local_68 != '\0') goto LAB_0128db16;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_0128db02:
      plVar8 = plVar7;
      bVar2 = bVar1;
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar8 = local_70;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar7 = local_70;
          bVar1 = bVar2;
          goto LAB_0128db02;
        }
      }
      else {
        bVar2 = true;
        if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
LAB_0128db16:
    bVar9 = plVar8 != (int64_t *)0x0;
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = 0xffffffff;
  if (bVar9) {
    pvVar5 = _pthread_getspecific(param_1);
    plVar7 = plVar8;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    uVar4 = (**(code **)(*plVar7 + 0x448))();
  }
joined_r0x0128db8b:
  if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return uVar4;
}



// ============================================================
// 013e0cc0
// ============================================================
// Function: FUN_013e0cc0
// Address: 013e0cc0
// Size: 1652 bytes
// Class: MUAudioSourceAttackItem

void FUN_013e0cc0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *plVar5;
  void* pVar6;
  int64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x58) != 0) {
    FUN_00d50b00();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_013e0d63;
      }
    }
    else if (local_40 != (int64_t *)0x0) {
LAB_013e0d63:
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bbe30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328650();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc570();
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    FUN_013dfe00();
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01334f30();
  if (cVar1 == '\0') {
    return;
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  plVar5 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  cVar1 = (**(code **)(*plVar5 + 0x3c0))();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    cVar1 = (**(code **)(*plVar5 + 0x3c8))();
    if (cVar1 == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      plVar5 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      cVar1 = (**(code **)(*plVar5 + 0x3d0))();
      if (cVar1 == '\0') {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_014bc070();
        if (cVar1 == '\0') goto LAB_013e131a;
      }
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_007ef480();
  *puVar4 = &g_025fb6c8;
  pVar6 = 0x25fbb28;
  puVar4[7] = &g_025fbb28;
  (*g_025fb6e0)();
  plVar5 = (int64_t *)FUN_00115860();
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01329b30();
  FUN_013dfe00();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd650();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc440();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar6);
  plVar5 = local_40;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x380))();
  FUN_014bb250();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar6);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    local_40 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*local_40 + 0x388))();
  FUN_014bb2b0();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_013e131a:
  FUN_00d50b20();
  return;
}



// ============================================================
// 019f5e40
// ============================================================
// Function: FUN_019f5e40
// Address: 019f5e40
// Size: 803 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

uint64_t FUN_019f5e40(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  double dVar10;
  double dVar11;
  
  plVar1 = (int64_t *)*this_ptr;
  if ((g_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f5e89:
    this_ptr = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5e89;
  }
  lVar2 = *this_ptr;
  lVar4 = this_ptr[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f5ede:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5ede;
  }
  lVar3 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 == lVar3) {
    uVar9 = 0;
  }
  else if (lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    if (lVar3 == 0) {
      uVar9 = 0xffffffff;
      goto joined_r0x019f5fcd;
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_014bb640();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_014bb640();
    uVar9 = 0xffffffff;
    if (0.0 <= dVar10 - dVar11) {
      uVar9 = (uint64_t)(0.0 < dVar10 - dVar11);
    }
  }
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
joined_r0x019f5fcd:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}



// ============================================================
// 019f61e0
// ============================================================
// Function: FUN_019f61e0
// Address: 019f61e0
// Size: 778 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

uint64_t FUN_019f61e0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar10;
  float fVar11;
  
  plVar1 = (int64_t *)*this_ptr;
  if ((g_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f6229:
    this_ptr = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f6229;
  }
  lVar2 = *this_ptr;
  lVar4 = this_ptr[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_0272f7c8 = FUN_007ef2d0();
    g_0272f7b0 = "MUAudioSourceAttackItem";
    g_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    g_0272f7c0 = FUN_007ef270;
    g_0272f7d0 = 0;
    ram_000000000272f7d8 = 0;
    g_0272f7e0 = 0;
    ram_000000000272f7e8 = 0;
    g_0272f7f0 = 0;
    ram_000000000272f7f8 = 0;
    g_0272f800 = 0;
    ram_000000000272f808 = 0;
    g_0272f810 = 0;
    ram_000000000272f818 = 0;
    g_0272f820 = 0;
    ram_000000000272f828 = 0;
    g_0272f830 = 0;
    ram_000000000272f838 = 0;
    g_0272f840 = 0;
    ram_000000000272f848 = 0;
    g_0272f850 = 0;
    ram_000000000272f858 = 0;
    g_0272f860 = 0;
    ram_000000000272f868 = 0;
    g_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019f627e:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f627e;
  }
  lVar3 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 == lVar3) {
    uVar9 = 0;
  }
  else if (lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    if (lVar3 == 0) {
      uVar9 = 0xffffffff;
      goto joined_r0x019f636a;
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_014bae60();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar11 = (float)FUN_014bae60();
    uVar9 = 0xffffffff;
    if (0.0 <= fVar10 - fVar11) {
      uVar9 = (uint64_t)(0.0 < fVar10 - fVar11);
    }
  }
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
joined_r0x019f636a:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}



// ============================================================
// 012902c0
// ============================================================
// Function: FUN_012902c0
// Address: 012902c0
// Size: 885 bytes
// Class: MUAudioSourceAttackItem

void FUN_012902c0(double param_1)

{
  void *pvVar1;
  char *pcVar2;
  void* in_ECX;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int64_t local_68;
  char local_60 [16];
  uint64_t local_50;
  uint32_t local_48;
  double local_40;
  char local_38 [8];
  
  local_40 = param_1;
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  local_38[0] = local_60[0];
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar4 = (double)FUN_013faed0();
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  pcVar2 = local_60;
  if (local_60[0] == '\0') {
    pcVar2 = local_38;
  }
  local_38[0] = local_60[0];
  *pcVar2 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar5 = (double)FUN_013faf20();
  if ((local_38[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    if (0 < *(int *)(local_68 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_013faed0();
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_013faf20();
        if (iVar3 == *(int *)(local_68 + 0xc) + -1) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90(local_40);
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0(local_40);
        }
        else {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90((dVar6 * local_40) / dVar4);
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0((dVar7 * local_40) / dVar5);
        }
        iVar3 = iVar3 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar3);
      } while (iVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_01a81420();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0128de60
// ============================================================
// Function: FUN_0128de60
// Address: 0128de60
// Size: 518 bytes
// Class: MUAudioSourceAttackItem

void FUN_0128de60(void* param_1)

{
  void *pvVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_38;
  int64_t local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0xd8) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_013dd130();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0128df77;
    }
  }
  local_38 = *(void*)(this_ptr + 0xf0);
LAB_0128df77:
  plVar2 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar2;
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar4 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x410))(0,0);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar2 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar2 + 0x410))(*(void*)(this_ptr + 0xf0),local_38);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01265f70();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01102d50
// ============================================================
// Function: FUN_01102d50
// Address: 01102d50
// Size: 962 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

void FUN_01102d50(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010ff5d0();
  *this_ptr = &g_025e6260;
  this_ptr[7] = &g_025e66c0;
  this_ptr[0x19] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_01103140();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_011032b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_01103420();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272f86b == '\0') {
    FUN_01103590();
    FUN_00e87980();
  }
  FUN_01103700();
  return;
}

