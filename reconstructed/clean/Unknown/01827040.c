// Function: FUN_01827040
// Address: 01827040
// Size: 6207 bytes
// Class: Unknown

void FUN_01827040(void* param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  int64_t lVar5;
  double dVar6;
  double dVar7;
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
  int64_t *plVar26;
  bool bVar27;
  int iVar28;
  char cVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  void *pvVar34;
  int64_t lVar35;
  void*puVar36;
  int64_t lVar37;
  int64_t lVar38;
  void* pVar39;
  int64_t lVar40;
  int64_t lVar41;
  uint uVar42;
  uint uVar43;
  uint64_t uVar44;
  int64_t *plVar45;
  int64_t lVar46;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar47;
  uint64_t uVar48;
  int iVar49;
  uint64_t uVar50;
  uint uVar51;
  uint uVar52;
  uint64_t uVar53;
  uint uVar54;
  uint64_t uVar55;
  bool bVar56;
  float fVar57;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float fVar58;
  uint32_t uVar59;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  int local_res18;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  void*local_110;
  uint64_t local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*this_ptr == 0) {
    return;
  }
  if (*(int *)(*this_ptr + 0xc) == 0) {
    return;
  }
  local_108 = param_4;
  pvVar34 = _pthread_getspecific(param_1);
  if (pvVar34 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df6b0();
  plVar45 = local_40;
  pvVar34 = _pthread_getspecific(param_1);
  plVar26 = local_40;
  if ((pvVar34 != (void *)0x0) && (lVar35 = FUN_00e8b990(), plVar45 = plVar26, lVar35 != 0)) {
    plVar45 = (int64_t *)plVar26[(uint64_t)(*(uint *)(lVar35 + 0x154) & 1) + 4];
  }
  dVar6 = (double)(**(code **)(*plVar45 + 0x370))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar31 = *(int *)(*arg1 + 0x18);
  iVar32 = iVar31 + 7;
  if (-1 < iVar31) {
    iVar32 = iVar31;
  }
  puVar36 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar36 = &g_025f0d98;
  puVar36[2] = 0;
  puVar36[3] = 0;
  puVar36[4] = 0;
  puVar36[5] = 0;
  puVar36[6] = 0;
  puVar36[7] = 0;
  local_110 = puVar36;
  fVar57 = (float)(*g_025f0db0)();
  lVar35 = *this_ptr;
  iVar30 = *(int *)(lVar35 + 0xc);
  if (0 < iVar30) {
    lVar46 = 0;
    do {
      lVar38 = *(int64_t *)(*(int64_t *)(lVar35 + 0x10) + lVar46 * 8);
      if (lVar38 != 0) {
        FUN_00d50b00();
      }
      pVar39 = (void*)lVar35;
      pvVar34 = _pthread_getspecific(pVar39);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar35 = FUN_013de650();
      pvVar34 = _pthread_getspecific(pVar39);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar37 = FUN_013de790();
      lVar37 = lVar37 + lVar35;
      lVar41 = *arg1;
      iVar30 = *(int *)(lVar41 + 0x18);
      iVar33 = iVar30 + 7;
      if (-1 < iVar30) {
        iVar33 = iVar30;
      }
      uVar54 = (iVar33 >> 3) - 1;
      uVar42 = uVar54;
      if (7 < iVar30) {
        uVar42 = 0;
      }
      uVar44 = (uint64_t)(int)uVar42;
      lVar47 = *(int64_t *)(lVar41 + 0x10);
      lVar5 = *(int64_t *)(lVar47 + uVar44 * 8);
      uVar55 = uVar44;
      if (lVar35 < lVar5) {
        do {
          uVar53 = uVar55 - 1;
          if (uVar55 == 0) {
            uVar52 = 0;
            uVar43 = 0;
            if ((int)uVar54 < 1) goto joined_r0x01827396;
            goto LAB_01827338;
          }
          uVar55 = uVar53;
        } while (lVar35 < *(int64_t *)(lVar47 + uVar53 * 8));
        uVar51 = (uint)uVar53;
      }
      else {
        lVar40 = 0;
        do {
          lVar41 = lVar40;
          uVar52 = uVar54;
          if (~((int64_t)(int)uVar54 + 1U) + uVar44 + lVar40 == -2) goto joined_r0x01827396;
          lVar41 = lVar40 + 1;
          lVar1 = lVar40 * 8;
          lVar40 = lVar41;
        } while (*(int64_t *)(lVar47 + uVar44 * 8 + 8 + lVar1) <= lVar35);
        uVar51 = (uVar42 + (int)lVar41) - 1;
        uVar53 = (uint64_t)uVar51;
      }
      uVar52 = (uint)uVar53;
      uVar43 = uVar52;
      if ((int)uVar51 < (int)uVar54) {
LAB_01827338:
        uVar52 = uVar43;
        lVar41 = *(int64_t *)(lVar47 + (int64_t)(int)uVar52 * 8);
        if (*(int64_t *)(lVar47 + 8 + (int64_t)(int)uVar52 * 8) - lVar35 < lVar35 - lVar41) {
          uVar52 = uVar52 + 1;
        }
      }
joined_r0x01827396:
      if (lVar37 < lVar5) {
        do {
          bVar56 = uVar44 == 0;
          uVar44 = uVar44 - 1;
          if (bVar56) {
            uVar51 = 0;
            uVar43 = 0;
            if ((int)uVar54 < 1) goto LAB_01827401;
            goto LAB_018273e7;
          }
        } while (lVar37 < *(int64_t *)(lVar47 + uVar44 * 8));
        uVar42 = (uint)uVar44;
      }
      else {
        lVar41 = 0;
        do {
          uVar51 = uVar54;
          if (~((int64_t)(int)uVar54 + 1U) + uVar44 + lVar41 == -2) goto LAB_01827401;
          lVar35 = lVar41 + 1;
          lVar5 = lVar41 * 8;
          lVar41 = lVar35;
        } while (*(int64_t *)(lVar47 + uVar44 * 8 + 8 + lVar5) <= lVar37);
        uVar42 = ((int)lVar35 + uVar42) - 1;
        uVar44 = (uint64_t)uVar42;
      }
      uVar51 = (uint)uVar44;
      uVar43 = uVar51;
      if ((int)uVar42 < (int)uVar54) {
LAB_018273e7:
        uVar51 = uVar43;
        lVar41 = (int64_t)(int)uVar51;
        if (*(int64_t *)(lVar47 + 8 + lVar41 * 8) - lVar37 <
            lVar37 - *(int64_t *)(lVar47 + lVar41 * 8)) {
          uVar51 = uVar51 + 1;
        }
      }
LAB_01827401:
      pvVar34 = _pthread_getspecific((void*)lVar41);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar29 = FUN_013dee00();
      fVar57 = extraout_XMM0_Da;
      if (cVar29 == '\0') {
        pvVar34 = _pthread_getspecific((void*)lVar41);
        if (pvVar34 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar57 = (float)FUN_013de560();
        if (local_40 == (int64_t *)0x0) {
          cVar29 = '\0';
        }
        else {
          pvVar34 = _pthread_getspecific((void*)lVar41);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar34 = _pthread_getspecific((void*)lVar41);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar29 = FUN_014bc070();
          fVar57 = extraout_XMM0_Da_00;
          if ((local_48 != '\0') && (local_50 != 0)) {
            fVar57 = (float)FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          fVar57 = (float)FUN_00d50b20();
        }
        if (cVar29 != '\0') goto LAB_01827820;
        pvVar34 = _pthread_getspecific((void*)lVar41);
        if (pvVar34 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar29 = FUN_013dee60();
        if (cVar29 != '\0') {
          pvVar34 = _pthread_getspecific((void*)lVar41);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar7 = (double)FUN_013df260();
          iVar30 = FUN_00e7d850(SUB84(dVar7 * dVar6,0));
          lVar41 = (int64_t)iVar30;
          iVar30 = *(int *)(*arg1 + 0x18);
          iVar33 = iVar30 + 7;
          if (-1 < iVar30) {
            iVar33 = iVar30;
          }
          iVar49 = (iVar33 >> 3) + -1;
          iVar33 = iVar49;
          if (7 < iVar30) {
            iVar33 = 0;
          }
          uVar44 = (uint64_t)iVar33;
          lVar35 = *(int64_t *)(*arg1 + 0x10);
          if (lVar41 < *(int64_t *)(lVar35 + uVar44 * 8)) {
            do {
              bVar56 = uVar44 == 0;
              uVar44 = uVar44 - 1;
              if (bVar56) {
                iVar30 = 0;
                iVar28 = 0;
                if (iVar49 < 1) goto LAB_018276a6;
                goto LAB_0182768c;
              }
            } while (lVar41 < *(int64_t *)(lVar35 + uVar44 * 8));
            uVar42 = (uint)uVar44;
          }
          else {
            lVar37 = 0;
            do {
              iVar30 = iVar49;
              if (~((int64_t)iVar49 + 1U) + uVar44 + lVar37 == -2) goto LAB_018276a6;
              lVar47 = lVar37 + 1;
              lVar5 = lVar37 * 8;
              lVar37 = lVar47;
            } while (*(int64_t *)(lVar35 + uVar44 * 8 + 8 + lVar5) <= lVar41);
            uVar42 = (iVar33 + (int)lVar47) - 1;
            uVar44 = (uint64_t)uVar42;
          }
          iVar30 = (int)uVar44;
          iVar28 = iVar30;
          if ((int)uVar42 < iVar49) {
LAB_0182768c:
            iVar30 = iVar28;
            lVar37 = *(int64_t *)(lVar35 + 8 + (int64_t)iVar30 * 8) - lVar41;
            lVar41 = lVar41 - *(int64_t *)(lVar35 + (int64_t)iVar30 * 8);
            if (lVar37 < lVar41) {
              iVar30 = iVar30 + 1;
            }
          }
LAB_018276a6:
          if ((int)uVar52 < iVar30) {
            ___bzero(lVar41,lVar35,iVar33,iVar30 + ~uVar52);
          }
        }
        pVar39 = (void*)lVar41;
        pvVar34 = _pthread_getspecific(pVar39);
        if (pvVar34 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar29 = FUN_013deec0();
        fVar57 = extraout_XMM0_Da_01;
        if (cVar29 != '\0') {
          pvVar34 = _pthread_getspecific(pVar39);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar7 = (double)FUN_013df370();
          iVar30 = FUN_00e7d850(SUB84(dVar7 * dVar6,0));
          lVar35 = (int64_t)iVar30;
          iVar30 = *(int *)(*arg1 + 0x18);
          iVar33 = iVar30 + 7;
          if (-1 < iVar30) {
            iVar33 = iVar30;
          }
          uVar54 = (iVar33 >> 3) - 1;
          uVar42 = uVar54;
          if (7 < iVar30) {
            uVar42 = 0;
          }
          uVar44 = (uint64_t)(int)uVar42;
          lVar41 = *(int64_t *)(*arg1 + 0x10);
          fVar57 = extraout_XMM0_Da_02;
          if (lVar35 < *(int64_t *)(lVar41 + uVar44 * 8)) {
            do {
              bVar56 = uVar44 == 0;
              uVar44 = uVar44 - 1;
              if (bVar56) {
                uVar52 = 0;
                uVar43 = 0;
                if ((int)uVar54 < 1) goto LAB_01827820;
                goto LAB_018277fc;
              }
            } while (lVar35 < *(int64_t *)(lVar41 + uVar44 * 8));
            uVar42 = (uint)uVar44;
          }
          else {
            lVar37 = 0;
            do {
              uVar52 = uVar54;
              if (~((int64_t)(int)uVar54 + 1U) + uVar44 + lVar37 == -2) goto LAB_01827820;
              lVar47 = lVar37 + 1;
              lVar5 = lVar37 * 8;
              lVar37 = lVar47;
            } while (*(int64_t *)(lVar41 + uVar44 * 8 + 8 + lVar5) <= lVar35);
            uVar42 = (uVar42 + (int)lVar47) - 1;
            uVar44 = (uint64_t)uVar42;
          }
          uVar52 = (uint)uVar44;
          uVar43 = uVar52;
          if ((int)uVar42 < (int)uVar54) {
LAB_018277fc:
            uVar52 = uVar43;
            if (*(int64_t *)(lVar41 + 8 + (int64_t)(int)uVar52 * 8) - lVar35 <
                lVar35 - *(int64_t *)(lVar41 + (int64_t)(int)uVar52 * 8)) {
              uVar52 = uVar52 + 1;
            }
          }
          goto LAB_01827820;
        }
      }
      else {
LAB_01827820:
        if ((int)uVar52 < (int)uVar51) {
          fVar57 = (float)___bzero(~uVar52);
        }
      }
      if (lVar38 != 0) {
        fVar57 = (float)FUN_00d50b20();
      }
      lVar46 = lVar46 + 1;
      lVar35 = *this_ptr;
      iVar30 = *(int *)(lVar35 + 0xc);
    } while (lVar46 < iVar30);
  }
  fVar25 = _UNK_0241109c;
  fVar24 = _UNK_02411098;
  fVar23 = _UNK_02411094;
  fVar58 = g_02411090;
  uVar51 = _UNK_023b2d5c;
  uVar52 = _UNK_023b2d58;
  uVar54 = _UNK_023b2d54;
  fVar22 = g_023b2d50;
  uVar42 = iVar32 >> 3;
  if (iVar31 < 8) goto LAB_0182799a;
  lVar46 = *(int64_t *)(*param_2 + 0x10);
  if (uVar42 < 8) {
    uVar44 = 0;
    fVar22 = g_02394274;
    uVar54 = g_02390124;
  }
  else {
    uVar44 = (uint64_t)(uVar42 & 0xfffffff8);
    uVar55 = (uVar44 - 8 >> 3) + 1;
    if (uVar44 - 8 == 0) {
      lVar38 = 0;
LAB_0182792e:
      fVar58 = g_023b2d50;
      pfVar2 = (float *)(lVar46 + lVar38 * 4);
      pfVar4 = (float *)(lVar46 + 0x10 + lVar38 * 4);
      uVar60 = -(uint)(_UNK_02411094 < pfVar2[1]) & _UNK_023b2d54;
      uVar61 = -(uint)(_UNK_02411098 < pfVar2[2]) & _UNK_023b2d58;
      uVar62 = -(uint)(_UNK_0241109c < pfVar2[3]) & _UNK_023b2d5c;
      uVar54 = -(uint)(g_02411090 < *pfVar4) & (uint)g_023b2d50;
      uVar52 = -(uint)(_UNK_02411094 < pfVar4[1]) & _UNK_023b2d54;
      uVar51 = -(uint)(_UNK_02411098 < pfVar4[2]) & _UNK_023b2d58;
      uVar43 = -(uint)(_UNK_0241109c < pfVar4[3]) & _UNK_023b2d5c;
      puVar3 = (uint *)(lVar46 + lVar38 * 4);
      *puVar3 = -(uint)(g_02411090 < *pfVar2) & (uint)g_023b2d50;
      puVar3[1] = uVar60;
      puVar3[2] = uVar61;
      puVar3[3] = uVar62;
      puVar3 = (uint *)(lVar46 + 0x10 + lVar38 * 4);
      *puVar3 = uVar54;
      puVar3[1] = uVar52;
      puVar3[2] = uVar51;
      puVar3[3] = uVar43;
    }
    else {
      lVar41 = -(uVar55 & 0xfffffffffffffffe);
      lVar38 = 0;
      do {
        pfVar2 = (float *)(lVar46 + lVar38 * 4);
        fVar57 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar4 = (float *)(lVar46 + 0x10 + lVar38 * 4);
        fVar10 = *pfVar4;
        fVar11 = pfVar4[1];
        fVar12 = pfVar4[2];
        fVar13 = pfVar4[3];
        pfVar4 = (float *)(lVar46 + 0x20 + lVar38 * 4);
        fVar14 = *pfVar4;
        fVar15 = pfVar4[1];
        fVar16 = pfVar4[2];
        fVar17 = pfVar4[3];
        pfVar4 = (float *)(lVar46 + 0x30 + lVar38 * 4);
        fVar18 = *pfVar4;
        fVar19 = pfVar4[1];
        fVar20 = pfVar4[2];
        fVar21 = pfVar4[3];
        puVar3 = (uint *)(lVar46 + lVar38 * 4);
        *puVar3 = -(uint)(fVar58 < *pfVar2) & (uint)fVar22;
        puVar3[1] = -(uint)(fVar23 < fVar57) & uVar54;
        puVar3[2] = -(uint)(fVar24 < fVar8) & uVar52;
        puVar3[3] = -(uint)(fVar25 < fVar9) & uVar51;
        puVar3 = (uint *)(lVar46 + 0x10 + lVar38 * 4);
        *puVar3 = -(uint)(fVar58 < fVar10) & (uint)fVar22;
        puVar3[1] = -(uint)(fVar23 < fVar11) & uVar54;
        puVar3[2] = -(uint)(fVar24 < fVar12) & uVar52;
        puVar3[3] = -(uint)(fVar25 < fVar13) & uVar51;
        puVar3 = (uint *)(lVar46 + 0x20 + lVar38 * 4);
        *puVar3 = -(uint)(fVar58 < fVar14) & (uint)fVar22;
        puVar3[1] = -(uint)(fVar23 < fVar15) & uVar54;
        puVar3[2] = -(uint)(fVar24 < fVar16) & uVar52;
        puVar3[3] = -(uint)(fVar25 < fVar17) & uVar51;
        puVar3 = (uint *)(lVar46 + 0x30 + lVar38 * 4);
        *puVar3 = -(uint)(fVar58 < fVar18) & (uint)fVar22;
        puVar3[1] = -(uint)(fVar23 < fVar19) & uVar54;
        puVar3[2] = -(uint)(fVar24 < fVar20) & uVar52;
        puVar3[3] = -(uint)(fVar25 < fVar21) & uVar51;
        lVar38 = lVar38 + 0x10;
        lVar41 = lVar41 + 2;
      } while (lVar41 != 0);
      if ((uVar55 & 1) != 0) goto LAB_0182792e;
    }
    fVar57 = fVar58;
    fVar22 = g_02394274;
    uVar54 = g_02390124;
    if (uVar44 == uVar42) goto LAB_0182799a;
  }
  do {
    *(uint *)(lVar46 + uVar44 * 4) = -(uint)(fVar22 < *(float *)(lVar46 + uVar44 * 4)) & uVar54;
    uVar44 = uVar44 + 1;
    fVar57 = fVar22;
  } while (uVar42 != uVar44);
LAB_0182799a:
  if (0 < iVar30) {
    lVar35 = *this_ptr;
    uVar44 = 0;
    do {
      plVar45 = *(int64_t **)(*(int64_t *)(lVar35 + 0x10) + uVar44 * 8);
      if (plVar45 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pVar39 = (void*)lVar35;
      pvVar34 = _pthread_getspecific(pVar39);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar35 = FUN_013de650();
      pvVar34 = _pthread_getspecific(pVar39);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar38 = FUN_013de790();
      lVar38 = lVar38 + lVar35;
      lVar46 = *arg1;
      iVar31 = *(int *)(lVar46 + 0x18);
      iVar32 = iVar31 + 7;
      if (-1 < iVar31) {
        iVar32 = iVar31;
      }
      uVar52 = (iVar32 >> 3) - 1;
      uVar54 = uVar52;
      if (7 < iVar31) {
        uVar54 = 0;
      }
      uVar53 = (uint64_t)(int)uVar54;
      lVar41 = *(int64_t *)(lVar46 + 0x10);
      lVar37 = *(int64_t *)(lVar41 + uVar53 * 8);
      uVar55 = uVar53;
      if (lVar35 < lVar37) {
        do {
          bVar56 = uVar55 == 0;
          uVar55 = uVar55 - 1;
          if (bVar56) {
            uVar51 = 0;
            uVar60 = 0;
            if ((int)uVar52 < 1) goto joined_r0x01827b76;
            goto LAB_01827b18;
          }
        } while (lVar35 < *(int64_t *)(lVar41 + uVar55 * 8));
        uVar43 = (uint)uVar55;
      }
      else {
        lVar47 = 0;
        do {
          lVar46 = lVar47;
          uVar51 = uVar52;
          if (~((int64_t)(int)uVar52 + 1U) + uVar53 + lVar47 == -2) goto joined_r0x01827b76;
          lVar46 = lVar47 + 1;
          lVar5 = lVar47 * 8;
          lVar47 = lVar46;
        } while (*(int64_t *)(lVar41 + uVar53 * 8 + 8 + lVar5) <= lVar35);
        uVar43 = (uVar54 + (int)lVar46) - 1;
        uVar55 = (uint64_t)uVar43;
      }
      uVar51 = (uint)uVar55;
      uVar60 = uVar51;
      if ((int)uVar43 < (int)uVar52) {
LAB_01827b18:
        uVar51 = uVar60;
        lVar46 = *(int64_t *)(lVar41 + (int64_t)(int)uVar51 * 8);
        if (*(int64_t *)(lVar41 + 8 + (int64_t)(int)uVar51 * 8) - lVar35 < lVar35 - lVar46) {
          uVar51 = uVar51 + 1;
        }
      }
joined_r0x01827b76:
      if (lVar38 < lVar37) {
        do {
          bVar56 = uVar53 == 0;
          uVar53 = uVar53 - 1;
          if (bVar56) {
            uVar43 = 0;
            uVar60 = 0;
            if ((int)uVar52 < 1) goto LAB_01827be1;
            goto LAB_01827bc7;
          }
        } while (lVar38 < *(int64_t *)(lVar41 + uVar53 * 8));
        uVar54 = (uint)uVar53;
      }
      else {
        lVar46 = 0;
        do {
          uVar43 = uVar52;
          if (~((int64_t)(int)uVar52 + 1U) + uVar53 + lVar46 == -2) goto LAB_01827be1;
          lVar35 = lVar46 + 1;
          lVar37 = lVar46 * 8;
          lVar46 = lVar35;
        } while (*(int64_t *)(lVar41 + uVar53 * 8 + 8 + lVar37) <= lVar38);
        uVar54 = ((int)lVar35 + uVar54) - 1;
        uVar53 = (uint64_t)uVar54;
      }
      uVar43 = (uint)uVar53;
      uVar60 = uVar43;
      if ((int)uVar54 < (int)uVar52) {
LAB_01827bc7:
        uVar43 = uVar60;
        lVar46 = (int64_t)(int)uVar43;
        if (*(int64_t *)(lVar41 + 8 + lVar46 * 8) - lVar38 <
            lVar38 - *(int64_t *)(lVar41 + lVar46 * 8)) {
          uVar43 = uVar43 + 1;
        }
      }
LAB_01827be1:
      if (uVar44 == *(int *)(*this_ptr + 0xc) - 1) {
        uVar43 = uVar42;
      }
      pvVar34 = _pthread_getspecific((void*)lVar46);
      if (pvVar34 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar29 = FUN_013dee00();
      pVar39 = 0xffffffff;
      if (cVar29 == '\0') {
        pvVar34 = _pthread_getspecific(0xffffffff);
        if (pvVar34 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_40 == (int64_t *)0x0) {
          cVar29 = '\0';
        }
        else {
          pvVar34 = _pthread_getspecific(pVar39);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar34 = _pthread_getspecific(pVar39);
          if (pvVar34 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar29 = FUN_014bc070();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar29 == '\0') {
          uVar55 = FUN_00e7b4e0();
          uVar53 = uVar55 >> 0x20;
          iVar31 = (int)(uVar55 >> 0x20);
          uVar54 = 0xffffffff;
          if ((int)uVar51 < (int)uVar43) {
            lVar35 = (int64_t)(int)uVar51;
            bVar56 = false;
            uVar52 = 0xffffffff;
            do {
              if (g_023b36e4 < *(float *)(*(int64_t *)(*param_2 + 0x10) + lVar35 * 4)) {
                uVar54 = uVar52;
                if (!bVar56) {
                  uVar54 = uVar51;
                }
                bVar27 = true;
              }
              else {
                uVar54 = 0xffffffff;
                bVar27 = false;
                if ((bVar56) && (uVar52 != 0xffffffff)) {
                  if (((int)uVar55 == -1) || ((int)uVar53 < (int)(uVar51 - uVar52))) {
                    uVar55 = FUN_00e7b4e0();
                    uVar53 = uVar55 >> 0x20;
                  }
                  bVar27 = false;
                }
              }
              bVar56 = bVar27;
              iVar31 = (int)uVar53;
              lVar35 = lVar35 + 1;
              uVar51 = uVar51 + 1;
              uVar52 = uVar54;
            } while (uVar43 != uVar51);
          }
          if (((g_023b36e4 <
                *(float *)(*(int64_t *)(*param_2 + 0x10) + -4 + (int64_t)(int)uVar43 * 4)) &&
              (uVar54 != 0xffffffff)) && (((int)uVar55 == -1 || (iVar31 < (int)(uVar43 - uVar54)))))
          {
            FUN_00e7b4e0();
          }
        }
      }
      uVar59 = FUN_00d46530();
      local_f8 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar59 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_f8 = '\x01';
      local_100 = local_50;
      local_38 = '\0';
      local_40 = plVar45;
      FUN_00ca0840(uVar59,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar59 = FUN_00d46530();
      local_e8 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar59 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_e8 = '\x01';
      local_f0 = local_50;
      local_38 = '\0';
      local_40 = plVar45;
      FUN_00ca0840(uVar59,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar59 = FUN_00d46530();
      local_d8 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar59 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_d8 = '\x01';
      local_e0 = local_50;
      local_38 = '\0';
      local_40 = plVar45;
      FUN_00ca0840(uVar59,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar59 = FUN_00d46530();
      local_c8 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar59 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_50;
      local_38 = '\0';
      local_40 = plVar45;
      FUN_00ca0840(uVar59,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar59 = FUN_00d46300();
      local_b8 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar59 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_b8 = '\x01';
      local_c0 = local_50;
      local_38 = '\0';
      local_40 = plVar45;
      fVar57 = (float)FUN_00ca0840(uVar59,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        fVar57 = (float)FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        fVar57 = (float)FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        fVar57 = (float)FUN_00d50b20();
      }
      if (plVar45 != (int64_t *)0x0) {
        fVar57 = (float)FUN_00d50b20();
      }
      uVar44 = uVar44 + 1;
      lVar35 = *this_ptr;
      iVar30 = *(int *)(lVar35 + 0xc);
    } while ((int64_t)uVar44 < (int64_t)iVar30);
  }
  if (0 < iVar30) {
    lVar46 = 0;
    do {
      lVar35 = *(int64_t *)(*(int64_t *)(lVar35 + 0x10) + lVar46 * 8);
      if (lVar35 != 0) {
        fVar57 = (float)FUN_00d50b00();
      }
      local_168 = '\0';
      local_170 = lVar35;
      FUN_0133ae40(fVar57,&local_170);
      iVar31 = FUN_00d45870();
      uVar59 = extraout_XMM0_Da_03;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        uVar59 = FUN_00d50b20();
      }
      local_158 = '\0';
      local_160 = lVar35;
      FUN_0133ae40(uVar59,&local_160);
      iVar32 = FUN_00d45870();
      uVar59 = extraout_XMM0_Da_04;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        uVar59 = FUN_00d50b20();
      }
      local_148 = '\0';
      local_150 = lVar35;
      FUN_0133ae40(uVar59,&local_150);
      iVar30 = FUN_00d45870();
      uVar59 = extraout_XMM0_Da_05;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        uVar59 = FUN_00d50b20();
      }
      local_138 = '\0';
      local_140 = lVar35;
      FUN_0133ae40(uVar59,&local_140);
      iVar33 = FUN_00d45870();
      fVar57 = extraout_XMM0_Da_06;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        fVar57 = (float)FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        fVar57 = (float)FUN_00d50b20();
      }
      if (iVar31 < iVar32) {
        uVar44 = (uint64_t)iVar31;
        if (iVar30 == -1) {
          lVar38 = *(int64_t *)(*param_2 + 0x10);
          uVar55 = (int64_t)iVar32 - uVar44;
          if (7 < uVar55) {
            uVar48 = uVar55 & 0xfffffffffffffff8;
            uVar53 = (uVar48 - 8 >> 3) + 1;
            uVar50 = (uint64_t)((uint)uVar53 & 3);
            if (uVar48 - 8 < 0x18) {
              lVar37 = 0;
            }
            else {
              lVar41 = lVar38 + uVar44 * 4;
              lVar47 = -(uVar53 & 0xfffffffffffffffc);
              lVar37 = 0;
              do {
                puVar36 = (void*)(lVar41 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x10 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x20 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x30 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x40 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x50 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x60 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x70 + lVar37 * 4);
                *puVar36 = 0;
                puVar36[1] = 0;
                lVar37 = lVar37 + 0x20;
                lVar47 = lVar47 + 4;
              } while (lVar47 != 0);
            }
            fVar57 = 0.0;
            if (uVar50 != 0) {
              lVar41 = lVar38 + (lVar37 + uVar44) * 4;
              lVar37 = 0;
              do {
                puVar36 = (void*)(lVar41 + lVar37);
                *puVar36 = 0;
                puVar36[1] = 0;
                puVar36 = (void*)(lVar41 + 0x10 + lVar37);
                *puVar36 = 0;
                puVar36[1] = 0;
                lVar37 = lVar37 + 0x20;
              } while (uVar50 << 5 != lVar37);
            }
            if (uVar55 == uVar48) goto LAB_018285a0;
            uVar44 = uVar44 + uVar48;
          }
          do {
            *(void*)(lVar38 + uVar44 * 4) = 0;
            uVar44 = uVar44 + 1;
          } while ((int64_t)iVar32 != uVar44);
        }
        else {
          uVar55 = uVar44;
          if ((iVar32 - iVar31 & 1U) != 0) {
            if ((iVar31 < iVar30) || (iVar33 < iVar31)) {
              *(void*)(*(int64_t *)(*param_2 + 0x10) + uVar44 * 4) = 0;
            }
            uVar55 = uVar44 + 1;
          }
          if (~uVar44 + (int64_t)iVar32 != 0) {
            do {
              if (((int64_t)uVar55 < (int64_t)iVar30) || ((int64_t)iVar33 < (int64_t)uVar55)) {
                *(void*)(*(int64_t *)(*param_2 + 0x10) + uVar55 * 4) = 0;
              }
              if (((int64_t)(uVar55 + 1) < (int64_t)iVar30) ||
                 ((int64_t)iVar33 <= (int64_t)uVar55)) {
                *(void*)(*(int64_t *)(*param_2 + 0x10) + 4 + uVar55 * 4) = 0;
              }
              uVar55 = uVar55 + 2;
            } while (uVar55 != (int64_t)iVar32);
          }
        }
      }
LAB_018285a0:
      if (lVar35 != 0) {
        fVar57 = (float)FUN_00d50b20();
      }
      lVar46 = lVar46 + 1;
      lVar35 = *this_ptr;
    } while (lVar46 < *(int *)(lVar35 + 0xc));
  }
  uVar59 = FUN_015c15b0((float)local_res18,uVar42);
  lVar35 = *this_ptr;
  if (0 < *(int *)(lVar35 + 0xc)) {
    lVar46 = 0;
    do {
      plVar45 = *(int64_t **)(*(int64_t *)(lVar35 + 0x10) + lVar46 * 8);
      if (plVar45 != (int64_t *)0x0) {
        uVar59 = FUN_00d50b00();
      }
      local_128 = '\0';
      local_130 = plVar45;
      FUN_0133ae40(uVar59,&local_130);
      iVar31 = FUN_00d45870();
      uVar59 = extraout_XMM0_Da_07;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      local_118 = '\0';
      local_120 = plVar45;
      FUN_0133ae40(uVar59,&local_120);
      iVar32 = FUN_00d45870();
      uVar59 = extraout_XMM0_Da_08;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
        uVar59 = FUN_00d50b20();
      }
      if (iVar31 != -1) {
        iVar33 = iVar32 - iVar31;
        iVar30 = iVar33 + 3;
        if (-1 < iVar33) {
          iVar30 = iVar33;
        }
        iVar30 = iVar30 >> 2;
        lVar38 = (int64_t)iVar31;
        lVar35 = *(int64_t *)(*param_2 + 0x10);
        fVar57 = *(float *)(lVar35 + lVar38 * 4);
        if ((g_023b36e4 < fVar57) || (g_023b36e4 < *(float *)(lVar35 + (int64_t)iVar32 * 4))) {
          iVar30 = iVar30 * 2;
        }
        if (local_res18 <= iVar30) {
          iVar30 = local_res18;
        }
        iVar31 = iVar30;
        if (0 < iVar30) {
          while ((fVar57 <= g_023b36e4 && (iVar31 + -1 != 0))) {
            fVar57 = *(float *)(lVar35 + 4 + lVar38 * 4);
            lVar38 = lVar38 + 1;
            iVar31 = iVar31 + -1;
          }
          lVar38 = 0;
          do {
            if (g_023b36e4 < *(float *)(lVar35 + (int64_t)iVar32 * 4 + lVar38 * 4)) break;
            lVar38 = lVar38 + -1;
          } while (-iVar30 != (int)lVar38);
        }
        uVar59 = FUN_00d46530();
        local_a8 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar59 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_a8 = '\x01';
        local_b0 = local_50;
        local_38 = '\0';
        local_40 = plVar45;
        FUN_00ca0840(uVar59,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar59 = FUN_00d46530();
        local_98 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            uVar59 = FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_98 = '\x01';
        local_a0 = local_50;
        local_38 = '\0';
        local_40 = plVar45;
        uVar59 = FUN_00ca0840(uVar59,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar59 = FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          uVar59 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          uVar59 = FUN_00d50b20();
        }
      }
      if (plVar45 != (int64_t *)0x0) {
        uVar59 = FUN_00d50b20();
      }
      lVar46 = lVar46 + 1;
      lVar35 = *this_ptr;
    } while (lVar46 < *(int *)(lVar35 + 0xc));
  }
  if (local_110 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

