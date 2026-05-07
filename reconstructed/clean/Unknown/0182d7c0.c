// Function: FUN_0182d7c0
// Address: 0182d7c0
// Size: 7544 bytes
// Class: Unknown

void FUN_0182d7c0(double param_1,double param_2,int64_t *param_3)

{
  void*puVar1;
  int64_t *plVar2;
  void*puVar3;
  void*puVar4;
  int iVar5;
  uint uVar6;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  double dVar10;
  byte bVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t *plVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  int64_t lVar23;
  void*puVar24;
  char *pcVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  void* pVar31;
  int iVar32;
  int64_t *in_RCX;
  uint64_t uVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  char *pcVar37;
  uint64_t uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  int iVar41;
  int64_t *in_RDX;
  int64_t lVar42;
  int64_t lVar43;
  uint64_t uVar44;
  int64_t lVar45;
  int iVar46;
  int64_t *plVar47;
  uint64_t uVar48;
  uint uVar49;
  int64_t *arg1;
  uint64_t uVar50;
  uint uVar51;
  uint uVar52;
  int64_t *this_ptr;
  int64_t lVar53;
  int iVar54;
  int iVar55;
  uint64_t uVar56;
  uint64_t uVar57;
  int iVar58;
  bool bVar59;
  uint32_t extraout_XMM0_Da;
  float fVar60;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar61;
  uint32_t extraout_XMM0_Da_01;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  int64_t *local_res18;
  int64_t *local_res20;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  char local_48 [4];
  uint local_44;
  int64_t *local_40;
  char local_38 [8];
  
  if ((((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) &&
      (lVar23 = *arg1, lVar23 != 0)) && (*(int *)(lVar23 + 0xc) != 0)) {
    pvVar22 = _pthread_getspecific((void*)lVar23);
    pVar31 = (void*)lVar23;
    if (pvVar22 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df6b0();
    plVar47 = local_40;
    pvVar22 = _pthread_getspecific(pVar31);
    plVar2 = local_40;
    if ((pvVar22 != (void *)0x0) && (lVar23 = FUN_00e8b990(), plVar47 = plVar2, lVar23 != 0)) {
      plVar47 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar23 + 0x154) & 1) + 4];
    }
    dVar10 = (double)(**(code **)(*plVar47 + 0x370))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar23 = **(int64_t **)(*arg1 + 0x10);
    iVar5 = *(int *)(**(int64_t **)(lVar23 + 0x10) + 0x18);
    iVar32 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar32 = iVar5;
    }
    lVar34 = *this_ptr;
    if (0 < *(int *)(lVar34 + 0xc)) {
      uVar6 = *(uint *)(*arg1 + 0xc);
      uVar33 = (uint64_t)*(uint *)(lVar23 + 0xc);
      lVar23 = 0;
      bVar9 = false;
      do {
        pVar31 = (void*)uVar33;
        lVar34 = *(int64_t *)(*(int64_t *)(lVar34 + 0x10) + lVar23 * 8);
        if (lVar34 != 0) {
          FUN_00d50b00();
        }
        pvVar22 = _pthread_getspecific(pVar31);
        if (pvVar22 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar19 = FUN_013dee00();
        if (cVar19 == '\0') {
          local_170 = '\0';
          local_178 = lVar34;
          FUN_0133ae40(extraout_XMM0_Da,&local_178);
          fVar60 = (float)FUN_00d459e0();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((g_0239428c < fVar60) && (fVar60 < g_02394260)) goto joined_r0x0182da3a;
          pvVar22 = _pthread_getspecific(pVar31);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if (local_38[0] == '\0') {
            if (local_40 == (int64_t *)0x0) goto joined_r0x0182da3a;
            FUN_00d50b00();
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == (int64_t *)0x0) goto joined_r0x0182da3a;
          pvVar22 = _pthread_getspecific(pVar31);
          if (pvVar22 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar19 = FUN_014c4200();
          if (cVar19 != '\0') {
            bVar9 = true;
          }
          FUN_00d50b20();
          bVar11 = cVar19 * '\x02';
        }
        else {
joined_r0x0182da3a:
          bVar11 = 0;
        }
        if (lVar34 != 0) {
          FUN_00d50b20();
        }
        if ((bVar11 & 3) != 0) break;
        lVar23 = lVar23 + 1;
        lVar34 = *this_ptr;
        uVar33 = (uint64_t)*(int *)(lVar34 + 0xc);
      } while (lVar23 < (int64_t)uVar33);
      if (bVar9) {
        puVar24 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar24 = &g_025f0d98;
        puVar24[2] = 0;
        puVar24[3] = 0;
        puVar24[4] = 0;
        puVar24[5] = 0;
        puVar24[6] = 0;
        puVar24[7] = 0;
        (*g_025f0db0)();
        iVar20 = FUN_00e7d850(SUB84(param_1 * dVar10,0));
        FUN_00c8e690();
        plVar47 = local_40;
        if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        lVar23 = *this_ptr;
        if (0 < *(int *)(lVar23 + 0xc)) {
          lVar34 = (int64_t)iVar20;
          plVar2 = plVar47 + 2;
          uVar33 = 2;
          if (2 < iVar32 >> 2) {
            uVar33 = (uint64_t)(uint)(iVar32 >> 2);
          }
          lVar35 = uVar33 - 1;
          lVar42 = 0;
          lVar36 = lVar35;
          do {
            pVar31 = (void*)lVar36;
            lVar23 = *(int64_t *)(*(int64_t *)(lVar23 + 0x10) + lVar42 * 8);
            if (lVar23 != 0) {
              FUN_00d50b00();
            }
            pvVar22 = _pthread_getspecific(pVar31);
            if (pvVar22 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar19 = FUN_013dee00();
            if (cVar19 == '\0') {
              local_160 = '\0';
              local_168 = lVar23;
              FUN_0133ae40(extraout_XMM0_Da_00,&local_168);
              fVar60 = (float)FUN_00d459e0();
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_160 != '\0') && (local_168 != 0)) {
                FUN_00d50b20();
              }
              if ((fVar60 <= g_0239428c) || (g_02394260 <= fVar60)) {
                bVar9 = fVar60 <= g_02394270;
                pvVar22 = _pthread_getspecific(pVar31);
                if (pvVar22 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013de560();
                if (local_38[0] == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_0182de09;
                  }
                }
                else if (local_40 != (int64_t *)0x0) {
LAB_0182de09:
                  pvVar22 = _pthread_getspecific(pVar31);
                  if (pvVar22 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar19 = FUN_014c4200();
                  if (cVar19 != '\0') {
                    pvVar22 = _pthread_getspecific(pVar31);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_014c3e60();
                    uVar61 = FUN_00d23310();
                    plVar18 = local_40;
                    local_48[0] = local_38[0];
                    pcVar37 = local_48;
                    pcVar25 = local_38;
                    if (local_38[0] == '\0') {
                      pcVar25 = pcVar37;
                    }
                    *pcVar25 = '\0';
                    if ((local_38[0] != '\0') && (plVar18 != (int64_t *)0x0)) {
                      uVar61 = FUN_00d50b20();
                    }
                    pVar31 = (void*)pcVar37;
                    if ((local_48[0] == '\0') && (plVar18 != (int64_t *)0x0)) {
                      uVar61 = FUN_00d50b00();
                    }
                    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                      uVar61 = FUN_00d50b20();
                    }
                    local_150 = '\0';
                    local_158 = lVar23;
                    FUN_0133ae40(uVar61,&local_158);
                    lVar36 = FUN_00d45790();
                    uVar61 = extraout_XMM0_Da_01;
                    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                      uVar61 = FUN_00d50b20();
                    }
                    if ((local_150 != '\0') && (local_158 != 0)) {
                      uVar61 = FUN_00d50b20();
                    }
                    local_140 = '\0';
                    local_148 = lVar23;
                    FUN_0133ae40(uVar61,&local_148);
                    lVar26 = FUN_00d45790();
                    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_140 != '\0') && (local_148 != 0)) {
                      FUN_00d50b20();
                    }
                    pvVar22 = _pthread_getspecific(pVar31);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar27 = FUN_013de650();
                    pvVar22 = _pthread_getspecific(pVar31);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar28 = FUN_013de650();
                    pvVar22 = _pthread_getspecific(pVar31);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar29 = FUN_013de790();
                    lVar27 = lVar27 + lVar36;
                    lVar29 = (lVar28 - lVar26) + lVar29;
                    iVar32 = *(int *)(*in_RCX + 0x18);
                    iVar20 = iVar32 + 7;
                    if (-1 < iVar32) {
                      iVar20 = iVar32;
                    }
                    local_44 = (iVar20 >> 3) - 1;
                    uVar21 = local_44;
                    if (7 < iVar32) {
                      uVar21 = 0;
                    }
                    uVar38 = (uint64_t)(int)uVar21;
                    lVar36 = *(int64_t *)(*in_RCX + 0x10);
                    lVar26 = *(int64_t *)(lVar36 + uVar38 * 8);
                    uVar57 = uVar38;
                    if (lVar27 < lVar26) {
                      do {
                        uVar48 = uVar57 - 1;
                        if (uVar57 == 0) {
                          uVar48 = 0;
                          break;
                        }
                        uVar57 = uVar48;
                      } while (lVar27 < *(int64_t *)(lVar36 + uVar48 * 8));
                    }
                    else {
                      lVar28 = 0;
                      do {
                        if (~((int64_t)(int)local_44 + 1U) + uVar38 + lVar28 == -2) {
                          uVar48 = (uint64_t)local_44;
                          goto LAB_0182e145;
                        }
                        lVar30 = lVar28 + 1;
                        lVar43 = lVar28 * 8;
                        lVar28 = lVar30;
                      } while (*(int64_t *)(lVar36 + uVar38 * 8 + 8 + lVar43) <= lVar27);
                      uVar48 = (uint64_t)((uVar21 + (int)lVar30) - 1);
                    }
                    iVar32 = (int)uVar48;
                    if ((iVar32 < (int)local_44) &&
                       (*(int64_t *)(lVar36 + 8 + (int64_t)iVar32 * 8) - lVar27 <
                        lVar27 - *(int64_t *)(lVar36 + (int64_t)iVar32 * 8))) {
                      uVar48 = (uint64_t)(iVar32 + 1);
                    }
LAB_0182e145:
                    if (lVar29 < lVar26) {
                      do {
                        bVar59 = uVar38 == 0;
                        uVar38 = uVar38 - 1;
                        if (bVar59) {
                          uVar38 = 0;
                          break;
                        }
                      } while (lVar29 < *(int64_t *)(lVar36 + uVar38 * 8));
                    }
                    else {
                      lVar26 = uVar38 * 8;
                      lVar27 = ~((int64_t)(int)local_44 + 1U) + uVar38;
                      uVar38 = 0;
                      do {
                        if (lVar27 + uVar38 == -2) goto LAB_0182e1c1;
                        uVar57 = uVar38 + 1;
                        lVar28 = uVar38 * 8;
                        uVar38 = uVar57;
                      } while (*(int64_t *)(lVar36 + lVar26 + 8 + lVar28) <= lVar29);
                      uVar38 = (uint64_t)((uVar21 + (int)uVar57) - 1);
                    }
                    iVar32 = (int)uVar38;
                    if ((iVar32 < (int)local_44) &&
                       (*(int64_t *)(lVar36 + 8 + (int64_t)iVar32 * 8) - lVar29 <
                        lVar29 - *(int64_t *)(lVar36 + (int64_t)iVar32 * 8))) {
                      uVar38 = (uint64_t)(iVar32 + 1);
                    }
                    local_44 = (uint)uVar38;
LAB_0182e1c1:
                    iVar32 = (int)uVar48;
                    uVar57 = (uint64_t)iVar32;
                    lVar36 = *(int64_t *)(lVar36 + uVar57 * 8);
                    pvVar22 = _pthread_getspecific((void*)uVar38);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar27 = FUN_014bcda0();
                    lVar26 = lVar36 + lVar34;
                    if (lVar36 <= lVar27 - lVar34) {
                      lVar26 = lVar27;
                      lVar36 = lVar27 - lVar34;
                    }
                    iVar20 = *(int *)(*in_RCX + 0x18);
                    iVar54 = iVar20 + 7;
                    if (-1 < iVar20) {
                      iVar54 = iVar20;
                    }
                    iVar54 = iVar54 >> 3;
                    iVar20 = iVar54 + -1;
                    iVar58 = 0;
                    if (-1 < iVar32) {
                      iVar58 = iVar32;
                    }
                    if (iVar54 <= iVar58) {
                      iVar58 = iVar20;
                    }
                    uVar38 = (uint64_t)iVar58;
                    lVar27 = *(int64_t *)(*in_RCX + 0x10);
                    if (lVar36 < *(int64_t *)(lVar27 + uVar38 * 8)) {
                      do {
                        bVar59 = uVar38 == 0;
                        uVar38 = uVar38 - 1;
                        if (bVar59) {
                          uVar38 = 0;
                          break;
                        }
                      } while (lVar36 < *(int64_t *)(lVar27 + uVar38 * 8));
                    }
                    else {
                      uVar39 = 0;
                      do {
                        iVar46 = iVar20;
                        if ((int64_t)iVar20 - uVar38 == uVar39) goto LAB_0182e2ce;
                        uVar48 = uVar39 + 1;
                        lVar28 = uVar39 * 8;
                        uVar39 = uVar48;
                      } while (*(int64_t *)(lVar27 + uVar38 * 8 + 8 + lVar28) <= lVar36);
                      uVar38 = (uint64_t)((iVar58 + (int)uVar48) - 1);
                    }
                    iVar46 = (int)uVar38;
                    uVar39 = uVar48;
                    if ((iVar46 < iVar20) &&
                       (uVar39 = *(int64_t *)(lVar27 + 8 + (int64_t)iVar46 * 8) - lVar36,
                       (int64_t)uVar39 < lVar36 - *(int64_t *)(lVar27 + (int64_t)iVar46 * 8))) {
                      iVar46 = iVar46 + 1;
                    }
LAB_0182e2ce:
                    iVar58 = 0;
                    if (-1 < iVar46) {
                      iVar58 = iVar46;
                    }
                    if (iVar54 <= iVar58) {
                      iVar58 = iVar20;
                    }
                    uVar38 = (uint64_t)iVar58;
                    if (lVar26 < *(int64_t *)(lVar27 + uVar38 * 8)) {
                      do {
                        bVar59 = uVar38 == 0;
                        uVar38 = uVar38 - 1;
                        if (bVar59) {
                          uVar38 = 0;
                          break;
                        }
                      } while (lVar26 < *(int64_t *)(lVar27 + uVar38 * 8));
                    }
                    else {
                      uVar48 = 0;
                      do {
                        uVar39 = uVar48;
                        iVar54 = iVar20;
                        if ((int64_t)iVar20 - uVar38 == uVar48) goto LAB_0182e34b;
                        uVar39 = uVar48 + 1;
                        lVar36 = uVar48 * 8;
                        uVar48 = uVar39;
                      } while (*(int64_t *)(lVar27 + uVar38 * 8 + 8 + lVar36) <= lVar26);
                      uVar38 = (uint64_t)((iVar58 + (int)uVar39) - 1);
                    }
                    iVar54 = (int)uVar38;
                    if ((iVar54 < iVar20) &&
                       (uVar39 = *(int64_t *)(lVar27 + 8 + (int64_t)iVar54 * 8) - lVar26,
                       (int64_t)uVar39 < lVar26 - *(int64_t *)(lVar27 + (int64_t)iVar54 * 8))) {
                      iVar54 = iVar54 + 1;
                    }
LAB_0182e34b:
                    pVar31 = (void*)uVar39;
                    iVar20 = iVar54 - iVar46;
                    if (iVar54 - iVar46 < 1) {
                      iVar20 = 1;
                    }
                    uVar38 = (uint64_t)(int)local_44;
                    lVar36 = *(int64_t *)(lVar27 + uVar38 * 8);
                    pvVar22 = _pthread_getspecific(pVar31);
                    if ((pvVar22 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
                      pVar31 = (void*)plVar18;
                    }
                    lVar26 = FUN_014bcda0();
                    pvVar22 = _pthread_getspecific(pVar31);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar29 = FUN_014bcdb0();
                    lVar27 = lVar29 + lVar26 + lVar34;
                    lVar28 = lVar36 - lVar34;
                    if (lVar27 <= lVar36) {
                      lVar28 = lVar29 + lVar26;
                      lVar36 = lVar27;
                    }
                    iVar58 = *(int *)(*in_RCX + 0x18);
                    iVar55 = iVar58 + 7;
                    if (-1 < iVar58) {
                      iVar55 = iVar58;
                    }
                    iVar55 = iVar55 >> 3;
                    uVar21 = iVar55 - 1;
                    uVar48 = (uint64_t)local_44;
                    uVar52 = 0;
                    if (-1 < (int)local_44) {
                      uVar52 = local_44;
                    }
                    if (iVar55 <= (int)uVar52) {
                      uVar52 = uVar21;
                    }
                    uVar39 = (uint64_t)(int)uVar52;
                    lVar26 = *(int64_t *)(*in_RCX + 0x10);
                    if (lVar36 < *(int64_t *)(lVar26 + uVar39 * 8)) {
                      do {
                        bVar59 = uVar39 == 0;
                        uVar39 = uVar39 - 1;
                        if (bVar59) {
                          uVar39 = 0;
                          break;
                        }
                      } while (lVar36 < *(int64_t *)(lVar26 + uVar39 * 8));
                    }
                    else {
                      uVar40 = 0;
                      do {
                        uVar51 = uVar21;
                        if ((int64_t)(int)uVar21 - uVar39 == uVar40) goto LAB_0182e4dc;
                        uVar48 = uVar40 + 1;
                        lVar27 = uVar40 * 8;
                        uVar40 = uVar48;
                      } while (*(int64_t *)(lVar26 + uVar39 * 8 + 8 + lVar27) <= lVar36);
                      uVar39 = (uint64_t)((uVar52 + (int)uVar48) - 1);
                    }
                    uVar51 = (uint)uVar39;
                    uVar40 = uVar48;
                    if (((int)uVar51 < (int)uVar21) &&
                       (uVar40 = *(int64_t *)(lVar26 + 8 + (int64_t)(int)uVar51 * 8) - lVar36,
                       (int64_t)uVar40 < lVar36 - *(int64_t *)(lVar26 + (int64_t)(int)uVar51 * 8)
                       )) {
                      uVar51 = uVar51 + 1;
                    }
LAB_0182e4dc:
                    uVar52 = 0;
                    if (-1 < (int)uVar51) {
                      uVar52 = uVar51;
                    }
                    if (iVar55 <= (int)uVar52) {
                      uVar52 = uVar21;
                    }
                    uVar48 = (uint64_t)(int)uVar52;
                    if (lVar28 < *(int64_t *)(lVar26 + uVar48 * 8)) {
                      do {
                        bVar59 = uVar48 == 0;
                        uVar48 = uVar48 - 1;
                        if (bVar59) {
                          uVar48 = 0;
                          break;
                        }
                      } while (lVar28 < *(int64_t *)(lVar26 + uVar48 * 8));
                    }
                    else {
                      uVar39 = 0;
                      do {
                        uVar40 = uVar39;
                        uVar49 = uVar21;
                        if ((int64_t)(int)uVar21 - uVar48 == uVar39) goto LAB_0182e56b;
                        uVar40 = uVar39 + 1;
                        lVar36 = uVar39 * 8;
                        uVar39 = uVar40;
                      } while (*(int64_t *)(lVar26 + uVar48 * 8 + 8 + lVar36) <= lVar28);
                      uVar48 = (uint64_t)((uVar52 + (int)uVar40) - 1);
                    }
                    uVar49 = (uint)uVar48;
                    if (((int)uVar49 < (int)uVar21) &&
                       (uVar40 = *(int64_t *)(lVar26 + 8 + (int64_t)(int)uVar49 * 8) - lVar28,
                       (int64_t)uVar40 < lVar28 - *(int64_t *)(lVar26 + (int64_t)(int)uVar49 * 8)
                       )) {
                      uVar49 = uVar49 + 1;
                    }
LAB_0182e56b:
                    iVar58 = uVar51 - uVar49;
                    if ((int)(uVar51 - uVar49) < 1) {
                      iVar58 = 1;
                    }
                    pvVar22 = _pthread_getspecific((void*)uVar40);
                    if (pvVar22 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    iVar55 = FUN_014bcdc0();
                    iVar41 = local_44 - iVar32;
                    fVar62 = (float)(((double)(float)((double)iVar55 / dVar10) / param_2) *
                                    g_02417048);
                    fVar66 = g_023d5000;
                    if (fVar62 <= g_023d5000) {
                      fVar66 = fVar62;
                    }
                    uVar21 = local_44 - iVar32;
                    if (uVar21 != 0 && iVar32 <= (int)local_44) {
                      lVar36 = *(int64_t *)(*param_3 + 0x10);
                      lVar26 = *plVar2;
                      uVar39 = uVar38 - uVar57;
                      uVar48 = uVar57;
                      if ((7 < uVar39) &&
                         ((lVar36 + uVar38 * 4 <= lVar26 + uVar57 * 4 ||
                          (lVar26 + uVar38 * 4 <= lVar36 + uVar57 * 4)))) {
                        uVar48 = uVar39 & 0xfffffffffffffff8;
                        uVar56 = (uVar48 - 8 >> 3) + 1;
                        uVar40 = (uint64_t)((uint)uVar56 & 3);
                        if (uVar48 - 8 < 0x18) {
                          lVar29 = 0;
                        }
                        else {
                          lVar27 = lVar26 + uVar57 * 4;
                          lVar28 = lVar36 + uVar57 * 4;
                          lVar30 = -(uVar56 & 0xfffffffffffffffc);
                          lVar29 = 0;
                          do {
                            puVar3 = (void*)(lVar28 + lVar29 * 4);
                            uVar15 = puVar3[1];
                            puVar4 = (void*)(lVar28 + 0x10 + lVar29 * 4);
                            uVar16 = *puVar4;
                            uVar17 = puVar4[1];
                            puVar4 = (void*)(lVar27 + lVar29 * 4);
                            *puVar4 = *puVar3;
                            puVar4[1] = uVar15;
                            puVar3 = (void*)(lVar27 + 0x10 + lVar29 * 4);
                            *puVar3 = uVar16;
                            puVar3[1] = uVar17;
                            puVar3 = (void*)(lVar28 + 0x20 + lVar29 * 4);
                            uVar15 = puVar3[1];
                            puVar4 = (void*)(lVar28 + 0x30 + lVar29 * 4);
                            uVar16 = *puVar4;
                            uVar17 = puVar4[1];
                            puVar4 = (void*)(lVar27 + 0x20 + lVar29 * 4);
                            *puVar4 = *puVar3;
                            puVar4[1] = uVar15;
                            puVar3 = (void*)(lVar27 + 0x30 + lVar29 * 4);
                            *puVar3 = uVar16;
                            puVar3[1] = uVar17;
                            puVar3 = (void*)(lVar28 + 0x40 + lVar29 * 4);
                            uVar15 = puVar3[1];
                            puVar4 = (void*)(lVar28 + 0x50 + lVar29 * 4);
                            uVar16 = *puVar4;
                            uVar17 = puVar4[1];
                            puVar4 = (void*)(lVar27 + 0x40 + lVar29 * 4);
                            *puVar4 = *puVar3;
                            puVar4[1] = uVar15;
                            puVar3 = (void*)(lVar27 + 0x50 + lVar29 * 4);
                            *puVar3 = uVar16;
                            puVar3[1] = uVar17;
                            puVar3 = (void*)(lVar28 + 0x60 + lVar29 * 4);
                            uVar15 = puVar3[1];
                            puVar1 = (void*)(lVar28 + 0x70 + lVar29 * 4);
                            uVar61 = *puVar1;
                            uVar12 = puVar1[1];
                            uVar13 = puVar1[2];
                            uVar14 = puVar1[3];
                            puVar4 = (void*)(lVar27 + 0x60 + lVar29 * 4);
                            *puVar4 = *puVar3;
                            puVar4[1] = uVar15;
                            puVar1 = (void*)(lVar27 + 0x70 + lVar29 * 4);
                            *puVar1 = uVar61;
                            puVar1[1] = uVar12;
                            puVar1[2] = uVar13;
                            puVar1[3] = uVar14;
                            lVar29 = lVar29 + 0x20;
                            lVar30 = lVar30 + 4;
                          } while (lVar30 != 0);
                        }
                        if (uVar40 != 0) {
                          lVar27 = lVar26 + (lVar29 + uVar57) * 4;
                          lVar28 = lVar36 + (lVar29 + uVar57) * 4;
                          lVar29 = 0;
                          do {
                            puVar3 = (void*)(lVar28 + lVar29);
                            uVar15 = puVar3[1];
                            puVar1 = (void*)(lVar28 + 0x10 + lVar29);
                            uVar61 = *puVar1;
                            uVar12 = puVar1[1];
                            uVar13 = puVar1[2];
                            uVar14 = puVar1[3];
                            puVar4 = (void*)(lVar27 + lVar29);
                            *puVar4 = *puVar3;
                            puVar4[1] = uVar15;
                            puVar1 = (void*)(lVar27 + 0x10 + lVar29);
                            *puVar1 = uVar61;
                            puVar1[1] = uVar12;
                            puVar1[2] = uVar13;
                            puVar1[3] = uVar14;
                            lVar29 = lVar29 + 0x20;
                          } while (uVar40 << 5 != lVar29);
                        }
                        if (uVar39 == uVar48) goto LAB_0182e7e7;
                        uVar48 = uVar48 + uVar57;
                      }
                      uVar52 = local_44 - (int)uVar48;
                      uVar39 = ~uVar48;
                      uVar40 = (uint64_t)uVar52 & 3;
                      if ((uVar52 & 3) != 0) {
                        do {
                          *(void*)(lVar26 + uVar48 * 4) =
                               *(void*)(lVar36 + uVar48 * 4);
                          uVar48 = uVar48 + 1;
                          uVar40 = uVar40 - 1;
                        } while (uVar40 != 0);
                      }
                      if (2 < uVar39 + uVar38) {
                        do {
                          *(void*)(lVar26 + uVar48 * 4) =
                               *(void*)(lVar36 + uVar48 * 4);
                          *(void*)(lVar26 + 4 + uVar48 * 4) =
                               *(void*)(lVar36 + 4 + uVar48 * 4);
                          *(void*)(lVar26 + 8 + uVar48 * 4) =
                               *(void*)(lVar36 + 8 + uVar48 * 4);
                          *(void*)(lVar26 + 0xc + uVar48 * 4) =
                               *(void*)(lVar36 + 0xc + uVar48 * 4);
                          uVar48 = uVar48 + 4;
                        } while (uVar38 != uVar48);
                      }
                    }
LAB_0182e7e7:
                    FUN_015c15b0(fVar66,iVar41);
                    fVar62 = (float)iVar20;
                    fVar63 = (float)iVar58;
                    lVar26 = (int64_t)iVar46;
                    lVar36 = (int64_t)iVar54;
                    lVar27 = (int64_t)(int)uVar49;
                    if (iVar46 < (int)uVar51) {
                      lVar28 = lVar26 * 4;
                      lVar43 = *(int64_t *)(*param_3 + 0x10) + lVar28;
                      lVar29 = *plVar2;
                      lVar53 = *(int64_t *)(*local_res20 + 0x10) + lVar28;
                      lVar30 = 0;
                      do {
                        fVar65 = *(float *)(lVar43 + lVar30 * 4);
                        fVar67 = *(float *)(lVar29 + lVar28 + lVar30 * 4);
                        fVar68 = fVar65 - fVar67;
                        fVar64 = fVar60 * fVar68;
                        fVar67 = fVar67 + fVar64;
                        fVar64 = (fVar64 - fVar68) + *(float *)(lVar53 + lVar30 * 4);
                        if (lVar27 < lVar26 + lVar30) {
                          fVar69 = g_02390124 -
                                   (float)(int)((iVar46 - uVar49) + (int)lVar30) / fVar63;
                          fVar68 = g_02390124 - fVar69;
                          *(float *)(lVar43 + lVar30 * 4) = fVar65 * fVar68 + fVar67 * fVar69;
                          fVar64 = fVar68 * *(float *)(*(int64_t *)(*local_res18 + 0x10) + lVar28 +
                                                      lVar30 * 4) + fVar69 * fVar64;
                        }
                        else if (lVar26 + lVar30 < lVar36) {
                          fVar68 = (float)(int)lVar30 / fVar62;
                          fVar69 = g_02390124 - fVar68;
                          *(float *)(lVar43 + lVar30 * 4) = fVar65 * fVar69 + fVar67 * fVar68;
                          fVar64 = fVar69 * *(float *)(*(int64_t *)(*local_res18 + 0x10) + lVar28 +
                                                      lVar30 * 4) + fVar68 * fVar64;
                        }
                        else {
                          *(float *)(lVar43 + lVar30 * 4) = fVar67;
                        }
                        *(float *)(lVar53 + lVar30 * 4) = fVar64;
                        lVar30 = lVar30 + 1;
                      } while ((lVar26 - (int)uVar51) + lVar30 != 0);
                    }
                    if (0 < (int)uVar6) {
                      fVar60 = (float)(~-(uint)bVar9 & (uint)SQRT(fVar60) & g_02390140 |
                                      -(uint)bVar9 & g_023b3e04);
                      uVar48 = ~uVar57 + uVar38;
                      uVar39 = (uint64_t)(uVar21 & 3);
                      lVar29 = (int)uVar51 - lVar26;
                      lVar28 = lVar26 * 8;
                      iVar20 = iVar46 - uVar49;
                      uVar40 = 0;
                      do {
                        lVar30 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar40 * 8);
                        if (lVar30 != 0) {
                          FUN_00d50b00();
                        }
                        lVar43 = *(int64_t *)(*(int64_t *)(*in_RDX + 0x10) + uVar40 * 8);
                        if (lVar43 != 0) {
                          FUN_00d50b00();
                        }
                        if (7 < iVar5) {
                          if (iVar32 < (int)local_44) {
                            if (iVar46 < (int)uVar51) {
                              uVar56 = 1;
                              do {
                                lVar53 = *(int64_t *)(lVar30 + 0x10);
                                lVar7 = *plVar2;
                                uVar44 = uVar57;
                                for (uVar50 = uVar39; uVar50 != 0; uVar50 = uVar50 - 1) {
                                  *(void*)(lVar7 + uVar44 * 4) =
                                       *(void*)
                                        (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10) +
                                        uVar56 * 4);
                                  uVar44 = uVar44 + 1;
                                }
                                if (2 < uVar48) {
                                  do {
                                    *(void*)(lVar7 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10)
                                          + uVar56 * 4);
                                    *(void*)(lVar7 + 4 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 8 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 8 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x10 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 0xc + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x18 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    uVar44 = uVar44 + 4;
                                  } while (uVar38 != uVar44);
                                }
                                FUN_015c15b0(fVar66);
                                lVar53 = *(int64_t *)(lVar30 + 0x10);
                                lVar7 = *plVar2;
                                lVar45 = 0;
                                do {
                                  fVar65 = *(float *)(lVar26 * 4 + lVar7 + lVar45 * 4);
                                  fVar65 = (*(float *)(*(int64_t *)
                                                        (*(int64_t *)(lVar53 + lVar28 + lVar45 * 8)
                                                        + 0x10) + uVar56 * 4) - fVar65) * fVar60 +
                                           fVar65;
                                  if (lVar27 < lVar26 + lVar45) {
                                    fVar67 = g_02390124 - (float)(iVar20 + (int)lVar45) / fVar63;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar30 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else if (lVar26 + lVar45 < lVar36) {
                                    fVar67 = (float)(int)lVar45 / fVar62;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar30 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else {
                                    *(float *)(*(int64_t *)
                                                (*(int64_t *)
                                                  (*(int64_t *)(lVar30 + 0x10) + lVar28 +
                                                  lVar45 * 8) + 0x10) + uVar56 * 4) = fVar65;
                                  }
                                  lVar45 = lVar45 + 1;
                                } while (lVar29 != lVar45);
                                uVar56 = uVar56 + 1;
                              } while (uVar56 != uVar33);
                            }
                            else {
                              uVar56 = 1;
                              do {
                                lVar53 = *(int64_t *)(lVar30 + 0x10);
                                lVar7 = *plVar2;
                                uVar44 = uVar57;
                                for (uVar50 = uVar39; uVar50 != 0; uVar50 = uVar50 - 1) {
                                  *(void*)(lVar7 + uVar44 * 4) =
                                       *(void*)
                                        (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10) +
                                        uVar56 * 4);
                                  uVar44 = uVar44 + 1;
                                }
                                if (2 < uVar48) {
                                  do {
                                    *(void*)(lVar7 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10)
                                          + uVar56 * 4);
                                    *(void*)(lVar7 + 4 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 8 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 8 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x10 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 0xc + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x18 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    uVar44 = uVar44 + 4;
                                  } while (uVar38 != uVar44);
                                }
                                FUN_015c15b0(fVar66,iVar41);
                                uVar56 = uVar56 + 1;
                              } while (uVar56 != uVar33);
                            }
                          }
                          else {
                            lVar53 = lVar35;
                            if (iVar46 < (int)uVar51) {
                              uVar56 = 1;
                              do {
                                FUN_015c15b0(fVar66);
                                lVar53 = *(int64_t *)(lVar30 + 0x10);
                                lVar7 = *plVar2;
                                lVar45 = 0;
                                do {
                                  fVar65 = *(float *)(lVar26 * 4 + lVar7 + lVar45 * 4);
                                  fVar65 = (*(float *)(*(int64_t *)
                                                        (*(int64_t *)(lVar53 + lVar28 + lVar45 * 8)
                                                        + 0x10) + uVar56 * 4) - fVar65) * fVar60 +
                                           fVar65;
                                  if (lVar27 < lVar26 + lVar45) {
                                    fVar67 = g_02390124 - (float)(iVar20 + (int)lVar45) / fVar63;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar30 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else if (lVar26 + lVar45 < lVar36) {
                                    fVar67 = (float)(int)lVar45 / fVar62;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar30 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else {
                                    *(float *)(*(int64_t *)
                                                (*(int64_t *)
                                                  (*(int64_t *)(lVar30 + 0x10) + lVar28 +
                                                  lVar45 * 8) + 0x10) + uVar56 * 4) = fVar65;
                                  }
                                  lVar45 = lVar45 + 1;
                                } while (lVar29 != lVar45);
                                uVar56 = uVar56 + 1;
                              } while (uVar56 != uVar33);
                            }
                            else {
                              do {
                                FUN_015c15b0(fVar66,iVar41);
                                lVar53 = lVar53 + -1;
                              } while (lVar53 != 0);
                            }
                          }
                          if (iVar32 < (int)local_44) {
                            uVar56 = 1;
                            if (iVar46 < (int)uVar51) {
                              do {
                                lVar53 = *(int64_t *)(lVar43 + 0x10);
                                lVar7 = *plVar2;
                                uVar44 = uVar57;
                                for (uVar50 = uVar39; uVar50 != 0; uVar50 = uVar50 - 1) {
                                  *(void*)(lVar7 + uVar44 * 4) =
                                       *(void*)
                                        (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10) +
                                        uVar56 * 4);
                                  uVar44 = uVar44 + 1;
                                }
                                if (2 < uVar48) {
                                  do {
                                    *(void*)(lVar7 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10)
                                          + uVar56 * 4);
                                    *(void*)(lVar7 + 4 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 8 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 8 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x10 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 0xc + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x18 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    uVar44 = uVar44 + 4;
                                  } while (uVar38 != uVar44);
                                }
                                FUN_015c15b0(fVar66);
                                lVar53 = *(int64_t *)(lVar43 + 0x10);
                                lVar7 = *plVar2;
                                lVar45 = 0;
                                do {
                                  fVar65 = *(float *)(lVar26 * 4 + lVar7 + lVar45 * 4);
                                  fVar65 = (*(float *)(*(int64_t *)
                                                        (*(int64_t *)(lVar53 + lVar28 + lVar45 * 8)
                                                        + 0x10) + uVar56 * 4) - fVar65) * fVar60 +
                                           fVar65;
                                  if (lVar27 < lVar26 + lVar45) {
                                    fVar67 = g_02390124 - (float)(iVar20 + (int)lVar45) / fVar63;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar43 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else if (lVar26 + lVar45 < lVar36) {
                                    fVar67 = (float)(int)lVar45 / fVar62;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar43 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else {
                                    *(float *)(*(int64_t *)
                                                (*(int64_t *)
                                                  (*(int64_t *)(lVar43 + 0x10) + lVar28 +
                                                  lVar45 * 8) + 0x10) + uVar56 * 4) = fVar65;
                                  }
                                  lVar45 = lVar45 + 1;
                                } while (lVar29 != lVar45);
                                uVar56 = uVar56 + 1;
                              } while (uVar56 != uVar33);
                            }
                            else {
                              do {
                                lVar53 = *(int64_t *)(lVar43 + 0x10);
                                lVar7 = *plVar2;
                                uVar44 = uVar57;
                                for (uVar50 = uVar39; uVar50 != 0; uVar50 = uVar50 - 1) {
                                  *(void*)(lVar7 + uVar44 * 4) =
                                       *(void*)
                                        (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10) +
                                        uVar56 * 4);
                                  uVar44 = uVar44 + 1;
                                }
                                if (2 < uVar48) {
                                  do {
                                    *(void*)(lVar7 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)(*(int64_t *)(lVar53 + uVar44 * 8) + 0x10)
                                          + uVar56 * 4);
                                    *(void*)(lVar7 + 4 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 8 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 8 + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x10 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    *(void*)(lVar7 + 0xc + uVar44 * 4) =
                                         *(void*)
                                          (*(int64_t *)
                                            (*(int64_t *)(lVar53 + 0x18 + uVar44 * 8) + 0x10) +
                                          uVar56 * 4);
                                    uVar44 = uVar44 + 4;
                                  } while (uVar38 != uVar44);
                                }
                                FUN_015c15b0(fVar66,iVar41);
                                uVar56 = uVar56 + 1;
                              } while (uVar56 != uVar33);
                            }
                          }
                          else {
                            lVar53 = lVar35;
                            if (iVar46 < (int)uVar51) {
                              uVar56 = 1;
                              do {
                                FUN_015c15b0(fVar66);
                                lVar53 = *(int64_t *)(lVar43 + 0x10);
                                lVar7 = *plVar2;
                                lVar45 = 0;
                                do {
                                  fVar65 = *(float *)(lVar26 * 4 + lVar7 + lVar45 * 4);
                                  fVar65 = (*(float *)(*(int64_t *)
                                                        (*(int64_t *)(lVar53 + lVar28 + lVar45 * 8)
                                                        + 0x10) + uVar56 * 4) - fVar65) * fVar60 +
                                           fVar65;
                                  if (lVar27 < lVar26 + lVar45) {
                                    fVar67 = g_02390124 - (float)(iVar20 + (int)lVar45) / fVar63;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar43 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else if (lVar26 + lVar45 < lVar36) {
                                    fVar67 = (float)(int)lVar45 / fVar62;
                                    lVar8 = *(int64_t *)
                                             (*(int64_t *)
                                               (*(int64_t *)(lVar43 + 0x10) + lVar28 + lVar45 * 8)
                                             + 0x10);
                                    *(float *)(lVar8 + uVar56 * 4) =
                                         (g_02390124 - fVar67) * *(float *)(lVar8 + uVar56 * 4) +
                                         fVar65 * fVar67;
                                  }
                                  else {
                                    *(float *)(*(int64_t *)
                                                (*(int64_t *)
                                                  (*(int64_t *)(lVar43 + 0x10) + lVar28 +
                                                  lVar45 * 8) + 0x10) + uVar56 * 4) = fVar65;
                                  }
                                  lVar45 = lVar45 + 1;
                                } while (lVar29 != lVar45);
                                uVar56 = uVar56 + 1;
                              } while (uVar56 != uVar33);
                            }
                            else {
                              do {
                                FUN_015c15b0(fVar66,iVar41);
                                lVar53 = lVar53 + -1;
                              } while (lVar53 != 0);
                            }
                          }
                        }
                        if (lVar43 != 0) {
                          FUN_00d50b20();
                        }
                        if (lVar30 != 0) {
                          FUN_00d50b20();
                        }
                        uVar40 = uVar40 + 1;
                      } while (uVar40 != uVar6);
                    }
                    if (plVar18 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_00d50b20();
                }
              }
            }
            if (lVar23 != 0) {
              FUN_00d50b20();
            }
            lVar42 = lVar42 + 1;
            lVar23 = *this_ptr;
            lVar36 = (int64_t)*(int *)(lVar23 + 0xc);
          } while (lVar42 < lVar36);
        }
        if (plVar47 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (puVar24 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

