// Function: FUN_01a639d0
// Address: 01a639d0
// Size: 1344 bytes
// Class: MUTool

void FUN_01a639d0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  uint uVar8;
  int64_t *plVar9;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  float fVar11;
  float fVar12;
  uint64_t uVar13;
  uint64_t in_XMM0_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint64_t uVar18;
  float fVar20;
  float fVar21;
  uint64_t in_XMM1_Qb;
  uint64_t uVar22;
  uint uVar23;
  uint8_t auVar19 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int64_t local_a0;
  char local_98;
  float local_8c;
  float local_88;
  float local_84;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  uint64_t uVar7;
  
  local_c8 = (float)param_1;
  fStack_c4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_c0 = (float)in_XMM0_Qb;
  fStack_bc = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  uVar18 = param_2;
  uVar22 = in_XMM1_Qb;
  uVar13 = (**(code **)(*this_ptr + 0x640))();
  plVar9 = local_48;
  local_a0 = g_027e1c10;
  fVar20 = (float)((uint64_t)uVar18 >> 0x20);
  uVar23 = (uint)((uint64_t)uVar22 >> 0x20);
  if (g_027e1c10 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_98 = '\x01';
  (**(code **)(*plVar9 + 0x3b0))(uVar13,&local_a0);
  local_80 = local_70;
  local_78 = 0;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_78 = '\x01';
  FUN_01d488d0();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  FUN_01a18460();
  local_38 = local_70;
  plVar9 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), plVar9 = local_38, local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  fVar21 = fVar20;
  local_8c = (float)(**(code **)(*plVar9 + 0xbd0))();
  local_88 = (float)(**(code **)(*plVar9 + 3000))();
  (**(code **)(*this_ptr + 0xb00))();
  (**(code **)(*local_38 + 0x988))();
  plVar9 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_01a63f2e;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_70 == (int64_t *)0x0) goto LAB_01a63f2e;
  local_68 = '\0';
  local_70 = (int64_t *)0x0;
  local_60 = plVar9;
  local_50 = 0;
  local_58 = 0;
  if (0 < *(int *)((int64_t)plVar9 + 0xc)) {
    auVar2._8_4_ = fStack_c0;
    auVar2._0_8_ = param_1;
    auVar2._12_4_ = fStack_bc;
    local_d8 = (float)param_2;
    fStack_d4 = (float)((uint64_t)param_2 >> 0x20);
    fStack_d0 = (float)in_XMM1_Qb;
    fStack_cc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
    fVar11 = fStack_d4 + fStack_c4 + g_02390d00;
    auVar14._0_12_ = ZEXT812(0);
    auVar14._12_4_ = 0;
    roundss(auVar14,auVar2,9);
    auVar15._4_4_ = fStack_d4 + fStack_c4;
    auVar15._0_4_ = local_d8 + local_c8;
    auVar15._8_4_ = fStack_d0 + fStack_c0;
    auVar15._12_4_ = fStack_cc + fStack_bc;
    auVar15 = roundss(ZEXT816(0),auVar15,9);
    local_84 = g_023908ec;
    if (auVar15._0_4_ <= g_023908ec) {
      local_84 = auVar15._0_4_;
    }
    uVar7 = 0;
    do {
      local_70 = *(int64_t **)(plVar9[2] + uVar7 * 8);
      pVar6 = (void*)uVar7;
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      plVar3 = local_48;
      if (local_48 != (int64_t *)0x0) {
        if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar8 = *(uint *)((int64_t)plVar3 + 0xc);
        if (0 < (int)uVar8) {
          uVar10 = 0;
          do {
            lVar1 = *(int64_t *)(plVar3[2] + uVar10 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar5 = _pthread_getspecific((void*)uVar7);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar4 = FUN_0126cd60();
            if (cVar4 == '\0') {
              pvVar5 = _pthread_getspecific((void*)uVar7);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar4 = FUN_01263cf0();
              if (cVar4 == '\0') {
                pvVar5 = _pthread_getspecific((void*)uVar7);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar12 = (float)FUN_0125a2c0();
                if (!NAN(fVar12)) {
                  fVar12 = (fVar20 - (fVar12 - local_8c) * local_88) * (fVar21 / fVar20);
                  auVar16._0_4_ = (uint)fVar12 & g_023945e0;
                  auVar16._4_4_ = (uint)fVar20 & _UNK_023945e4;
                  auVar16._8_4_ = uVar23 & _UNK_023945e8;
                  auVar16._12_4_ = uVar23 & _UNK_023945ec;
                  auVar17._4_12_ = SUB1612(auVar16 | g_023945f0,4);
                  auVar17._0_4_ = SUB164(auVar16 | g_023945f0,0) + fVar12;
                  auVar19._0_12_ = ZEXT812(0);
                  auVar19._12_4_ = 0;
                  auVar15 = roundss(auVar19,auVar17,0xb);
                  fVar12 = auVar15._0_4_ + g_02390d30;
                  if ((fStack_c4 <= fVar12) && (fVar12 <= fVar11)) {
                    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
                  }
                }
              }
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            uVar10 = uVar10 + 1;
          } while (uVar8 != uVar10);
        }
        FUN_00d50b20();
      }
      uVar8 = pVar6 + 1;
      uVar7 = (uint64_t)uVar8;
      local_58 = CONCAT44(local_58._4_4_,uVar8);
    } while ((int)uVar8 < *(int *)((int64_t)plVar9 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  if (local_38 == (int64_t *)0x0) {
    return;
  }
LAB_01a63f2e:
  FUN_00d50b20();
  return;
}

