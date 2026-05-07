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

