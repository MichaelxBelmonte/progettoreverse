// Function: FUN_0014e540
// Address: 0014e540
// Size: 6418 bytes
// Class: MDMetaWindowController

void FUN_0014e540(uint64_t param_1,int param_2)

{
  double dVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  int64_t lVar11;
  uint uVar12;
  void* pVar13;
  uint64_t in_RCX;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar18;
  bool bVar19;
  float fVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  uint32_t uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  int64_t local_148;
  char local_140;
  int64_t local_128;
  char local_120;
  double local_d8;
  int64_t local_98;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  
  fVar25 = (float)((uint64_t)param_1 >> 0x20);
  (**(code **)(*this_ptr + 0x948))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    return;
  }
  *(void*)((int64_t)this_ptr + 0x18a) = 0;
  local_d8 = (double)(g_0239012c + (float)param_1) /
             (double)*(float *)((int64_t)this_ptr + 0x15c);
  this_ptr[0x35] = (int64_t)local_d8;
  dVar26 = local_d8;
  FUN_01e3f820();
  fVar27 = (float)((uint64_t)dVar26 >> 0x20) - fVar25;
  fVar20 = fVar27 / *(float *)(this_ptr + 0x2c) + g_0239423c;
  this_ptr[0x36] = (int64_t)(double)fVar20;
  FUN_0173ba80();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if ((int64_t *)this_ptr[0x3c] == (int64_t *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (**(code **)(*(int64_t *)this_ptr[0x3c] + 0x920))();
  }
  (**(code **)(*this_ptr + 0x948))();
  pvVar10 = _pthread_getspecific((void*)in_RCX);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x958))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    (**(code **)(*this_ptr + 0x938))();
  }
  else {
    (**(code **)(*this_ptr + 0x958))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x958))();
    uVar21 = (**(code **)(*(int64_t *)this_ptr[0x4e] + 0x930))();
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x930))();
    uVar22 = (**(code **)(*(int64_t *)this_ptr[0x50] + 0x930))();
    uVar23 = (**(code **)(*(int64_t *)this_ptr[0x51] + 0x930))();
    fVar27 = 0.0;
    FUN_0162a940(uVar21,*(void*)((int64_t)this_ptr + 0x189),uVar22,uVar23);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    *(void*)((int64_t)this_ptr + 0x189) = 0;
  }
  (**(code **)(*this_ptr + 0x928))();
  if ((local_48 != 0) && ((**(code **)(*this_ptr + 0x928))(), local_60 != '\0')) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x3b] == '\0') {
LAB_0014ec0b:
    pVar13 = (void*)in_RCX;
    if (iVar7 != 0x13) {
LAB_0014edb7:
      pvVar10 = _pthread_getspecific(pVar13);
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        pVar13 = (void*)local_48;
      }
      fVar24 = (float)_exp2f(g_023941f4 * fVar20);
      fVar24 = (float)_logf(fVar24 * g_023941f8 * g_02394204);
      FUN_0173fc90(fVar24 * g_02394208);
      FUN_01e3f820();
      fVar24 = fVar27;
      FUN_01e3f820();
      *(int *)(this_ptr + 0x34) = (int)(((fVar27 - fVar25) / fVar24) * g_023941e0);
      goto LAB_0014ee85;
    }
    (**(code **)(*this_ptr + 0x958))();
    if (local_48 == 0) {
      bVar19 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x958))();
      bVar19 = *(int64_t *)(local_68 + 0x150) != 0;
      if (local_60 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pVar13 = (void*)in_RCX;
    if (!bVar19) goto LAB_0014edb7;
    (**(code **)(*this_ptr + 0x958))();
    lVar11 = *(int64_t *)(local_48 + 0x150);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      (**(code **)(*this_ptr + 0x958))();
      iVar7 = *(int *)(local_48 + 0x148);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      dVar26 = *(double *)(local_48 + 0x48);
      (**(code **)(*this_ptr + 0x958))();
      lVar11 = *(int64_t *)(local_48 + 0x158);
      if (lVar11 == 0) {
        local_98 = 0;
      }
      else {
        FUN_00d50b00();
        local_98 = lVar11;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      fVar24 = fVar27;
      FUN_01e3f820();
      uVar9 = (uint)(local_d8 / (double)(float)dVar26);
      if ((-1 < (int)uVar9) && ((int)uVar9 < iVar7)) {
        uVar12 = (uint)(((fVar27 - fVar25) / fVar24) * g_02394224);
        in_RCX = (uint64_t)uVar12;
        if ((-1 < (int)uVar12) && (((int)uVar12 < 0x1e0 && (local_98 != 0)))) {
          in_RCX = *(uint64_t *)(local_98 + 0x10);
          lVar18 = *(int64_t *)(in_RCX + (uint64_t)uVar9 * 8);
          if (lVar18 != 0) {
            FUN_00d50b00();
            if (0 < *(int *)(lVar18 + 0xc)) {
              uVar17 = 0;
              bVar19 = false;
              lVar14 = 0;
              do {
                lVar16 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + uVar17 * 8);
                if (lVar14 == lVar16) {
                  lVar16 = lVar14;
                  bVar5 = bVar19;
                  if ((!bVar19) && (lVar14 != 0)) {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                else {
                  if (lVar16 != 0) {
                    FUN_00d50b00();
                  }
                  bVar5 = true;
                  if ((bVar19) && (lVar14 != 0)) {
                    FUN_00d50b20();
                    bVar5 = true;
                  }
                }
                bVar19 = bVar5;
                lVar14 = lVar16;
              } while ((uVar17 < 0x14) &&
                      (uVar17 = uVar17 + 1, (int64_t)uVar17 < (int64_t)*(int *)(lVar18 + 0xc)));
              if ((bVar19) && (lVar14 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
      }
      pVar13 = (void*)in_RCX;
      if ((lVar11 != 0) && (local_98 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0014ee85;
    }
    local_50 = 0;
    bVar19 = false;
  }
  else {
    fVar27 = 0.0;
    if ((fVar25 < *(float *)(this_ptr + 0x3a)) ||
       (*(float *)(this_ptr + 0x3a) + *(float *)((int64_t)this_ptr + 0x1d4) <= fVar25))
    goto LAB_0014ec0b;
    (**(code **)(*this_ptr + 0x928))();
    if (local_48 == 0) {
      bVar19 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x928))();
      bVar19 = *(int64_t *)(local_68 + 0xe8) != 0;
      if (local_60 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar19) goto LAB_0014ec0b;
    (**(code **)(*this_ptr + 0x928))();
    lVar11 = *(int64_t *)(local_48 + 0xe8);
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x928))();
    dVar26 = *(double *)(local_48 + 0x110);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x928))();
    dVar1 = *(double *)(local_48 + 0x118);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    local_d8 = local_d8 - dVar1;
    iVar8 = (int)(dVar26 * local_d8 + g_023942d0);
    iVar7 = 0;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    iVar8 = *(int *)(lVar11 + 0xc) + -1;
    if (iVar7 < *(int *)(lVar11 + 0xc)) {
      iVar8 = iVar7;
    }
    lVar14 = (int64_t)iVar8;
    lVar18 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar14 * 8);
    if (lVar18 != 0) {
      FUN_00d50b00();
    }
    uVar21 = FUN_00150910();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar21 = FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar18 != 0) {
      uVar21 = FUN_00d50b20();
    }
    FUN_00d242c0(uVar21,0);
    pVar13 = (void*)lVar14;
    if (0 < *(int *)(local_48 + 0xc)) {
      lVar16 = 0;
      lVar18 = 0;
      bVar19 = false;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar16 * 8);
        if (lVar18 == lVar2) {
          if ((!bVar19) && (lVar18 != 0)) {
            bVar19 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if ((bVar19) && (lVar18 != 0)) {
            FUN_00d50b20();
            bVar19 = true;
            lVar18 = lVar2;
          }
          else {
            bVar19 = true;
            lVar18 = lVar2;
          }
        }
        pVar13 = (void*)lVar14;
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)(local_48 + 0xc));
      if (0 < *(int *)(local_48 + 0xc)) {
        lVar16 = 0;
        local_58 = 0;
        bVar5 = false;
        local_98 = 0;
        bVar4 = false;
        lVar14 = lVar18;
        do {
          lVar18 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar16 * 8);
          if (lVar14 == lVar18) {
            if ((!bVar19) && (lVar14 != 0)) {
              bVar19 = true;
              FUN_00d50b00();
            }
LAB_0014fb80:
            lVar18 = lVar14;
            bVar3 = bVar19;
            if (lVar16 != 0) goto LAB_0014fb85;
LAB_0014fbb8:
            lVar14 = 0;
            if (local_58 != 0) goto LAB_0014fbee;
            local_58 = 0;
            bVar19 = bVar3;
          }
          else {
            if (lVar18 != 0) {
              FUN_00d50b00();
            }
            if ((bVar19) && (lVar14 != 0)) {
              FUN_00d50b20();
              bVar19 = true;
              lVar14 = lVar18;
              goto LAB_0014fb80;
            }
            bVar19 = true;
            bVar3 = true;
            if (lVar16 == 0) goto LAB_0014fbb8;
LAB_0014fb85:
            lVar14 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + -8 + lVar16 * 8);
            if (local_58 == lVar14) {
              if ((!bVar5) && (local_58 != 0)) {
                bVar5 = true;
                FUN_00d50b00();
              }
            }
            else {
              bVar3 = bVar19;
              if (lVar14 == 0) {
                lVar14 = 0;
              }
              else {
                FUN_00d50b00();
              }
LAB_0014fbee:
              bVar19 = bVar3;
              if ((bVar5) && (local_58 != 0)) {
                FUN_00d50b20();
                bVar5 = true;
                local_58 = lVar14;
              }
              else {
                bVar5 = true;
                local_58 = lVar14;
              }
            }
          }
          if (lVar16 < (int64_t)*(int *)(local_48 + 0xc) + -1) {
            lVar14 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar16 * 8);
            if (local_98 == lVar14) {
              if ((!bVar4) && (local_98 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar14 == 0) {
                lVar14 = 0;
              }
              else {
                FUN_00d50b00();
              }
joined_r0x0014fc76:
              if ((bVar4) && (local_98 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                local_98 = lVar14;
              }
              else {
                bVar4 = true;
                local_98 = lVar14;
              }
            }
          }
          else {
            lVar14 = 0;
            if (local_98 != 0) goto joined_r0x0014fc76;
            local_98 = 0;
          }
          lVar16 = lVar16 + 1;
          lVar14 = lVar18;
        } while (lVar16 < *(int *)(local_48 + 0xc));
        lVar14 = local_48;
        if ((bVar4) && (local_98 != 0)) {
          FUN_00d50b20();
        }
        pVar13 = (void*)lVar14;
        if ((bVar5) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((bVar19) && (lVar18 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
LAB_0014ee85:
    iVar7 = (**(code **)(*(int64_t *)this_ptr[0x41] + 0x920))();
    if ((iVar7 != 0) || (iVar7 = (**(code **)(*(int64_t *)this_ptr[0x42] + 0x920))(), iVar7 != 0))
    {
      (**(code **)(*this_ptr + 0x620))();
    }
    if ((unaff_ESI & 8) != 0) {
      FUN_00b6f130();
      iVar7 = *(int *)(local_48 + 0xc);
      if (local_40 != '\0') {
        FUN_00d50b20();
      }
      if (1 < iVar7) {
        (**(code **)(*this_ptr + 0x948))();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d820();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar21 = FUN_0173fc90(fVar20);
        *(void*)(this_ptr + 0x37) = uVar21;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        uVar9 = *(uint *)(this_ptr + 0x37);
        plVar15 = (int64_t *)(uint64_t)uVar9;
        if ((int)uVar9 < 0) {
          uVar21 = 0;
LAB_0014efec:
          *(void*)(this_ptr + 0x37) = uVar21;
          plVar15 = this_ptr;
        }
        else {
          uVar21 = 0x7f;
          if (0x7f < (int)uVar9) goto LAB_0014efec;
        }
        pVar13 = (void*)plVar15;
        FUN_00b6f130();
        plVar15 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8);
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (plVar15 != (int64_t *)0x0) {
          pVar13 = 0x50;
          FUN_00b51960(0x50,(char)this_ptr[0x37]);
          if (local_60 == '\0') {
            if (local_68 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          FUN_00b5a6a0(0);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          (**(code **)(*plVar15 + 0x368))();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 != 0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    if (param_2 == 2) {
      (**(code **)(*this_ptr + 0x948))();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328c30();
      if (local_48 == 0) {
        bVar19 = false;
      }
      else {
        (**(code **)(*this_ptr + 0x948))();
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013293b0();
        bVar19 = local_148 != 0;
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (!bVar19) goto LAB_0014f7d2;
      (**(code **)(*this_ptr + 0x948))();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01328c30();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x948))();
      pvVar10 = _pthread_getspecific(pVar13);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013293b0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (*(int *)(local_48 + 0xc) < 1) {
        lVar11 = 0;
        bVar4 = false;
        bVar5 = false;
        local_50 = 0;
      }
      else {
        lVar18 = 0;
        local_50 = 0;
        bVar5 = false;
        bVar4 = false;
        lVar11 = 0;
        do {
          lVar14 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar18 * 8);
          lVar16 = local_48;
          if (lVar11 == lVar14) {
            if ((!bVar4) && (lVar11 != 0)) {
              bVar4 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (lVar11 != 0)) {
              FUN_00d50b20();
              bVar4 = true;
              lVar11 = lVar14;
            }
            else {
              bVar4 = true;
              lVar11 = lVar14;
            }
          }
          pVar13 = (void*)lVar16;
          pvVar10 = _pthread_getspecific(pVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_014bc070();
          if (cVar6 == '\0') {
            pvVar10 = _pthread_getspecific(pVar13);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014c34a0();
            if (local_48 == local_50) {
              lVar14 = local_50;
              bVar19 = bVar5;
              if ((!bVar5) && (local_48 != 0)) {
                bVar19 = true;
                if (local_40 != '\0') goto LAB_0014f794;
                FUN_00d50b00();
                bVar19 = true;
              }
LAB_0014f780:
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
                bVar19 = true;
                lVar14 = local_48;
                if ((bVar5) && (local_50 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_0014f780;
              }
              bVar19 = true;
              lVar14 = local_48;
              if ((bVar5) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_0014f794:
            bVar5 = bVar19;
            if (lVar14 == 0) {
              local_50 = 0;
            }
            else {
              local_50 = lVar14;
              if ((float)((uint)(fVar20 - *(float *)(lVar14 + 0x14)) & g_02390140) < g_023942a8
                 ) {
                if (lVar11 == 0) {
                  lVar11 = 0;
                  iVar7 = *(int *)(local_48 + 0xc);
                  goto joined_r0x0014fe7f;
                }
                if (!bVar4) goto joined_r0x0014fea0;
                FUN_00d50b00();
                goto LAB_0014fd40;
              }
            }
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)(local_48 + 0xc));
      }
      iVar7 = *(int *)(local_48 + 0xc);
      bVar19 = bVar5;
joined_r0x0014fe7f:
      if (0 < iVar7) {
        lVar18 = 0;
LAB_0014f8eb:
        lVar14 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + lVar18 * 8);
        lVar16 = local_48;
        if (lVar11 == lVar14) {
          if ((!bVar4) && (lVar11 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar14 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (lVar11 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            lVar11 = lVar14;
          }
          else {
            bVar4 = true;
            lVar11 = lVar14;
          }
        }
        pVar13 = (void*)lVar16;
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_014bc070();
        if (cVar6 != '\0') goto LAB_0014f8d3;
        pvVar10 = _pthread_getspecific(pVar13);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if (local_48 == local_50) {
          lVar14 = local_50;
          bVar5 = bVar19;
          if ((!bVar19) && (local_48 != 0)) {
            bVar5 = true;
            if (local_40 != '\0') goto LAB_0014fa94;
            FUN_00d50b00();
            bVar5 = true;
          }
LAB_0014fa80:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            lVar14 = local_48;
            if ((bVar19) && (local_50 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0014fa80;
          }
          bVar5 = true;
          lVar14 = local_48;
          if ((bVar19) && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_0014fa94:
        bVar19 = bVar5;
        if (lVar14 == 0) {
          local_50 = 0;
          goto LAB_0014f8d3;
        }
        local_50 = lVar14;
        if (g_023942a8 <= (float)((uint)(fVar20 - *(float *)(lVar14 + 0x14)) & g_02390140))
        goto LAB_0014f8d3;
        if ((lVar11 != 0) && (bVar4)) {
          FUN_00d50b00();
LAB_0014fd40:
          FUN_00d50b20();
          local_50 = lVar14;
          goto LAB_0014fd4c;
        }
        goto LAB_0014fd73;
      }
LAB_0014fd4c:
      lVar14 = local_50;
      if ((bVar4) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
joined_r0x0014fea0:
      local_50 = lVar14;
      if (local_48 != 0) {
LAB_0014fd73:
        FUN_00d50b20();
        local_50 = lVar14;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    else {
LAB_0014f7d2:
      bVar19 = false;
      local_50 = 0;
    }
    this_ptr[0x30] = (int64_t)local_d8;
    if (local_48 == 0) goto LAB_0014f7ff;
  }
  FUN_00d50b20();
LAB_0014f7ff:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((bVar19) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
LAB_0014f8d3:
  lVar18 = lVar18 + 1;
  if (*(int *)(local_48 + 0xc) <= lVar18) goto LAB_0014fd4c;
  goto LAB_0014f8eb;
}

