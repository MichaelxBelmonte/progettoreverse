// Function: FUN_0127f970
// Address: 0127f970
// Size: 6814 bytes
// Class: Unknown

void FUN_0127f970(double param_1)

{
  byte bVar1;
  bool bVar2;
  double dVar3;
  int iVar4;
  uint64_t uVar5;
  undefined7 uVar14;
  double dVar6;
  int64_t lVar7;
  int64_t *plVar8;
  void *pvVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t lVar13;
  void* pVar15;
  double dVar16;
  int64_t *plVar17;
  uint64_t arg1;
  int64_t *this_ptr;
  int64_t *unaff_R12;
  int64_t *unaff_R13;
  char cVar18;
  uint uVar19;
  double dVar20;
  uint64_t uVar21;
  uint64_t in_XMM0_Qb;
  double dVar22;
  double local_108;
  int64_t *local_f8;
  char local_f0;
  int *local_e8;
  int64_t *local_d8;
  double local_c8;
  uint64_t uStack_c0;
  char local_b0;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  double local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint64_t uStack_70;
  uint64_t local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  uVar5 = FUN_01271180();
  local_90 = local_58;
  uVar14 = (undefined7)((uint64_t)uVar5 >> 8);
  if (local_58 == (int64_t *)0x0) {
    bVar1 = 1;
    local_90 = (int64_t *)0x0;
    bVar2 = false;
    dVar6 = 0.0;
  }
  else {
    if (local_50[0] == '\0') {
      uVar5 = FUN_00d50b00();
      uVar14 = (undefined7)((uint64_t)uVar5 >> 8);
    }
    bVar2 = true;
    bVar1 = 0;
    dVar6 = (double)CONCAT71(uVar14,1);
  }
  local_e8 = (int *)((int64_t)local_90 + 0xc);
  iVar4 = *(int *)((int64_t)local_90 + 0xc);
  dVar16 = 0.0;
  if (iVar4 < 1) {
    local_40 = (int64_t *)0x0;
    local_78 = (int64_t *)0x0;
    plVar12 = (int64_t *)0x0;
    plVar10 = (int64_t *)0x0;
    local_60 = 0;
    dVar16 = 0.0;
    local_48 = (int64_t *)0x0;
    local_108 = g_023b2568;
    local_d8 = (int64_t *)g_023b2568;
  }
  else {
    local_d8 = (int64_t *)g_023b2568;
    local_108 = g_023b2568;
    local_48 = (int64_t *)0x0;
    local_60 = 0;
    plVar10 = (int64_t *)0x0;
    plVar12 = (int64_t *)0x0;
    local_78 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
    do {
      lVar7 = local_90[2];
      plVar17 = *(int64_t **)(lVar7 + (int64_t)dVar16 * 8);
      local_80 = (int64_t *)dVar16;
      if (local_48 == plVar17) {
        if (((char)local_60 == '\0') && (local_48 != (int64_t *)0x0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar17 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_60 == '\0') || (local_48 == (int64_t *)0x0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          local_48 = plVar17;
        }
        else {
          local_48 = plVar17;
          uVar5 = FUN_00d50b20();
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
      }
      FUN_00d23310();
      unaff_R12 = local_58;
      local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
      plVar17 = &local_a0;
      plVar8 = (int64_t *)local_50;
      if (local_50[0] == '\0') {
        plVar8 = plVar17;
      }
      *(char *)plVar8 = '\0';
      if ((local_50[0] != '\0') && (unaff_R12 != (int64_t *)0x0)) {
        plVar8 = (int64_t *)FUN_00d50b20();
      }
      cVar18 = (char)plVar12;
      if (unaff_R12 == plVar10) {
        if ((cVar18 == '\0') && (unaff_R12 != (int64_t *)0x0)) {
          plVar17 = (int64_t *)CONCAT71((int7)((uint64_t)plVar17 >> 8),1);
          local_88 = (double)CONCAT44(local_88._4_4_,(int)plVar17);
          unaff_R12 = plVar10;
          if ((char)local_a0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a0 == '\0') || (unaff_R12 == (int64_t *)0x0)) {
          local_88 = (double)CONCAT44(local_88._4_4_,(int)plVar12);
          unaff_R12 = plVar10;
        }
        else {
          FUN_00d50b20();
          local_88 = (double)CONCAT44(local_88._4_4_,(int)plVar12);
          unaff_R12 = plVar10;
        }
      }
      else if ((char)local_a0 == '\0') {
        if (unaff_R12 != (int64_t *)0x0) {
          plVar8 = (int64_t *)FUN_00d50b00();
        }
        local_88 = (double)CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((uint64_t)plVar8 >> 8),1));
        if ((cVar18 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_88 = (double)CONCAT44(local_88._4_4_,(int)CONCAT71((int7)((uint64_t)plVar8 >> 8),1));
        if ((cVar18 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar9 = _pthread_getspecific((void*)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        if (unaff_R12[0x15] == 0) goto LAB_0127fc5b;
LAB_0127fc7f:
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar9 = _pthread_getspecific((void*)plVar17);
        if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = unaff_R12[0x15];
        }
        else {
          lVar7 = *(int64_t *)(unaff_R12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific((void*)plVar17);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_012dff70();
        plVar10 = local_58;
        if (local_58 == local_78) {
          plVar10 = local_78;
          if (((char)local_40 == '\0') && (local_58 != (int64_t *)0x0)) {
            if (local_50[0] != '\0') goto LAB_0127fd75;
            local_38 = (int64_t *)
                       CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1));
            FUN_00d50b00();
            plVar10 = local_78;
          }
          else {
            local_38 = (int64_t *)CONCAT44(local_38._4_4_,(int)local_40);
          }
joined_r0x0127fdc3:
          local_78 = plVar10;
          if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_50[0] == '\0') {
            if (local_58 != (int64_t *)0x0) {
              uVar5 = FUN_00d50b00();
            }
            local_38 = (int64_t *)
                       CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1));
            if (((char)local_40 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x0127fdc3;
          }
          if (((char)local_40 != '\0') && (local_78 != (int64_t *)0x0)) {
            uVar5 = FUN_00d50b20();
          }
LAB_0127fd75:
          local_50[0] = '\0';
          local_38 = (int64_t *)
                     CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((uint64_t)uVar5 >> 8),1));
          local_78 = plVar10;
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)plVar17);
        plVar10 = local_78;
        if ((pvVar9 != (void *)0x0) && (lVar7 = FUN_00e8b990(), plVar10 = local_78, lVar7 != 0)) {
          plVar10 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          plVar17 = local_78;
        }
        local_40 = (int64_t *)plVar10[0x1e];
        plVar12 = (int64_t *)((uint64_t)local_88 & 0xffffffff);
        pvVar9 = _pthread_getspecific((void*)plVar17);
        plVar10 = local_78;
        if (pvVar9 != (void *)0x0) {
          plVar12 = (int64_t *)((uint64_t)local_88 & 0xffffffff);
          lVar7 = FUN_00e8b990();
          plVar10 = local_78;
          if (lVar7 != 0) {
            plVar10 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
        dVar20 = (double)plVar10[0x28] + g_02391030 + g_02391030;
        dVar16 = g_0241b6a8;
        if (g_0241b6a8 <= dVar20) {
          dVar16 = dVar20;
        }
        dVar20 = (double)plVar10[0x1e];
        if (dVar16 <= (double)plVar10[0x1e]) {
          dVar20 = dVar16;
        }
        if ((double)local_40 - dVar20 < (double)local_d8) {
          local_d8 = (int64_t *)((double)local_40 - dVar20);
        }
      }
      else {
        if (*(int64_t *)(unaff_R12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8) != 0)
        goto LAB_0127fc7f;
LAB_0127fc5b:
        local_38 = (int64_t *)CONCAT44(local_38._4_4_,(int)local_40);
      }
      unaff_R13 = local_78;
      FUN_00d23340();
      plVar10 = local_58;
      local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
      plVar17 = &local_a0;
      plVar8 = (int64_t *)local_50;
      if (local_50[0] == '\0') {
        plVar8 = plVar17;
      }
      *(char *)plVar8 = '\0';
      if ((local_50[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar14 = (undefined7)((uint64_t)plVar12 >> 8);
      if (plVar10 == unaff_R12) {
        if ((local_88._0_1_ == '\0') && (plVar10 != (int64_t *)0x0)) {
          plVar12 = (int64_t *)CONCAT71(uVar14,1);
          plVar10 = unaff_R12;
          if ((char)local_a0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a0 == '\0') || (plVar10 == (int64_t *)0x0)) {
          plVar12 = (int64_t *)((uint64_t)local_88 & 0xffffffff);
          plVar10 = unaff_R12;
        }
        else {
          FUN_00d50b20();
          plVar12 = (int64_t *)((uint64_t)local_88 & 0xffffffff);
          plVar10 = unaff_R12;
        }
      }
      else if ((char)local_a0 == '\0') {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar12 = (int64_t *)CONCAT71(uVar14,1);
        if ((local_88._0_1_ != '\0') && (unaff_R12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar12 = (int64_t *)CONCAT71(uVar14,1);
        if ((local_88._0_1_ != '\0') && (unaff_R12 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar9 = _pthread_getspecific((void*)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        if (plVar10[0x14] == 0) goto LAB_0127fa80;
LAB_01280063:
        FUN_00d50b00();
        uVar5 = FUN_00d50b20();
        if (unaff_R13 == plVar10) {
          if ((((char)plVar12 == '\0') || ((char)local_38 != '\0')) ||
             (unaff_R13 == (int64_t *)0x0)) {
            local_40 = (int64_t *)((uint64_t)local_38 & 0xffffffff);
            local_78 = unaff_R13;
          }
          else {
            local_40 = (int64_t *)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
            local_38 = (int64_t *)((uint64_t)local_38 & 0xffffffff00000000);
            local_78 = unaff_R13;
            FUN_00d50b00();
          }
        }
        else {
          if (((char)plVar12 != '\0') && (plVar10 != (int64_t *)0x0)) {
            local_78 = unaff_R13;
            FUN_00d50b00();
          }
          local_78 = plVar10;
          local_40 = plVar12;
          if (((char)local_38 != '\0') && (unaff_R13 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_40 = plVar12;
          }
        }
        local_38._0_4_ = (int)local_40;
        pvVar9 = _pthread_getspecific((void*)plVar17);
        plVar8 = local_78;
        if (pvVar9 != (void *)0x0) {
          local_38._0_4_ = SUB84(local_40,0);
          lVar7 = FUN_00e8b990();
          plVar8 = local_78;
          if (lVar7 != 0) {
            plVar8 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            plVar17 = local_78;
          }
        }
        local_88 = (double)plVar8[0x1e];
        local_38 = (int64_t *)CONCAT44(local_38._4_4_,(int)local_40);
        pvVar9 = _pthread_getspecific((void*)plVar17);
        plVar17 = local_78;
        if (pvVar9 != (void *)0x0) {
          local_38 = (int64_t *)CONCAT44(local_38._4_4_,(int)local_40);
          lVar7 = FUN_00e8b990();
          plVar17 = local_78;
          if (lVar7 != 0) {
            plVar17 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
        }
        dVar20 = (double)plVar17[0x28] + g_02391030 + g_02391030;
        dVar16 = g_0241b6a8;
        if (g_0241b6a8 <= dVar20) {
          dVar16 = dVar20;
        }
        dVar20 = (double)plVar17[0x1e];
        if (dVar16 <= (double)plVar17[0x1e]) {
          dVar20 = dVar16;
        }
        unaff_R12 = plVar10;
        if (local_88 - dVar20 < local_108) {
          local_108 = local_88 - dVar20;
        }
      }
      else {
        if (*(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa0) != 0)
        goto LAB_01280063;
LAB_0127fa80:
        local_40 = (int64_t *)((uint64_t)local_38 & 0xffffffff);
        local_78 = unaff_R13;
      }
      dVar16 = (double)((int64_t)local_80 + 1);
      iVar4 = *local_e8;
    } while ((int64_t)dVar16 < (int64_t)iVar4);
  }
  dVar20 = (double)(g_023908f0 & (uint64_t)param_1);
  if (param_1 <= 0.0) {
    local_108 = (double)(g_023945b0 ^ (uint64_t)local_d8);
    uVar5 = in_XMM0_Qb;
    dVar3 = param_1;
    if ((param_1 < local_108) && (uVar5 = in_XMM0_Qb, dVar3 = param_1, dVar20 <= g_023b2c70)) {
      dVar22 = (double)(g_023945b0 ^ (uint64_t)param_1) - (double)local_d8;
      uVar5 = _UNK_023945b8;
      goto joined_r0x01280331;
    }
joined_r0x01280bbb:
    local_c8 = dVar3;
    uStack_c0 = uVar5;
    if (dVar20 <= g_023b2c70) goto joined_r0x01280c0e;
  }
  else {
    uVar5 = in_XMM0_Qb;
    dVar3 = param_1;
    if ((param_1 <= local_108) || (uVar5 = in_XMM0_Qb, dVar3 = param_1, g_023b2c70 < dVar20))
    goto joined_r0x01280bbb;
    uVar5 = 0;
    dVar22 = param_1 - local_108;
joined_r0x01280331:
    local_c8 = param_1;
    uStack_c0 = in_XMM0_Qb;
    dVar3 = local_108;
    if (dVar22 <= g_0238fee8) goto joined_r0x01280bbb;
  }
  if (0 < iVar4) {
    dVar16 = 0.0;
    do {
      lVar7 = local_90[2];
      plVar17 = *(int64_t **)(lVar7 + (int64_t)dVar16 * 8);
      local_88 = dVar16;
      if (local_48 == plVar17) {
        if (((char)local_60 == '\0') && (local_48 != (int64_t *)0x0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar17 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_60 == '\0') || (local_48 == (int64_t *)0x0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          local_48 = plVar17;
        }
        else {
          local_48 = plVar17;
          uVar5 = FUN_00d50b20();
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
      }
      FUN_00d23310();
      plVar8 = local_58;
      local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
      plVar17 = &local_a0;
      plVar11 = (int64_t *)local_50;
      if (local_50[0] == '\0') {
        plVar11 = plVar17;
      }
      *(char *)plVar11 = '\0';
      if ((local_50[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)plVar17;
      uVar14 = (undefined7)((uint64_t)unaff_R13 >> 8);
      cVar18 = (char)plVar12;
      if (plVar8 == plVar10) {
        if ((cVar18 == '\0') && (plVar8 != (int64_t *)0x0)) {
          unaff_R13 = (int64_t *)CONCAT71(uVar14,1);
          if ((char)local_a0 == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          unaff_R13 = plVar12;
          if (((char)local_a0 != '\0') && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else if ((char)local_a0 == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) goto LAB_012807a0;
        FUN_00d50b20();
        unaff_R13 = (int64_t *)CONCAT71(uVar14,1);
        plVar10 = plVar8;
      }
      else if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) {
LAB_012807a0:
        unaff_R13 = (int64_t *)CONCAT71(uVar14,1);
        plVar10 = plVar8;
      }
      else {
        FUN_00d50b20();
        unaff_R13 = (int64_t *)CONCAT71(uVar14,1);
        plVar10 = plVar8;
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = plVar10[0x15];
      }
      else {
        lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar9 = _pthread_getspecific(pVar15);
        if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar10[0x15];
        }
        else {
          lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dffb0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      unaff_R12 = local_58;
      local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
      plVar17 = &local_a0;
      plVar8 = (int64_t *)local_50;
      if (local_50[0] == '\0') {
        plVar8 = plVar17;
      }
      *(char *)plVar8 = '\0';
      if ((local_50[0] != '\0') && (unaff_R12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)plVar17;
      uVar14 = (undefined7)((uint64_t)plVar12 >> 8);
      cVar18 = (char)unaff_R13;
      if (unaff_R12 == plVar10) {
        if ((cVar18 == '\0') && (unaff_R12 != (int64_t *)0x0)) {
          plVar12 = (int64_t *)CONCAT71(uVar14,1);
          if ((char)local_a0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a0 == '\0') || (unaff_R12 == (int64_t *)0x0)) {
          plVar12 = (int64_t *)((uint64_t)unaff_R13 & 0xffffffff);
        }
        else {
          FUN_00d50b20();
          plVar12 = (int64_t *)((uint64_t)unaff_R13 & 0xffffffff);
        }
      }
      else if ((char)local_a0 == '\0') {
        if (unaff_R12 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar12 = (int64_t *)CONCAT71(uVar14,1);
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) goto LAB_012809a0;
        FUN_00d50b20();
        plVar10 = unaff_R12;
      }
      else {
        plVar12 = (int64_t *)CONCAT71(uVar14,1);
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) {
LAB_012809a0:
          plVar12 = (int64_t *)CONCAT71(uVar14,1);
          plVar10 = unaff_R12;
        }
        else {
          FUN_00d50b20();
          plVar10 = unaff_R12;
        }
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = plVar10[0x14];
      }
      else {
        lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa0);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar9 = _pthread_getspecific(pVar15);
        if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar10[0x14];
        }
        else {
          lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa0);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dffb0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      dVar16 = (double)((int64_t)local_88 + 1);
    } while ((int64_t)dVar16 < (int64_t)*local_e8);
  }
  FUN_01271180();
  plVar17 = local_58;
  uVar14 = (undefined7)((uint64_t)unaff_R12 >> 8);
  if (local_58 == local_90) {
    if ((bool)(bVar1 & local_58 != (int64_t *)0x0)) {
      unaff_R12 = (int64_t *)CONCAT71(uVar14,1);
      if (local_50[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_50[0] == '\0') || (local_58 == (int64_t *)0x0)) {
      unaff_R12 = (int64_t *)((uint64_t)dVar6 & 0xffffffff);
    }
    else {
      FUN_00d50b20();
      unaff_R12 = (int64_t *)((uint64_t)dVar6 & 0xffffffff);
    }
  }
  else if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    unaff_R12 = (int64_t *)CONCAT71(uVar14,1);
    if (!bVar2) goto LAB_01280b9a;
    local_90 = plVar17;
    FUN_00d50b20();
  }
  else {
    unaff_R12 = (int64_t *)CONCAT71(uVar14,1);
    if (bVar2) {
      FUN_00d50b20();
      local_90 = plVar17;
    }
    else {
LAB_01280b9a:
      unaff_R12 = (int64_t *)CONCAT71(uVar14,1);
      local_90 = plVar17;
    }
  }
  local_e8 = (int *)((int64_t)local_90 + 0xc);
  iVar4 = *(int *)((int64_t)local_90 + 0xc);
  dVar6 = (double)((uint64_t)unaff_R12 & 0xffffffff);
  dVar16 = dVar6;
joined_r0x01280c0e:
  if (iVar4 < 1) {
    local_80 = (int64_t *)0x0;
    local_38 = (int64_t *)0x0;
  }
  else {
    uVar21 = g_023945b0 ^ (uint64_t)local_c8;
    local_88 = 0.0;
    local_38 = (int64_t *)0x0;
    local_80 = (int64_t *)0x0;
    do {
      plVar17 = local_78;
      uVar19 = (uint)plVar12;
      local_d8 = local_80;
      if (local_38 != (int64_t *)0x0) {
        if ((char)local_80 == '\0') {
          local_d8 = (int64_t *)0x0;
        }
        else {
          local_d8 = (int64_t *)0x0;
          local_38 = (int64_t *)0x0;
          unaff_R12 = (int64_t *)((uint64_t)plVar12 & 0xffffffff);
          FUN_00d50b20();
        }
      }
      if (plVar17 != (int64_t *)0x0) {
        if ((char)local_40 == '\0') {
          local_40 = (int64_t *)0x0;
        }
        else {
          local_38 = (int64_t *)0x0;
          local_80 = local_d8;
          unaff_R12 = (int64_t *)((uint64_t)plVar12 & 0xffffffff);
          FUN_00d50b20();
          local_40 = (int64_t *)0x0;
        }
      }
      lVar7 = local_90[2];
      plVar17 = *(int64_t **)(lVar7 + (int64_t)local_88 * 8);
      if (local_48 == plVar17) {
        if (((char)local_60 == '\0') && (local_48 != (int64_t *)0x0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          unaff_R12 = (int64_t *)0x0;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar17 != (int64_t *)0x0) {
          unaff_R12 = (int64_t *)(local_60 & 0xffffffff);
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_60 == '\0') || (local_48 == (int64_t *)0x0)) {
          local_60 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          local_48 = plVar17;
        }
        else {
          unaff_R12 = (int64_t *)(local_60 & 0xffffffff);
          local_48 = plVar17;
          uVar5 = FUN_00d50b20();
          local_60 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
      }
      FUN_00d23310();
      plVar8 = local_58;
      local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
      plVar17 = &local_a0;
      plVar11 = (int64_t *)local_50;
      if (local_50[0] == '\0') {
        plVar11 = plVar17;
      }
      *(char *)plVar11 = '\0';
      if ((local_50[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)plVar17;
      uVar14 = (undefined7)((uint64_t)unaff_R12 >> 8);
      cVar18 = (char)plVar12;
      if (plVar8 == plVar10) {
        if ((cVar18 == '\0') && (plVar8 != (int64_t *)0x0)) {
          uVar19 = (uint)CONCAT71(uVar14,1);
          if ((char)local_a0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a0 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if ((char)local_a0 == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar19 = (uint)CONCAT71(uVar14,1);
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) goto LAB_01280e70;
        FUN_00d50b20();
        plVar10 = plVar8;
      }
      else {
        uVar19 = (uint)CONCAT71(uVar14,1);
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) {
LAB_01280e70:
          uVar19 = (uint)CONCAT71(uVar14,1);
          plVar10 = plVar8;
        }
        else {
          FUN_00d50b20();
          plVar10 = plVar8;
        }
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        if (plVar10[0x15] == 0) goto LAB_01280ecb;
LAB_01280eff:
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar9 = _pthread_getspecific(pVar15);
        if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar10[0x15];
        }
        else {
          lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        plVar17 = local_58;
        if (local_58 == (int64_t *)0x0) {
          plVar17 = (int64_t *)0x0;
        }
        else {
          uVar14 = (undefined7)((uint64_t)plVar12 >> 8);
          if (local_50[0] == '\0') {
            FUN_00d50b00();
            local_d8 = (int64_t *)CONCAT71(uVar14,1);
            if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50[0] = '\0';
            local_d8 = (int64_t *)CONCAT71(uVar14,1);
          }
        }
        local_80 = local_d8;
        local_38 = plVar17;
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012756a0(local_c8);
      }
      else {
        if (*(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa8) != 0)
        goto LAB_01280eff;
LAB_01280ecb:
        local_80 = local_d8;
        local_38 = (int64_t *)0x0;
        local_d8 = plVar12;
      }
      FUN_00d23340();
      plVar8 = local_58;
      local_a0 = CONCAT71(local_a0._1_7_,local_50[0]);
      plVar17 = &local_a0;
      plVar12 = (int64_t *)local_50;
      if (local_50[0] == '\0') {
        plVar12 = plVar17;
      }
      *(char *)plVar12 = '\0';
      if ((local_50[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar14 = (undefined7)((uint64_t)local_d8 >> 8);
      cVar18 = (char)uVar19;
      if (plVar8 == plVar10) {
        if ((cVar18 == '\0') && (plVar8 != (int64_t *)0x0)) {
          plVar12 = (int64_t *)CONCAT71(uVar14,1);
          if ((char)local_a0 == '\0') {
            FUN_00d50b00();
          }
        }
        else if (((char)local_a0 == '\0') || (plVar8 == (int64_t *)0x0)) {
          plVar12 = (int64_t *)(uint64_t)uVar19;
        }
        else {
          FUN_00d50b20();
          plVar12 = (int64_t *)(uint64_t)uVar19;
        }
      }
      else if ((char)local_a0 == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar12 = (int64_t *)CONCAT71(uVar14,1);
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) goto LAB_01281150;
        FUN_00d50b20();
        plVar10 = plVar8;
      }
      else {
        plVar12 = (int64_t *)CONCAT71(uVar14,1);
        if ((cVar18 == '\0') || (plVar10 == (int64_t *)0x0)) {
LAB_01281150:
          plVar12 = (int64_t *)CONCAT71(uVar14,1);
          plVar10 = plVar8;
        }
        else {
          FUN_00d50b20();
          plVar10 = plVar8;
        }
      }
      pvVar9 = _pthread_getspecific((void*)plVar17);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = plVar10[0x14];
      }
      else {
        lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0xa0);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar9 = _pthread_getspecific((void*)plVar17);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012756a0(uVar21);
      }
      if (0 < *(int *)((int64_t)local_48 + 0xc)) {
        lVar7 = 0;
        do {
          plVar17 = *(int64_t **)(local_48[2] + lVar7 * 8);
          uVar14 = (undefined7)((uint64_t)plVar12 >> 8);
          plVar8 = local_48;
          if (plVar10 == plVar17) {
            if (((char)plVar12 == '\0') && (plVar10 != (int64_t *)0x0)) {
              plVar12 = (int64_t *)CONCAT71(uVar14,1);
              FUN_00d50b00();
            }
          }
          else {
            if (plVar17 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (((char)plVar12 == '\0') || (plVar10 == (int64_t *)0x0)) {
              plVar12 = (int64_t *)CONCAT71(uVar14,1);
              plVar10 = plVar17;
            }
            else {
              FUN_00d50b20();
              plVar12 = (int64_t *)CONCAT71(uVar14,1);
              plVar10 = plVar17;
            }
          }
          pvVar9 = _pthread_getspecific((void*)plVar8);
          plVar17 = plVar10;
          if ((pvVar9 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar17 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          dVar16 = (double)plVar17[0x1d];
          plVar8 = (int64_t *)(local_c8 + dVar16);
          if ((dVar16 != (double)plVar8) || (NAN(dVar16) || NAN((double)plVar8))) {
            local_78 = plVar8;
            uStack_70 = uStack_c0;
            FUN_00d64850();
            plVar17[0x1d] = (int64_t)local_78;
            FUN_00d64910();
          }
          lVar7 = lVar7 + 1;
          plVar17 = local_48;
        } while (lVar7 < *(int *)((int64_t)local_48 + 0xc));
      }
      pVar15 = (void*)plVar17;
      pvVar9 = _pthread_getspecific(pVar15);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        unaff_R12 = plVar10;
        if (plVar10[0x20] == 0) goto LAB_012813ac;
LAB_012813e0:
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      else {
        unaff_R12 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        if (unaff_R12[0x20] != 0) goto LAB_012813e0;
LAB_012813ac:
        local_98 = '\0';
        local_a0 = 0;
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      plVar17 = local_58;
      if (local_50[0] == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar15);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01270af0();
      plVar8 = local_58;
      local_f0 = 0;
      if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_f8 = plVar8;
      local_f0 = '\x01';
      FUN_012a4a40(arg1,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      dVar16 = (double)((int64_t)local_88 + 1);
      local_78 = (int64_t *)0x0;
      local_88 = dVar16;
    } while ((int64_t)dVar16 < (int64_t)*local_e8);
  }
  plVar17 = local_78;
  cVar18 = (char)plVar12;
  FUN_0152eef0();
  lVar7 = *this_ptr;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar13 = 0;
    do {
      pVar15 = SUB84(dVar16,0);
      plVar8 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar13 * 8);
      if (plVar10 == plVar8) {
        if (((char)plVar12 == '\0') && (plVar10 != (int64_t *)0x0)) {
          plVar12 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (((char)plVar12 == '\0') || (plVar10 == (int64_t *)0x0)) {
          plVar12 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          plVar10 = plVar8;
        }
        else {
          FUN_00d50b20();
          plVar12 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          plVar10 = plVar8;
        }
      }
      cVar18 = (char)plVar12;
      pvVar9 = _pthread_getspecific(pVar15);
      if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = plVar10[0x19];
      }
      else {
        lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar9 = _pthread_getspecific(pVar15);
        if ((pvVar9 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = plVar10[0x19];
        }
        else {
          lVar7 = *(int64_t *)(plVar10[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 200);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar15);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152e820();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
      lVar7 = *this_ptr;
      dVar16 = (double)(int64_t)*(int *)(lVar7 + 0xc);
    } while (lVar13 < (int64_t)dVar16);
  }
  if (((char)local_40 != '\0') && (plVar17 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar18 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = local_90;
  if (((char)local_60 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_b0 = SUB81(dVar6,0);
  if ((local_b0 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

