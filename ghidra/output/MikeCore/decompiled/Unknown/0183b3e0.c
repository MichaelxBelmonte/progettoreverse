// Function: FUN_0183b3e0
// Address: 0183b3e0
// Size: 4818 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0183b8de) */
/* WARNING: Removing unreachable block (ram,0x0183b8e7) */
/* WARNING: Removing unreachable block (ram,0x0183b80d) */
/* WARNING: Removing unreachable block (ram,0x0183b816) */
/* WARNING: Removing unreachable block (ram,0x0183b59e) */
/* WARNING: Removing unreachable block (ram,0x0183b5aa) */
/* WARNING: Removing unreachable block (ram,0x0183b857) */
/* WARNING: Removing unreachable block (ram,0x0183b860) */
/* WARNING: Removing unreachable block (ram,0x0183b89a) */
/* WARNING: Removing unreachable block (ram,0x0183b8a3) */
/* WARNING: Removing unreachable block (ram,0x0183bd07) */
/* WARNING: Removing unreachable block (ram,0x0183bd10) */
/* WARNING: Removing unreachable block (ram,0x0183b7ca) */
/* WARNING: Removing unreachable block (ram,0x0183b7d3) */
/* WARNING: Removing unreachable block (ram,0x0183b6d1) */
/* WARNING: Removing unreachable block (ram,0x0183b6da) */
/* WARNING: Removing unreachable block (ram,0x0183c6f5) */
/* WARNING: Removing unreachable block (ram,0x0183c702) */
/* WARNING: Removing unreachable block (ram,0x0183b4d7) */
/* WARNING: Removing unreachable block (ram,0x0183b4e0) */
/* WARNING: Removing unreachable block (ram,0x0183b52f) */
/* WARNING: Removing unreachable block (ram,0x0183b538) */
/* WARNING: Removing unreachable block (ram,0x0183b666) */
/* WARNING: Removing unreachable block (ram,0x0183b66f) */
/* WARNING: Removing unreachable block (ram,0x0183b739) */
/* WARNING: Removing unreachable block (ram,0x0183b742) */
/* WARNING: Removing unreachable block (ram,0x0183bd74) */
/* WARNING: Removing unreachable block (ram,0x0183bd7d) */
/* WARNING: Removing unreachable block (ram,0x0183bdd7) */
/* WARNING: Removing unreachable block (ram,0x0183bde0) */
/* WARNING: Removing unreachable block (ram,0x0183be3a) */
/* WARNING: Removing unreachable block (ram,0x0183be43) */
/* WARNING: Removing unreachable block (ram,0x0183bea2) */
/* WARNING: Removing unreachable block (ram,0x0183beab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0183b3e0(double param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  pthread_key_t pVar17;
  longlong *in_RCX;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong in_RDX;
  ulonglong uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *unaff_RSI;
  ulonglong uVar27;
  longlong *unaff_RDI;
  int iVar28;
  longlong lVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  double dVar33;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 extraout_XMM0_Dd;
  float fVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  longlong *local_res10;
  longlong local_1e8;
  longlong local_1c0;
  longlong local_1b0;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  double local_138;
  undefined8 uStack_130;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  double local_f8;
  longlong local_f0;
  double local_e8;
  double local_d8;
  longlong local_b8;
  int local_9c;
  longlong local_60;
  longlong local_58;
  longlong local_40;
  char local_38;
  ulonglong uVar22;
  
  lVar13 = *unaff_RSI;
  if (lVar13 != 0) {
    uVar2 = *(uint *)(lVar13 + 0xc);
    if ((ulonglong)uVar2 != 0) {
      iVar10 = *(int *)(**(longlong **)(lVar13 + 0x10) + 0x18);
      iVar28 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar28 = iVar10;
      }
      iVar10 = *(int *)(**(longlong **)(*in_RCX + 0x10) + 0x18);
      iVar16 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar16 = iVar10;
      }
      uVar21 = 8;
      do {
        uVar9 = uVar21;
        uVar27 = (ulonglong)uVar9;
        uVar21 = uVar9 * 2;
      } while ((int)uVar9 < param_4);
      local_f8 = param_1;
      FUN_00e83120();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      uVar30 = FUN_00e83da0();
      FUN_00c8e2b0(uVar30,uVar9 * 4);
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e4f0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar13 = *(longlong *)(local_40 + 0x10);
      uVar22 = 1;
      if (1 < uVar9) {
        uVar22 = uVar27;
      }
      uVar21 = (uint)uVar22;
      if (3 < uVar21) {
        uVar18 = (ulonglong)(uVar21 & 0xfffffff8);
        uVar23 = 0;
        do {
          auVar35 = *(undefined1 (*) [16])(lVar13 + uVar23 * 4);
          auVar35 = sqrtps(auVar35,auVar35);
          *(undefined1 (*) [16])(lVar13 + uVar23 * 4) = auVar35;
          uVar23 = uVar23 + 4;
          if (uVar18 == uVar23) goto joined_r0x0183b61e;
        } while( true );
      }
      uVar18 = 0;
      do {
        *(float *)(lVar13 + uVar18 * 4) = SQRT(*(float *)(lVar13 + uVar18 * 4));
        uVar18 = uVar18 + 1;
joined_r0x0183b61e:
      } while (uVar18 != uVar22);
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
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar17 = 0x2572358;
      *puVar11 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00c8e690();
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      pvVar12 = _pthread_getspecific(pVar17);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar13 = FUN_013de650();
      local_110 = (longlong)(iVar28 >> 2);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = local_f8;
      local_120 = param_2 + param_3;
      uVar6 = uVar9 >> 1;
      uVar18 = (ulonglong)uVar6;
      local_11c = (float)local_f8 / (float)(int)uVar9;
      dVar31 = (double)lVar13 / local_f8;
      uVar23 = 2;
      if (2 < uVar6) {
        uVar23 = uVar18;
      }
      local_1c0 = -uVar18;
      local_9c = -1;
      local_1b0 = -1;
      bVar7 = false;
      local_d8 = DAT_0238fee8;
      local_138 = 0.0;
      uStack_130 = 0;
      local_e8 = 0.0;
      local_58 = 0;
      bVar8 = false;
      local_60 = 0;
      local_f0 = 0x7fffffffffffffff;
      local_100 = 0;
      local_b8 = -1;
      uVar19 = uVar18;
      do {
        plVar25 = (longlong *)*local_res10;
        pvVar12 = _pthread_getspecific((pthread_key_t)uVar19);
        if (pvVar12 != (void *)0x0) {
          plVar25 = (longlong *)*local_res10;
          lVar13 = FUN_00e8b990();
          if (lVar13 != 0) {
            plVar25 = (longlong *)plVar25[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
        }
        dVar32 = (double)(**(code **)(*plVar25 + 0x380))
                                   ((double)(longlong)local_100 / local_f8 + dVar31);
        lVar13 = FUN_00e7dae0(dVar32 * local_f8);
        if (local_b8 <= lVar13) {
          local_9c = local_9c + 1;
          dVar32 = local_138;
          if (local_9c < *(int *)(*unaff_RDI + 0xc)) {
            lVar14 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + (longlong)local_9c * 8);
            if (local_58 == lVar14) {
              if ((!bVar7) && (local_58 != 0)) {
                bVar7 = true;
                dVar32 = (double)FUN_00d50b00();
              }
            }
            else {
              if (lVar14 != 0) {
                dVar32 = (double)FUN_00d50b00();
              }
              if ((bVar7) && (local_58 != 0)) {
                dVar32 = (double)FUN_00d50b20();
                bVar7 = true;
                local_58 = lVar14;
              }
              else {
                bVar7 = true;
                local_58 = lVar14;
              }
            }
          }
          pVar17 = 0xffffffff;
          local_b8 = 0x7fffffffffffffff;
          if (local_9c < *(int *)(*unaff_RDI + 0xc) + -1) {
            pvVar12 = _pthread_getspecific(0xffffffff);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              pVar17 = (pthread_key_t)local_58;
            }
            lVar14 = FUN_013de650();
            pvVar12 = _pthread_getspecific(pVar17);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b8 = FUN_013de790();
            local_b8 = local_b8 + lVar14;
            dVar32 = extraout_XMM0_Qa;
          }
          local_188 = local_58;
          local_180 = '\0';
          FUN_0133ae40(dVar32,&local_188);
          lVar14 = FUN_00d45790();
          uVar30 = extraout_XMM0_Qa_00;
          if ((local_180 != '\0') && (local_188 != 0)) {
            uVar30 = FUN_00d50b20();
          }
          if (lVar14 == -1) {
            local_1b0 = -1;
            local_d8 = DAT_0238fee8;
            local_138 = 0.0;
            uStack_130 = 0;
            local_f0 = 0x7fffffffffffffff;
          }
          else {
            local_178 = local_58;
            local_170 = '\0';
            FUN_0133ae40(uVar30,&local_178);
            lVar14 = FUN_00d45790();
            uVar30 = extraout_XMM0_Qa_01;
            if ((local_170 != '\0') && (local_178 != 0)) {
              uVar30 = FUN_00d50b20();
            }
            local_168 = local_58;
            local_160 = '\0';
            FUN_0133ae40(uVar30,&local_168);
            lVar26 = FUN_00d45790();
            uVar30 = extraout_XMM0_Qa_02;
            if ((local_160 != '\0') && (local_168 != 0)) {
              uVar30 = FUN_00d50b20();
            }
            local_158 = local_58;
            local_150 = '\0';
            FUN_0133ae40(uVar30,&local_158);
            local_1b0 = FUN_00d45790();
            uVar30 = extraout_XMM0_Qa_03;
            if ((local_150 != '\0') && (local_158 != 0)) {
              uVar30 = FUN_00d50b20();
            }
            local_148 = local_58;
            local_140 = '\0';
            FUN_0133ae40(uVar30,&local_148);
            local_d8 = (double)FUN_00d45bc0();
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            local_138 = (double)lVar26;
            uStack_130 = 0;
            local_1b0 = local_1b0 + lVar14;
            local_f0 = lVar14;
          }
        }
        bVar5 = lVar13 < local_f0;
        **(longlong **)(local_40 + 0x10) = lVar13;
        local_1e8 = 1;
        if (local_1b0 <= lVar13 || bVar5) {
          dVar32 = 0.0;
          dVar39 = DAT_0238fee8;
        }
        else {
          dVar39 = (double)(lVar13 - local_f0);
          auVar34._0_8_ = dVar39 / local_138;
          auVar34._8_8_ = auVar35._8_8_;
          auVar35 = roundsd(auVar34,auVar34,9);
          for (dVar32 = local_e8 - (dVar39 - auVar35._0_8_ * local_138) / local_138; dVar32 < 0.0;
              dVar32 = dVar32 + DAT_0238fee8) {
          }
          dVar32 = dVar32 * local_138 + dVar39;
          for (local_e8 = local_e8 + ((double)uVar6 / local_138) * local_d8;
              DAT_0238fee8 <= local_e8; local_e8 = local_e8 + DAT_023b19a0) {
          }
          iVar10 = FUN_00e7d850(dVar32);
          lVar14 = local_f0;
          dVar33 = dVar32 - local_138;
          **(longlong **)(local_40 + 0x10) = iVar10 + local_f0;
          iVar10 = FUN_00e7d850();
          auVar40._0_8_ = (ulonglong)(dVar32 - dVar39) & _DAT_023908f0;
          auVar40._8_8_ = (ulonglong)(dVar33 - dVar39) & _UNK_023908f8;
          auVar36._8_8_ = local_138;
          auVar36._0_8_ = local_138;
          auVar35 = divpd(auVar40,auVar36);
          dVar39 = _DAT_0240d420 - auVar35._0_8_;
          dVar32 = _UNK_0240d428 - auVar35._8_8_;
          *(longlong *)(*(longlong *)(local_40 + 0x10) + 8) = iVar10 + lVar14;
          local_1e8 = 2;
        }
        if (0 < (int)uVar2) {
          local_118 = (float)dVar39;
          local_114 = (float)dVar32;
          uVar19 = 0;
          do {
            lVar14 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar19 * 8);
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            lVar26 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar19 * 8);
            if (lVar26 != 0) {
              FUN_00d50b00();
            }
            lVar29 = 0;
            local_108 = lVar26;
            do {
              lVar26 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar29 * 8);
              lVar3 = *(longlong *)(puVar11[2] + lVar29 * 8);
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
              ___bzero();
              lVar20 = (in_RDX + uVar18) * -4 + lVar26 * 4;
              lVar26 = lVar26 - (in_RDX + uVar18);
              uVar15 = 0;
              do {
                lVar24 = lVar26 + uVar15;
                if ((-1 < lVar24) && (lVar24 < local_110)) {
                  *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + uVar15 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + lVar20 + uVar15 * 4);
                }
                if ((-1 < lVar24 + 1) && (lVar24 + 1 < local_110)) {
                  *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 4 + uVar15 * 4) =
                       *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + lVar20 + 4 + uVar15 * 4);
                }
                uVar15 = uVar15 + 2;
              } while ((uVar21 & 0xfffffff8) != uVar15);
              if ((((uVar22 & 1) != 0) && (lVar26 = lVar26 + uVar15, -1 < lVar26)) &&
                 (lVar26 < local_110)) {
                lVar20 = *(longlong *)(lVar3 + 0x10);
                *(undefined4 *)(lVar20 + uVar15 * 4) =
                     *(undefined4 *)(*(longlong *)(lVar14 + 0x10) + lVar26 * 4);
              }
              uVar30 = (**(code **)(DAT_02786500 + 0x38))(lVar20,uVar27);
              FUN_00e83530(uVar30,*(undefined8 *)(lVar3 + 0x10));
              puVar4 = *(undefined8 **)(local_40 + 0x10);
              *puVar4 = 0;
              uVar15 = 1;
              do {
                fVar37 = *(float *)(puVar4 + uVar15);
                fVar1 = *(float *)((longlong)puVar4 + uVar15 * 8 + 4);
                _atan2f();
                fVar38 = (float)(int)uVar15 * local_11c;
                fVar42 = DAT_02390124;
                if ((fVar38 <= local_120) && (fVar42 = 0.0, param_2 < fVar38)) {
                  fVar42 = (fVar38 - param_2) / param_3;
                }
                fVar42 = SQRT(fVar1 * fVar1 + fVar37 * fVar37) * fVar42;
                uVar30 = ___sincosf_stret();
                fVar37 = (float)((ulonglong)uVar30 >> 0x20);
                auVar41._4_4_ = fVar37;
                auVar41._0_4_ = fVar37;
                auVar41._8_4_ = extraout_XMM0_Dd;
                auVar41._12_4_ = extraout_XMM0_Dd;
                auVar35._4_12_ = auVar41._4_12_;
                auVar35._0_4_ = fVar37 * fVar42;
                uVar9 = (uint)_DAT_023945e0;
                *(float *)(puVar4 + uVar15) = auVar35._0_4_;
                *(float *)((longlong)puVar4 + uVar15 * 8 + 4) =
                     (float)((uint)fVar42 ^ uVar9) * (float)uVar30;
                uVar15 = uVar15 + 1;
              } while (uVar23 != uVar15);
              uVar30 = FUN_00e83640(uVar30,*(undefined8 *)(lVar3 + 0x10));
              (**(code **)(DAT_02786500 + 0x38))(uVar30,uVar27);
              FUN_00d50b20();
              lVar29 = lVar29 + 1;
            } while (lVar29 != local_1e8);
            if (local_1b0 <= lVar13 || bVar5) {
              lVar26 = *(longlong *)puVar11[2];
              if (local_60 == lVar26) {
                if ((!bVar8) && (local_60 != 0)) {
                  bVar8 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar26 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar8) && (local_60 != 0)) {
                  FUN_00d50b20();
                  bVar8 = true;
                  local_60 = lVar26;
                }
                else {
                  bVar8 = true;
                  local_60 = lVar26;
                }
              }
            }
            else {
              if (local_40 == local_60) {
                if ((!bVar8) && (local_40 != 0)) {
                  bVar8 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar8) && (local_60 != 0)) {
                  local_60 = local_40;
                  FUN_00d50b20();
                  bVar8 = true;
                }
                else {
                  local_60 = local_40;
                  bVar8 = true;
                }
              }
              ___bzero();
              (**(code **)(DAT_02786500 + 0x20))();
              uVar30 = (**(code **)(DAT_02786500 + 0x20))();
              uVar30 = (**(code **)(DAT_02786500 + 0x28))(uVar30,uVar27);
              (**(code **)(DAT_02786500 + 0x28))(uVar30,uVar27);
            }
            uVar15 = 0;
            lVar26 = local_1c0;
            do {
              if ((-1 < lVar26) && (lVar26 < iVar16 >> 2)) {
                *(float *)(*(longlong *)(local_108 + 0x10) + lVar26 * 4) =
                     *(float *)(*(longlong *)(local_60 + 0x10) + uVar15 * 4) +
                     *(float *)(*(longlong *)(local_108 + 0x10) + lVar26 * 4);
              }
              uVar15 = uVar15 + 1;
              lVar26 = lVar26 + 1;
            } while (uVar22 != uVar15);
            if (local_108 != 0) {
              FUN_00d50b20();
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar2);
        }
        uVar19 = local_100 + uVar18;
        local_1c0 = local_1c0 + uVar18;
        local_100 = uVar19;
      } while ((longlong)uVar19 < (longlong)(iVar16 >> 2));
      if ((bVar7) && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((bVar8) && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
    }
  }
  return;
}


