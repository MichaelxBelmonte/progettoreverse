// Function: FUN_01832fb0
// Address: 01832fb0
// Size: 7077 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018330c4) */
/* WARNING: Removing unreachable block (ram,0x018330cd) */
/* WARNING: Removing unreachable block (ram,0x01833059) */
/* WARNING: Removing unreachable block (ram,0x01833062) */
/* WARNING: Removing unreachable block (ram,0x01833bef) */
/* WARNING: Removing unreachable block (ram,0x01833bf8) */

void FUN_01832fb0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  void *pvVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  longlong *unaff_RSI;
  longlong lVar23;
  longlong *unaff_RDI;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong *plVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined4 uVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float fVar39;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  char in_stack_00000050;
  ulonglong in_stack_00000058;
  int in_stack_00000060;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined8 *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  void *local_100;
  ulonglong local_f8;
  ulonglong local_a8;
  longlong local_40;
  char local_38;
  
  pvVar18 = (void *)(ulonglong)*(uint *)(*unaff_RSI + 0xc);
  iVar9 = *(int *)(**(longlong **)(*unaff_RSI + 0x10) + 0x18);
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
    pvVar13 = (void *)(longlong)(iVar30 * 4);
    lVar14 = *unaff_RDI;
    if (1 < *(int *)(lVar14 + 0xc)) {
      uVar25 = 0;
      do {
        lVar14 = *(longlong *)(lVar14 + 0x10);
        lVar19 = *(longlong *)(lVar14 + uVar25 * 8);
        local_f8 = uVar25;
        if (lVar19 != 0) {
          fVar38 = (float)FUN_00d50b00();
          lVar14 = *(longlong *)(*unaff_RDI + 0x10);
        }
        lVar14 = *(longlong *)(lVar14 + 8 + local_f8 * 8);
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
          local_a8 = *(longlong *)(*(longlong *)(*local_108 + 0x10) + (longlong)iVar8 * 8) -
                     *(longlong *)(*(longlong *)(*local_108 + 0x10) + (longlong)iVar5 * 8);
        }
        if (uVar6 != 0xffffffff) {
          lVar15 = *(longlong *)(*local_108 + 0x10);
          lVar29 = *(longlong *)(lVar15 + (longlong)(int)uVar6 * 8);
          uVar25 = (*(longlong *)(lVar15 + (longlong)iVar10 * 8) - lVar29) / 3;
          if ((longlong)in_stack_00000058 <= (longlong)uVar25) {
            uVar25 = in_stack_00000058;
          }
          uVar21 = iVar8 + 1;
          lVar28 = lVar29;
          uVar7 = uVar6;
          if (uVar6 == uVar21) {
            uVar20 = (longlong)local_a8 / 3;
            if ((longlong)in_stack_00000058 <= (longlong)local_a8 / 3) {
              uVar20 = in_stack_00000058;
            }
            lVar28 = *(longlong *)(lVar15 + (longlong)(int)uVar4 * 8);
            lVar29 = lVar28 - uVar20;
            uVar7 = uVar4;
          }
          plVar26 = (longlong *)(ulonglong)uVar7;
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
          uVar20 = (ulonglong)(int)uVar4;
          lVar16 = *(longlong *)(lVar15 + uVar20 * 8);
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
            } while (lVar29 < *(longlong *)(lVar15 + uVar25 * 8));
            uVar17 = (uint)uVar25;
          }
          else {
            lVar23 = 0;
            do {
              uVar22 = uVar27;
              if (~((longlong)(int)uVar27 + 1U) + uVar20 + lVar23 == -2) goto joined_r0x018340d9;
              lVar1 = lVar23 + 1;
              lVar2 = lVar23 * 8;
              lVar23 = lVar1;
            } while (*(longlong *)(lVar15 + uVar20 * 8 + 8 + lVar2) <= lVar29);
            uVar17 = (uVar4 + (int)lVar1) - 1;
            uVar25 = (ulonglong)uVar17;
          }
          uVar22 = (uint)uVar25;
          uVar3 = uVar22;
          if ((int)uVar17 < (int)uVar27) {
LAB_0183408c:
            uVar22 = uVar3;
            if (*(longlong *)(lVar15 + 8 + (longlong)(int)uVar22 * 8) - lVar29 <
                lVar29 - *(longlong *)(lVar15 + (longlong)(int)uVar22 * 8)) {
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
            } while (lVar28 < *(longlong *)(lVar15 + uVar20 * 8));
            uVar4 = (uint)uVar20;
          }
          else {
            lVar29 = 0;
            do {
              uVar17 = uVar27;
              if (~((longlong)(int)uVar27 + 1U) + uVar20 + lVar29 == -2) goto LAB_01834146;
              lVar16 = lVar29 + 1;
              lVar23 = lVar29 * 8;
              lVar29 = lVar16;
            } while (*(longlong *)(lVar15 + uVar20 * 8 + 8 + lVar23) <= lVar28);
            uVar4 = (uVar4 + (int)lVar16) - 1;
            uVar20 = (ulonglong)uVar4;
          }
          uVar17 = (uint)uVar20;
          uVar3 = uVar17;
          if ((int)uVar4 < (int)uVar27) {
LAB_0183412c:
            uVar17 = uVar3;
            if (*(longlong *)(lVar15 + 8 + (longlong)(int)uVar17 * 8) - lVar28 <
                lVar28 - *(longlong *)(lVar15 + (longlong)(int)uVar17 * 8)) {
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
            lVar15 = (longlong)(int)(uVar4 + 1);
            iVar5 = ~uVar4 + uVar7;
            uVar17 = ~uVar4 + uVar17;
            pvVar18 = (void *)(ulonglong)uVar17;
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
              if (*(longlong *)(*(longlong *)(*param_1 + 0x10) + lVar15 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              fVar39 = DAT_02390124 - fVar38;
              (**(code **)(DAT_02786500 + 0x20))();
              uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar38);
              (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
              if (*(longlong *)(*(longlong *)(*param_3 + 0x10) + lVar15 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              (**(code **)(DAT_02786500 + 0x20))(fVar39);
              uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar38);
              (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
              lVar28 = *(longlong *)(*local_res10 + 0x10) + lVar15 * 4;
              fVar38 = fVar38 * *(float *)(lVar28 + lVar29 * 4);
              pvVar18 = (void *)(*(longlong *)(*local_res18 + 0x10) + lVar15 * 4);
              *(float *)(lVar28 + lVar29 * 4) =
                   fVar39 * *(float *)((longlong)pvVar18 + lVar29 * 4) + fVar38;
              iVar5 = iVar5 + -1;
              lVar29 = lVar29 + 1;
            } while (uVar17 != (uint)lVar29);
          }
        }
        if ((local_f8 == 0) && (0 < (longlong)local_a8)) {
          uVar25 = local_a8 / 3;
          if ((longlong)in_stack_00000058 <= (longlong)(local_a8 / 3)) {
            uVar25 = in_stack_00000058;
          }
          plVar26 = (longlong *)(longlong)iVar9;
          lVar15 = *(longlong *)(*local_108 + 0x10);
          lVar29 = *(longlong *)(lVar15 + (longlong)plVar26 * 8);
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
          uVar25 = (ulonglong)(int)uVar4;
          lVar16 = *(longlong *)(lVar15 + uVar25 * 8);
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
            } while (lVar29 < *(longlong *)(lVar15 + uVar31 * 8));
            uVar21 = (uint)uVar31;
          }
          else {
            lVar23 = 0;
            do {
              uVar7 = uVar6;
              if (~((longlong)(int)uVar6 + 1U) + uVar25 + lVar23 == -2) goto joined_r0x018345a0;
              lVar1 = lVar23 + 1;
              lVar2 = lVar23 * 8;
              lVar23 = lVar1;
            } while (*(longlong *)(lVar15 + uVar25 * 8 + 8 + lVar2) <= lVar29);
            uVar21 = (uVar4 + (int)lVar1) - 1;
            uVar31 = (ulonglong)uVar21;
          }
          uVar7 = (uint)uVar31;
          uVar27 = uVar7;
          if ((int)uVar21 < (int)uVar6) {
LAB_01834555:
            uVar7 = uVar27;
            if (*(longlong *)(lVar15 + 8 + (longlong)(int)uVar7 * 8) - lVar29 <
                lVar29 - *(longlong *)(lVar15 + (longlong)(int)uVar7 * 8)) {
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
            } while (lVar28 < *(longlong *)(lVar15 + uVar25 * 8));
            uVar4 = (uint)uVar25;
          }
          else {
            lVar29 = 0;
            do {
              uVar21 = uVar6;
              if (~((longlong)(int)uVar6 + 1U) + uVar25 + lVar29 == -2) goto LAB_01834605;
              lVar16 = lVar29 + 1;
              lVar23 = lVar29 * 8;
              lVar29 = lVar16;
            } while (*(longlong *)(lVar15 + uVar25 * 8 + 8 + lVar23) <= lVar28);
            uVar4 = ((int)lVar16 + uVar4) - 1;
            uVar25 = (ulonglong)uVar4;
          }
          uVar21 = (uint)uVar25;
          uVar27 = uVar21;
          if ((int)uVar4 < (int)uVar6) {
LAB_018345eb:
            uVar21 = uVar27;
            if (*(longlong *)(lVar15 + 8 + (longlong)(int)uVar21 * 8) - lVar28 <
                lVar28 - *(longlong *)(lVar15 + (longlong)(int)uVar21 * 8)) {
              uVar21 = uVar21 + 1;
            }
          }
LAB_01834605:
          if ((1 < (int)(uVar21 - iVar9)) && ((int)(uVar7 + 1) < (int)uVar21)) {
            lVar28 = (longlong)(int)(uVar7 + 1);
            iVar5 = iVar9 + ~uVar7;
            lVar15 = lVar28 - (longlong)plVar26;
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
              pvVar18 = (void *)(ulonglong)uVar4;
              fVar38 = (float)FUN_00e84a50((float)iVar8 / (float)(int)uVar4);
              if (*(longlong *)(*(longlong *)(*param_1 + 0x10) + lVar28 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              fVar39 = DAT_02390124 - fVar38;
              (**(code **)(DAT_02786500 + 0x20))();
              uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar38);
              (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
              if (*(longlong *)(*(longlong *)(*param_3 + 0x10) + lVar28 * 8 + lVar29 * 8) != 0) {
                FUN_00d50b00();
              }
              _memcpy(pvVar18,pvVar13,(size_t)plVar26);
              FUN_00d50b20();
              (**(code **)(DAT_02786500 + 0x20))(fVar39);
              uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar38);
              (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
              lVar16 = *(longlong *)(*local_res10 + 0x10) + lVar28 * 4;
              fVar38 = fVar38 * *(float *)(lVar16 + lVar29 * 4);
              *(float *)(lVar16 + lVar29 * 4) =
                   fVar39 * *(float *)(*(longlong *)(*local_res18 + 0x10) + lVar28 * 4 + lVar29 * 4)
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
        lVar14 = *unaff_RDI;
        pvVar18 = (void *)((longlong)*(int *)(lVar14 + 0xc) - 1);
      } while ((longlong)uVar25 < (longlong)pvVar18);
    }
    if (0 < (int)local_100) {
      local_100 = (void *)((longlong)local_100 << 2);
      pvVar12 = (void *)0x0;
      do {
        fVar38 = *(float *)(*(longlong *)(*local_res20 + 0x10) + (longlong)pvVar12);
        if (DAT_02394274 <= fVar38) {
          if (fVar38 < DAT_023b36e4) {
            if (*(longlong *)(*(longlong *)(*param_1 + 0x10) + (longlong)pvVar12 * 2) != 0) {
              FUN_00d50b00();
            }
            _memcpy(pvVar18,pvVar13,(size_t)plVar26);
            FUN_00d50b20();
            fVar39 = DAT_02390124 - fVar38;
            (**(code **)(DAT_02786500 + 0x20))();
            uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar38);
            (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
            if (*(longlong *)(*(longlong *)(*param_3 + 0x10) + (longlong)pvVar12 * 2) != 0) {
              FUN_00d50b00();
            }
            _memcpy(pvVar18,pvVar13,(size_t)plVar26);
            FUN_00d50b20();
            (**(code **)(DAT_02786500 + 0x20))(fVar39);
            uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar38);
            (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
            pvVar18 = *(void **)(*local_res8 + 0x10);
            *(float *)(*(longlong *)(*local_res10 + 0x10) + (longlong)pvVar12) =
                 fVar39 * *(float *)((longlong)pvVar18 + (longlong)pvVar12) +
                 fVar38 * *(float *)(*(longlong *)(*local_res10 + 0x10) + (longlong)pvVar12);
          }
        }
        else {
          if (*(longlong *)(*(longlong *)(*param_1 + 0x10) + (longlong)pvVar12 * 2) != 0) {
            FUN_00d50b00();
          }
          _memcpy(pvVar18,pvVar13,(size_t)plVar26);
          FUN_00d50b20();
          if (*(longlong *)(*(longlong *)(*param_3 + 0x10) + (longlong)pvVar12 * 2) != 0) {
            FUN_00d50b00();
          }
          _memcpy(pvVar18,pvVar13,(size_t)plVar26);
          FUN_00d50b20();
          *(undefined4 *)(*(longlong *)(*local_res10 + 0x10) + (longlong)pvVar12) =
               *(undefined4 *)(*(longlong *)(*local_res8 + 0x10) + (longlong)pvVar12);
        }
        pvVar12 = (void *)((longlong)pvVar12 + 4);
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
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  uVar33 = (*DAT_025f0db0)();
  lVar14 = *unaff_RDI;
  if (1 < *(int *)(lVar14 + 0xc)) {
    iVar5 = iVar9 + 0xf;
    if (-1 < iVar9) {
      iVar5 = iVar9;
    }
    local_f8 = 2;
    if (2 < iVar5 >> 4) {
      local_f8 = (ulonglong)(uint)(iVar5 >> 4);
    }
    pvVar18 = (void *)(longlong)(iVar30 * 4);
    uVar25 = local_f8 - 1;
    local_f8 = local_f8 - 2;
    pvVar13 = (void *)(ulonglong)((uint)uVar25 & 7);
    lVar19 = 0;
    local_120 = puVar11;
    do {
      lVar14 = *(longlong *)(lVar14 + 0x10);
      lVar15 = *(longlong *)(lVar14 + lVar19 * 8);
      local_118 = lVar19;
      if (lVar15 != 0) {
        uVar33 = FUN_00d50b00();
        lVar14 = *(longlong *)(*unaff_RDI + 0x10);
      }
      lVar14 = *(longlong *)(lVar14 + 8 + local_118 * 8);
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
        lVar19 = *(longlong *)(*(longlong *)(*local_108 + 0x10) + (longlong)(int)uVar6 * 8) -
                 *(longlong *)(*(longlong *)(*local_108 + 0x10) + (longlong)iVar5 * 8);
      }
      if (uVar7 != 0xffffffff) {
        if ((uVar6 == 0xffffffff) || (uVar7 != uVar6 + 1)) {
          if (uVar6 != 0xffffffff) {
            uVar4 = uVar6;
          }
        }
        else {
          lVar29 = *(longlong *)(*local_108 + 0x10);
          uVar20 = lVar19 / 3;
          if ((longlong)in_stack_00000058 <= lVar19 / 3) {
            uVar20 = in_stack_00000058;
          }
          uVar31 = (*(longlong *)(lVar29 + (longlong)iVar8 * 8) -
                   *(longlong *)(lVar29 + (longlong)(int)uVar7 * 8)) / 3;
          if ((longlong)in_stack_00000058 <= (longlong)uVar31) {
            uVar31 = in_stack_00000058;
          }
          lVar19 = *(longlong *)(lVar29 + (longlong)(int)uVar4 * 8);
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
          uVar20 = (ulonglong)(int)uVar6;
          param_3 = *(longlong **)(lVar29 + uVar20 * 8);
          uVar31 = uVar20;
          if (lVar19 < (longlong)param_3) {
            do {
              uVar24 = uVar31 - 1;
              if (uVar31 == 0) {
                uVar4 = 0;
                uVar27 = 0;
                if ((int)uVar21 < 1) goto joined_r0x018335bb;
                goto LAB_0183356d;
              }
              uVar31 = uVar24;
            } while (lVar19 < *(longlong *)(lVar29 + uVar24 * 8));
            uVar7 = (uint)uVar24;
          }
          else {
            lVar16 = 0;
            do {
              uVar4 = uVar21;
              if (~((longlong)(int)uVar21 + 1U) + uVar20 + lVar16 == -2) goto joined_r0x018335bb;
              lVar23 = lVar16 + 1;
              lVar1 = lVar16 * 8;
              lVar16 = lVar23;
            } while (*(longlong *)(lVar29 + uVar20 * 8 + 8 + lVar1) <= lVar19);
            uVar7 = (uVar6 + (int)lVar23) - 1;
            uVar24 = (ulonglong)uVar7;
          }
          uVar4 = (uint)uVar24;
          uVar27 = uVar4;
          if ((int)uVar7 < (int)uVar21) {
LAB_0183356d:
            uVar4 = uVar27;
            if (*(longlong *)(lVar29 + 8 + (longlong)(int)uVar4 * 8) - lVar19 <
                lVar19 - *(longlong *)(lVar29 + (longlong)(int)uVar4 * 8)) {
              uVar4 = uVar4 + 1;
            }
          }
joined_r0x018335bb:
          if (lVar28 < (longlong)param_3) {
            do {
              bVar32 = uVar20 == 0;
              uVar20 = uVar20 - 1;
              if (bVar32) {
                uVar7 = 0;
                uVar27 = 0;
                if ((int)uVar21 < 1) goto LAB_01833623;
                goto LAB_0183360a;
              }
            } while (lVar28 < *(longlong *)(lVar29 + uVar20 * 8));
            uVar6 = (uint)uVar20;
          }
          else {
            lVar19 = 0;
            do {
              uVar7 = uVar21;
              if (~((longlong)(int)uVar21 + 1U) + uVar20 + lVar19 == -2) goto LAB_01833623;
              lVar16 = lVar19 + 1;
              lVar23 = lVar19 * 8;
              lVar19 = lVar16;
            } while (*(longlong *)(lVar29 + uVar20 * 8 + 8 + lVar23) <= lVar28);
            uVar6 = (uVar6 + (int)lVar16) - 1;
            uVar20 = (ulonglong)uVar6;
          }
          uVar7 = (uint)uVar20;
          uVar27 = uVar7;
          if ((int)uVar6 < (int)uVar21) {
LAB_0183360a:
            uVar7 = uVar27;
            if (*(longlong *)(lVar29 + 8 + (longlong)(int)uVar7 * 8) - lVar28 <
                lVar28 - *(longlong *)(lVar29 + (longlong)(int)uVar7 * 8)) {
              uVar7 = uVar7 + 1;
            }
          }
        }
LAB_01833623:
        if (1 < (int)(uVar7 - uVar4)) {
          lVar28 = (longlong)(int)uVar4;
          lVar19 = *(longlong *)(*unaff_RSI + 0x10);
          lVar29 = *(longlong *)(lVar19 + lVar28 * 8);
          if (lVar29 != 0) {
            FUN_00d50b00();
            lVar19 = *(longlong *)(*unaff_RSI + 0x10);
          }
          pvVar12 = (void *)(longlong)(int)uVar7;
          lVar19 = *(longlong *)(lVar19 + (longlong)pvVar12 * 8);
          local_110 = lVar29;
          if (lVar19 != 0) {
            FUN_00d50b00();
          }
          lVar29 = *(longlong *)(*param_2 + 0x10);
          lVar16 = *(longlong *)(lVar29 + lVar28 * 8);
          if (lVar16 != 0) {
            FUN_00d50b00();
            lVar29 = *(longlong *)(*param_2 + 0x10);
          }
          lVar29 = *(longlong *)(lVar29 + (longlong)pvVar12 * 8);
          if (lVar29 != 0) {
            FUN_00d50b00();
          }
          fVar38 = *(float *)(*(longlong *)(*local_res10 + 0x10) + lVar28 * 4);
          fVar39 = *(float *)(*(longlong *)(*local_res10 + 0x10) + (longlong)pvVar12 * 4);
          if (3 < (int)*(uint *)(local_40 + 0x18)) {
            _memset_pattern16(pvVar12,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) *
                                               4 + 4),(size_t)param_3);
          }
          iVar5 = uVar4 + 1;
          if (iVar5 < (int)uVar7) {
            lVar28 = (longlong)iVar5;
            do {
              fVar34 = (float)FUN_00e84a50((float)(int)((int)lVar28 - uVar4) /
                                           (float)(int)(uVar7 - uVar4));
              fVar35 = DAT_02390124 - fVar34;
              fVar36 = DAT_02394274;
              if (0x1f < iVar9) {
                lVar23 = *(longlong *)
                          (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + lVar28 * 8) + 0x10);
                pvVar12 = (void *)((longlong)&MACH_HEADER.magic + 1);
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
                  lVar1 = (longlong)pvVar12 * 4;
                  pvVar12 = (void *)0x0;
                  do {
                    fVar36 = fVar36 + *(float *)(lVar23 + lVar1 + (longlong)pvVar12 * 4);
                    pvVar12 = (void *)((longlong)pvVar12 + 1);
                  } while (pvVar13 != pvVar12);
                }
              }
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              (**(code **)(DAT_02786500 + 0x20))(fVar35);
              uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar34);
              (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
              fVar37 = DAT_02394274;
              if (0x1f < iVar9) {
                lVar23 = *(longlong *)
                          (*(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + lVar28 * 8) + 0x10);
                pvVar12 = (void *)((longlong)&MACH_HEADER.magic + 1);
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
                  lVar1 = (longlong)pvVar12 * 4;
                  pvVar12 = (void *)0x0;
                  do {
                    fVar37 = fVar37 + *(float *)(lVar23 + lVar1 + (longlong)pvVar12 * 4);
                    pvVar12 = (void *)((longlong)pvVar12 + 1);
                  } while (pvVar13 != pvVar12);
                }
              }
              *(float *)(*(longlong *)(local_40 + 0x10) + lVar28 * 4) = fVar36 / fVar37;
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              _memcpy(pvVar12,pvVar18,(size_t)param_3);
              (**(code **)(DAT_02786500 + 0x20))(fVar35);
              uVar33 = (**(code **)(DAT_02786500 + 0x20))(fVar34);
              (**(code **)(DAT_02786500 + 0x28))(uVar33,iVar30);
              *(float *)(*(longlong *)(*local_res10 + 0x10) + lVar28 * 4) =
                   fVar35 * fVar38 + fVar34 * fVar39;
              lVar28 = lVar28 + 1;
            } while (uVar7 != (uint)lVar28);
          }
          uVar33 = FUN_015c15b0(DAT_023908ec,local_100);
          if (iVar5 < (int)uVar7) {
            lVar28 = (longlong)iVar5;
            iVar5 = ~uVar4 + uVar7;
            do {
              uVar33 = (**(code **)(DAT_02786500 + 0x20))
                                 (*(undefined4 *)(*(longlong *)(local_40 + 0x10) + lVar28 * 4));
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
      lVar14 = *unaff_RDI;
    } while (lVar19 < (longlong)*(int *)(lVar14 + 0xc) + -1);
    if (local_120 == (undefined8 *)0x0) goto LAB_01834b82;
  }
  FUN_00d50b20();
LAB_01834b82:
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


