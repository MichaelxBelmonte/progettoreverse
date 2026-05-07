// ===================================================================
// MUHorizontalOverviewScroller — Complete reconstructed pseudocode
// 15 functions
// ===================================================================


// ============================================================
// 01becf90
// ============================================================
// Function: FUN_01becf90
// Address: 01becf90
// Size: 3288 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01becf90(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  bool bVar8;
  int64_t lVar9;
  int64_t *plVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  int64_t **pplVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  float fVar24;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  double local_a8;
  double local_a0;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar10 = local_40;
  pcVar13 = local_48;
  if (local_38[0] != '\0') {
    pcVar13 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar13 = '\0';
  if ((local_38[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027e7c00;
  if (g_027e7c00 != 0) {
    FUN_00d50b00();
  }
  cVar11 = (**(code **)(*plVar10 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6d40;
  if (cVar11 == '\0') {
    if (g_026f6d40 != 0) {
      FUN_00d50b00();
    }
    cVar11 = (**(code **)(*plVar10 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (cVar11 == '\0') {
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar1 = (int64_t *)this_ptr[0x3c];
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = g_027ebc60;
      lVar2 = g_027e7c30;
      if (plVar3 == plVar1) {
        if (g_027e7c30 != 0) {
          FUN_00d50b00();
        }
        cVar11 = (**(code **)(*plVar10 + 0x50))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_027e7c38;
        if (cVar11 == '\0') {
          if (g_027e7c38 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar10 + 0x50))();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          lVar2 = this_ptr[0x37];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01a3c5a0();
          cVar11 = (**(code **)(*local_40 + 0x50))();
          if (cVar11 == '\0') {
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              (**(code **)(*local_40 + 0x10))();
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            iVar12 = (**(code **)(*this_ptr + 0xa10))();
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              (**(code **)(*local_40 + 0x10))();
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if (iVar12 == 1) {
              (**(code **)(*this_ptr + 0xa18))();
            }
          }
        }
      }
      else {
        if (g_027ebc60 != 0) {
          FUN_00d50b00();
        }
        cVar11 = (**(code **)(*plVar10 + 0x50))();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar2 = g_027e7bf0;
        if (cVar11 == '\0') {
          if (g_027e7bf0 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar2;
          local_c0 = '\x01';
          cVar11 = (**(code **)(*plVar10 + 0x50))();
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if (cVar11 != '\0') {
            (**(code **)(*this_ptr + 0xa28))();
          }
        }
        else {
          if (0 < (int)this_ptr[0x40]) {
            *(int *)(this_ptr + 0x40) = (int)this_ptr[0x40] + -1;
            goto LAB_01bed479;
          }
          uVar17 = FUN_00d3ed20();
          if (local_38[0] == '\0') {
            if (local_40 != (int64_t *)0x0) {
              uVar17 = FUN_00d50b00();
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar17 = FUN_00d50b20();
              }
              goto LAB_01bed51a;
            }
LAB_01bed59d:
            bVar8 = true;
          }
          else {
            if (local_40 == (int64_t *)0x0) goto LAB_01bed59d;
LAB_01bed51a:
            lVar2 = g_027e1420;
            if (g_027e1420 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_138 = lVar2;
            local_130 = '\x01';
            pplVar14 = &local_40;
            FUN_000175c0(uVar17,&local_138);
            plVar1 = local_40;
            uVar17 = FUN_00053ac0();
            if (plVar1 == (int64_t *)0x0) {
LAB_01bed57f:
              pplVar14 = (int64_t **)&g_02802688;
            }
            else {
              (**(code **)(*plVar1 + 0x360))();
              cVar11 = FUN_00e85ea0();
              uVar17 = extraout_XMM0_Qa;
              if (cVar11 == '\0') goto LAB_01bed57f;
            }
            plVar1 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar1 != (int64_t *)0x0) {
                uVar17 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              uVar17 = FUN_00d50b20();
            }
            lVar2 = g_027e7c60;
            if (g_027e7c60 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_128 = lVar2;
            local_120 = '\x01';
            pplVar14 = &local_40;
            FUN_000175c0(uVar17,&local_128);
            plVar3 = local_40;
            uVar17 = FUN_00053ac0();
            if (plVar3 == (int64_t *)0x0) {
LAB_01bed645:
              pplVar14 = (int64_t **)&g_02802688;
            }
            else {
              (**(code **)(*plVar3 + 0x360))();
              cVar11 = FUN_00e85ea0();
              uVar17 = extraout_XMM0_Qa_00;
              if (cVar11 == '\0') goto LAB_01bed645;
            }
            plVar3 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar3 != (int64_t *)0x0) {
                uVar17 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              uVar17 = FUN_00d50b20();
            }
            lVar2 = g_027e1428;
            if (g_027e1428 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_118 = lVar2;
            local_110 = '\x01';
            pplVar14 = &local_40;
            FUN_000175c0(uVar17,&local_118);
            plVar4 = local_40;
            uVar17 = FUN_00053ac0();
            if (plVar4 == (int64_t *)0x0) {
LAB_01bed704:
              pplVar14 = (int64_t **)&g_02802688;
            }
            else {
              (**(code **)(*plVar4 + 0x360))();
              cVar11 = FUN_00e85ea0();
              uVar17 = extraout_XMM0_Qa_01;
              if (cVar11 == '\0') goto LAB_01bed704;
            }
            plVar4 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar4 != (int64_t *)0x0) {
                uVar17 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              uVar17 = FUN_00d50b20();
            }
            lVar2 = g_027e7c70;
            if (g_027e7c70 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_108 = lVar2;
            local_100 = '\x01';
            pplVar14 = &local_40;
            FUN_000175c0(uVar17,&local_108);
            plVar5 = local_40;
            uVar17 = FUN_00053ac0();
            if (plVar5 == (int64_t *)0x0) {
LAB_01bed7c3:
              pplVar14 = (int64_t **)&g_02802688;
            }
            else {
              (**(code **)(*plVar5 + 0x360))();
              cVar11 = FUN_00e85ea0();
              uVar17 = extraout_XMM0_Qa_02;
              if (cVar11 == '\0') goto LAB_01bed7c3;
            }
            plVar5 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar5 != (int64_t *)0x0) {
                uVar17 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar17 = FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              uVar17 = FUN_00d50b20();
            }
            lVar2 = g_027e1430;
            if (g_027e1430 != 0) {
              uVar17 = FUN_00d50b00();
            }
            local_f8 = lVar2;
            local_f0 = '\x01';
            pplVar14 = &local_40;
            FUN_000175c0(uVar17,&local_f8);
            plVar6 = local_40;
            FUN_00053ac0();
            if (plVar6 == (int64_t *)0x0) {
LAB_01bed87d:
              pplVar14 = (int64_t **)&g_02802688;
            }
            else {
              (**(code **)(*plVar6 + 0x360))();
              cVar11 = FUN_00e85ea0();
              if (cVar11 == '\0') goto LAB_01bed87d;
            }
            plVar6 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar6 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((((plVar1 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) &&
                (plVar4 != (int64_t *)0x0)) && (plVar5 != (int64_t *)0x0)) {
              dVar18 = (double)FUN_00d45bc0();
              dVar19 = (double)FUN_00d45bc0();
              local_a8 = (double)FUN_00d45bc0();
              dVar20 = (double)FUN_00d45bc0();
              dVar21 = (double)(**(code **)(*(int64_t *)this_ptr[0x34] + 0x368))();
              local_a8 = dVar19 - (dVar19 - local_a8) / dVar18;
              if (dVar21 < local_a8) {
                local_a0 = (double)(**(code **)(*(int64_t *)this_ptr[0x34] + 0x368))();
                dVar21 = (double)(**(code **)(*(int64_t *)this_ptr[0x34] + 0x378))();
                dVar18 = (dVar20 - dVar19) / dVar18 + dVar19;
                dVar21 = local_a0 + dVar21;
                if (dVar18 < dVar21) {
                  uVar15 = FUN_00d459e0();
                  fVar24 = SUB84(dVar21,0);
                  local_a0 = (double)CONCAT44(local_a0._4_4_,uVar15);
                  lVar2 = this_ptr[0x36];
                  if (lVar2 != 0) {
                    FUN_00d50b00();
                  }
                  uVar17 = FUN_01e436c0();
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                  dVar20 = (double)(**(code **)(*(int64_t *)this_ptr[0x34] + 0x3c0))();
                  dVar18 = (double)fVar24 / (dVar18 - local_a8);
                  if ((dVar20 < dVar18) &&
                     (dVar20 = (double)(**(code **)(*(int64_t *)this_ptr[0x34] + 0x3b0))(),
                     dVar18 < dVar20)) {
                    (**(code **)(*(int64_t *)this_ptr[0x34] + 0x3a0))(dVar18);
                    fVar16 = (float)(**(code **)(*(int64_t *)this_ptr[0x34] + 0x390))(dVar19);
                    plVar7 = (int64_t *)this_ptr[0x36];
                    if (plVar7 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                    auVar22 = roundss(ZEXT416((uint)(fVar16 - local_a0._0_4_)),
                                      ZEXT416((uint)(fVar16 - local_a0._0_4_)),9);
                    auVar23._8_8_ = extraout_XMM0_Qb;
                    auVar23._0_8_ = uVar17;
                    auVar23 = blendps(auVar22,auVar23,0xe);
                    (**(code **)(*plVar7 + 0x518))(auVar23._0_8_,fVar24);
                    FUN_00d50b20();
                    FUN_01bee3f0(dVar19);
                  }
                }
              }
            }
            if (plVar6 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (plVar4 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (plVar3 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            bVar8 = false;
          }
          FUN_01bece10();
          FUN_00d403d0();
          local_e8 = g_027e7c80;
          if (g_027e7c80 != 0) {
            FUN_00d50b00();
          }
          local_e0 = '\x01';
          FUN_00d50b00();
          local_d8 = 0;
          local_d0 = '\0';
          FUN_00d40470(&local_d8,&stack0xffffffffffffff68,1,3);
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar8) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      plVar1 = (int64_t *)this_ptr[0x37];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d3ecf0();
      if (plVar1 == local_40) {
        if (local_38[0] == '\0') {
          if (plVar1 != (int64_t *)0x0) goto LAB_01bed437;
        }
        else if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
LAB_01bed437:
          FUN_00d50b20();
        }
      }
      else {
        iVar12 = (**(code **)(*this_ptr + 0xa10))();
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (iVar12 == 1) {
          lVar2 = this_ptr[0x37];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01a3c5a0();
          (**(code **)(*local_40 + 0x68))();
          FUN_01bee3f0();
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            (**(code **)(*local_40 + 0x10))();
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0xa30))();
        }
      }
    }
  }
  else {
    uVar17 = FUN_00d3ecf0();
    if (local_40 == (int64_t *)this_ptr[0x3e]) {
      lVar2 = this_ptr[0x35];
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar17 = FUN_00d50b20();
      }
      if (lVar2 != 0) {
        (**(code **)(*(int64_t *)this_ptr[0x35] + 0xa20))(uVar17,0);
      }
    }
    else if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_b8 = *arg1;
  local_b0 = '\0';
  FUN_00d530a0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
LAB_01bed479:
  if ((local_48[0] != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a10ee0
// ============================================================
// Function: FUN_01a10ee0
// Address: 01a10ee0
// Size: 3479 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01a10ee0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  uint8_t auVar4 [16];
  int64_t *plVar5;
  uint8_t auVar6 [16];
  bool bVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  char cVar10;
  int64_t lVar11;
  void *pvVar12;
  int64_t lVar13;
  void* pVar14;
  uint uVar15;
  uint64_t uVar16;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint32_t uVar23;
  double dVar24;
  double dVar25;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar26;
  float fVar27;
  uint32_t uVar28;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar29 [16];
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint8_t local_128 [8];
  uint32_t uStack_120;
  uint32_t uStack_11c;
  float local_10c;
  uint32_t local_108;
  uint32_t uStack_104;
  char local_100;
  double local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  uint32_t local_a8;
  int64_t *local_80;
  char local_78;
  int local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar9 = local_58;
  fVar22 = (float)((uint64_t)param_2 >> 0x20);
  fVar19 = (float)param_1;
  fVar21 = (float)param_2;
  fVar26 = fVar22;
  FUN_01a18460();
  local_c0 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  fVar20 = (float)FUN_01e3f820();
  local_128._4_4_ = fVar26;
  local_128._0_4_ = fVar21;
  uStack_120 = in_XMM1_Dc;
  uStack_11c = in_XMM1_Dd;
  uVar18 = (uint)((fVar19 + (float)param_2 + g_02390d00) - (fVar19 + fVar19));
  local_10c = (float)(int)uVar18;
  *(float *)(this_ptr + 0x46) = local_10c;
  *(void*)((int64_t)this_ptr + 0x234) = 0;
  FUN_01d386e0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d38cd0(g_02421228);
  fVar26 = (fVar22 + g_02390d00) * g_0239011c + (float)((uint64_t)param_1 >> 0x20);
  fVar21 = fVar26;
  FUN_01d39400(fVar19);
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_f0 = local_58;
  ___bzero();
  plVar8 = local_c0;
  dVar24 = (double)(**(code **)(*local_c0 + 0x930))(0);
  FUN_01e3f820();
  local_f8 = (double)(**(code **)(*plVar8 + 0x930))(fVar21);
  FUN_01a18460();
  (**(code **)(*local_80 + 0x988))();
  local_e8 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e8 == (int64_t *)0x0) {
LAB_01a117ec:
    if (0 < (int)uVar18) {
      fVar21 = g_023b1608 + fVar26;
      uVar16 = 0;
      do {
        fVar22 = *(float *)(local_f0[2] + uVar16 * 4);
        fVar20 = (float)(int)uVar16 + fVar19;
        if ((fVar22 != g_0239424c) || (NAN(fVar22) || NAN(g_0239424c))) {
          if (fVar20 < *(float *)(this_ptr + 0x46)) {
            *(float *)(this_ptr + 0x46) = fVar20;
          }
          if (*(float *)((int64_t)this_ptr + 0x234) <= fVar20 &&
              fVar20 != *(float *)((int64_t)this_ptr + 0x234)) {
            *(float *)((int64_t)this_ptr + 0x234) = fVar20;
          }
        }
        fVar22 = SQRT(fVar22);
        fVar27 = g_02390124;
        if (fVar22 <= g_02390124) {
          fVar27 = fVar22;
        }
        FUN_01d38ba0(fVar20,fVar26 - (float)(~-(uint)NAN(fVar22) & (uint)fVar27 |
                                            -(uint)NAN(fVar22) & (uint)g_02390124) * fVar21);
        uVar16 = uVar16 + 1;
      } while (uVar18 != uVar16);
    }
    FUN_01d38ea0();
    lVar11 = local_58[3];
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    lVar13 = (int64_t)((int)lVar11 / 0x1c);
    lVar11 = lVar13 + 1;
    lVar13 = lVar13 * 0x1c + -0x14;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      FUN_01d38ea0();
      lVar1 = local_58[2];
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      FUN_01d38ba0(*(void*)(lVar1 + -4 + lVar13),
                   (fVar26 - *(float *)(lVar1 + lVar13)) + fVar26);
      lVar13 = lVar13 + -0x1c;
    }
    FUN_01d38b10();
    FUN_01d48b40(g_02390124);
    uVar23 = (**(code **)(*this_ptr + 0x640))();
    local_168 = g_027e1c10;
    if (g_027e1c10 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*local_80 + 0x3b0))(uVar23,&local_168);
    local_d8 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_d8 = '\x01';
    local_e0 = local_58;
    FUN_01d488d0();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_158 = plVar9;
    local_150 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar23 = (**(code **)(*this_ptr + 0x640))();
    local_148 = g_027e1c18;
    if (g_027e1c18 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_140 = '\x01';
    (**(code **)(*local_80 + 0x3b0))(uVar23,&local_148);
    local_c8 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_c8 = '\x01';
    local_d0 = local_58;
    FUN_01d488d0();
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_138 = plVar9;
    local_130 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_f0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_c0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    return;
  }
  fVar21 = fVar20 + (float)local_128._0_4_ + g_02390d00;
  local_f8 = (local_f8 - dVar24) / (double)(int)uVar18;
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_40 = -1;
LAB_01a111d3:
  while( true ) {
    plVar8 = local_80;
    lVar11 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)((int64_t)local_e8 + 0xc) <= local_40) break;
    lVar13 = local_e8[2];
    local_58 = *(int64_t **)(lVar13 + 8 + lVar11 * 8);
    pvVar12 = _pthread_getspecific((void*)lVar13);
    pVar14 = (void*)lVar13;
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012eb770();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_80 == (int64_t *)0x0) {
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
    }
    else {
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar24 = (double)FUN_012f7cb0();
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar2 = (double)FUN_012f9490();
      pvVar12 = _pthread_getspecific(pVar14);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e9900(SUB84(dVar24,0),SUB84(dVar2 - dVar24,0));
      if (local_80 == (int64_t *)0x0) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
        if (local_78 == '\0') {
          FUN_00d50b00();
        }
      }
      if (local_80 != (int64_t *)0x0) {
        local_78 = '\0';
        local_80 = (int64_t *)0x0;
        local_68 = -1;
LAB_01a1147b:
        do {
          lVar11 = (int64_t)local_68;
          local_68 = local_68 + 1;
          if (*(int *)((int64_t)plVar8 + 0xc) <= local_68) goto LAB_01a11790;
          lVar13 = plVar8[2];
          local_80 = *(int64_t **)(lVar13 + 8 + lVar11 * 8);
          pvVar12 = _pthread_getspecific((void*)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar10 = FUN_0126cd60();
          if (cVar10 == '\0') {
            pvVar12 = _pthread_getspecific((void*)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126bcd0();
            plVar5 = (int64_t *)CONCAT44(uStack_104,local_108);
            if (local_100 == '\0') {
              if (plVar5 == (int64_t *)0x0) goto LAB_01a1147b;
              FUN_00d50b00();
              if ((local_100 != '\0') && (CONCAT44(uStack_104,local_108) != 0)) {
                FUN_00d50b20();
              }
            }
            else if (plVar5 == (int64_t *)0x0) goto LAB_01a1147b;
            pvVar12 = _pthread_getspecific((void*)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar25 = (double)FUN_0125a280();
            uVar23 = SUB84(dVar25,0);
            pvVar12 = _pthread_getspecific((void*)lVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_128 = (uint8_t  [8])FUN_01264170();
            local_108 = 0xffffffff;
            if (plVar8 == (int64_t *)0x0) {
              uStack_120 = extraout_XMM0_Dc_00;
              uStack_11c = extraout_XMM0_Dd_00;
            }
            else {
              auVar6._8_4_ = extraout_XMM0_Dc;
              auVar6._0_8_ = dVar25;
              auVar6._12_4_ = extraout_XMM0_Dd;
              dVar3 = dVar24;
              if (dVar24 <= dVar25) {
                dVar3 = dVar25;
              }
              uVar23 = SUB84(dVar3,0);
              uVar16 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00) & auVar6._8_8_;
              auVar29._0_8_ = ~-(uint64_t)(dVar25 < dVar24) & (uint64_t)local_128;
              auVar29._8_8_ = ~auVar6._8_8_ & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
              auVar4._8_4_ = (int)uVar16;
              auVar4._0_8_ = (uint64_t)((double)local_128 - (dVar24 - dVar25)) &
                             -(uint64_t)(dVar25 < dVar24);
              auVar4._12_4_ = (int)(uVar16 >> 0x20);
              dVar25 = SUB168(auVar29 | auVar4,0);
              if (dVar2 < dVar25 + dVar3) {
                dVar25 = dVar25 - ((dVar25 + dVar3) - dVar2);
              }
              register0x00001288 = SUB168(auVar29 | auVar4,8);
              local_128 = (uint8_t  [8])dVar25;
            }
            fVar22 = (float)(**(code **)(*local_c0 + 0x938))(uVar23);
            uVar23 = local_128._0_4_;
            uVar28 = local_128._4_4_;
            if (g_02390448 < local_128) {
              uVar15 = (uint)((fVar22 * local_10c) / fVar21);
              dVar25 = 0.0;
              do {
                local_a8 = SUB84(dVar25,0);
                if ((-1 < (int)uVar15) && ((int)uVar15 < (int)uVar18)) {
                  pvVar12 = _pthread_getspecific((void*)lVar13);
                  plVar17 = plVar5;
                  if ((pvVar12 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    plVar17 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
                  }
                  dVar3 = (double)(**(code **)(*plVar17 + 0x3d8))(local_a8,0);
                  lVar13 = local_f0[2];
                  *(float *)(lVar13 + (uint64_t)uVar15 * 4) =
                       (float)dVar3 + *(float *)(lVar13 + (uint64_t)uVar15 * 4);
                  uVar23 = local_128._0_4_;
                  uVar28 = local_128._4_4_;
                }
                dVar25 = dVar25 + local_f8;
                uVar15 = uVar15 + 1;
              } while (dVar25 <= (double)CONCAT44(uVar28,uVar23) &&
                       (double)CONCAT44(uVar28,uVar23) != dVar25);
            }
            FUN_00d50b20();
          }
        } while( true );
      }
    }
  }
  FUN_000be170();
  FUN_00d50b20();
  goto LAB_01a117ec;
LAB_01a11790:
  FUN_001159b0();
  if (bVar7) {
    FUN_00d50b20();
  }
  goto LAB_01a111d3;
}



// ============================================================
// 01beb250
// ============================================================
// Function: FUN_01beb250
// Address: 01beb250
// Size: 1101 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01beb250(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar7;
  int64_t *local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  void*local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  void*local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if ((*arg1 != 0) && (0 < *(int *)(*arg1 + 0xc))) {
    FUN_00d21370();
    if ((void*)*arg1 != (void*)0x0) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = (void*)*arg1;
LAB_01beb325:
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (local_40 < *(int *)((int64_t)local_48 + 0xc)) {
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar5 * 8);
        if (*(int64_t *)(this_ptr + 0x160) != 0) {
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = *(int64_t *)(this_ptr + 0x160);
          while( true ) {
            lVar5 = (int64_t)(int)local_78;
            iVar6 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar6);
            if (*(int *)(local_80 + 0xc) <= iVar6) break;
            local_90 = *(int64_t **)(*(int64_t *)(local_80 + 0x10) + 8 + lVar5 * 8);
            (**(code **)(*local_90 + 0x378))();
            plVar3 = local_58;
            plVar2 = local_68;
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 == plVar3) {
              local_68 = local_90;
              local_60 = '\0';
              FUN_00d21140();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_01bc1260();
              (**(code **)(*local_68 + 0x5c0))();
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_002e0650();
              bVar7 = false;
              if (iStack_3c == 0) goto LAB_01beb325;
              goto LAB_01beb2f7;
            }
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar6 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar6 = 0;
              }
              local_78 = CONCAT44(iVar6,(int)local_78);
            }
          }
          FUN_002e0650();
        }
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = local_58;
        FUN_01be75f0(&local_b0,&local_c0);
        plVar2 = local_68;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_90 = plVar2;
        local_88 = '\0';
        FUN_00d21140();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        bVar7 = iStack_3c == 0;
        if (!bVar7) {
LAB_01beb2f7:
          if (bVar7 || iStack_3c < 0) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
        goto LAB_01beb325;
      }
      FUN_00083b20();
    }
  }
  local_98 = '\0';
  local_a0 = puVar4;
  FUN_01d2a8f0();
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = puVar4;
    if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
      lVar5 = 0;
      do {
        local_90 = *(int64_t **)(puVar4[2] + lVar5 * 8);
        local_88 = '\0';
        local_58 = local_90;
        FUN_00d23f50();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_40 = (int)lVar5;
      } while (local_40 < *(int *)((int64_t)puVar4 + 0xc));
    }
    FUN_002e0650();
  }
  puVar1 = *(void**)(this_ptr + 0x160);
  if (puVar1 != (void*)0x0) {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    iStack_3c = 0;
    local_38 = 0;
    local_48 = puVar1;
    for (lVar5 = 0; local_40 = (int)lVar5, local_40 < *(int *)((int64_t)puVar1 + 0xc);
        lVar5 = lVar5 + 1) {
      local_58 = *(int64_t **)(puVar1[2] + lVar5 * 8);
      FUN_00d50130();
    }
    FUN_002e0650();
  }
  local_50 = '\0';
  local_58 = puVar4;
  FUN_00d243f0();
  if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01bec670
// ============================================================
// Function: FUN_01bec670
// Address: 01bec670
// Size: 1168 bytes
// Class: MUHorizontalOverviewScroller
// String references:
//   "MUHorizontalOverviewScroller"

void FUN_01bec670(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  lVar5 = *arg1;
  if (*(int64_t *)(this_ptr + 0x1a0) == lVar5) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x1a0) == 0) {
    lVar7 = 0;
    lVar2 = lVar7;
    if (lVar5 != 0) goto LAB_01bec78f;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b8 = g_027ebc60;
    if (g_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_60 = 0;
    lVar5 = *(int64_t *)(this_ptr + 0x1a0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar5;
    FUN_00d41040(&local_68,&local_b8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = *arg1;
    lVar7 = *(int64_t *)(this_ptr + 0x1a0);
    lVar2 = lVar7;
    if (lVar7 != lVar5) {
LAB_01bec78f:
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0x1a0) = lVar5;
      lVar2 = lVar5;
      if (lVar7 != 0) {
        FUN_00d50b20();
        lVar2 = *(int64_t *)(this_ptr + 0x1a0);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = g_027ebc60;
    if (g_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_40 = 0;
    lVar5 = *(int64_t *)(this_ptr + 0x1a0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar5;
    FUN_00d41430(&local_48,&local_a8);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bece10();
  }
  if (*(int64_t *)(this_ptr + 0x1b0) == 0) goto LAB_01bec9c1;
  FUN_00d50b00();
  FUN_00d50b20();
  FUN_01beab60();
  pplVar6 = &local_38;
  FUN_01d97e80();
  plVar1 = local_38;
  if ((g_02735a90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027359e0 = FUN_00835bf0();
    g_027359c8 = "MUHorizontalOverviewScroller";
    g_027359d0 = 0x248;
    g_027359d8 = FUN_00835b60;
    g_027359e8 = 0;
    ram_00000000027359f0 = 0;
    g_027359f8 = 0;
    g_02735a70 = 0;
    ram_0000000002735a78 = 0;
    g_02735a80 = 0;
    g_02735a82 = 1;
    g_02735a00 = 0;
    ram_0000000002735a08 = 0;
    g_02735a10 = 0;
    ram_0000000002735a18 = 0;
    g_02735a20 = 0;
    ram_0000000002735a28 = 0;
    g_02735a30 = 0;
    ram_0000000002735a38 = 0;
    g_02735a40 = 0;
    ram_0000000002735a48 = 0;
    g_02735a50 = 0;
    ram_0000000002735a58 = 0;
    g_02735a60 = 0;
    ram_0000000002735a68 = 0;
    g_02735a8b = 0;
    g_02735a83 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01bec918:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bec918;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_98 = *arg1;
    local_90 = '\0';
    FUN_01a12210();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01bec9c1:
  if (*(int64_t *)(this_ptr + 0x1b8) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = *(int64_t **)(this_ptr + 0x1b8);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_88 = *arg1;
    local_80 = '\0';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01beeeb0
// ============================================================
// Function: FUN_01beeeb0
// Address: 01beeeb0
// Size: 942 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01beeeb0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t in_R9;
  uint32_t uVar7;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_40;
  char local_38;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    FUN_01d3b590();
    cVar4 = FUN_01e420b0();
    if ((cVar4 == '\0') && ((int)this_ptr[0x3d] != 0)) {
      FUN_01e42250();
    }
    iVar5 = FUN_01d3b620();
    if (iVar5 == 2) {
      FUN_01bef350(0,0,1,in_R9,0,0);
    }
    else {
      uVar7 = FUN_01d3abf0();
      uVar9 = 0;
      uVar7 = FUN_00d05530(uVar7,0,g_023908d8);
LAB_01beefc0:
      do {
        do {
          do {
            (**(code **)(*this_ptr + 0x658))();
            lVar1 = *arg1;
            if (lVar1 == local_40) {
              if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_01bef082;
              lVar6 = lVar1;
              if (local_38 == '\0') {
                FUN_00d50b00();
                goto LAB_01bef07d;
              }
LAB_01bef025:
              *(void*)(arg1 + 1) = 1;
              if (lVar6 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            else {
              lVar3 = arg1[1];
              if (local_38 != '\0') {
                *arg1 = local_40;
                lVar6 = local_40;
                if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                  FUN_00d50b20();
                  lVar6 = *arg1;
                }
                goto LAB_01bef025;
              }
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              *arg1 = local_40;
              if (((char)lVar3 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
LAB_01bef07d:
              *(void*)(arg1 + 1) = 1;
LAB_01bef082:
              lVar1 = *arg1;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (lVar1 == 0) {
                return;
              }
              iVar5 = FUN_01d3a5a0();
            }
            if (iVar5 != 5) {
              FUN_01bef350(0,0,0);
              return;
            }
            iVar5 = FUN_01d3a5a0();
          } while (iVar5 != 5);
          uVar8 = FUN_01d3abf0();
          cVar4 = FUN_00d05410(uVar8,uVar7,uVar9);
        } while (cVar4 != '\0');
        uVar8 = FUN_01e466c0(uVar8);
        (**(code **)(*this_ptr + 0x658))();
        lVar1 = *arg1;
        if (lVar1 == local_40) {
          if (((char)arg1[1] == '\0') && (local_40 != 0)) {
            if (local_38 == '\0') {
              FUN_00d50b00();
              goto LAB_01bef1bc;
            }
            goto LAB_01bef154;
          }
LAB_01bef15d:
          lVar1 = *arg1;
        }
        else {
          lVar3 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = local_40;
            if (((char)lVar3 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
LAB_01bef154:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
            goto LAB_01bef15d;
          }
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_40;
          if (((char)lVar3 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
LAB_01bef1bc:
          *(void*)(arg1 + 1) = 1;
          lVar1 = *arg1;
        }
        if (lVar1 == 0) {
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_01beefc0;
        }
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      } while (iVar5 != 5);
      plVar2 = (int64_t *)this_ptr[0x36];
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
        FUN_01e48f80(uVar8);
        (**(code **)(*plVar2 + 0x928))();
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01e459c0();
  }
  return;
}



// ============================================================
// 01bef350
// ============================================================
// Function: FUN_01bef350
// Address: 01bef350
// Size: 1326 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bef350(char param_1,char param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  void*puVar8;
  int iVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  char local_50;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*g_02572370)();
  lVar1 = *arg1;
  if (lVar1 == 0) {
    if (this_ptr[0x2d] != 0) {
      this_ptr[0x2d] = 0;
      FUN_00d50b20();
    }
  }
  else if (param_2 == '\0') {
    if (param_1 == '\0') {
      local_50 = '\0';
      FUN_00d21140();
      lVar3 = *arg1;
      lVar2 = this_ptr[0x2d];
      local_58 = lVar1;
      if (lVar2 != lVar3) {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        this_ptr[0x2d] = lVar3;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01beea30();
      if ((local_70 == '\0') && (local_78 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d214d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      local_58 = *arg1;
      local_50 = '\0';
      cVar5 = FUN_00d23d70();
      if (cVar5 == '\0') {
        local_58 = *arg1;
        local_50 = '\0';
        FUN_00d21140();
        lVar1 = *arg1;
        lVar3 = this_ptr[0x2d];
        if (lVar3 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          this_ptr[0x2d] = lVar1;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else if (param_3 == '\0') {
        local_58 = *arg1;
        local_50 = '\0';
        FUN_00d23f50();
      }
    }
  }
  else {
    if (this_ptr[0x2d] == 0) {
      uVar6 = 0;
    }
    else {
      FUN_01d2b630();
      lVar1 = this_ptr[0x2d];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar6 = FUN_00d237a0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((int)uVar6 < 0) goto LAB_01bef87a;
    }
    FUN_01d2b630();
    uVar7 = FUN_00d237a0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((int)uVar7 < 0) goto LAB_01bef87a;
    uVar4 = uVar6;
    if ((int)uVar7 < (int)uVar6) {
      uVar4 = uVar7;
    }
    uVar10 = (uint64_t)uVar4;
    if ((int)uVar7 < (int)uVar6) {
      uVar7 = uVar6;
    }
    do {
      FUN_01d2b630();
      local_58 = *(int64_t *)(*(int64_t *)(local_78 + 0x10) + uVar10 * 8);
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_50 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = uVar10 + 1;
    } while (uVar7 + 1 != (int)uVar10);
  }
  FUN_01d2b630();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_01bef788;
    }
  }
  else if (local_58 != 0) {
LAB_01bef788:
    if (0 < *(int *)(local_58 + 0xc)) {
      iVar9 = 0;
      do {
        cVar5 = FUN_00d23d70();
        if (cVar5 == '\0') {
          FUN_01bc08b0();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(local_58 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9d0))();
  (**(code **)(*this_ptr + 0x400))();
  if (puVar8 == (void*)0x0) {
    return;
  }
LAB_01bef87a:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01bf1150
// ============================================================
// Function: FUN_01bf1150
// Address: 01bf1150
// Size: 540 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bf1150(double param_1,double param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  char cVar5;
  int64_t this_ptr;
  double dVar6;
  double dVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar9 [16];
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  double dVar13;
  double dVar14;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  uint64_t extraout_XMM0_Qb_01;
  
  if (*(int64_t *)(this_ptr + 0x1b0) != 0) {
    local_68._0_8_ = param_2;
    FUN_00d50b00();
    FUN_00d50b20();
    if ((*(int64_t *)(this_ptr + 0x1a0) != 0) && (0.0 < param_2)) {
      lVar1 = *(int64_t *)(this_ptr + 0x1b0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_78._0_8_ = FUN_01e436c0();
      local_78._8_8_ = extraout_XMM0_Qb;
      auVar11 = local_78;
      local_68._8_8_ = in_XMM1_Qb;
      auVar4 = local_68;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      dVar6 = (double)(**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x368))();
      dVar7 = (double)(**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x378))();
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_1;
      auVar9 = roundsd(ZEXT816(0),auVar9,9);
      dVar14 = (double)(-(uint64_t)(param_1 < dVar6) & auVar9._0_8_ |
                       ~-(uint64_t)(param_1 < dVar6) & (uint64_t)dVar6);
      dVar6 = dVar14 + dVar7;
      dVar13 = param_1 + param_2;
      if (dVar6 < dVar13) {
        dVar7 = (double)(**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x378))();
        auVar12._0_8_ = (dVar13 - dVar6) + dVar7;
        auVar12._8_8_ = 0;
        auVar9 = roundsd(auVar12,auVar12,10);
        dVar7 = auVar9._0_8_;
      }
      cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x418))
                        (dVar14,dVar7,
                         SUB84((double)(((float)local_78._0_4_ + (float)local_68._0_4_ +
                                        g_02390d00) - (float)local_78._0_4_) / param_2,0));
      if (cVar5 != '\0') {
        *(void*)(this_ptr + 0x200) = 1;
        (**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x410))();
        FUN_01bece10();
      }
      uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x390))(param_1);
      auVar10._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x1a0) + 0x390))(dVar13);
      auVar10._8_8_ = extraout_XMM0_Qb_01;
      auVar3._8_8_ = extraout_XMM0_Qb_00;
      auVar3._0_8_ = uVar8;
      auVar9 = blendps(auVar11,auVar3,1);
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)auVar10._0_8_ - (float)uVar8;
      blendps(auVar4,auVar11,1);
      plVar2 = *(int64_t **)(this_ptr + 0x1b0);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_78._0_8_ = auVar9._0_8_;
      (**(code **)(*plVar2 + 0x518))(local_78._0_8_);
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01bf18f0
// ============================================================
// Function: FUN_01bf18f0
// Address: 01bf18f0
// Size: 1263 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bf18f0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int local_88;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar1 = local_a0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      FUN_00d50b00();
      goto LAB_01bf1974;
    }
  }
  else if (local_a0 != 0) {
LAB_01bf1974:
    local_98 = '\0';
    local_a0 = 0;
    local_88 = -1;
LAB_01bf19c4:
    while( true ) {
      lVar5 = local_60;
      lVar4 = (int64_t)local_88;
      local_88 = local_88 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_88) break;
      local_a0 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      FUN_01bc08b0();
      FUN_01bc09c0();
      if (local_58 == '\0') goto LAB_01bf1a50;
      if (local_60 != 0) goto LAB_01bf1a80;
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9d0))();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 == 0) goto LAB_01bf1e0a;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_01bf1e0a;
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar6 = 0;
    do {
      lVar1 = local_60;
      FUN_01bc09c0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
          goto LAB_01bf1ce4;
        }
      }
      else if (local_60 != 0) {
LAB_01bf1ce4:
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        while( true ) {
          lVar5 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_48) break;
          local_60 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
          cVar2 = FUN_00d23d70();
          if (cVar2 != '\0') {
            FUN_01bc1970(0,0,0);
          }
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_a0 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_01bf1e0a:
  (**(code **)(*this_ptr + 0xa20))();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_01bf1a50:
  if (local_60 != 0) {
    FUN_00d50b00();
LAB_01bf1a80:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar4 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_48) break;
      local_60 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + 8 + lVar4 * 8);
      cVar2 = FUN_00d23d70();
      if (cVar2 != '\0') {
        FUN_00d235a0();
      }
    }
    FUN_000840d0();
    FUN_00d50b20();
  }
  goto LAB_01bf19c4;
}



// ============================================================
// 01bf2670
// ============================================================
// Function: FUN_01bf2670
// Address: 01bf2670
// Size: 1038 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bf2670(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  void*local_b0;
  char local_a8;
  int local_98;
  int64_t local_88;
  char local_80;
  int local_70;
  void*local_40;
  
  lVar1 = *(int64_t *)(arg1 + 0x160);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_002dff80();
  if ((local_a8 == '\0') && (local_b0 != (void*)0x0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_b0 != (void*)0x0) {
    FUN_00d50b00();
  }
  pcVar4 = g_02572370;
  bVar3 = true;
  local_40 = local_b0;
  do {
    if (local_40 == (void*)0x0) {
      bVar2 = false;
      puVar6 = (void*)0x0;
LAB_01bf2a06:
      if (bVar2) {
        if ((bVar3) || (local_40 == (void*)0x0)) {
LAB_01bf2a37:
          if (puVar6 == (void*)0x0) goto LAB_01bf273b;
        }
        else {
          bVar3 = true;
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
    }
    else {
      local_98 = -1;
      bVar2 = false;
      puVar6 = (void*)0x0;
LAB_01bf2808:
      while (lVar1 = local_88, local_98 = local_98 + 1,
            local_98 < *(int *)((int64_t)local_40 + 0xc)) {
        FUN_01bbf570();
        if (local_80 == '\0') goto LAB_01bf28a0;
        if (local_88 != 0) goto LAB_01bf28c8;
      }
      FUN_002e0650();
      if (local_40 == puVar6) goto LAB_01bf2a06;
      if ((bVar2) && (puVar6 != (void*)0x0)) {
        FUN_00d50b00();
      }
      if ((bVar3) && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = true;
      local_40 = puVar6;
      if (bVar2) goto LAB_01bf2a37;
      bVar3 = false;
    }
LAB_01bf273b:
    if (local_40 == (void*)0x0) {
      *this_ptr = local_b0;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  } while( true );
LAB_01bf28a0:
  if (local_88 != 0) {
    FUN_00d50b00();
LAB_01bf28c8:
    local_80 = '\0';
    local_88 = 0;
    local_70 = -1;
    while( true ) {
      lVar5 = (int64_t)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      local_88 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar5 * 8);
      if (puVar6 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*pcVar4)();
        bVar2 = true;
      }
      FUN_00d21140();
      FUN_00d21140();
    }
    FUN_002e0650();
    FUN_00d50b20();
  }
  goto LAB_01bf2808;
}



// ============================================================
// 01bf35c0
// ============================================================
// Function: FUN_01bf35c0
// Address: 01bf35c0
// Size: 527 bytes
// Class: MUHorizontalOverviewScroller

uint32_t FUN_01bf35c0(void)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  uint32_t uVar4;
  char *pcVar5;
  int64_t *arg1;
  int64_t *local_a8;
  char local_a0 [8];
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  char local_38 [8];
  
  FUN_01cae990();
  pcVar5 = local_38;
  if (local_a0[0] != '\0') {
    pcVar5 = local_a0;
  }
  local_38[0] = local_a0[0];
  *pcVar5 = '\0';
  if ((local_a0[0] != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027f2a20;
  if (g_027f2a20 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  local_90 = '\x01';
  cVar2 = (**(code **)(*local_a8 + 0x50))();
  lVar1 = g_027e7ca0;
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    if (g_027e7ca0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    cVar2 = (**(code **)(*local_a8 + 0x50))();
    lVar1 = g_026de8c8;
    cVar3 = '\x01';
    if (cVar2 == '\0') {
      if (g_026de8c8 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar1;
      local_70 = '\x01';
      cVar2 = (**(code **)(*local_a8 + 0x50))();
      lVar1 = g_02725a10;
      cVar3 = '\x01';
      if (cVar2 == '\0') {
        if (g_02725a10 != 0) {
          FUN_00d50b00();
        }
        local_68 = lVar1;
        local_60 = '\x01';
        cVar3 = (**(code **)(*local_a8 + 0x50))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_48 = *arg1;
    local_40 = '\0';
    uVar4 = FUN_01df5490();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = *arg1;
    local_50 = '\0';
    uVar4 = FUN_01d827c0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  return uVar4;
}



// ============================================================
// 01bee5d0
// ============================================================
// Function: FUN_01bee5d0
// Address: 01bee5d0
// Size: 663 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bee5d0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  double dVar3;
  double dVar4;
  double dVar5;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar6 [16];
  int64_t local_58;
  char local_50;
  int local_40;
  double local_30;
  
  if (*(int64_t *)(this_ptr + 0x1b0) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x1b0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bcf010();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      local_30 = 0.0;
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
    }
    else {
      local_40 = -1;
      local_30 = 0.0;
      dVar5 = local_30;
      while (local_30 = dVar5, local_40 = local_40 + 1, local_40 < *(int *)(local_58 + 0xc)) {
        dVar3 = (double)FUN_01bc6390();
        dVar4 = (double)FUN_01bc6380();
        dVar5 = dVar3 + dVar4;
        if (dVar3 + dVar4 <= local_30) {
          dVar5 = local_30;
        }
      }
      FUN_000840d0();
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar5 = (double)(**(code **)(*plVar2 + 0x368))();
    plVar2 = *(int64_t **)(this_ptr + 0x1a0);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar3 = (double)(**(code **)(*plVar2 + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
    if (dVar5 + dVar3 < local_30) {
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      dVar4 = (double)(**(code **)(*plVar2 + 0x368))();
      FUN_00d50b20();
      plVar2 = *(int64_t **)(this_ptr + 0x1a0);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      dVar5 = (dVar5 + dVar3) / g_02394de0;
      auVar6._8_8_ = _UNK_023945b8 & extraout_XMM0_Qb | _UNK_023945c8;
      auVar6._0_8_ = (double)(g_023945b0 & (uint64_t)dVar5 | g_023945c0) + dVar5;
      auVar6 = roundsd(auVar6,auVar6,0xb);
      (**(code **)(*plVar2 + 0x380))((auVar6._0_8_ * g_02394de0 + g_02394de0) - dVar4);
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01bf0b70
// ============================================================
// Function: FUN_01bf0b70
// Address: 01bf0b70
// Size: 550 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01bf0b70(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint8_t auVar3 [16];
  uint64_t uVar4;
  bool bVar5;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar6 [16];
  int64_t *local_70;
  char local_68;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x558))();
  FUN_01e40eb0();
  FUN_01e3f820();
  (**(code **)(*this_ptr + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x970))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01bf0c12;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01bf0c12:
    (**(code **)(*this_ptr + 0x640))();
    uVar4 = (**(code **)(*local_40 + 0x580))();
    (**(code **)(*this_ptr + 0x640))();
    uVar2 = (**(code **)(*local_70 + 0x578))();
    auVar3._8_4_ = extraout_XMM0_Dc;
    auVar3._0_8_ = uVar4;
    auVar3._12_4_ = extraout_XMM0_Dd;
    auVar6._8_4_ = extraout_XMM0_Dc_00;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = extraout_XMM0_Dd_00;
    auVar6 = insertps(auVar3,auVar6,0x10);
    (**(code **)(*local_40 + 0x4d0))(0,auVar6._0_8_);
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01beab60();
    FUN_01d9ab80();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = false;
    goto LAB_01bf0ce6;
  }
  bVar5 = true;
LAB_01bf0ce6:
  FUN_01beab60();
  FUN_01d95060();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  lVar1 = this_ptr[0x3c];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d97920();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01beaed0
// ============================================================
// Function: FUN_01beaed0
// Address: 01beaed0
// Size: 501 bytes
// Class: MUHorizontalOverviewScroller

void FUN_01beaed0(void)

{
  int64_t *this_ptr;
  uint64_t uVar1;
  uint8_t in_XMM1 [16];
  uint8_t auVar2 [16];
  int64_t *local_38;
  char local_30;
  int64_t *local_28;
  char local_20;
  
  if (this_ptr[0x36] != 0) {
    FUN_01beab60();
    if ((local_20 == '\0') && (local_28 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_28 + 0x4d8))();
    if ((int)this_ptr[0x3d] == 0) {
      uVar1 = FUN_01e3f820();
      auVar2 = blendps(in_XMM1,g_0241e210,0xd);
      (**(code **)(*local_28 + 0x4d0))(uVar1,auVar2._0_8_);
      FUN_01d97870();
      FUN_01cf9ad0();
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      FUN_01cf3f20();
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x9a0))();
      FUN_01f27fe0();
      (**(code **)(*local_38 + 0x450))();
      FUN_01dce540();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01e3f820();
      (**(code **)(*local_28 + 0x4d0))();
      FUN_01d97870();
      FUN_01cf9ad0();
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      FUN_01cf3f20();
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x9a0))();
      FUN_01dce540();
      if ((local_20 != '\0') && (local_28 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_28 + 0x928))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0080f2b0
// ============================================================
// Function: FUN_0080f2b0
// Address: 0080f2b0
// Size: 581 bytes
// Class: MUHorizontalOverviewScroller
// String references:
//   "MUHorizontalOverviewScroller"

void FUN_0080f2b0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_288;
  
  if ((g_02735a90 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027359e0 = FUN_00835bf0();
    g_027359c8 = "MUHorizontalOverviewScroller";
    g_027359d0 = 0x248;
    g_027359d8 = FUN_00835b60;
    g_027359e8 = 0;
    ram_00000000027359f0 = 0;
    g_027359f8 = 0;
    g_02735a70 = 0;
    ram_0000000002735a78 = 0;
    g_02735a80 = 0;
    g_02735a82 = 1;
    g_02735a00 = 0;
    ram_0000000002735a08 = 0;
    g_02735a10 = 0;
    ram_0000000002735a18 = 0;
    g_02735a20 = 0;
    ram_0000000002735a28 = 0;
    g_02735a30 = 0;
    ram_0000000002735a38 = 0;
    g_02735a40 = 0;
    ram_0000000002735a48 = 0;
    g_02735a50 = 0;
    ram_0000000002735a58 = 0;
    g_02735a60 = 0;
    ram_0000000002735a68 = 0;
    g_02735a8b = 0;
    g_02735a83 = 0;
    ___cxa_guard_release();
  }
  if (g_02735a83 == '\0') {
    FUN_00835a90();
    FUN_00e87760();
    FUN_0050ed30();
    FUN_00d50c00();
    FUN_00836810();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_288 != 0) {
      FUN_00d50b20();
    }
    FUN_00836700();
    FUN_00836700();
  }
  return;
}



// ============================================================
// 00836810
// ============================================================
// Function: FUN_00836810
// Address: 00836810
// Size: 861 bytes
// Class: MUHorizontalOverviewScroller
// String references:
//   "MUHorizontalOverviewScroller"

void FUN_00836810(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00835de0();
  *this_ptr = &g_0262a5e0;
  this_ptr[2] = &g_0262b168;
  this_ptr[0x3c] = &g_0262b1a8;
  this_ptr[0x3f] = &g_0262b1d8;
  this_ptr[0x40] = &g_0262b228;
  *(void*)(this_ptr + 0x46) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735a83 == '\0') {
    FUN_00836ba0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x234) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735a83 == '\0') {
    FUN_00836d30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x47) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735a83 == '\0') {
    FUN_00836ec0();
    FUN_00e87980();
  }
  FUN_00837050();
  return;
}

