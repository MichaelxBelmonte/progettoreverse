// Function: FUN_01832fb0
// Address: 01832fb0
// Size: 7077 bytes
// Class: Unknown

void FUN_01832fb0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void*puVar11;
  void *pvVar12;
  void *pvVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint uVar17;
  void *pvVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint uVar21;
  uint uVar22;
  int64_t *arg1;
  int64_t lVar23;
  int64_t *this_ptr;
  uint64_t uVar24;
  uint64_t uVar25;
  int64_t *plVar26;
  uint uVar27;
  int64_t lVar28;
  int64_t lVar29;
  int iVar30;
  uint64_t uVar31;
  bool bVar32;
  uint32_t uVar33;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float fVar39;
  int64_t *local_res8;
  int64_t *local_res10;
  int64_t *local_res18;
  int64_t *local_res20;
  char in_stack_00000050;
  uint64_t in_stack_00000058;
  int in_stack_00000060;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  void*local_120;
  int64_t local_118;
  int64_t local_110;
  int64_t *local_108;
  void *local_100;
  uint64_t local_f8;
  uint64_t local_a8;
  int64_t local_40;
  char local_38;
  
  pvVar18 = (void *)(uint64_t)*(uint *)(*arg1 + 0xc);
  iVar9 = *(int *)(**(int64_t **)(*arg1 + 0x10) + 0x18);
  iVar30 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar30 = iVar9;
  }
  iVar30 = iVar30 >> 2;
  local_108 = param_4;
  local_100 = pvVar18;
  if (in_stack_00000050 == '\0') {
    plVar26 = param_3;
    FUN_00c8e690();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    fVar38 = (float)FUN_00c92160();
    pvVar13 = (void *)(int64_t)(iVar30 * 4);
    lVar14 = *this_ptr;
    if (1 < *(int *)(lVar14 + 0xc)) {
      uVar25 = 0;
      do {
        lVar14 = *(int64_t *)(lVar14 + 0x10);
        lVar19 = *(int64_t *)(lVar14 + uVar25 * 8);
        local_f8 = uVar25;
        if (lVar19 != 0) {
          fVar38 = (float)FUN_00d50b00();
          lVar14 = *(int64_t *)(*this_ptr + 0x10);
        }
        lVar14 = *(int64_t *)(lVar14 + 8 + local_f8 * 8);
        if (lVar14 != 0) {
          fVar38 = (float)FUN_00d50b00();
        }
        local_178 = '\0';
        local_180 = lVar19;
        FUN_0133ae40(fVar38,&local_180);
        iVar9 = FUN_00d45870();
        uVar33 = extraout_XMM0_Da_04;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        if ((local_178 != '\0') && (local_180 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        local_168 = '\0';
        local_170 = lVar19;
        FUN_0133ae40(uVar33,&local_170);
        uVar4 = FUN_00d45870();
        uVar33 = extraout_XMM0_Da_05;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        local_158 = '\0';
        local_160 = lVar19;
        FUN_0133ae40(uVar33,&local_160);
        iVar5 = FUN_00d45870();
        uVar33 = extraout_XMM0_Da_06;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        local_148 = '\0';
        local_150 = lVar19;
        FUN_0133ae40(uVar33,&local_150);
        iVar8 = FUN_00d45870();
        uVar33 = extraout_XMM0_Da_07;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        local_138 = '\0';
        local_140 = lVar14;
        FUN_0133ae40(uVar33,&local_140);
        uVar6 = FUN_00d45870();
        uVar33 = extraout_XMM0_Da_08;
        if ((local_38 != '\0') && (local_40 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != 0)) {
          uVar33 = FUN_00d50b20();
        }
        local_128 = '\0';
        local_130 = lVar14;
        FUN_0133ae40(uVar33,&local_130);
        iVar10 = FUN_00d45870();
        fVar38 = extraout_XMM0_Da_09;
        if ((local_38 != '\0') && (local_40 != 0)) {
          fVar38 = (float)FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          fVar38 = (float)FUN_00d50b20();
        }
        if (iVar5 == -1) {
          local_a8 = 0;
        }
        else {
          local_a8 = *(int64_t *)(*(int64_t *)(*local_108 + 0x10) + (int64_t)iVar8 * 8) -
                     *(int64_t *)(*(int64_t *)(*local_108 + 0x10) + (int64_t)iVar5 * 8);
        }
        if (uVar6 != 0xffffffff) {
          lVar15 = *(int64_t *)(*local_108 + 0x10);
          lVar29 = *(int64_t *)(lVar15 + (int64_t)(int)uVar6 * 8);
          uVar25 = (*(int64_t *)(lVar15 + (int64_t)iVar10 * 8) - lVar29) / 3;
          if ((int64_t)in_stack_00000058 <= (int64_t)uVar25) {
            uVar25 = in_stack_00000058;
          }
          uVar21 = iVar8 + 1;
          lVar28 = lVar29;
          uVar7 = uVar6;
          if (uVar6 == uVar21) {
            uVar20 = (int64_t)local_a8 / 3;
            if ((int64_t)in_stack_00000058 <= (int64_t)local_a8 / 3) {
              uVar20 = in_stack_00000058;
            }
            lVar28 = *(int64_t *)(lVar15 + (int64_t)(int)uVar4 * 8);
            lVar29 = lVar28 - uVar20;
            uVar7 = uVar4;
          }
          plVar26 = (int64_t *)(uint64_t)uVar7;
          lVar28 = lVar28 + uVar25;
          iVar5 = *(int *)(*local_108 + 0x18);
          iVar8 = iVar5 + 7;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          uVar27 = (iVar8 >> 3) - 1;
          uVar4 = uVar27;
          if (7 < iVar5) {
            uVar4 = 0;
          }
          uVar20 = (uint64_t)(int)uVar4;
          lVar16 = *(int64_t *)(lVar15 + uVar20 * 8);
          uVar25 = uVar20;
          if (lVar29 < lVar16) {
            do {
              bVar32 = uVar25 == 0;
              uVar25 = uVar25 - 1;
              if (bVar32) {
                uVar22 = 0;
                uVar3 = 0;
                if ((int)uVar27 < 1) goto joined_r0x018340d9;
                goto LAB_0183408c;
              }
            } while (lVar29 < *(int64_t *)(lVar15 + uVar25 * 8));
            uVar17 = (uint)uVar25;
          }
          else {
            lVar23 = 0;
            do {
              uVar22 = uVar27;
              if (~((int64_t)(int)uVar27 + 1U) + uVar20 + lVar23 == -2) goto joined_r0x018340d9;
              lVar1 = lVar23 + 1;
              lVar2 = lVar23 * 8;
              lVar23 = lVar1;
            } while (*(int64_t *)(lVar15 + uVar20 * 8 + 8 + lVar2) <= lVar29);
            uVar17 = (uVar4 + (int)lVar1) - 1;
            uVar25 = (uint64_t)uVar17;
          }
          uVar22 = (uint)uVar25;
          uVar3 = uVar22;
          if ((int)uVar17 < (int)uVar27) {
LAB_0183408c:
            uVar22 = uVar3;
            if (*(int64_t *)(lVar15 + 8 + (int64_t)(int)uVar22 * 8) - lVar29 <
                lVar29 - *(int64_t *)(lVar15 + (int64_t)(int)uVar22 * 8)) {
              uVar22 = uVar22 + 1;
            }
          }
joined_r0x018340d9:
          if (lVar28 < lVar16) {
            do {
              bVar32 = uVar20 == 0;
              uVar20 = uVar20 - 1;
              if (bVar32) {
                uVar17 = 0;
                uVar3 = 0;
                if ((int)uVar27 < 1) goto LAB_01834146;
                goto LAB_0183412c;
              }
            } while (lVar28 < *(int64_t *)(lVar15 + uVar20 * 8));
            uVar4 = (uint)uVar20;
          }
          else {
            lVar29 = 0;
            do {
              uVar17 = uVar27;
              if (~((int64_t)(int)uVar27 + 1U) + uVar20 + lVar29 == -2) goto LAB_01834146;
              lVar16 = lVar29 + 1;
              lVar23 = lVar29 * 8;
              lVar29 = lVar16;
            } while (*(int64_t *)(lVar15 + uVar20 * 8 + 8 + lVar23) <= lVar28);
            uVar4 = (uVar4 + (int)lVar16) - 1;
            uVar20 = (uint64_t)uVar4;
          }
          uVar17 = (uint)uVar20;
          uVar3 = uVar17;
          if ((int)uVar4 < (int)uVar27) {
LAB_0183412c:
            uVar17 = uVar3;
            if (*(int64_t *)(lVar15 + 8 + (int64_t)(int)uVar17 * 8) - lVar28 <
                lVar28 - *(int64_t *)(lVar15 + (int64_t)(int)uVar17 * 8)) {
              uVar17 = uVar17 + 1;
            }
          }
LAB_01834146:
          iVar5 = uVar7 - uVar22;
          if ((int)(uVar7 - uVar22) < 1) {
            iVar5 = 1;
          }
          iVar8 = uVar17 - uVar7;
          if ((int)(uVar17 - uVar7) < 1) {
            iVar8 = 1;
          }
          uVar4 = uVar22 + in_stack_00000060 * -2;
          if ((int)uVar4 < 0) {
            uVar4 = 0;
          }
          if (uVar6 == uVar21) {
            uVar4 = uVar22;
          }
          local_110 = CONCAT44(local_110._4_4_,iVar5);
          if ((int)(uVar4 + 1) < (int)uVar17) {
            local_118 = CONCAT44(local_118._4_4_,(float)iVar5);
            lVar15 = (int64_t)(int)(uVar4 + 1);
            iVar5 = ~uVar4 + uVar7;
            uVar17 = ~uVar4 + uVar17;
            pvVar18 = (void *)(uint64_t)uVar17;
            lVar29 = 0;
            do {
              if ((lVar15 - (int)uVar7) + lVar29 < 0) {
                fVar38 = 0.0;
                if (uVar6 == uVar21) {
                  fVar38 = (float)iVar5 / (float)local_118;
                }
              }
              else {
                fVar38 = (float)(int)((uVar4 - uVar7) + 1 + (int)lVar29) / (float)iVar8;
              }
              fVar38 = (float)FUN_00e84a50(fVar38);
              if (*(int64_t *)(*(int64_t *)(*param_1 + 0x10) + lVar15 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              fVar39 = g_02390124 - fVar38;
              (**(code **)(g_02786500 + 0x20))();
              uVar33 = (**(code **)(g_02786500 + 0x20))(fVar38);
              (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
              if (*(int64_t *)(*(int64_t *)(*param_3 + 0x10) + lVar15 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              (**(code **)(g_02786500 + 0x20))(fVar39);
              uVar33 = (**(code **)(g_02786500 + 0x20))(fVar38);
              (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
              lVar28 = *(int64_t *)(*local_res10 + 0x10) + lVar15 * 4;
              fVar38 = fVar38 * *(float *)(lVar28 + lVar29 * 4);
              pvVar18 = (void *)(*(int64_t *)(*local_res18 + 0x10) + lVar15 * 4);
              *(float *)(lVar28 + lVar29 * 4) =
                   fVar39 * *(float *)((int64_t)pvVar18 + lVar29 * 4) + fVar38;
              iVar5 = iVar5 + -1;
              lVar29 = lVar29 + 1;
            } while (uVar17 != (uint)lVar29);
          }
        }
        if ((local_f8 == 0) && (0 < (int64_t)local_a8)) {
          uVar25 = local_a8 / 3;
          if ((int64_t)in_stack_00000058 <= (int64_t)(local_a8 / 3)) {
            uVar25 = in_stack_00000058;
          }
          plVar26 = (int64_t *)(int64_t)iVar9;
          lVar15 = *(int64_t *)(*local_108 + 0x10);
          lVar29 = *(int64_t *)(lVar15 + (int64_t)plVar26 * 8);
          lVar28 = uVar25 + lVar29;
          iVar5 = *(int *)(*local_108 + 0x18);
          iVar8 = iVar5 + 7;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          uVar6 = (iVar8 >> 3) - 1;
          uVar4 = uVar6;
          if (7 < iVar5) {
            uVar4 = 0;
          }
          uVar25 = (uint64_t)(int)uVar4;
          lVar16 = *(int64_t *)(lVar15 + uVar25 * 8);
          uVar20 = uVar25;
          if (lVar29 < lVar16) {
            do {
              uVar31 = uVar20 - 1;
              if (uVar20 == 0) {
                uVar7 = 0;
                uVar27 = 0;
                if ((int)uVar6 < 1) goto joined_r0x018345a0;
                goto LAB_01834555;
              }
              uVar20 = uVar31;
            } while (lVar29 < *(int64_t *)(lVar15 + uVar31 * 8));
            uVar21 = (uint)uVar31;
          }
          else {
            lVar23 = 0;
            do {
              uVar7 = uVar6;
              if (~((int64_t)(int)uVar6 + 1U) + uVar25 + lVar23 == -2) goto joined_r0x018345a0;
              lVar1 = lVar23 + 1;
              lVar2 = lVar23 * 8;
              lVar23 = lVar1;
            } while (*(int64_t *)(lVar15 + uVar25 * 8 + 8 + lVar2) <= lVar29);
            uVar21 = (uVar4 + (int)lVar1) - 1;
            uVar31 = (uint64_t)uVar21;
          }
          uVar7 = (uint)uVar31;
          uVar27 = uVar7;
          if ((int)uVar21 < (int)uVar6) {
LAB_01834555:
            uVar7 = uVar27;
            if (*(int64_t *)(lVar15 + 8 + (int64_t)(int)uVar7 * 8) - lVar29 <
                lVar29 - *(int64_t *)(lVar15 + (int64_t)(int)uVar7 * 8)) {
              uVar7 = uVar7 + 1;
            }
          }
joined_r0x018345a0:
          if (lVar28 < lVar16) {
            do {
              bVar32 = uVar25 == 0;
              uVar25 = uVar25 - 1;
              if (bVar32) {
                uVar21 = 0;
                uVar27 = 0;
                if ((int)uVar6 < 1) goto LAB_01834605;
                goto LAB_018345eb;
              }
            } while (lVar28 < *(int64_t *)(lVar15 + uVar25 * 8));
            uVar4 = (uint)uVar25;
          }
          else {
            lVar29 = 0;
            do {
              uVar21 = uVar6;
              if (~((int64_t)(int)uVar6 + 1U) + uVar25 + lVar29 == -2) goto LAB_01834605;
              lVar16 = lVar29 + 1;
              lVar23 = lVar29 * 8;
              lVar29 = lVar16;
            } while (*(int64_t *)(lVar15 + uVar25 * 8 + 8 + lVar23) <= lVar28);
            uVar4 = ((int)lVar16 + uVar4) - 1;
            uVar25 = (uint64_t)uVar4;
          }
          uVar21 = (uint)uVar25;
          uVar27 = uVar21;
          if ((int)uVar4 < (int)uVar6) {
LAB_018345eb:
            uVar21 = uVar27;
            if (*(int64_t *)(lVar15 + 8 + (int64_t)(int)uVar21 * 8) - lVar28 <
                lVar28 - *(int64_t *)(lVar15 + (int64_t)(int)uVar21 * 8)) {
              uVar21 = uVar21 + 1;
            }
          }
LAB_01834605:
          if ((1 < (int)(uVar21 - iVar9)) && ((int)(uVar7 + 1) < (int)uVar21)) {
            lVar28 = (int64_t)(int)(uVar7 + 1);
            iVar5 = iVar9 + ~uVar7;
            lVar15 = lVar28 - (int64_t)plVar26;
            lVar29 = 0;
            do {
              bVar32 = lVar15 + lVar29 < 0;
              iVar8 = (uVar7 - iVar9) + 1 + (int)lVar29;
              if (bVar32) {
                iVar8 = iVar5;
              }
              uVar4 = uVar21 - iVar9;
              if (bVar32) {
                uVar4 = (uint)local_110;
              }
              pvVar18 = (void *)(uint64_t)uVar4;
              fVar38 = (float)FUN_00e84a50((float)iVar8 / (float)(int)uVar4);
              if (*(int64_t *)(*(int64_t *)(*param_1 + 0x10) + lVar28 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              fVar39 = g_02390124 - fVar38;
              (**(code **)(g_02786500 + 0x20))();
              uVar33 = (**(code **)(g_02786500 + 0x20))(fVar38);
              (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
              if (*(int64_t *)(*(int64_t *)(*param_3 + 0x10) + lVar28 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              (**(code **)(g_02786500 + 0x20))(fVar39);
              uVar33 = (**(code **)(g_02786500 + 0x20))(fVar38);
              (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
              lVar16 = *(int64_t *)(*local_res10 + 0x10) + lVar28 * 4;
              fVar38 = fVar38 * *(float *)(lVar16 + lVar29 * 4);
              *(float *)(lVar16 + lVar29 * 4) =
                   fVar39 * *(float *)(*(int64_t *)(*local_res18 + 0x10) + lVar28 * 4 + lVar29 * 4)
                   + fVar38;
              lVar29 = lVar29 + 1;
              iVar5 = iVar5 + -1;
            } while (~uVar7 + uVar21 != (int)lVar29);
          }
        }
        if (lVar14 != 0) {
          fVar38 = (float)FUN_00d50b20();
        }
        uVar25 = local_f8;
        if (lVar19 != 0) {
          fVar38 = (float)FUN_00d50b20();
        }
        uVar25 = uVar25 + 1;
        lVar14 = *this_ptr;
        pvVar18 = (void *)((int64_t)*(int *)(lVar14 + 0xc) - 1);
      } while ((int64_t)uVar25 < (int64_t)pvVar18);
    }
    if (0 < (int)local_100) {
      local_100 = (void *)((int64_t)local_100 << 2);
      pvVar12 = (void *)0x0;
      do {
        fVar38 = *(float *)(*(int64_t *)(*local_res20 + 0x10) + (int64_t)pvVar12);
        if (g_02394274 <= fVar38) {
          if (fVar38 < g_023b36e4) {
            if (*(int64_t *)(*(int64_t *)(*param_1 + 0x10) + (int64_t)pvVar12 * 2) != 0) {
              FUN_00d50b00();
            }
            _memcpy(pvVar18,pvVar13,(size_t)plVar26);
            FUN_00d50b20();
            fVar39 = g_02390124 - fVar38;
            (**(code **)(g_02786500 + 0x20))();
            uVar33 = (**(code **)(g_02786500 + 0x20))(fVar38);
            (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
            if (*(int64_t *)(*(int64_t *)(*param_3 + 0x10) + (int64_t)pvVar12 * 2) != 0) {
              FUN_00d50b00();
            }
            _memcpy(pvVar18,pvVar13,(size_t)plVar26);
            FUN_00d50b20();
            (**(code **)(g_02786500 + 0x20))(fVar39);
            uVar33 = (**(code **)(g_02786500 + 0x20))(fVar38);
            (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
            pvVar18 = *(void **)(*local_res8 + 0x10);
            *(float *)(*(int64_t *)(*local_res10 + 0x10) + (int64_t)pvVar12) =
                 fVar39 * *(float *)((int64_t)pvVar18 + (int64_t)pvVar12) +
                 fVar38 * *(float *)(*(int64_t *)(*local_res10 + 0x10) + (int64_t)pvVar12);
          }
        }
        else {
          if (*(int64_t *)(*(int64_t *)(*param_1 + 0x10) + (int64_t)pvVar12 * 2) != 0) {
            FUN_00d50b00();
          }
          _memcpy(pvVar18,pvVar13,(size_t)plVar26);
          FUN_00d50b20();
          if (*(int64_t *)(*(int64_t *)(*param_3 + 0x10) + (int64_t)pvVar12 * 2) != 0) {
            FUN_00d50b00();
          }
          _memcpy(pvVar18,pvVar13,(size_t)plVar26);
          FUN_00d50b20();
          *(void*)(*(int64_t *)(*local_res10 + 0x10) + (int64_t)pvVar12) =
               *(void*)(*(int64_t *)(*local_res8 + 0x10) + (int64_t)pvVar12);
        }
        pvVar12 = (void *)((int64_t)pvVar12 + 4);
      } while (local_100 != pvVar12);
    }
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  uVar33 = (*g_025f0db0)();
  lVar14 = *this_ptr;
  if (1 < *(int *)(lVar14 + 0xc)) {
    iVar5 = iVar9 + 0xf;
    if (-1 < iVar9) {
      iVar5 = iVar9;
    }
    local_f8 = 2;
    if (2 < iVar5 >> 4) {
      local_f8 = (uint64_t)(uint)(iVar5 >> 4);
    }
    pvVar18 = (void *)(int64_t)(iVar30 * 4);
    uVar25 = local_f8 - 1;
    local_f8 = local_f8 - 2;
    pvVar13 = (void *)(uint64_t)((uint)uVar25 & 7);
    lVar19 = 0;
    local_120 = puVar11;
    do {
      lVar14 = *(int64_t *)(lVar14 + 0x10);
      lVar15 = *(int64_t *)(lVar14 + lVar19 * 8);
      local_118 = lVar19;
      if (lVar15 != 0) {
        uVar33 = FUN_00d50b00();
        lVar14 = *(int64_t *)(*this_ptr + 0x10);
      }
      lVar14 = *(int64_t *)(lVar14 + 8 + local_118 * 8);
      if (lVar14 != 0) {
        uVar33 = FUN_00d50b00();
      }
      local_1c8 = '\0';
      local_1d0 = lVar15;
      FUN_0133ae40(uVar33,&local_1d0);
      uVar4 = FUN_00d45870();
      uVar33 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      local_1b8 = '\0';
      local_1c0 = lVar15;
      FUN_0133ae40(uVar33,&local_1c0);
      iVar5 = FUN_00d45870();
      uVar33 = extraout_XMM0_Da_00;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      local_1a8 = '\0';
      local_1b0 = lVar15;
      FUN_0133ae40(uVar33,&local_1b0);
      uVar6 = FUN_00d45870();
      uVar33 = extraout_XMM0_Da_01;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      local_198 = '\0';
      local_1a0 = lVar14;
      FUN_0133ae40(uVar33,&local_1a0);
      uVar7 = FUN_00d45870();
      uVar33 = extraout_XMM0_Da_02;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      local_188 = '\0';
      local_190 = lVar14;
      FUN_0133ae40(uVar33,&local_190);
      iVar8 = FUN_00d45870();
      uVar33 = extraout_XMM0_Da_03;
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        uVar33 = FUN_00d50b20();
      }
      if (iVar5 == -1) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(int64_t *)(*(int64_t *)(*local_108 + 0x10) + (int64_t)(int)uVar6 * 8) -
                 *(int64_t *)(*(int64_t *)(*local_108 + 0x10) + (int64_t)iVar5 * 8);
      }
      if (uVar7 != 0xffffffff) {
        if ((uVar6 == 0xffffffff) || (uVar7 != uVar6 + 1)) {
          if (uVar6 != 0xffffffff) {
            uVar4 = uVar6;
          }
        }
        else {
          lVar29 = *(int64_t *)(*local_108 + 0x10);
          uVar20 = lVar19 / 3;
          if ((int64_t)in_stack_00000058 <= lVar19 / 3) {
            uVar20 = in_stack_00000058;
          }
          uVar31 = (*(int64_t *)(lVar29 + (int64_t)iVar8 * 8) -
                   *(int64_t *)(lVar29 + (int64_t)(int)uVar7 * 8)) / 3;
          if ((int64_t)in_stack_00000058 <= (int64_t)uVar31) {
            uVar31 = in_stack_00000058;
          }
          lVar19 = *(int64_t *)(lVar29 + (int64_t)(int)uVar4 * 8);
          lVar28 = uVar31 + lVar19;
          lVar19 = lVar19 - uVar20;
          iVar5 = *(int *)(*local_108 + 0x18);
          iVar8 = iVar5 + 7;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          uVar21 = (iVar8 >> 3) - 1;
          uVar6 = uVar21;
          if (7 < iVar5) {
            uVar6 = 0;
          }
          uVar20 = (uint64_t)(int)uVar6;
          param_3 = *(int64_t **)(lVar29 + uVar20 * 8);
          uVar31 = uVar20;
          if (lVar19 < (int64_t)param_3) {
            do {
              uVar24 = uVar31 - 1;
              if (uVar31 == 0) {
                uVar4 = 0;
                uVar27 = 0;
                if ((int)uVar21 < 1) goto joined_r0x018335bb;
                goto LAB_0183356d;
              }
              uVar31 = uVar24;
            } while (lVar19 < *(int64_t *)(lVar29 + uVar24 * 8));
            uVar7 = (uint)uVar24;
          }
          else {
            lVar16 = 0;
            do {
              uVar4 = uVar21;
              if (~((int64_t)(int)uVar21 + 1U) + uVar20 + lVar16 == -2) goto joined_r0x018335bb;
              lVar23 = lVar16 + 1;
              lVar1 = lVar16 * 8;
              lVar16 = lVar23;
            } while (*(int64_t *)(lVar29 + uVar20 * 8 + 8 + lVar1) <= lVar19);
            uVar7 = (uVar6 + (int)lVar23) - 1;
            uVar24 = (uint64_t)uVar7;
          }
          uVar4 = (uint)uVar24;
          uVar27 = uVar4;
          if ((int)uVar7 < (int)uVar21) {
LAB_0183356d:
            uVar4 = uVar27;
            if (*(int64_t *)(lVar29 + 8 + (int64_t)(int)uVar4 * 8) - lVar19 <
                lVar19 - *(int64_t *)(lVar29 + (int64_t)(int)uVar4 * 8)) {
              uVar4 = uVar4 + 1;
            }
          }
joined_r0x018335bb:
          if (lVar28 < (int64_t)param_3) {
            do {
              bVar32 = uVar20 == 0;
              uVar20 = uVar20 - 1;
              if (bVar32) {
                uVar7 = 0;
                uVar27 = 0;
                if ((int)uVar21 < 1) goto LAB_01833623;
                goto LAB_0183360a;
              }
            } while (lVar28 < *(int64_t *)(lVar29 + uVar20 * 8));
            uVar6 = (uint)uVar20;
          }
          else {
            lVar19 = 0;
            do {
              uVar7 = uVar21;
              if (~((int64_t)(int)uVar21 + 1U) + uVar20 + lVar19 == -2) goto LAB_01833623;
              lVar16 = lVar19 + 1;
              lVar23 = lVar19 * 8;
              lVar19 = lVar16;
            } while (*(int64_t *)(lVar29 + uVar20 * 8 + 8 + lVar23) <= lVar28);
            uVar6 = (uVar6 + (int)lVar16) - 1;
            uVar20 = (uint64_t)uVar6;
          }
          uVar7 = (uint)uVar20;
          uVar27 = uVar7;
          if ((int)uVar6 < (int)uVar21) {
LAB_0183360a:
            uVar7 = uVar27;
            if (*(int64_t *)(lVar29 + 8 + (int64_t)(int)uVar7 * 8) - lVar28 <
                lVar28 - *(int64_t *)(lVar29 + (int64_t)(int)uVar7 * 8)) {
              uVar7 = uVar7 + 1;
            }
          }
        }
LAB_01833623:
        if (1 < (int)(uVar7 - uVar4)) {
          lVar28 = (int64_t)(int)uVar4;
          lVar19 = *(int64_t *)(*arg1 + 0x10);
          lVar29 = *(int64_t *)(lVar19 + lVar28 * 8);
          if (lVar29 != 0) {
            FUN_00d50b00();
            lVar19 = *(int64_t *)(*arg1 + 0x10);
          }
          pvVar12 = (void *)(int64_t)(int)uVar7;
          lVar19 = *(int64_t *)(lVar19 + (int64_t)pvVar12 * 8);
          local_110 = lVar29;
          if (lVar19 != 0) {
            FUN_00d50b00();
          }
          lVar29 = *(int64_t *)(*param_2 + 0x10);
          lVar16 = *(int64_t *)(lVar29 + lVar28 * 8);
          if (lVar16 != 0) {
            FUN_00d50b00();
            lVar29 = *(int64_t *)(*param_2 + 0x10);
          }
          lVar29 = *(int64_t *)(lVar29 + (int64_t)pvVar12 * 8);
          if (lVar29 != 0) {
            FUN_00d50b00();
          }
          fVar38 = *(float *)(*(int64_t *)(*local_res10 + 0x10) + lVar28 * 4);
          fVar39 = *(float *)(*(int64_t *)(*local_res10 + 0x10) + (int64_t)pvVar12 * 4);
          if (3 < (int)*(uint *)(local_40 + 0x18)) {
            _memset_pattern16(pvVar12,(void *)((uint64_t)((*(uint *)(local_40 + 0x18) >> 2) - 1) *
                                               4 + 4),(size_t)param_3);
          }
          iVar5 = uVar4 + 1;
          if (iVar5 < (int)uVar7) {
            lVar28 = (int64_t)iVar5;
            do {
              fVar34 = (float)FUN_00e84a50((float)(int)((int)lVar28 - uVar4) /
                                           (float)(int)(uVar7 - uVar4));
              fVar35 = g_02390124 - fVar34;
              fVar36 = g_02394274;
              if (0x1f < iVar9) {
                lVar23 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + lVar28 * 8) + 0x10);
                pvVar12 = (void *)((int64_t)&MACH_HEADER.magic + 1);
                if (6 < local_f8) {
                  uVar20 = 0;
                  do {
                    uVar31 = uVar20;
                    fVar36 = fVar36 + *(float *)(lVar23 + 4 + uVar31 * 4) +
                             *(float *)(lVar23 + 8 + uVar31 * 4) +
                             *(float *)(lVar23 + 0xc + uVar31 * 4) +
                             *(float *)(lVar23 + 0x10 + uVar31 * 4) +
                             *(float *)(lVar23 + 0x14 + uVar31 * 4) +
                             *(float *)(lVar23 + 0x18 + uVar31 * 4) +
                             *(float *)(lVar23 + 0x1c + uVar31 * 4) +
                             *(float *)(lVar23 + 0x20 + uVar31 * 4);
                    uVar20 = uVar31 + 8;
                  } while ((uVar25 & 0xfffffffffffffff8) != uVar31 + 8);
                  pvVar12 = (void *)(uVar31 + 9);
                }
                if (pvVar13 != (void *)0x0) {
                  lVar1 = (int64_t)pvVar12 * 4;
                  pvVar12 = (void *)0x0;
                  do {
                    fVar36 = fVar36 + *(float *)(lVar23 + lVar1 + (int64_t)pvVar12 * 4);
                    pvVar12 = (void *)((int64_t)pvVar12 + 1);
                  } while (pvVar13 != pvVar12);
                }
              }
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              (**(code **)(g_02786500 + 0x20))(fVar35);
              uVar33 = (**(code **)(g_02786500 + 0x20))(fVar34);
              (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
              fVar37 = g_02394274;
              if (0x1f < iVar9) {
                lVar23 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(*arg1 + 0x10) + lVar28 * 8) + 0x10);
                pvVar12 = (void *)((int64_t)&MACH_HEADER.magic + 1);
                if (6 < local_f8) {
                  uVar20 = 0;
                  do {
                    uVar31 = uVar20;
                    fVar37 = fVar37 + *(float *)(lVar23 + 4 + uVar31 * 4) +
                             *(float *)(lVar23 + 8 + uVar31 * 4) +
                             *(float *)(lVar23 + 0xc + uVar31 * 4) +
                             *(float *)(lVar23 + 0x10 + uVar31 * 4) +
                             *(float *)(lVar23 + 0x14 + uVar31 * 4) +
                             *(float *)(lVar23 + 0x18 + uVar31 * 4) +
                             *(float *)(lVar23 + 0x1c + uVar31 * 4) +
                             *(float *)(lVar23 + 0x20 + uVar31 * 4);
                    uVar20 = uVar31 + 8;
                  } while ((uVar25 & 0xfffffffffffffff8) != uVar31 + 8);
                  pvVar12 = (void *)(uVar31 + 9);
                }
                if ((uVar25 & 7) != 0) {
                  lVar1 = (int64_t)pvVar12 * 4;
                  pvVar12 = (void *)0x0;
                  do {
                    fVar37 = fVar37 + *(float *)(lVar23 + lVar1 + (int64_t)pvVar12 * 4);
                    pvVar12 = (void *)((int64_t)pvVar12 + 1);
                  } while (pvVar13 != pvVar12);
                }
              }
              *(float *)(*(int64_t *)(local_40 + 0x10) + lVar28 * 4) = fVar36 / fVar37;
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              (**(code **)(g_02786500 + 0x20))(fVar35);
              uVar33 = (**(code **)(g_02786500 + 0x20))(fVar34);
              (**(code **)(g_02786500 + 0x28))(uVar33,iVar30);
              *(float *)(*(int64_t *)(*local_res10 + 0x10) + lVar28 * 4) =
                   fVar35 * fVar38 + fVar34 * fVar39;
              lVar28 = lVar28 + 1;
            } while (uVar7 != (uint)lVar28);
          }
          uVar33 = FUN_015c15b0(g_023908ec,local_100);
          if (iVar5 < (int)uVar7) {
            lVar28 = (int64_t)iVar5;
            iVar5 = ~uVar4 + uVar7;
            do {
              uVar33 = (**(code **)(g_02786500 + 0x20))
                                 (*(void*)(*(int64_t *)(local_40 + 0x10) + lVar28 * 4));
              lVar28 = lVar28 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (lVar29 != 0) {
            uVar33 = FUN_00d50b20();
          }
          lVar29 = local_110;
          if (lVar16 != 0) {
            uVar33 = FUN_00d50b20();
          }
          if (lVar19 != 0) {
            uVar33 = FUN_00d50b20();
          }
          if (lVar29 != 0) {
            uVar33 = FUN_00d50b20();
          }
        }
      }
      if (lVar14 != 0) {
        uVar33 = FUN_00d50b20();
      }
      if (lVar15 != 0) {
        uVar33 = FUN_00d50b20();
      }
      lVar19 = local_118 + 1;
      lVar14 = *this_ptr;
    } while (lVar19 < (int64_t)*(int *)(lVar14 + 0xc) + -1);
    if (local_120 == (void*)0x0) goto LAB_01834b82;
  }
  FUN_00d50b20();
LAB_01834b82:
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

