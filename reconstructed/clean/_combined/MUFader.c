// ===================================================================
// MUFader — Complete reconstructed pseudocode
// 5 functions
// ===================================================================


// ============================================================
// 012a2350
// ============================================================
// Function: FUN_012a2350
// Address: 012a2350
// Size: 2375 bytes
// Class: MUFader

uint64_t FUN_012a2350(void* param_1)

{
  float fVar1;
  double dVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  uint64_t uVar11;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_90;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if ((*arg1 != 0) && (*(int64_t *)(this_ptr + 200) != 0)) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      dVar2 = *(double *)(this_ptr + 0xe8);
      fVar1 = *(float *)(this_ptr + 0xf8);
      if (NAN(fVar1) || NAN(fVar1)) {
        dVar12 = 0.0;
      }
      else {
        dVar12 = (double)fVar1;
      }
      dVar13 = *(double *)(this_ptr + 0xf0) + dVar2;
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e9900(*(double *)(this_ptr + 0xe8),
                   *(double *)(this_ptr + 0xf0) + *(double *)(this_ptr + 0xe8));
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
          goto LAB_012a24ad;
        }
      }
      else if (local_70 != 0) {
LAB_012a24ad:
        local_58 = -1;
        local_90 = g_023b2568;
        local_38 = 0;
        lVar7 = local_38;
        bVar5 = false;
        while( true ) {
          bVar4 = bVar5;
          local_38 = lVar7;
          lVar7 = (int64_t)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(local_70 + 0xc) <= local_58) break;
          lVar9 = *(int64_t *)(local_70 + 0x10);
          lVar3 = *(int64_t *)(lVar9 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific((void*)lVar9);
          pVar10 = (void*)lVar9;
          lVar9 = lVar3;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar9 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          lVar7 = local_38;
          bVar5 = bVar4;
          if (*(int64_t *)(lVar9 + 200) != 0) {
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (local_48 != 0) {
              dVar16 = *(double *)(this_ptr + 0xe8);
              dVar14 = *(double *)(this_ptr + 0xf0) + dVar16;
              pvVar6 = _pthread_getspecific(pVar10);
              lVar9 = lVar3;
              if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar9 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              if (NAN(*(float *)(lVar9 + 0xf8))) {
                dVar15 = 0.0;
              }
              else {
                pvVar6 = _pthread_getspecific(pVar10);
                lVar9 = lVar3;
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar9 = *(int64_t *)
                           (lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar15 = (double)*(float *)(lVar9 + 0xf8);
              }
              dVar16 = (double)((uint64_t)
                                (SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar2 * dVar2) -
                                SQRT(dVar15 * dVar15 + dVar14 * dVar14 + dVar16 * dVar16)) &
                               g_023908f0);
              if (dVar16 < local_90) {
                local_90 = dVar16;
                if (lVar3 == local_38) {
                  if ((!bVar4) && (lVar3 != 0)) {
                    FUN_00d50b00();
                    bVar5 = true;
                  }
                }
                else {
                  if (lVar3 != 0) {
                    FUN_00d50b00();
                  }
                  bVar5 = true;
                  lVar7 = lVar3;
                  if ((bVar4) && (local_38 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
        if (local_38 != 0) {
          if (*(int64_t *)(this_ptr + 200) != 0) {
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(int64_t *)(local_38 + 200) == 0) goto LAB_012a289a;
LAB_012a28ba:
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(int64_t *)
                 (*(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a28ba;
LAB_012a289a:
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507970();
          FUN_015084d0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 200) != 0) {
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(int64_t *)(local_38 + 200) == 0) goto LAB_012a2a2d;
LAB_012a2a4d:
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(int64_t *)
                 (*(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a2a4d;
LAB_012a2a2d:
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508610();
          FUN_015085a0();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 200) != 0) {
            pvVar6 = _pthread_getspecific((void*)local_70);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific((void*)local_70);
          if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
            if (*(int64_t *)(local_38 + 200) == 0) goto LAB_012a2bbd;
LAB_012a2bdd:
            pVar10 = (void*)local_70;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
          }
          else {
            local_70 = local_38;
            if (*(int64_t *)
                 (*(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                 200) != 0) goto LAB_012a2bdd;
LAB_012a2bbd:
            pVar10 = (void*)local_70;
            local_40 = '\0';
            local_48 = 0;
          }
          pvVar6 = _pthread_getspecific(pVar10);
          lVar7 = local_48;
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar7 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          FUN_01507f00();
          FUN_01508220();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          uVar11 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          if (bVar4) {
            FUN_00d50b20();
          }
          goto LAB_012a2810;
        }
      }
    }
  }
  uVar11 = 0;
LAB_012a2810:
  return uVar11 & 0xffffffff;
}



// ============================================================
// 00447fc0
// ============================================================
// Function: FUN_00447fc0
// Address: 00447fc0
// Size: 1397 bytes
// Class: MUFader
// String references:
//   "MUFader"

void FUN_00447fc0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *plVar7;
  char local_60;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = '\0';
  plVar5 = this_ptr;
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    plVar4 = local_40;
    if (local_40 == plVar5) {
      if (((local_50 == '\0') && (local_40 != (int64_t *)0x0)) &&
         (plVar4 = plVar5, local_38[0] != '\0')) goto LAB_00448057;
    }
    else {
      plVar7 = plVar4;
      if (local_38[0] == '\0') {
        if (local_50 == '\0') {
          pcVar3 = &local_50;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &local_50;
        }
      }
      else {
        if (local_50 != '\0') {
          FUN_00d50b20();
        }
LAB_00448057:
        local_50 = '\x01';
        pcVar3 = local_38;
      }
      *pcVar3 = '\0';
      plVar5 = plVar4;
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffff98;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_50 == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar5 != (int64_t *)0x0);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x498))();
    plVar4 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      if (this_ptr[0x10] != 0) {
        FUN_000bfee0();
        (**(code **)(*plVar5 + 0x498))();
        plVar4 = local_40;
        if ((local_60 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 == plVar7) goto LAB_00448455;
      }
      local_90 = 0;
      FUN_00d50b00();
      local_c8 = g_02705b60;
      local_90 = '\x01';
      local_98 = this_ptr;
      if (g_02705b60 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      (**(code **)(*plVar5 + 0x498))();
      local_80 = 0;
      if ((local_60 == '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = plVar7;
      if (g_02705c60 == '\0') {
        local_80 = '\x01';
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          g_0279e9f8 = FUN_0044b870();
          g_0279e9e0 = "MUFader";
          g_0279e9e8 = 0x70;
          g_0279e9f0 = FUN_0044b810;
          g_0279ea00 = 0;
          ram_000000000279ea08 = 0;
          g_0279ea10 = 0;
          ram_000000000279ea18 = 0;
          g_0279ea20 = 0;
          ram_000000000279ea28 = 0;
          g_0279ea30 = 0;
          ram_000000000279ea38 = 0;
          g_0279ea40 = 0;
          ram_000000000279ea48 = 0;
          g_0279ea50 = 0;
          ram_000000000279ea58 = 0;
          g_0279ea60 = 0;
          ram_000000000279ea68 = 0;
          g_0279ea70 = 0;
          ram_000000000279ea78 = 0;
          g_0279ea80 = 0;
          ram_000000000279ea88 = 0;
          g_0279ea90 = 0;
          ram_000000000279ea98 = 0;
          g_0279eaa0 = 0;
          ___cxa_guard_release();
        }
      }
      uVar6 = FUN_00e86210();
      local_b8 = g_02705b68;
      if (g_02705b68 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00c841b0(uVar6,&local_b8);
      local_70 = 0;
      local_78 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_70 = '\x01';
      local_a0 = '\0';
      local_a8 = 0;
      FUN_000bfbc0(&local_88,&local_c8,0xa0,&local_78);
      plVar7 = (int64_t *)this_ptr[0x10];
      plVar4 = plVar7;
      if (plVar7 != local_40) {
        if (local_38[0] == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar4 = (int64_t *)0x0;
            goto LAB_00448342;
          }
          FUN_00d50b00();
          plVar7 = (int64_t *)this_ptr[0x10];
          this_ptr[0x10] = (int64_t)local_40;
          plVar4 = local_40;
        }
        else {
          local_38[0] = '\0';
          plVar4 = local_40;
LAB_00448342:
          this_ptr[0x10] = (int64_t)plVar4;
        }
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar4 = local_40;
        }
      }
      if ((local_38[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00448455;
    }
  }
  if (this_ptr[0x10] != 0) {
    this_ptr[0x10] = 0;
    FUN_00d50b20();
  }
LAB_00448455:
  FUN_00447c70();
  FUN_0044a930();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 012a2e80
// ============================================================
// Function: FUN_012a2e80
// Address: 012a2e80
// Size: 1132 bytes
// Class: MUFader

uint64_t FUN_012a2e80(double param_1,double param_2)

{
  double dVar1;
  int iVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  undefined7 uVar10;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar11;
  int iVar12;
  uint uVar13;
  uint64_t unaff_RBX;
  uint64_t uVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int64_t *local_c0;
  char local_b8;
  uint local_44;
  double local_40;
  
  iVar2 = *(int *)(*this_ptr + 0x18);
  iVar12 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar12 = iVar2;
  }
  lVar3 = *arg1;
  if (lVar3 == 0) {
    uVar14 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  }
  else {
    uVar10 = (undefined7)((uint64_t)*this_ptr >> 8);
    if (*(int *)(lVar3 + 0xc) < 1) {
      bVar4 = true;
      local_44 = (uint)CONCAT71(uVar10,1);
    }
    else {
      dVar20 = param_2 / (double)(iVar12 >> 2);
      local_44 = (uint)CONCAT71(uVar10,1);
      uVar16 = 0;
      bVar4 = true;
      do {
        lVar9 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar16 * 8);
        pVar11 = uVar16;
        pvVar6 = _pthread_getspecific(uVar16);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          cVar5 = *(char *)(lVar9 + 0xb0);
        }
        else {
          cVar5 = *(char *)(*(int64_t *)
                             (lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0xb0);
        }
        if (cVar5 == '\0') {
          pvVar6 = _pthread_getspecific(pVar11);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126bcd0();
          if (local_b8 == '\0') {
            if (local_c0 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_012a301a;
            }
          }
          else if (local_c0 != (int64_t *)0x0) {
LAB_012a301a:
            pvVar6 = _pthread_getspecific(pVar11);
            lVar7 = lVar9;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar7 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar18 = *(double *)(lVar7 + 0xe8);
            pvVar6 = _pthread_getspecific(pVar11);
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(int64_t *)(lVar9 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xf0);
            dVar19 = dVar1;
            dVar17 = (double)FUN_00e7b500(dVar18);
            cVar5 = FUN_00e7b560();
            if (cVar5 != '\0') {
              if ((bVar4) && ((param_1 < dVar17 || (dVar17 + dVar19 < param_1 + param_2)))) {
                ___bzero();
                bVar4 = false;
              }
              uVar13 = (uint)((dVar18 - param_1) / dVar20);
              local_40 = 0.0;
              if ((int)uVar13 < 0) {
                local_40 = (double)(int)-uVar13 * dVar20 + 0.0;
              }
              if (local_40 < dVar1) {
                if ((int)uVar13 < 0) {
                  uVar13 = 0;
                }
                uVar14 = (uint64_t)uVar13;
                lVar9 = *this_ptr;
                if (bVar4) {
                  do {
                    iVar2 = *(int *)(lVar9 + 0x18);
                    iVar12 = iVar2 + 3;
                    if (-1 < iVar2) {
                      iVar12 = iVar2;
                    }
                    if ((int64_t)(iVar12 >> 2) <= (int64_t)uVar14) break;
                    pvVar6 = _pthread_getspecific(iVar12 >> 2);
                    plVar15 = local_c0;
                    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      plVar15 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                    }
                    local_40 = dVar20 + local_40;
                    dVar18 = (double)(**(code **)(*plVar15 + 0x3a8))();
                    lVar9 = *this_ptr;
                    *(float *)(*(int64_t *)(lVar9 + 0x10) + uVar14 * 4) = (float)dVar18;
                    uVar14 = uVar14 + 1;
                  } while (local_40 < dVar1);
                }
                else {
                  do {
                    iVar2 = *(int *)(lVar9 + 0x18);
                    iVar12 = iVar2 + 3;
                    if (-1 < iVar2) {
                      iVar12 = iVar2;
                    }
                    if ((int64_t)(iVar12 >> 2) <= (int64_t)uVar14) break;
                    pvVar6 = _pthread_getspecific(iVar12 >> 2);
                    plVar15 = local_c0;
                    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                      plVar15 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                    }
                    local_40 = dVar20 + local_40;
                    dVar18 = (double)(**(code **)(*plVar15 + 0x3a8))();
                    lVar9 = *this_ptr;
                    *(float *)(*(int64_t *)(lVar9 + 0x10) + uVar14 * 4) =
                         (float)dVar18 + *(float *)(*(int64_t *)(lVar9 + 0x10) + uVar14 * 4);
                    uVar14 = uVar14 + 1;
                  } while (local_40 < dVar1);
                }
              }
              bVar4 = false;
            }
            FUN_00d50b20();
            goto LAB_012a2f44;
          }
          local_44 = 0;
        }
LAB_012a2f44:
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(lVar3 + 0xc));
    }
    FUN_001159b0();
    if (!bVar4) {
      uVar14 = (uint64_t)local_44;
      goto LAB_012a32ff;
    }
    iVar2 = *(int *)(*this_ptr + 0x18);
    uVar14 = (uint64_t)local_44;
  }
  ___bzero(iVar2);
LAB_012a32ff:
  return uVar14 & 0xffffff01;
}



// ============================================================
// 011f1d90
// ============================================================
// Function: FUN_011f1d90
// Address: 011f1d90
// Size: 1104 bytes
// Class: MUFader
// String references:
//   "MUFader"
//   "MUPanner"
//   "MUAudioEffectChain"
//   "getFader"
//   "getPanner"

void FUN_011f1d90(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028ac1a8 = "getFader";
      g_028ac1b0 = &g_0278d738;
      g_028ac1b8 = 0;
      g_028ac1c0 = &g_027bd028;
      g_028ac1c8 = FUN_011f2cd0;
      g_028ac1d0 = FUN_011f2610;
      g_028ac1d8 = 0;
      // [STATIC_INIT: property registration]
      g_028ac1e0 = g_0279e9e0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ac1f0 = "getPanner";
      g_028ac1f8 = &g_0278d738;
      g_028ac200 = 0;
      g_028ac208 = &g_027bd030;
      g_028ac210 = FUN_011f2d70;
      g_028ac218 = FUN_011f2810;
      g_028ac220 = 0;
      // [STATIC_INIT: property registration]
      g_028ac228 = g_02709b20;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 012a4320
// ============================================================
// Function: FUN_012a4320
// Address: 012a4320
// Size: 685 bytes
// Class: MUFader
// String references:
//   "MUFader"
//   "getVolumeFader"
//   "setVolumeFader"

void FUN_012a4320(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028ac508 = "getVolumeFader";
      g_028ac510 = &g_0279e9e0;
      g_028ac518 = 0;
      g_028ac520 = &g_027bec20;
      g_028ac528 = FUN_012a49e0;
      g_028ac530 = FUN_012a45f0;
      g_028ac538 = 0;
      ram_00000000028ac540 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ac550 = "setVolumeFader";
      g_028ac558 = &g_0279e9e0;
      g_028ac560 = 0;
      g_028ac568 = &g_027bec22;
      g_028ac570 = FUN_012a4a10;
      g_028ac578 = FUN_012a4600;
      g_028ac580 = 0;
      ram_00000000028ac588 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

