// Function: FUN_012ba340
// Address: 012ba340
// Size: 3128 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012ba340(uint32_t param_1,uint32_t param_2,uint32_t param_3,void*param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  float *pfVar6;
  double dVar7;
  uint uVar8;
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
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  size_t sVar26;
  int iVar27;
  void*in_RCX;
  void*puVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  void *pvVar31;
  uint in_EDX;
  uint64_t uVar32;
  int64_t lVar33;
  int64_t lVar34;
  uint unaff_ESI;
  uint64_t uVar35;
  float *pfVar36;
  uint uVar37;
  void *this_ptr;
  float *in_R8;
  uint uVar38;
  uint64_t uVar39;
  int iVar40;
  void *pvVar41;
  int iVar42;
  uint64_t uVar43;
  uint32_t uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  sVar26 = (size_t)in_RCX;
  uVar38 = *(uint *)((int64_t)this_ptr + 0x160);
  puVar28 = in_RCX;
  if (0 < (int)uVar38) {
    uVar32 = 0;
    uVar44 = param_1;
    do {
      uVar44 = (**(code **)(g_02786500 + 0x38))(uVar44,unaff_ESI);
      uVar32 = uVar32 + 1;
    } while (uVar38 != uVar32);
    if (0 < *(int *)((int64_t)this_ptr + 0x160)) {
      lVar33 = 0;
      do {
        uVar44 = FUN_00e83530(uVar44,*(void*)
                                      (*(int64_t *)((int64_t)this_ptr + 0x1e0) + lVar33 * 8));
        lVar33 = lVar33 + 1;
      } while (lVar33 < *(int *)((int64_t)this_ptr + 0x160));
    }
  }
  ___bzero();
  uVar8 = g_02390140;
  fVar45 = g_02390124;
  uVar38 = *(uint *)((int64_t)this_ptr + 0x160);
  if (0 < (int)uVar38) {
    if ((int)in_EDX < 1) {
      puVar28 = (void*)((uint64_t)uVar38 - 1);
      uVar32 = (uint64_t)(uVar38 & 7);
      if ((void*)((int64_t)&MACH_HEADER.cputype + 2) < puVar28) {
        lVar33 = -(uint64_t)(uVar38 & 0xfffffff8);
        do {
          lVar33 = lVar33 + 8;
          puVar28 = (void*)0x0;
        } while (lVar33 != 0);
      }
      for (; uVar32 != 0; uVar32 = uVar32 - 1) {
      }
    }
    else {
      puVar28 = *(void**)((int64_t)this_ptr + 0x1e8);
      lVar33 = *(int64_t *)((int64_t)this_ptr + 0x1b8);
      uVar32 = 0;
      do {
        lVar5 = *(int64_t *)(puVar28 + uVar32 * 8);
        uVar23 = 0;
        do {
          uVar4 = *(void*)(lVar5 + uVar23 * 8);
          fVar46 = (float)uVar4;
          fVar47 = (float)((uint64_t)uVar4 >> 0x20);
          fVar49 = (float)((uint)fVar47 & uVar8);
          if ((fVar46 != 0.0) || (fVar48 = fVar49, NAN(fVar46))) {
            fVar48 = (float)((uint)fVar46 & uVar8);
            if ((fVar47 != 0.0) || (NAN(fVar47))) {
              if (fVar49 < fVar48) {
                fVar48 = SQRT((fVar49 / fVar48) * (fVar49 / fVar48) + fVar45) * fVar48;
              }
              else {
                fVar48 = SQRT((fVar48 / fVar49) * (fVar48 / fVar49) + fVar45) * fVar49;
              }
            }
          }
          *(float *)(lVar33 + uVar23 * 4) = fVar48 + *(float *)(lVar33 + uVar23 * 4);
          uVar23 = uVar23 + 1;
        } while (in_EDX != uVar23);
        uVar32 = uVar32 + 1;
      } while (uVar32 != uVar38);
    }
    if (1 < (int)uVar38) {
      (**(code **)(g_02786500 + 0x20))(g_02390124 / (float)(int)uVar38);
    }
  }
  if (0 < (int)in_EDX) {
    _memset_pattern16(puVar28,(void *)((uint64_t)in_EDX << 2),sVar26);
  }
  uVar32 = (uint64_t)in_RCX & 0xffffffff;
  FUN_012b9d70(param_2,param_3,param_1,in_R8);
  dVar7 = (double)*in_R8;
  fVar45 = SUB84(dVar7,0);
  if ((dVar7 < g_0240d1b8) || (g_0240d1c0 < dVar7)) {
    *param_4 = 1;
  }
  uVar38 = *(uint *)((int64_t)this_ptr + 0x160);
  uVar23 = (uint64_t)uVar38;
  if (0 < (int)uVar38) {
    if (1 < (int)sVar26) {
      uVar25 = *(uint64_t *)((int64_t)this_ptr + 0x1e8);
      lVar33 = *(int64_t *)((int64_t)this_ptr + 0x1c0);
      uVar35 = (uint64_t)in_RCX & 0xffffffff;
      uVar32 = uVar35 - 1;
      if (uVar32 < 4) {
        uVar35 = 0;
        do {
          lVar5 = *(int64_t *)(uVar25 + uVar35 * 8);
          lVar34 = 1;
          if (sVar26 != 2) {
            lVar34 = 1;
            do {
              *(float *)(lVar5 + lVar34 * 8) =
                   *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
              *(float *)(lVar5 + 4 + lVar34 * 8) =
                   *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
              *(float *)(lVar5 + 8 + lVar34 * 8) =
                   *(float *)(lVar33 + 4 + lVar34 * 4) * *(float *)(lVar5 + 8 + lVar34 * 8);
              fVar45 = *(float *)(lVar33 + 4 + lVar34 * 4) * *(float *)(lVar5 + 0xc + lVar34 * 8);
              *(float *)(lVar5 + 0xc + lVar34 * 8) = fVar45;
              lVar2 = lVar34 - (uVar32 & 0xfffffffffffffffe);
              lVar34 = lVar34 + 2;
            } while (lVar2 != -1);
          }
          if ((uVar32 & 1) != 0) {
            *(float *)(lVar5 + lVar34 * 8) =
                 *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
            fVar45 = *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
            *(float *)(lVar5 + 4 + lVar34 * 8) = fVar45;
          }
          uVar35 = uVar35 + 1;
        } while (uVar35 != uVar23);
      }
      else {
        uVar1 = lVar33 + 4;
        uVar3 = lVar33 + uVar35 * 4;
        uVar24 = uVar32 & 0xfffffffffffffffc;
        if (uVar32 == uVar24) {
          uVar29 = (uVar24 - 4 >> 2) + 1;
          uVar43 = 0;
          do {
            lVar5 = *(int64_t *)(uVar25 + uVar43 * 8);
            uVar39 = lVar5 + 8;
            if ((uVar39 < uVar3) && (uVar1 < lVar5 + uVar35 * 8)) {
              lVar34 = 1;
              if (sVar26 != 2) {
                lVar34 = 1;
                do {
                  *(float *)(lVar5 + lVar34 * 8) =
                       *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
                  *(float *)(lVar5 + 4 + lVar34 * 8) =
                       *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
                  *(float *)(uVar39 + lVar34 * 8) =
                       *(float *)(uVar1 + lVar34 * 4) * *(float *)(uVar39 + lVar34 * 8);
                  fVar45 = *(float *)(uVar1 + lVar34 * 4) * *(float *)(lVar5 + 0xc + lVar34 * 8);
                  *(float *)(lVar5 + 0xc + lVar34 * 8) = fVar45;
                  lVar2 = lVar34 - (uVar32 & 0xfffffffffffffffe);
                  lVar34 = lVar34 + 2;
                } while (lVar2 != -1);
              }
              if ((uVar32 & 1) != 0) {
                *(float *)(lVar5 + lVar34 * 8) =
                     *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + lVar34 * 8);
                fVar45 = *(float *)(lVar33 + lVar34 * 4) * *(float *)(lVar5 + 4 + lVar34 * 8);
                *(float *)(lVar5 + 4 + lVar34 * 8) = fVar45;
              }
            }
            else {
              if (uVar24 - 4 == 0) {
                uVar39 = 0;
              }
              else {
                uVar39 = 0;
                lVar34 = -(uVar29 & 0xfffffffffffffffe);
                do {
                  pfVar6 = (float *)(lVar33 + 4 + uVar39 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  pfVar6 = (float *)(lVar5 + 8 + uVar39 * 8);
                  fVar9 = pfVar6[1];
                  fVar10 = pfVar6[2];
                  fVar11 = pfVar6[3];
                  pfVar36 = (float *)(lVar5 + 0x18 + uVar39 * 8);
                  fVar12 = *pfVar36;
                  fVar13 = pfVar36[1];
                  fVar14 = pfVar36[2];
                  fVar15 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x28 + uVar39 * 8);
                  fVar16 = *pfVar36;
                  fVar17 = pfVar36[1];
                  fVar18 = pfVar36[2];
                  fVar19 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x38 + uVar39 * 8);
                  fVar45 = *pfVar36;
                  fVar20 = pfVar36[1];
                  fVar21 = pfVar36[2];
                  fVar22 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 8 + uVar39 * 8);
                  *pfVar36 = *pfVar6 * fVar46;
                  pfVar36[1] = fVar9 * fVar46;
                  pfVar36[2] = fVar10 * fVar47;
                  pfVar36[3] = fVar11 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x18 + uVar39 * 8);
                  *pfVar6 = fVar12 * fVar49;
                  pfVar6[1] = fVar13 * fVar49;
                  pfVar6[2] = fVar14 * fVar48;
                  pfVar6[3] = fVar15 * fVar48;
                  pfVar6 = (float *)(lVar33 + 0x14 + uVar39 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  fVar45 = fVar45 * fVar49;
                  pfVar6 = (float *)(lVar5 + 0x28 + uVar39 * 8);
                  *pfVar6 = fVar16 * fVar46;
                  pfVar6[1] = fVar17 * fVar46;
                  pfVar6[2] = fVar18 * fVar47;
                  pfVar6[3] = fVar19 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x38 + uVar39 * 8);
                  *pfVar6 = fVar45;
                  pfVar6[1] = fVar20 * fVar49;
                  pfVar6[2] = fVar21 * fVar48;
                  pfVar6[3] = fVar22 * fVar48;
                  uVar39 = uVar39 + 8;
                  lVar34 = lVar34 + 2;
                } while (lVar34 != 0);
                if ((uVar29 & 1) == 0) goto LAB_012ba760;
              }
              uVar39 = uVar39 | 1;
              pfVar6 = (float *)(lVar33 + uVar39 * 4);
              fVar46 = *pfVar6;
              fVar47 = pfVar6[1];
              fVar49 = pfVar6[2];
              fVar48 = pfVar6[3];
              pfVar6 = (float *)(lVar5 + uVar39 * 8);
              fVar9 = pfVar6[1];
              fVar10 = pfVar6[2];
              fVar11 = pfVar6[3];
              pfVar36 = (float *)(lVar5 + 0x10 + uVar39 * 8);
              fVar12 = pfVar36[1];
              fVar13 = pfVar36[2];
              fVar14 = pfVar36[3];
              fVar45 = *pfVar36 * fVar49;
              pfVar36 = (float *)(lVar5 + uVar39 * 8);
              *pfVar36 = *pfVar6 * fVar46;
              pfVar36[1] = fVar9 * fVar46;
              pfVar36[2] = fVar10 * fVar47;
              pfVar36[3] = fVar11 * fVar47;
              pfVar6 = (float *)(lVar5 + 0x10 + uVar39 * 8);
              *pfVar6 = fVar45;
              pfVar6[1] = fVar12 * fVar49;
              pfVar6[2] = fVar13 * fVar48;
              pfVar6[3] = fVar14 * fVar48;
            }
LAB_012ba760:
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar23);
        }
        else {
          uVar29 = (uVar24 - 4 >> 2) + 1;
          uVar32 = -uVar35;
          uVar43 = 0;
          do {
            lVar5 = *(int64_t *)(uVar25 + uVar43 * 8);
            if ((uVar3 <= lVar5 + 8U) || (uVar39 = 1, lVar5 + uVar35 * 8 <= uVar1)) {
              uVar39 = uVar24 + 1;
              if (uVar24 - 4 == 0) {
                uVar30 = 0;
              }
              else {
                uVar30 = 0;
                lVar34 = -(uVar29 & 0xfffffffffffffffe);
                do {
                  pfVar6 = (float *)(lVar33 + 4 + uVar30 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  pfVar6 = (float *)(lVar5 + 8 + uVar30 * 8);
                  fVar9 = pfVar6[1];
                  fVar10 = pfVar6[2];
                  fVar11 = pfVar6[3];
                  pfVar36 = (float *)(lVar5 + 0x18 + uVar30 * 8);
                  fVar12 = *pfVar36;
                  fVar13 = pfVar36[1];
                  fVar14 = pfVar36[2];
                  fVar15 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x28 + uVar30 * 8);
                  fVar16 = *pfVar36;
                  fVar17 = pfVar36[1];
                  fVar18 = pfVar36[2];
                  fVar19 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 0x38 + uVar30 * 8);
                  fVar45 = *pfVar36;
                  fVar20 = pfVar36[1];
                  fVar21 = pfVar36[2];
                  fVar22 = pfVar36[3];
                  pfVar36 = (float *)(lVar5 + 8 + uVar30 * 8);
                  *pfVar36 = *pfVar6 * fVar46;
                  pfVar36[1] = fVar9 * fVar46;
                  pfVar36[2] = fVar10 * fVar47;
                  pfVar36[3] = fVar11 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x18 + uVar30 * 8);
                  *pfVar6 = fVar12 * fVar49;
                  pfVar6[1] = fVar13 * fVar49;
                  pfVar6[2] = fVar14 * fVar48;
                  pfVar6[3] = fVar15 * fVar48;
                  pfVar6 = (float *)(lVar33 + 0x14 + uVar30 * 4);
                  fVar46 = *pfVar6;
                  fVar47 = pfVar6[1];
                  fVar49 = pfVar6[2];
                  fVar48 = pfVar6[3];
                  fVar45 = fVar45 * fVar49;
                  pfVar6 = (float *)(lVar5 + 0x28 + uVar30 * 8);
                  *pfVar6 = fVar16 * fVar46;
                  pfVar6[1] = fVar17 * fVar46;
                  pfVar6[2] = fVar18 * fVar47;
                  pfVar6[3] = fVar19 * fVar47;
                  pfVar6 = (float *)(lVar5 + 0x38 + uVar30 * 8);
                  *pfVar6 = fVar45;
                  pfVar6[1] = fVar20 * fVar49;
                  pfVar6[2] = fVar21 * fVar48;
                  pfVar6[3] = fVar22 * fVar48;
                  uVar30 = uVar30 + 8;
                  lVar34 = lVar34 + 2;
                } while (lVar34 != 0);
                if ((uVar29 & 1) == 0) goto LAB_012baa50;
              }
              uVar30 = uVar30 | 1;
              pfVar6 = (float *)(lVar33 + uVar30 * 4);
              fVar46 = *pfVar6;
              fVar47 = pfVar6[1];
              fVar49 = pfVar6[2];
              fVar48 = pfVar6[3];
              pfVar6 = (float *)(lVar5 + uVar30 * 8);
              fVar9 = pfVar6[1];
              fVar10 = pfVar6[2];
              fVar11 = pfVar6[3];
              pfVar36 = (float *)(lVar5 + 0x10 + uVar30 * 8);
              fVar12 = pfVar36[1];
              fVar13 = pfVar36[2];
              fVar14 = pfVar36[3];
              fVar45 = *pfVar36 * fVar49;
              pfVar36 = (float *)(lVar5 + uVar30 * 8);
              *pfVar36 = *pfVar6 * fVar46;
              pfVar36[1] = fVar9 * fVar46;
              pfVar36[2] = fVar10 * fVar47;
              pfVar36[3] = fVar11 * fVar47;
              pfVar6 = (float *)(lVar5 + 0x10 + uVar30 * 8);
              *pfVar6 = fVar45;
              pfVar6[1] = fVar12 * fVar49;
              pfVar6[2] = fVar13 * fVar48;
              pfVar6[3] = fVar14 * fVar48;
            }
LAB_012baa50:
            uVar30 = uVar39;
            if (((uint64_t)in_RCX & 1) == 0) {
              *(float *)(lVar5 + uVar39 * 8) =
                   *(float *)(lVar33 + uVar39 * 4) * *(float *)(lVar5 + uVar39 * 8);
              fVar45 = *(float *)(lVar33 + uVar39 * 4) * *(float *)(lVar5 + 4 + uVar39 * 8);
              *(float *)(lVar5 + 4 + uVar39 * 8) = fVar45;
              uVar30 = uVar39 + 1;
            }
            if (~uVar39 != uVar32) {
              do {
                *(float *)(lVar5 + uVar30 * 8) =
                     *(float *)(lVar33 + uVar30 * 4) * *(float *)(lVar5 + uVar30 * 8);
                *(float *)(lVar5 + 4 + uVar30 * 8) =
                     *(float *)(lVar33 + uVar30 * 4) * *(float *)(lVar5 + 4 + uVar30 * 8);
                *(float *)(lVar5 + 8 + uVar30 * 8) =
                     *(float *)(uVar1 + uVar30 * 4) * *(float *)(lVar5 + 8 + uVar30 * 8);
                fVar45 = *(float *)(uVar1 + uVar30 * 4) * *(float *)(lVar5 + 0xc + uVar30 * 8);
                *(float *)(lVar5 + 0xc + uVar30 * 8) = fVar45;
                uVar30 = uVar30 + 2;
              } while (uVar35 != uVar30);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar23);
        }
      }
    }
    lVar33 = 0;
    do {
      uVar44 = FUN_00e83640(fVar45,*(void*)
                                    (*(int64_t *)((int64_t)this_ptr + 0x1e0) + lVar33 * 8));
      fVar45 = (float)(**(code **)(g_02786500 + 0x38))(uVar44,unaff_ESI);
      lVar33 = lVar33 + 1;
      uVar38 = *(uint *)((int64_t)this_ptr + 0x160);
    } while (lVar33 < (int)uVar38);
  }
  if (1 < *(int *)((int64_t)this_ptr + 0x16c)) {
    if (0 < (int)uVar38) {
      pvVar41 = (void *)((int64_t)(int)unaff_ESI << 2);
      iVar27 = unaff_ESI - 1;
      if ((int)unaff_ESI < 2) {
        lVar33 = 0;
        do {
          _memcpy(*(void **)((int64_t)this_ptr + 0x1e8),pvVar41,(size_t)uVar32);
          lVar5 = *(int64_t *)(*(int64_t *)((int64_t)this_ptr + 0x1e0) + lVar33 * 8);
          pfVar6 = *(float **)(*(int64_t *)((int64_t)this_ptr + 0x1e8) + lVar33 * 8);
          uVar38 = *(uint *)((int64_t)this_ptr + 0x16c);
          if ((int)uVar38 < 2) {
            _memcpy(this_ptr,pvVar41,(size_t)uVar32);
          }
          else {
            iVar42 = uVar38 * unaff_ESI;
            fVar46 = g_02390124 / (float)(int)uVar38;
            ___bzero();
            fVar45 = *pfVar6;
            fVar47 = fVar46 * fVar45;
            lVar34 = (uint64_t)(uVar38 >> 1) + 1;
            do {
              fVar45 = fVar45 - fVar47;
              *(float *)(lVar5 + (uint64_t)((int)lVar34 - 2) * 4) = fVar45;
              lVar34 = lVar34 + -1;
            } while (1 < lVar34);
            iVar40 = uVar38 * iVar27 + (uVar38 >> 1);
            if (iVar40 < iVar42) {
              fVar45 = pfVar6[iVar27];
              fVar46 = fVar46 * fVar45;
              uVar23 = (uint64_t)iVar40;
              uVar25 = ~uVar23;
              uVar35 = (uint64_t)(uint)(iVar42 - iVar40) & 3;
              if ((iVar42 - iVar40 & 3U) != 0) {
                do {
                  *(float *)(lVar5 + uVar23 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar23 = uVar23 + 1;
                  uVar35 = uVar35 - 1;
                } while (uVar35 != 0);
              }
              if (2 < uVar25 + (int64_t)iVar42) {
                do {
                  *(float *)(lVar5 + uVar23 * 4) = fVar45;
                  *(float *)(lVar5 + 4 + uVar23 * 4) = fVar45 - fVar46;
                  fVar45 = (fVar45 - fVar46) - fVar46;
                  *(float *)(lVar5 + 8 + uVar23 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  *(float *)(lVar5 + 0xc + uVar23 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar23 = uVar23 + 4;
                } while ((int64_t)iVar42 != uVar23);
              }
            }
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < *(int *)((int64_t)this_ptr + 0x160));
      }
      else {
        uVar23 = (uint64_t)unaff_ESI;
        lVar33 = 0;
        uVar32 = uVar23;
        do {
          pvVar31 = *(void **)((int64_t)this_ptr + 0x1e8);
          _memcpy(pvVar31,pvVar41,(size_t)uVar32);
          lVar5 = *(int64_t *)(*(int64_t *)((int64_t)this_ptr + 0x1e0) + lVar33 * 8);
          pfVar6 = *(float **)(*(int64_t *)((int64_t)this_ptr + 0x1e8) + lVar33 * 8);
          uVar38 = *(uint *)((int64_t)this_ptr + 0x16c);
          if ((int)uVar38 < 2) {
            _memcpy(pvVar31,pvVar41,(size_t)uVar32);
          }
          else {
            iVar42 = uVar38 * unaff_ESI;
            uVar8 = uVar38 >> 1;
            fVar46 = g_02390124 / (float)(int)uVar38;
            ___bzero();
            pfVar36 = (float *)(lVar5 + (uint64_t)uVar8 * 4);
            uVar32 = 1;
            fVar45 = *pfVar6;
            do {
              fVar47 = pfVar6[uVar32];
              fVar49 = (fVar47 - fVar45) * fVar46;
              uVar37 = uVar38;
              if ((uVar38 & 7) != 0) {
                uVar37 = 0;
                do {
                  *pfVar36 = fVar45;
                  pfVar36 = pfVar36 + 1;
                  fVar45 = fVar45 + fVar49;
                  uVar37 = uVar37 + 1;
                } while ((uVar38 & 7) != uVar37);
                uVar37 = uVar38 - uVar37;
              }
              if (6 < uVar38 - 1) {
                do {
                  *pfVar36 = fVar45;
                  pfVar36[1] = fVar45 + fVar49;
                  fVar45 = fVar45 + fVar49 + fVar49;
                  pfVar36[2] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[3] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[4] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[5] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[6] = fVar45;
                  fVar45 = fVar45 + fVar49;
                  pfVar36[7] = fVar45;
                  pfVar36 = pfVar36 + 8;
                  fVar45 = fVar45 + fVar49;
                  uVar37 = uVar37 - 8;
                } while (uVar37 != 0);
              }
              uVar32 = uVar32 + 1;
              fVar45 = fVar47;
            } while (uVar32 != uVar23);
            if (1 < uVar38) {
              fVar45 = *pfVar6;
              fVar47 = fVar46 * fVar45;
              lVar34 = (uint64_t)uVar8 + 1;
              do {
                fVar45 = fVar45 - fVar47;
                *(float *)(lVar5 + (uint64_t)((int)lVar34 - 2) * 4) = fVar45;
                lVar34 = lVar34 + -1;
              } while (1 < lVar34);
            }
            iVar40 = uVar38 * iVar27 + uVar8;
            uVar32 = uVar23;
            if (iVar40 < iVar42) {
              fVar45 = pfVar6[iVar27];
              fVar46 = fVar46 * fVar45;
              uVar25 = (uint64_t)iVar40;
              uVar35 = ~uVar25;
              uVar32 = (uint64_t)(uint)(iVar42 - iVar40) & 3;
              if ((iVar42 - iVar40 & 3U) != 0) {
                do {
                  *(float *)(lVar5 + uVar25 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar25 = uVar25 + 1;
                  uVar32 = uVar32 - 1;
                } while (uVar32 != 0);
              }
              uVar32 = uVar23;
              if (2 < uVar35 + (int64_t)iVar42) {
                do {
                  *(float *)(lVar5 + uVar25 * 4) = fVar45;
                  *(float *)(lVar5 + 4 + uVar25 * 4) = fVar45 - fVar46;
                  fVar45 = (fVar45 - fVar46) - fVar46;
                  *(float *)(lVar5 + 8 + uVar25 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  *(float *)(lVar5 + 0xc + uVar25 * 4) = fVar45;
                  fVar45 = fVar45 - fVar46;
                  uVar25 = uVar25 + 4;
                } while ((int64_t)iVar42 != uVar25);
              }
            }
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 < *(int *)((int64_t)this_ptr + 0x160));
      }
    }
    *param_4 = 1;
    *in_R8 = (g_02390124 / (float)*(int *)((int64_t)this_ptr + 0x16c)) * *in_R8;
  }
  return;
}

