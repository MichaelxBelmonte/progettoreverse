// Function: FUN_0191dac0
// Address: 0191dac0
// Size: 3513 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0191dac0(uint64_t param_1,void*param_2,uint64_t param_3)

{
  uint *puVar1;
  uint32_t uVar2;
  uint *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void*puVar10;
  void*puVar11;
  void*puVar12;
  uint uVar13;
  int iVar14;
  void* pVar15;
  uint64_t uVar16;
  void *pvVar17;
  int iVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t *arg1;
  uint64_t uVar21;
  int64_t *this_ptr;
  size_t sVar22;
  int *piVar23;
  void*puVar24;
  uint64_t uVar25;
  uint uVar26;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar27;
  uint uVar28;
  uint64_t extraout_XMM0_Qa_00;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  void*local_120;
  uint8_t local_118;
  uint64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  void*local_f0;
  uint64_t local_e8;
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
  int local_44;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[3] != 0) {
    (**(code **)(*this_ptr + 0x378))();
  }
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_025683c0;
  pcVar4 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if (*arg1 != 0) {
    local_d8 = '\0';
    local_f0 = param_2;
    local_e0 = *arg1;
    FUN_01716260();
    lVar19 = *arg1;
    if (lVar19 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_0191dc12;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_0191dc0a;
      }
LAB_0191dbcc:
      *(void*)(arg1 + 1) = 1;
      local_38 = '\0';
    }
    else {
      lVar20 = arg1[1];
      if (local_38 != '\0') {
        *arg1 = local_40;
        if (((char)lVar20 != '\0') && (lVar19 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0191dbcc;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_40;
      if (((char)lVar20 != '\0') && (lVar19 != 0)) {
        FUN_00d50b20();
      }
LAB_0191dc0a:
      *(void*)(arg1 + 1) = 1;
LAB_0191dc12:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    iVar6 = FUN_01716a70();
    iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
    while( true ) {
      iVar7 = FUN_01717720();
      if (iVar7 < 4) break;
      if ((~(uint)(*(uint64_t *)(*arg1 + 0x18) >>
                  ((((byte)(iVar6 >> 0x1f) & 0xc) + (char)iVar6) * '\x04' & 0x3f)) & 0xf) == 0) {
        cVar5 = FUN_01716e70();
        if (cVar5 == '\0') {
          cVar5 = FUN_01716e70();
          if ((cVar5 == '\0') || (cVar5 = FUN_01716e70(), cVar5 == '\0')) {
            cVar5 = FUN_01716e70();
            if ((cVar5 == '\0') || (cVar5 = FUN_01716e70(), cVar5 == '\0')) {
              cVar5 = FUN_01716e70();
              if ((cVar5 == '\0') || (cVar5 = FUN_01716e70(), cVar5 == '\0')) {
                cVar5 = FUN_01716e70();
                if (cVar5 == '\0') {
                  cVar5 = FUN_01716e70();
                  if (cVar5 == '\0') {
                    cVar5 = FUN_01716e70();
                    if (cVar5 == '\0') {
                      cVar5 = FUN_01716e70();
                      if ((((((cVar5 != '\0') || (cVar5 = FUN_01716e70(), cVar5 != '\0')) ||
                            (cVar5 = FUN_01716e70(), cVar5 != '\0')) ||
                           ((cVar5 = FUN_01716e70(), cVar5 != '\0' ||
                            (cVar5 = FUN_01716e70(), cVar5 != '\0')))) ||
                          (((cVar5 = FUN_01716e70(), cVar5 != '\0' ||
                            ((cVar5 = FUN_01716e70(), cVar5 != '\0' ||
                             (cVar5 = FUN_01716e70(), cVar5 != '\0')))) ||
                           (cVar5 = FUN_01716e70(), cVar5 != '\0')))) ||
                         ((((cVar5 = FUN_01716e70(), cVar5 != '\0' ||
                            (cVar5 = FUN_01716e70(), cVar5 != '\0')) ||
                           (cVar5 = FUN_01716e70(), cVar5 != '\0')) ||
                          (cVar5 = FUN_01716e70(), cVar5 != '\0')))) {
                        FUN_01716e90();
                      }
                    }
                    else {
                      FUN_01716e90();
                    }
                  }
                  else {
                    FUN_01716e90();
                  }
                }
                else {
                  FUN_01716e90();
                }
              }
              else {
                FUN_01716e90();
              }
            }
            else {
              FUN_01716e90();
            }
          }
          else {
            FUN_01716e90();
          }
        }
        else {
          FUN_01716e90();
        }
      }
      else {
        FUN_017163c0();
      }
    }
    cVar5 = FUN_01716e70();
    if (cVar5 == '\0') {
      cVar5 = FUN_01716e70();
      if (cVar5 != '\0') {
        iVar6 = FUN_01715480();
        local_44 = FUN_01717260();
        goto LAB_0191dfa4;
      }
      cVar5 = FUN_01716e70();
      local_44 = -1;
      if (cVar5 != '\0') {
        iVar6 = FUN_01715480();
        local_44 = FUN_01717260();
        goto LAB_0191dfa4;
      }
    }
    else {
      iVar6 = FUN_01715480();
      local_44 = FUN_01717260();
LAB_0191dfa4:
      local_44 = local_44 + iVar6;
      local_44 = local_44 +
                 (((uint)(local_44 / 6 + (local_44 >> 0x1f)) >> 1) - (local_44 >> 0x1f)) * -0xc;
      local_44 = (local_44 >> 0x1f & 0xcU) + local_44;
    }
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025683c0;
    (*pcVar4)();
    FUN_00c92170();
    FUN_00c92160();
    uVar25 = 0;
    lVar19 = 0;
    do {
      pvVar17 = (void *)(uVar25 & 0xffffffff);
      if ((~(uint)(*(uint64_t *)(*arg1 + 0x18) >> ((byte)pvVar17 & 0x3f)) & 0xf) != 0) {
        iVar7 = FUN_01715480();
        iVar6 = *(int *)(puVar11 + 3);
        FUN_00c8e340(extraout_XMM0_Qa,1);
        iVar7 = iVar7 + (int)lVar19;
        iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
        uVar13 = (iVar7 >> 0x1f & 0xcU) + iVar7;
        pvVar17 = (void *)(uint64_t)uVar13;
        *(uint *)(puVar11[2] + (int64_t)iVar6) = uVar13;
      }
      lVar19 = lVar19 + 1;
      uVar25 = uVar25 + 4;
    } while (lVar19 != 0xc);
    uVar13 = *(uint *)(puVar11 + 3);
    uVar31 = uVar13 + 3;
    if (-1 < (int)uVar13) {
      uVar31 = uVar13;
    }
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    uVar27 = FUN_00c92160();
    uVar9 = *(uint *)(local_40 + 0x18);
    if (3 < (int)uVar9) {
      lVar19 = puVar11[2];
      lVar20 = *(int64_t *)(local_40 + 0x10);
      iVar6 = 0x46;
      uVar25 = 0;
      param_3 = 0xaaaaaaab;
      do {
        iVar14 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
        iVar7 = *(int *)(lVar19 + uVar25 * 4) + iVar6;
        iVar18 = iVar7 - iVar14;
        if (iVar18 <= iVar6) {
          iVar6 = iVar18;
        }
        uVar8 = (iVar7 - (iVar6 + iVar14)) + 0xb;
        pvVar17 = (void *)(uint64_t)((uVar8 / 0xc) * 0xc);
        iVar6 = uVar8 % 0xc - uVar8;
        *(int *)(lVar20 + uVar25 * 4) = iVar6 + iVar18;
        iVar6 = iVar18 + iVar6 + -2;
        uVar25 = uVar25 + 1;
      } while (uVar9 >> 2 != uVar25);
    }
    FUN_00c8e340(uVar27,0);
    _memcpy(pvVar17,(void *)(int64_t)*(int *)(local_40 + 0x18),(size_t)param_3);
    if ((int)uVar13 < 4) {
      uVar13 = *(uint *)puVar10[2];
    }
    else {
      uVar31 = (int)uVar31 >> 2;
      iVar7 = **(int **)(local_40 + 0x10);
      iVar6 = iVar7 + -0x3f;
      iVar14 = -iVar6;
      if (0 < iVar6) {
        iVar14 = iVar6;
      }
      iVar6 = iVar14 + 0x32;
      if (iVar7 == local_44) {
        iVar6 = iVar14;
      }
      iVar14 = *(int *)(local_40 + 0x18);
      iVar18 = iVar14 + 3;
      if (-1 < iVar14) {
        iVar18 = iVar14;
      }
      iVar7 = iVar7 - (*(int **)(local_40 + 0x10))[(int64_t)(iVar18 >> 2) + -1];
      iVar14 = -iVar7;
      if (0 < iVar7) {
        iVar14 = iVar7;
      }
      param_3 = (uint64_t)(uint)(iVar14 + iVar6);
      lVar19 = *(int64_t *)(local_40 + 0x10);
      iVar6 = 0;
      local_e8 = (uint64_t)uVar13;
      do {
        while( true ) {
          sVar22 = (size_t)param_3;
          uVar25 = (uint64_t)iVar6;
          iVar7 = *(int *)(lVar19 + uVar25 * 4);
          if (iVar6 <= iVar7) break;
          if ((uVar25 & 1) == 0) {
            puVar12 = (void*)puVar11[2];
            puVar24 = puVar12;
          }
          else {
            puVar24 = (void*)puVar11[2];
            puVar12 = puVar24 + iVar7;
          }
          uVar2 = *puVar12;
          *puVar12 = puVar24[uVar25];
          puVar24[uVar25] = uVar2;
          uVar13 = *(uint *)(local_40 + 0x18);
          if ((int)uVar13 < 4) {
            piVar23 = *(int **)(local_40 + 0x10);
          }
          else {
            piVar23 = *(int **)(local_40 + 0x10);
            iVar6 = 0x46;
            uVar16 = 0;
            do {
              iVar14 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc
              ;
              iVar18 = (puVar24[uVar16] + iVar6) - iVar14;
              iVar7 = iVar6;
              if (iVar18 <= iVar6) {
                iVar7 = iVar18;
              }
              uVar9 = ((puVar24[uVar16] + iVar6) - (iVar7 + iVar14)) + 0xb;
              iVar6 = uVar9 % 0xc - uVar9;
              piVar23[uVar16] = iVar6 + iVar18;
              iVar6 = iVar18 + iVar6 + -2;
              uVar16 = uVar16 + 1;
            } while (uVar13 >> 2 != uVar16);
            uVar13 = *(uint *)(local_40 + 0x18);
          }
          iVar7 = *piVar23;
          iVar6 = iVar7 + -0x3f;
          iVar14 = -iVar6;
          if (0 < iVar6) {
            iVar14 = iVar6;
          }
          uVar9 = uVar13 + 3;
          if (-1 < (int)uVar13) {
            uVar9 = uVar13;
          }
          uVar9 = iVar7 - piVar23[(int64_t)((int)uVar9 >> 2) + -1];
          uVar13 = -uVar9;
          if (0 < (int)uVar9) {
            uVar13 = uVar9;
          }
          pvVar17 = (void *)(uint64_t)uVar13;
          iVar6 = iVar14 + 0x32;
          if (iVar7 == local_44) {
            iVar6 = iVar14;
          }
          if ((int)(iVar6 + uVar13) < (int)sVar22) {
            FUN_00c8e340(pvVar17,0);
            _memcpy(pvVar17,(void *)(int64_t)*(int *)(local_40 + 0x18),sVar22);
            lVar19 = *(int64_t *)(local_40 + 0x10);
            param_3 = (uint64_t)(iVar6 + uVar13);
          }
          piVar23 = (int *)(lVar19 + uVar25 * 4);
          *piVar23 = *piVar23 + 1;
          iVar6 = 0;
          if ((int)uVar31 < 1) goto LAB_0191e408;
        }
        *(void*)(lVar19 + uVar25 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar31);
LAB_0191e408:
      puVar3 = (uint *)puVar10[2];
      uVar13 = *puVar3;
      if (7 < (int)local_e8) {
        uVar25 = 2;
        if (2 < (int)uVar31) {
          uVar25 = (uint64_t)uVar31;
        }
        param_3 = uVar25 - 1;
        uVar16 = 1;
        if (7 < param_3) {
          uVar16 = param_3 & 0xfffffffffffffff8;
          uVar21 = (uVar16 - 8 >> 3) + 1;
          if (uVar16 - 8 == 0) {
            lVar19 = 0;
            uVar31 = uVar13;
            uVar9 = uVar13;
            uVar8 = uVar13;
            uVar26 = uVar13;
            uVar28 = uVar13;
            uVar29 = uVar13;
            uVar30 = uVar13;
LAB_0191e4bc:
            uVar21 = lVar19 << 2 | 4;
            piVar23 = (int *)((int64_t)puVar3 + uVar21);
            iVar6 = *piVar23;
            iVar7 = piVar23[1];
            iVar14 = piVar23[2];
            iVar18 = piVar23[3];
            uVar26 = (uint)(iVar6 < (int)uVar26) * iVar6 | (iVar6 >= (int)uVar26) * uVar26;
            uVar28 = (uint)(iVar7 < (int)uVar28) * iVar7 | (iVar7 >= (int)uVar28) * uVar28;
            uVar29 = (uint)(iVar14 < (int)uVar29) * iVar14 | (iVar14 >= (int)uVar29) * uVar29;
            uVar30 = (uint)(iVar18 < (int)uVar30) * iVar18 | (iVar18 >= (int)uVar30) * uVar30;
            piVar23 = (int *)((int64_t)puVar3 + uVar21 + 0x10);
            iVar6 = *piVar23;
            iVar7 = piVar23[1];
            iVar14 = piVar23[2];
            iVar18 = piVar23[3];
            uVar13 = (uint)(iVar6 < (int)uVar13) * iVar6 | (iVar6 >= (int)uVar13) * uVar13;
            uVar31 = (uint)(iVar7 < (int)uVar31) * iVar7 | (iVar7 >= (int)uVar31) * uVar31;
            uVar9 = (uint)(iVar14 < (int)uVar9) * iVar14 | (iVar14 >= (int)uVar9) * uVar9;
            uVar8 = (uint)(iVar18 < (int)uVar8) * iVar18 | (iVar18 >= (int)uVar8) * uVar8;
          }
          else {
            lVar20 = -(uVar21 & 0xfffffffffffffffe);
            lVar19 = 0;
            uVar31 = uVar13;
            uVar9 = uVar13;
            uVar8 = uVar13;
            uVar26 = uVar13;
            uVar28 = uVar13;
            uVar29 = uVar13;
            uVar30 = uVar13;
            do {
              puVar1 = puVar3 + lVar19 + 1;
              uVar32 = *puVar1;
              uVar33 = puVar1[1];
              uVar34 = puVar1[2];
              uVar35 = puVar1[3];
              uVar32 = ((int)uVar26 < (int)uVar32) * uVar26 | ((int)uVar26 >= (int)uVar32) * uVar32;
              uVar33 = ((int)uVar28 < (int)uVar33) * uVar28 | ((int)uVar28 >= (int)uVar33) * uVar33;
              uVar34 = ((int)uVar29 < (int)uVar34) * uVar29 | ((int)uVar29 >= (int)uVar34) * uVar34;
              uVar35 = ((int)uVar30 < (int)uVar35) * uVar30 | ((int)uVar30 >= (int)uVar35) * uVar35;
              puVar1 = puVar3 + lVar19 + 5;
              uVar26 = *puVar1;
              uVar28 = puVar1[1];
              uVar29 = puVar1[2];
              uVar30 = puVar1[3];
              uVar36 = ((int)uVar13 < (int)uVar26) * uVar13 | ((int)uVar13 >= (int)uVar26) * uVar26;
              uVar37 = ((int)uVar31 < (int)uVar28) * uVar31 | ((int)uVar31 >= (int)uVar28) * uVar28;
              uVar38 = ((int)uVar9 < (int)uVar29) * uVar9 | ((int)uVar9 >= (int)uVar29) * uVar29;
              uVar39 = ((int)uVar8 < (int)uVar30) * uVar8 | ((int)uVar8 >= (int)uVar30) * uVar30;
              puVar1 = puVar3 + lVar19 + 9;
              uVar13 = *puVar1;
              uVar31 = puVar1[1];
              uVar9 = puVar1[2];
              uVar8 = puVar1[3];
              uVar26 = ((int)uVar32 < (int)uVar13) * uVar32 | ((int)uVar32 >= (int)uVar13) * uVar13;
              uVar28 = ((int)uVar33 < (int)uVar31) * uVar33 | ((int)uVar33 >= (int)uVar31) * uVar31;
              uVar29 = ((int)uVar34 < (int)uVar9) * uVar34 | ((int)uVar34 >= (int)uVar9) * uVar9;
              uVar30 = ((int)uVar35 < (int)uVar8) * uVar35 | ((int)uVar35 >= (int)uVar8) * uVar8;
              puVar1 = puVar3 + lVar19 + 0xd;
              uVar13 = *puVar1;
              uVar31 = puVar1[1];
              uVar9 = puVar1[2];
              uVar8 = puVar1[3];
              uVar13 = ((int)uVar36 < (int)uVar13) * uVar36 | ((int)uVar36 >= (int)uVar13) * uVar13;
              uVar31 = ((int)uVar37 < (int)uVar31) * uVar37 | ((int)uVar37 >= (int)uVar31) * uVar31;
              uVar9 = ((int)uVar38 < (int)uVar9) * uVar38 | ((int)uVar38 >= (int)uVar9) * uVar9;
              uVar8 = ((int)uVar39 < (int)uVar8) * uVar39 | ((int)uVar39 >= (int)uVar8) * uVar8;
              lVar19 = lVar19 + 0x10;
              lVar20 = lVar20 + 2;
            } while (lVar20 != 0);
            if ((uVar21 & 1) != 0) goto LAB_0191e4bc;
          }
          uVar13 = ((int)uVar13 < (int)uVar26) * uVar13 | ((int)uVar13 >= (int)uVar26) * uVar26;
          uVar31 = ((int)uVar31 < (int)uVar28) * uVar31 | ((int)uVar31 >= (int)uVar28) * uVar28;
          uVar9 = ((int)uVar9 < (int)uVar29) * uVar9 | ((int)uVar9 >= (int)uVar29) * uVar29;
          uVar8 = ((int)uVar8 < (int)uVar30) * uVar8 | ((int)uVar8 >= (int)uVar30) * uVar30;
          uVar13 = ((int)uVar13 < (int)uVar9) * uVar13 | ((int)uVar13 >= (int)uVar9) * uVar9;
          uVar31 = ((int)uVar31 < (int)uVar8) * uVar31 | ((int)uVar31 >= (int)uVar8) * uVar8;
          uVar13 = ((int)uVar13 < (int)uVar31) * uVar13 | ((int)uVar13 >= (int)uVar31) * uVar31;
          if (param_3 == uVar16) goto LAB_0191e519;
          uVar16 = uVar16 | 1;
        }
        do {
          if ((int)puVar3[uVar16] < (int)uVar13) {
            uVar13 = puVar3[uVar16];
          }
          uVar16 = uVar16 + 1;
        } while (uVar25 != uVar16);
      }
    }
LAB_0191e519:
    sVar22 = (size_t)param_3;
    iVar7 = FUN_01715480();
    iVar14 = FUN_01716a70();
    iVar18 = iVar7 + iVar14 + 0x30;
    iVar6 = uVar13 - 2;
    if (iVar18 < (int)(uVar13 - 2)) {
      iVar6 = iVar18;
    }
    iVar18 = *(int *)(puVar10 + 3);
    FUN_00c8e340(extraout_XMM0_Qa_00,1);
    uVar13 = ((iVar7 + iVar14) - iVar6) + 0x3b;
    piVar23 = (int *)puVar10[2];
    _memmove((void *)(uint64_t)((uVar13 / 0xc) * 0xc),(void *)(int64_t)iVar18,sVar22);
    *piVar23 = iVar7 + iVar14 + (uVar13 % 0xc - uVar13) + 0x30;
    param_2 = local_f0;
    if (local_40 != 0) {
      FUN_00d50b20();
      param_2 = local_f0;
      FUN_00d50b20();
    }
    if (puVar11 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_118 = 0;
  local_110 = *param_2;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  pVar15 = (void*)&local_110;
  local_120 = puVar10;
  FUN_0191ec80(g_0239011c,&local_120,&local_100);
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_0191e842;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_0191e842;
  local_d0 = local_40;
  local_c8 = '\0';
  (**(code **)(*this_ptr + 0x370))();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  pvVar17 = _pthread_getspecific(pVar15);
  if (pvVar17 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar19 = local_a0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  FUN_0141c4c0(0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar19 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_0141cb70(g_023b2c70);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_c0 = local_40;
  local_b8 = '\0';
  (**(code **)(*(int64_t *)this_ptr[3] + 0x690))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = local_40;
  local_a8 = '\0';
  (**(code **)(*(int64_t *)this_ptr[3] + 0x690))();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0191e842:
  FUN_00d50b20();
  return;
}

