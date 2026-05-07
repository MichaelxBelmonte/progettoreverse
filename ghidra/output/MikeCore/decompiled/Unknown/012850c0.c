// Function: FUN_012850c0
// Address: 012850c0
// Size: 7854 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01286ed7) */
/* WARNING: Removing unreachable block (ram,0x01286aad) */
/* WARNING: Removing unreachable block (ram,0x01286ab9) */
/* WARNING: Removing unreachable block (ram,0x01286ac7) */
/* WARNING: Removing unreachable block (ram,0x01286ad3) */
/* WARNING: Removing unreachable block (ram,0x01286b3f) */
/* WARNING: Removing unreachable block (ram,0x01286b4b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012850c0(double param_1,undefined8 param_2)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  void *pvVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  pthread_key_t pVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  int unaff_ESI;
  longlong *unaff_RDI;
  ulonglong unaff_R12;
  undefined7 uVar22;
  bool bVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  double dVar26;
  ulonglong in_XMM0_Qb;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong *local_118;
  double local_108;
  longlong *local_f8;
  char local_f0;
  double local_e8;
  ulonglong uStack_e0;
  longlong *local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  double local_b8;
  undefined4 local_b0;
  int local_ac;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  ulonglong local_88;
  char local_80 [8];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  undefined8 *local_58;
  ulonglong uStack_50;
  longlong *local_40;
  longlong *local_38;
  
  local_e8 = param_1;
  uStack_e0 = in_XMM0_Qb;
  local_ac = unaff_ESI;
  FUN_01271180();
  local_d0 = local_68;
  if (local_68 == (longlong *)0x0) {
    local_b0 = 1;
    local_d0 = (longlong *)0x0;
  }
  else {
    if (local_60[0] == '\0') {
      FUN_00d50b00();
    }
    local_b0 = 0;
  }
  iVar9 = *(int *)((longlong)local_d0 + 0xc);
  if (iVar9 < 1) {
    local_88 = 0;
    local_40 = (longlong *)0x0;
    bVar23 = false;
    local_38 = (longlong *)0x0;
    local_98 = 0;
    local_118 = (longlong *)0x0;
    local_78 = 0;
    local_70 = (longlong *)DAT_023b2568;
    local_108 = DAT_023b2568;
  }
  else {
    lVar20 = 0;
    local_108 = DAT_023b2568;
    local_70 = (longlong *)DAT_023b2568;
    local_78 = 0;
    local_98 = 0;
    local_38 = (longlong *)0x0;
    bVar23 = false;
    local_40 = (longlong *)0x0;
    local_88 = 0;
    do {
      lVar10 = local_d0[2];
      lVar13 = *(longlong *)(lVar10 + lVar20 * 8);
      if (local_78 == lVar13) {
        if (((char)local_98 == '\0') && (local_78 != 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar13 != 0) {
          lVar10 = FUN_00d50b00();
        }
        if (((char)local_98 == '\0') || (local_78 == 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
          local_78 = lVar13;
        }
        else {
          local_78 = lVar13;
          uVar11 = FUN_00d50b20();
          local_98 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        }
      }
      FUN_00d23310();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar19 = &local_a8;
      plVar24 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar24 = plVar19;
      }
      *(undefined1 *)plVar24 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == local_38) {
        if ((bVar23) || (plVar14 == (longlong *)0x0)) {
          if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar23 = true;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if ((char)local_a8 == '\0') {
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((!bVar23) || (local_38 == (longlong *)0x0)) goto LAB_01285340;
        FUN_00d50b20();
        local_38 = plVar14;
        bVar23 = true;
      }
      else if ((bVar23) && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_38 = plVar14;
        bVar23 = true;
      }
      else {
LAB_01285340:
        local_38 = plVar14;
        bVar23 = true;
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
      if ((pvVar12 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        lVar10 = local_38[0x15];
      }
      else {
        lVar10 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xa8);
        plVar19 = local_38;
      }
      if (lVar10 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if ((pvVar12 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = local_38[0x15];
        }
        else {
          lVar10 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xa8);
          plVar19 = local_38;
        }
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        plVar14 = local_68;
        uVar22 = (undefined7)(unaff_R12 >> 8);
        if (local_68 == local_40) {
          plVar14 = local_40;
          if (((char)local_88 != '\0') || (local_68 == (longlong *)0x0)) {
            unaff_R12 = local_88 & 0xffffffff;
            goto joined_r0x0128550f;
          }
          if (local_60[0] == '\0') {
            FUN_00d50b00();
            goto LAB_01285520;
          }
LAB_012854c5:
          local_60[0] = '\0';
          unaff_R12 = CONCAT71(uVar22,1);
          local_40 = plVar14;
        }
        else {
          if (local_60[0] != '\0') {
            if (((char)local_88 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_012854c5;
          }
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          unaff_R12 = CONCAT71(uVar22,1);
          if (((char)local_88 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_40 = plVar14;
LAB_01285520:
            unaff_R12 = CONCAT71(uVar22,1);
            plVar14 = local_40;
          }
joined_r0x0128550f:
          local_40 = plVar14;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        plVar14 = local_40;
        if ((pvVar12 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar14 = local_40, lVar10 != 0))
        {
          plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          plVar19 = local_40;
        }
        local_58 = (undefined8 *)plVar14[0x1e];
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        plVar19 = local_40;
        if ((pvVar12 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar19 = local_40, lVar10 != 0))
        {
          plVar19 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        puVar25 = (undefined8 *)((double)plVar19[0x28] + DAT_02391030 + DAT_02391030);
        puVar15 = DAT_0241b6a8;
        if ((double)DAT_0241b6a8 <= (double)puVar25) {
          puVar15 = puVar25;
        }
        puVar25 = (undefined8 *)plVar19[0x1e];
        if ((double)puVar15 <= (double)plVar19[0x1e]) {
          puVar25 = puVar15;
        }
        local_88 = unaff_R12 & 0xffffffff;
        if ((double)local_58 - (double)puVar25 < local_108) {
          local_108 = (double)local_58 - (double)puVar25;
        }
      }
      FUN_00d23340();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar19 = &local_a8;
      plVar24 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar24 = plVar19;
      }
      *(undefined1 *)plVar24 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == local_38) {
        if ((bVar23) || (plVar14 == (longlong *)0x0)) {
          if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar23 = true;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if ((char)local_a8 == '\0') {
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((!bVar23) || (local_38 == (longlong *)0x0)) goto LAB_01285710;
        FUN_00d50b20();
        local_38 = plVar14;
        bVar23 = true;
      }
      else if ((bVar23) && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_38 = plVar14;
        bVar23 = true;
      }
      else {
LAB_01285710:
        local_38 = plVar14;
        bVar23 = true;
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
      if ((pvVar12 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
        if (local_38[0x14] != 0) goto LAB_01285934;
LAB_01285780:
        iVar9 = *(int *)(local_78 + 0xc);
joined_r0x01285b9c:
        if (0 < iVar9) goto LAB_0128578e;
LAB_01285bc2:
        puVar15 = (undefined8 *)0x0;
      }
      else {
        plVar19 = local_38;
        if (*(longlong *)(local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xa0) == 0)
        goto LAB_01285780;
LAB_01285934:
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if ((pvVar12 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
          lVar10 = local_38[0x14];
        }
        else {
          lVar10 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4] + 0xa0);
          plVar19 = local_38;
        }
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        plVar14 = local_68;
        uVar22 = (undefined7)(unaff_R12 >> 8);
        if (local_68 == local_40) {
          plVar14 = local_40;
          if (((char)local_88 != '\0') || (local_68 == (longlong *)0x0)) {
            unaff_R12 = local_88 & 0xffffffff;
            goto joined_r0x01285a7f;
          }
          if (local_60[0] == '\0') {
            FUN_00d50b00();
            goto LAB_01285a90;
          }
LAB_01285a35:
          local_60[0] = '\0';
          unaff_R12 = CONCAT71(uVar22,1);
          local_40 = plVar14;
        }
        else {
          if (local_60[0] != '\0') {
            if (((char)local_88 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01285a35;
          }
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          unaff_R12 = CONCAT71(uVar22,1);
          if (((char)local_88 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_40 = plVar14;
LAB_01285a90:
            unaff_R12 = CONCAT71(uVar22,1);
            plVar14 = local_40;
          }
joined_r0x01285a7f:
          local_40 = plVar14;
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        plVar14 = local_40;
        if ((pvVar12 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar14 = local_40, lVar10 != 0))
        {
          plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          plVar19 = local_40;
        }
        local_58 = (undefined8 *)plVar14[0x1e];
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        plVar14 = local_40;
        if ((pvVar12 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar14 = local_40, lVar10 != 0))
        {
          plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          plVar19 = local_40;
        }
        puVar25 = (undefined8 *)((double)plVar14[0x28] + DAT_02391030 + DAT_02391030);
        puVar15 = DAT_0241b6a8;
        if ((double)DAT_0241b6a8 <= (double)puVar25) {
          puVar15 = puVar25;
        }
        puVar25 = (undefined8 *)plVar14[0x1e];
        if ((double)puVar15 <= (double)plVar14[0x1e]) {
          puVar25 = puVar15;
        }
        local_88 = unaff_R12 & 0xffffffff;
        if ((double)local_58 - (double)puVar25 < (double)local_70) {
          iVar9 = *(int *)(local_78 + 0xc);
          local_70 = (longlong *)((double)local_58 - (double)puVar25);
          goto joined_r0x01285b9c;
        }
        if (*(int *)(local_78 + 0xc) < 1) goto LAB_01285bc2;
LAB_0128578e:
        local_c8 = (undefined8 *)0x0;
        lVar10 = 0;
        do {
          plVar14 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar10 * 8);
          if (local_38 == plVar14) {
            if ((!bVar23) && (local_38 != (longlong *)0x0)) {
              bVar23 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar14 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar23) && (local_38 != (longlong *)0x0)) {
              local_38 = plVar14;
              FUN_00d50b20();
              bVar23 = true;
            }
            else {
              bVar23 = true;
              local_38 = plVar14;
            }
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          plVar14 = local_38;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar14 = local_38, lVar13 != 0)
             ) {
            plVar14 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            plVar19 = local_38;
          }
          local_b8 = (double)plVar14[0x28] + DAT_02391030;
          local_58 = (undefined8 *)plVar14[0x1e];
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          plVar14 = local_38;
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar14 = local_38, lVar13 != 0)
             ) {
            plVar14 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            plVar19 = local_38;
          }
          puVar15 = DAT_0241b6a8;
          if ((double)DAT_0241b6a8 <= local_b8 + DAT_02391030) {
            puVar15 = (undefined8 *)(local_b8 + DAT_02391030);
          }
          puVar25 = local_58;
          if ((double)puVar15 <= (double)local_58) {
            puVar25 = puVar15;
          }
          puVar15 = (undefined8 *)((double)puVar25 / (double)plVar14[0x1e]);
          if ((double)puVar25 / (double)plVar14[0x1e] <= (double)local_c8) {
            puVar15 = local_c8;
          }
          lVar10 = lVar10 + 1;
          local_c8 = puVar15;
        } while (lVar10 < *(int *)(local_78 + 0xc));
      }
      local_58 = puVar15;
      FUN_00d23340();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar19 = &local_a8;
      plVar24 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar24 = plVar19;
      }
      *(undefined1 *)plVar24 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
      plVar19 = plVar14;
      if ((pvVar12 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar19 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      local_c8 = (undefined8 *)((double)plVar19[0x1d] + (double)plVar19[0x1e]);
      uStack_c0 = 0;
      FUN_00d23310();
      plVar24 = local_68;
      local_80[0] = local_60[0];
      plVar19 = (longlong *)local_80;
      plVar16 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar16 = plVar19;
      }
      *(undefined1 *)plVar16 = 0;
      if ((local_60[0] != '\0') && (plVar24 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
      plVar19 = plVar24;
      if ((pvVar12 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar19 = (longlong *)plVar24[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      local_c8 = (undefined8 *)((double)local_c8 - (double)plVar19[0x1d]);
      if ((local_80[0] != '\0') && (plVar24 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      dVar27 = (double)local_c8 - (double)local_58 * (double)local_c8;
      if (local_ac == 2) {
        dVar27 = (double)((ulonglong)dVar27 ^ _DAT_023945b0);
        uVar21 = uStack_c0 ^ _UNK_023945b8;
        if (local_e8 < dVar27) {
LAB_012851a0:
          local_e8 = dVar27;
          uStack_e0 = uVar21;
        }
      }
      else {
        uVar21 = uStack_c0;
        if (dVar27 < local_e8) goto LAB_012851a0;
      }
      lVar20 = lVar20 + 1;
      iVar9 = *(int *)((longlong)local_d0 + 0xc);
      local_118 = local_d0;
    } while (lVar20 < iVar9);
  }
  pcVar7 = DAT_025683d8;
  if (local_ac == 2) {
    plVar19 = local_70;
    uVar21 = 0;
    if (local_e8 <= (double)local_70) goto LAB_01285e24;
  }
  else {
    plVar19 = (longlong *)((ulonglong)local_108 ^ _DAT_023945b0);
    uVar21 = _UNK_023945b8;
    if ((double)((ulonglong)local_108 ^ _DAT_023945b0) <= local_e8) goto LAB_01285e24;
  }
  uStack_e0 = uVar21;
  local_e8 = (double)plVar19;
LAB_01285e24:
  dVar28 = (double)(_DAT_023945b0 ^ (ulonglong)local_e8);
  local_108 = local_e8;
  dVar27 = dVar28;
  if (local_ac != 0) {
    local_108 = 0.0;
    dVar27 = local_e8;
  }
  if (iVar9 < 1) {
    local_90 = (undefined8 *)0x0;
    local_70 = (longlong *)0x0;
  }
  else {
    local_118 = (longlong *)0x0;
    local_70 = (longlong *)0x0;
    local_90 = (undefined8 *)0x0;
    do {
      if (local_70 == (longlong *)0x0) {
        local_58 = local_90;
      }
      else if ((char)local_90 == '\0') {
        local_58 = (undefined8 *)0x0;
      }
      else {
        local_58 = (undefined8 *)0x0;
        local_70 = (longlong *)0x0;
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        uVar21 = local_88 & 0xffffffff;
      }
      else if ((char)local_88 == '\0') {
        uVar21 = 0;
      }
      else {
        local_70 = (longlong *)0x0;
        local_40 = (longlong *)0x0;
        local_90 = local_58;
        FUN_00d50b20();
        uVar21 = 0;
      }
      lVar20 = local_d0[2];
      lVar10 = *(longlong *)(lVar20 + (longlong)local_118 * 8);
      if (local_78 == lVar10) {
        if (((char)local_98 == '\0') && (local_78 != 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar10 != 0) {
          lVar20 = FUN_00d50b00();
        }
        if (((char)local_98 == '\0') || (local_78 == 0)) {
          local_98 = CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
          local_78 = lVar10;
        }
        else {
          local_78 = lVar10;
          uVar11 = FUN_00d50b20();
          local_98 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
        }
      }
      FUN_00d23310();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar19 = &local_a8;
      plVar24 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar24 = plVar19;
      }
      *(undefined1 *)plVar24 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == local_38) {
        if ((!bVar23) && (plVar14 != (longlong *)0x0)) {
          bVar23 = true;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
          goto joined_r0x012860fb;
        }
        if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
          goto joined_r0x012860fb;
        }
        if (local_ac == 0) goto LAB_01286160;
LAB_01286129:
        local_90 = local_58;
        local_70 = (longlong *)0x0;
      }
      else {
        if ((char)local_a8 == '\0') {
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((!bVar23) || (local_38 == (longlong *)0x0)) goto LAB_012860f0;
          FUN_00d50b20();
          local_38 = plVar14;
          bVar23 = true;
        }
        else if ((bVar23) && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_38 = plVar14;
          bVar23 = true;
        }
        else {
LAB_012860f0:
          local_38 = plVar14;
          bVar23 = true;
        }
joined_r0x012860fb:
        if (local_ac != 0) goto LAB_01286129;
LAB_01286160:
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
          lVar20 = local_38[0x15];
        }
        else {
          lVar20 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 0xa8);
          plVar19 = local_38;
        }
        if (lVar20 == 0) goto LAB_01286129;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
          lVar20 = local_38[0x15];
        }
        else {
          lVar20 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 0xa8);
          plVar19 = local_38;
        }
        pVar18 = (pthread_key_t)plVar19;
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific(pVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        local_70 = local_68;
        plVar19 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_70 = (longlong *)0x0;
          local_90 = local_58;
        }
        else if (local_60[0] == '\0') {
          uVar11 = FUN_00d50b00();
          local_90 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          local_90 = (undefined8 *)CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        }
        pVar18 = (pthread_key_t)plVar19;
        if (lVar20 != 0) {
          FUN_00d50b20();
        }
        local_40 = (longlong *)0x0;
        local_88 = uVar21;
        pvVar12 = _pthread_getspecific(pVar18);
        if (pvVar12 != (void *)0x0) {
          local_40 = (longlong *)0x0;
          local_88 = uVar21;
          FUN_00e8b990();
        }
        local_40 = (longlong *)0x0;
        local_88 = uVar21;
        FUN_012756a0(local_e8);
      }
      FUN_00d23340();
      plVar14 = local_68;
      local_a8 = CONCAT71(local_a8._1_7_,local_60[0]);
      plVar19 = &local_a8;
      plVar24 = (longlong *)local_60;
      if (local_60[0] == '\0') {
        plVar24 = plVar19;
      }
      *(undefined1 *)plVar24 = 0;
      if ((local_60[0] != '\0') && (plVar14 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar14 == local_38) {
        if ((!bVar23) && (plVar14 != (longlong *)0x0)) {
          bVar23 = true;
          if ((char)local_a8 == '\0') {
            FUN_00d50b00();
          }
          goto joined_r0x0128642b;
        }
        if (((char)local_a8 != '\0') && (plVar14 != (longlong *)0x0)) {
          FUN_00d50b20();
          goto joined_r0x0128642b;
        }
        if (local_ac == 2) goto LAB_0128645d;
LAB_012866a0:
        local_40 = (longlong *)0x0;
        local_88 = uVar21;
      }
      else {
        if ((char)local_a8 == '\0') {
          if (plVar14 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((!bVar23) || (local_38 == (longlong *)0x0)) goto LAB_01286420;
          FUN_00d50b20();
          local_38 = plVar14;
          bVar23 = true;
        }
        else if ((bVar23) && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_38 = plVar14;
          bVar23 = true;
        }
        else {
LAB_01286420:
          local_38 = plVar14;
          bVar23 = true;
        }
joined_r0x0128642b:
        if (local_ac != 2) goto LAB_012866a0;
LAB_0128645d:
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
          lVar20 = local_38[0x14];
        }
        else {
          lVar20 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 0xa0);
          plVar19 = local_38;
        }
        if (lVar20 == 0) goto LAB_012866a0;
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
          lVar20 = local_38[0x14];
        }
        else {
          lVar20 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 0xa0);
          plVar19 = local_38;
        }
        pVar18 = (pthread_key_t)plVar19;
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific(pVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        local_40 = local_68;
        plVar19 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_40 = (longlong *)0x0;
          local_88 = uVar21;
        }
        else if (local_60[0] == '\0') {
          uVar11 = FUN_00d50b00();
          local_88 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          local_88 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        }
        if (lVar20 != 0) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
        plVar14 = local_40;
        if ((pvVar12 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar14 = local_40, lVar20 != 0))
        {
          plVar19 = local_40;
          plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
        }
        FUN_012756a0(dVar28);
        dVar26 = (double)plVar14[0x1d];
        puVar15 = (undefined8 *)(local_e8 + dVar26);
        if ((dVar26 != (double)puVar15) || (NAN(dVar26) || NAN((double)puVar15))) {
          uStack_50 = uStack_e0;
          local_58 = puVar15;
          FUN_00d64850();
          plVar14[0x1d] = (longlong)local_58;
          FUN_00d64910();
        }
      }
      uVar3 = *(uint *)(local_78 + 0xc);
      plVar14 = (longlong *)(ulonglong)uVar3;
      puVar15 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar15 = &DAT_025683c0;
      (*pcVar7)();
      FUN_00c92170();
      FUN_00c92160();
      local_c8 = puVar15;
      if (0 < (int)uVar3) {
        local_58 = (undefined8 *)0x0;
        uStack_50 = 0;
        plVar24 = (longlong *)0x0;
        do {
          plVar17 = local_38;
          plVar16 = *(longlong **)(*(longlong *)(local_78 + 0x10) + (longlong)plVar24 * 8);
          if (local_38 == plVar16) {
            local_38 = plVar17;
            bVar8 = bVar23;
            if ((!bVar23) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b00();
              local_38 = plVar17;
              bVar8 = true;
            }
          }
          else {
            plVar19 = plVar16;
            local_38 = plVar16;
            if (plVar16 != (longlong *)0x0) {
              FUN_00d50b00();
              plVar19 = plVar16;
            }
            bVar8 = true;
            if ((bVar23) && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar23 = bVar8;
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          plVar16 = local_38;
          if ((pvVar12 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar16 = local_38, lVar20 != 0)
             ) {
            plVar16 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
            plVar19 = local_38;
          }
          local_b8 = (double)plVar16[0x1e];
          iVar9 = *(int *)(local_c8 + 3);
          FUN_00c8e340(local_b8,1);
          *(double *)(local_c8[2] + (longlong)iVar9) = local_b8;
          local_58 = (undefined8 *)((double)local_58 + local_b8);
          plVar24 = (longlong *)((longlong)plVar24 + 1);
        } while (plVar14 != plVar24);
        dVar26 = dVar27 + (double)local_58;
        lVar20 = local_c8[2];
        if (1 < uVar3) {
          plVar19 = (longlong *)(ulonglong)(uVar3 & 0xfffffffe);
          uVar21 = ((ulonglong)((longlong)plVar19 + -2) >> 1) + 1;
          if ((undefined1 *)((longlong)plVar19 + -2) == (undefined1 *)0x0) {
            lVar10 = 0;
          }
          else {
            lVar13 = -(uVar21 & 0xfffffffffffffffe);
            lVar10 = 0;
            do {
              pdVar1 = (double *)(lVar20 + lVar10 * 8);
              pdVar2 = (double *)(lVar20 + 0x10 + lVar10 * 8);
              dVar6 = pdVar2[1];
              auVar30._0_8_ = *pdVar1 * dVar26;
              auVar30._8_8_ = pdVar1[1] * dVar26;
              auVar31._8_8_ = local_58;
              auVar31._0_8_ = local_58;
              auVar31 = divpd(auVar30,auVar31);
              *(undefined1 (*) [16])(lVar20 + lVar10 * 8) = auVar31;
              auVar32._0_8_ = *pdVar2 * dVar26;
              auVar32._8_8_ = dVar6 * dVar26;
              auVar4._8_8_ = local_58;
              auVar4._0_8_ = local_58;
              auVar31 = divpd(auVar32,auVar4);
              *(undefined1 (*) [16])(lVar20 + 0x10 + lVar10 * 8) = auVar31;
              lVar10 = lVar10 + 4;
              lVar13 = lVar13 + 2;
            } while (lVar13 != 0);
            if ((uVar21 & 1) == 0) goto joined_r0x01286c4f;
          }
          auVar31 = *(undefined1 (*) [16])(lVar20 + lVar10 * 8);
          auVar29._0_8_ = dVar26 * auVar31._0_8_;
          auVar29._8_8_ = dVar26 * auVar31._8_8_;
          auVar5._8_8_ = local_58;
          auVar5._0_8_ = local_58;
          auVar31 = divpd(auVar29,auVar5);
          *(undefined1 (*) [16])(lVar20 + lVar10 * 8) = auVar31;
          goto joined_r0x01286c4f;
        }
        plVar19 = (longlong *)0x0;
        do {
          *(double *)(lVar20 + (longlong)plVar19 * 8) =
               (*(double *)(lVar20 + (longlong)plVar19 * 8) * dVar26) / (double)local_58;
          plVar19 = (longlong *)((longlong)plVar19 + 1);
joined_r0x01286c4f:
        } while (plVar19 != plVar14);
        local_b8 = 0.0;
        plVar24 = (longlong *)0x0;
        do {
          plVar16 = *(longlong **)(*(longlong *)(local_78 + 0x10) + (longlong)plVar24 * 8);
          if (local_38 == plVar16) {
            if ((!bVar23) && (local_38 != (longlong *)0x0)) {
              bVar23 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar16 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar23) && (local_38 != (longlong *)0x0)) {
              local_38 = plVar16;
              FUN_00d50b20();
              bVar23 = true;
            }
            else {
              bVar23 = true;
              local_38 = plVar16;
            }
          }
          local_58 = *(undefined8 **)(local_c8[2] + (longlong)plVar24 * 8);
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          plVar16 = local_38;
          if ((pvVar12 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar16 = local_38, lVar20 != 0)
             ) {
            plVar16 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
            plVar19 = local_38;
          }
          local_58 = (undefined8 *)((double)local_58 - (double)plVar16[0x1e]);
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          if ((pvVar12 != (void *)0x0) && (lVar20 = FUN_00e8b990(), lVar20 != 0)) {
            plVar19 = local_38;
          }
          FUN_012756a0(local_58);
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          plVar16 = local_38;
          if ((pvVar12 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar16 = local_38, lVar20 != 0)
             ) {
            plVar19 = local_38;
            plVar16 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
          plVar17 = local_38;
          if ((pvVar12 != (void *)0x0) && (lVar20 = FUN_00e8b990(), plVar17 = local_38, lVar20 != 0)
             ) {
            plVar17 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4];
            plVar19 = local_38;
          }
          dVar26 = (double)plVar17[0x1d] + local_108 + local_b8;
          if (((double)plVar16[0x1d] != dVar26) || (NAN((double)plVar16[0x1d]) || NAN(dVar26))) {
            FUN_00d64850();
            plVar16[0x1d] = (longlong)dVar26;
            FUN_00d64910();
          }
          local_b8 = local_b8 + (double)local_58;
          plVar24 = (longlong *)((longlong)plVar24 + 1);
        } while (plVar14 != plVar24);
      }
      if (local_40 != (longlong *)0x0) {
        local_68 = local_40;
        local_60[0] = '\0';
        FUN_00d21140();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)plVar19);
      if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        if (local_38[0x20] != 0) goto LAB_01286920;
LAB_012868fa:
        pVar18 = (pthread_key_t)plVar19;
        local_a0 = '\0';
        local_a8 = 0;
      }
      else {
        plVar19 = local_38;
        if (*(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 0x100) == 0)
        goto LAB_012868fa;
LAB_01286920:
        pVar18 = (pthread_key_t)plVar19;
        pvVar12 = _pthread_getspecific(pVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      pvVar12 = _pthread_getspecific(pVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      plVar19 = local_68;
      if (local_60[0] == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60[0] = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific(pVar18);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01270af0();
      plVar14 = local_68;
      local_f0 = 0;
      if ((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_f8 = plVar14;
      local_f0 = '\x01';
      FUN_012a4a40(param_2,&local_f8);
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_0127e4d0(0);
      FUN_0152eef0();
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_c8 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_118 = (longlong *)((longlong)local_118 + 1);
    } while ((longlong)local_118 < (longlong)*(int *)((longlong)local_d0 + 0xc));
  }
  lVar20 = *unaff_RDI;
  if (0 < *(int *)(lVar20 + 0xc)) {
    lVar10 = 0;
    do {
      plVar19 = *(longlong **)(*(longlong *)(lVar20 + 0x10) + lVar10 * 8);
      if (local_38 == plVar19) {
        if ((!bVar23) && (local_38 != (longlong *)0x0)) {
          bVar23 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar23) && (local_38 != (longlong *)0x0)) {
          local_38 = plVar19;
          FUN_00d50b20();
          bVar23 = true;
        }
        else {
          bVar23 = true;
          local_38 = plVar19;
        }
      }
      pvVar12 = _pthread_getspecific((pthread_key_t)local_118);
      if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
        lVar20 = local_38[0x19];
      }
      else {
        lVar20 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 200);
        local_118 = local_38;
      }
      if (lVar20 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar12 = _pthread_getspecific((pthread_key_t)local_118);
        if ((pvVar12 == (void *)0x0) || (lVar20 = FUN_00e8b990(), lVar20 == 0)) {
          lVar20 = local_38[0x19];
        }
        else {
          lVar20 = *(longlong *)(local_38[(ulonglong)(*(uint *)(lVar20 + 0x154) & 1) + 4] + 200);
          local_118 = local_38;
        }
        pVar18 = (pthread_key_t)local_118;
        if (lVar20 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific(pVar18);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152e820();
        if (lVar20 != 0) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar10 + 1;
      lVar20 = *unaff_RDI;
      local_118 = (longlong *)(longlong)*(int *)(lVar20 + 0xc);
    } while (lVar10 < (longlong)local_118);
  }
  if (((char)local_88 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar23) && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_b0 == '\0' && local_d0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


