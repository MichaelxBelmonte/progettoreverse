// Function: FUN_012b5260
// Address: 012b5260
// Size: 5471 bytes
// Class: MULSSComponentRenderer
// String references:
//   "MUAudioSourcePrincipalItem"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : byteSize too big!"
//   "MULSSComponentRenderer::getProcessingBufferWithSize : not enough allocated Buffers!"
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


void FUN_012b5260(double param_1,double param_2,double param_3,double param_4,int64_t *param_5,
                 int64_t *param_6)

{
  uint uVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  char *pcVar9;
  void* pVar10;
  int iVar11;
  int64_t in_RCX;
  uint64_t uVar12;
  int64_t *in_RDX;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t this_ptr;
  double in_R8;
  int iVar16;
  int64_t *plVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  uint64_t uVar22;
  int iVar24;
  uint8_t auVar23 [16];
  int iVar26;
  uint8_t auVar25 [16];
  uint8_t auVar27 [16];
  float in_XMM4_Da;
  float in_XMM5_Da;
  int64_t local_res8;
  void*local_res10;
  uint32_t local_res18;
  int64_t *local_res20;
  uint8_t uVar28;
  uint32_t local_e0;
  uint32_t uStack_dc;
  char local_d8;
  uint8_t local_d0 [8];
  int64_t *local_c8;
  int local_b8;
  byte local_ac;
  double local_a0;
  int64_t local_90;
  int64_t *local_88;
  uint local_7c;
  double local_78;
  uint8_t local_44;
  uint8_t local_43;
  byte local_42;
  char local_41;
  float local_40;
  float local_3c;
  float local_38;
  char local_33;
  byte local_32;
  char local_31;
  
  local_c8 = in_RDX;
  local_40 = in_XMM5_Da;
  if (**(int64_t **)(this_ptr + 0x1e0) == 0) {
    lVar8 = in_RCX;
    if (0 < *(int *)(this_ptr + 0x160)) {
      lVar8 = 0;
      local_78 = in_R8;
      do {
        if (*(int *)(this_ptr + 0x304) < *(int *)(this_ptr + 0x15c)) {
          FUN_00e828a0();
        }
        if (0 < (int)*(uint *)(this_ptr + 0x300)) {
          auVar27._0_8_ = 0;
          do {
            if (*(char *)(*(int64_t *)(this_ptr + 0x310) + auVar27._0_8_) == '\0') {
              *(void*)(*(int64_t *)(this_ptr + 0x310) + auVar27._0_8_) = 1;
              lVar13 = *(int64_t *)(*(int64_t *)(this_ptr + 0x308) + auVar27._0_8_ * 8) + 0x10;
              goto LAB_012b531d;
            }
            auVar27._0_8_ = auVar27._0_8_ + 1;
          } while (*(uint *)(this_ptr + 0x300) != auVar27._0_8_);
        }
        FUN_00e828a0();
        lVar13 = 0;
LAB_012b531d:
        *(int64_t *)(*(int64_t *)(this_ptr + 0x1e0) + lVar8 * 8) = lVar13;
        lVar8 = lVar8 + 1;
        iVar16 = *(int *)(this_ptr + 0x160);
        in_R8 = local_78;
      } while (lVar8 < iVar16);
      goto LAB_012b53b1;
    }
  }
  else {
    iVar16 = *(int *)(this_ptr + 0x160);
LAB_012b53b1:
    lVar8 = this_ptr + 0x150;
    if (0 < iVar16) {
      lVar13 = 0;
      do {
        ___bzero();
        ___bzero();
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(this_ptr + 0x160));
    }
  }
  local_88 = (int64_t *)(this_ptr + 0x150);
  local_78 = (double)(int64_t)in_R8;
  plVar17 = (int64_t *)*local_res20;
  local_3c = g_02390124;
  local_38 = g_02390124;
  if (plVar17 != (int64_t *)0x0) {
    dVar21 = *(double *)(*(int64_t *)(this_ptr + 0x100) + 0x10) - local_78;
    pvVar6 = _pthread_getspecific((void*)lVar8);
    if (pvVar6 != (void *)0x0) {
      plVar17 = (int64_t *)*local_res20;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        plVar17 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
    }
    dVar21 = (double)(**(code **)(*plVar17 + 0x3d8))(dVar21 * param_4,0);
    local_38 = (float)dVar21;
  }
  plVar17 = (int64_t *)*param_5;
  fVar19 = g_02390124;
  if (plVar17 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific((void*)lVar8);
    if (pvVar6 != (void *)0x0) {
      plVar17 = (int64_t *)*param_5;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        plVar17 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar13 + 0x154) & 1) + 4];
      }
    }
    dVar21 = (double)(**(code **)(*plVar17 + 0x3d8))(param_1 - param_2,0);
    fVar19 = (float)dVar21;
  }
  local_3c = local_3c / fVar19;
  lVar13 = *local_c8;
  if (lVar13 != 0) {
    pvVar6 = _pthread_getspecific((void*)lVar8);
    if (pvVar6 != (void *)0x0) {
      lVar13 = *local_c8;
      lVar7 = FUN_00e8b990();
      if (lVar7 != 0) {
        lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar13 + 0x7d) != '\0') goto LAB_012b55d8;
  }
  local_3c = local_3c * local_40;
LAB_012b55d8:
  pvVar6 = _pthread_getspecific((void*)lVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = local_38 * in_XMM4_Da;
  pvVar6 = _pthread_getspecific((void*)lVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  if ((g_0240d1a8 < (double)local_3c) && ((double)local_3c < g_0240d1b0)) {
    _logf();
  }
  fVar19 = (float)_powf();
  local_3c = local_3c * fVar19;
  if (g_02390124 <= local_3c) {
    local_3c = g_02390124;
  }
  local_33 = '\0';
  local_43 = g_023b36e8 < local_3c || local_3c < g_023b36e4;
  pVar10 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),local_43);
  local_ac = (byte)in_RCX;
  local_32 = local_43 | local_ac;
  if (local_32 == 1) {
    pcVar9 = &local_33;
    uVar22 = FUN_012b6860(pcVar9,&local_32);
    pVar10 = (void*)pcVar9;
    if (*(char *)(this_ptr + 600) == '\0') {
      auVar27._0_8_ = (int64_t)*(int *)(this_ptr + 0x218) / (int64_t)*(int *)(this_ptr + 0x16c);
      FUN_012b9080(uVar22,auVar27._0_8_ & 0xffffffff);
      lVar8 = *(int64_t *)(this_ptr + 0x1b0);
      lVar13 = CONCAT44(uStack_dc,local_e0);
      if (lVar8 == lVar13) {
        if ((local_d8 != '\0') && (lVar13 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_d8 == '\0') {
          if (lVar13 != 0) {
            FUN_00d50b00();
            lVar8 = *(int64_t *)(this_ptr + 0x1b0);
          }
        }
        else {
          local_d8 = '\0';
        }
        *(int64_t *)(this_ptr + 0x1b0) = lVar13;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      iVar16 = (int)auVar27._0_8_;
      local_38 = (float)(iVar16 + 3);
      if (-1 < iVar16) {
        local_38 = (float)iVar16;
      }
      local_40 = (float)param_3 / (float)*(int *)(this_ptr + 0x168);
      FUN_012b96f0((float)iVar16,local_d0);
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = (float)((int)local_38 >> 2);
      local_40 = local_40 / (float)iVar16;
      FUN_012a52b0();
      iVar24 = *(int *)(this_ptr + 0x218);
      iVar5 = iVar24 + 3;
      if (-1 < iVar24) {
        iVar5 = iVar24;
      }
      *(int *)(this_ptr + 0x210) = iVar5 >> 2;
      *(int *)(this_ptr + 0x214) = iVar5 >> 2;
      lVar8 = (int64_t)~(iVar24 / 2) +
              (int64_t)*(double *)(*(int64_t *)(this_ptr + 0x100) + 0x10);
      uVar15 = (uint64_t)*(uint *)(this_ptr + 0x160);
      iVar24 = 0;
      local_78 = (double)CONCAT44(local_78._4_4_,0xffffffff);
      do {
        if (0 < (int)uVar15) {
          lVar13 = 0;
          do {
            ___bzero();
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(this_ptr + 0x160));
        }
        uVar22 = *(void*)(this_ptr + 0x1e0);
        FUN_012b6e60(uVar22,*(void*)(this_ptr + 0x164),local_res18,lVar8);
        pVar10 = (void*)uVar22;
        local_7c = 0x3f800000;
        local_31 = '\0';
        if (*(char *)(this_ptr + 0x2a2) != '\0') {
          *(double *)(this_ptr + 0x238) = (double)lVar8 * param_4;
          *(double *)(this_ptr + 0x240) = (double)(*(int *)(this_ptr + 0x218) + lVar8) * param_4;
          lVar13 = *(int64_t *)(this_ptr + 0xe8);
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            lVar13 = *(int64_t *)(this_ptr + 0xe8);
            lVar7 = FUN_00e8b990();
            if (lVar7 != 0) {
              lVar13 = *(int64_t *)(lVar13 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
          }
          lVar7 = *(int64_t *)(lVar13 + 0x50);
          pvVar6 = _pthread_getspecific(pVar10);
          if (pvVar6 != (void *)0x0) {
            lVar7 = *(int64_t *)(lVar13 + 0x50);
            lVar13 = FUN_00e8b990();
            if (lVar13 != 0) {
              lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
            }
          }
          plVar17 = *(int64_t **)(lVar7 + 0x48);
          if ((g_027c0170 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            g_02790158 = FUN_007ef2d0();
            g_02790140 = "MUAudioSourcePrincipalItem";
            g_02790148 = 0x138;
            pVar10 = 0x10fe5c0;
            g_02790150 = FUN_010fe5c0;
            g_02790160 = 0;
            ram_0000000002790168 = 0;
            g_02790170 = 0;
            ram_0000000002790178 = 0;
            g_02790180 = 0;
            ram_0000000002790188 = 0;
            g_02790190 = 0;
            ram_0000000002790198 = 0;
            g_027901a0 = 0;
            ram_00000000027901a8 = 0;
            g_027901b0 = 0;
            ram_00000000027901b8 = 0;
            g_027901c0 = 0;
            ram_00000000027901c8 = 0;
            g_027901d0 = 0;
            ram_00000000027901d8 = 0;
            g_027901e0 = 0;
            ram_00000000027901e8 = 0;
            g_027901f0 = 0;
            ram_00000000027901f8 = 0;
            g_02790200 = 0;
            ___cxa_guard_release();
          }
          lVar13 = g_02802688;
          if (plVar17 != (int64_t *)0x0) {
            (**(code **)(*plVar17 + 0x360))();
            cVar3 = FUN_00e85ea0();
            lVar13 = g_02802688;
            if (cVar3 != '\0') {
              lVar13 = *(int64_t *)(lVar7 + 0x48);
            }
          }
          if (lVar13 != 0) {
            FUN_00d50b00();
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014ed7a0(*(void*)(this_ptr + 0x238),*(void*)(this_ptr + 0x240));
            FUN_00d50b20();
          }
        }
        FUN_012ba340(local_38,(int)((auVar27._0_8_ & 0xffffffff) >> 0x1f) + iVar16 >> 1,&local_7c,
                     &local_31);
        if ((local_31 != '\0') && (uVar1 = *(uint *)(this_ptr + 0x160), 0 < (int)uVar1)) {
          uVar15 = 0;
          do {
            (**(code **)(g_02786500 + 0x20))();
            uVar15 = uVar15 + 1;
          } while (uVar1 != uVar15);
        }
        uVar15 = (uint64_t)*(uint *)(this_ptr + 0x160);
        iVar5 = *(int *)(this_ptr + 0x218);
        iVar18 = local_78._0_4_ - iVar5 / 2;
        iVar26 = iVar18;
        iVar11 = -1;
        if (-1 < iVar18) {
          iVar26 = -1;
          iVar11 = iVar18;
        }
        iVar18 = iVar11 + iVar5 + iVar26 + 1;
        iVar11 = iVar5 - iVar18;
        if (iVar18 <= iVar5) {
          iVar11 = 0;
        }
        if (0 < (int)*(uint *)(this_ptr + 0x160)) {
          lVar13 = 0;
          do {
            (**(code **)(g_02786500 + 0x28))
                      (*(void*)(this_ptr + 0x1e0),iVar11 + iVar5 + iVar26 + 1);
            lVar13 = lVar13 + 1;
            uVar15 = (uint64_t)*(int *)(this_ptr + 0x160);
          } while (lVar13 < (int64_t)uVar15);
        }
        lVar8 = lVar8 + *(int *)(this_ptr + 0x214);
        local_78 = (double)CONCAT44(local_78._4_4_,local_78._0_4_ + *(int *)(this_ptr + 0x214));
        iVar24 = iVar24 + 1;
      } while (iVar24 != 5);
    }
    else {
      dVar21 = *(double *)(*(int64_t *)(this_ptr + 0x100) + 0x10);
      local_a0 = (dVar21 - local_78) + g_023b19a0;
      local_90 = (int64_t)dVar21 + -1;
      local_e0 = 0;
      local_42 = local_32;
      local_41 = local_33;
      local_40 = -NAN;
      iVar16 = 0;
      dVar21 = param_3 / g_023934d0;
      do {
        plVar17 = (int64_t *)*param_6;
        if (plVar17 != (int64_t *)0x0) {
          pvVar6 = _pthread_getspecific((void*)pcVar9);
          if (pvVar6 != (void *)0x0) {
            plVar17 = (int64_t *)*param_6;
            lVar8 = FUN_00e8b990();
            if (lVar8 != 0) {
              plVar17 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
          }
          dVar21 = (double)(**(code **)(*plVar17 + 0x3d8))(local_a0 * param_4,0);
        }
        local_78 = dVar21;
        if (iVar16 == 0) {
          iVar24 = FUN_00e7d850(dVar21);
          local_90 = local_90 - iVar24;
          *(double *)(this_ptr + 0x2b0) = local_78;
        }
        pcVar9 = (char *)FUN_00e7d850(local_78);
        iVar24 = (int)pcVar9;
        if (0 < *(int *)(this_ptr + 0x160)) {
          lVar8 = 0;
          do {
            ___bzero();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr + 0x160));
        }
        uVar22 = *local_res10;
        uVar28 = 0;
        FUN_012b6e60(*(void*)(this_ptr + 0x1e0),*(void*)(this_ptr + 0x164),
                     local_res18,local_90);
        local_d0[0] = 0;
        local_7c = local_7c & 0xffffff00;
        local_31 = '\x01';
        local_44 = 1;
        FUN_012b7100(local_41 != '\0',local_43,(float)(param_3 / local_78),local_38,iVar24,&local_e0
                     ,&local_31,&local_44,local_d0,&local_7c,uVar22,uVar28);
        if (0 < *(int *)(this_ptr + 0x160)) {
          lVar8 = 0;
          do {
            (**(code **)(g_02786500 + 0x28))();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr + 0x160));
        }
        if (iVar16 == 0) {
          uVar4 = FUN_00e7d850(local_78 / (double)*(int *)(this_ptr + 0x164));
          *(void*)(this_ptr + 0x210) = uVar4;
        }
        else if (iVar16 == 1) {
          uVar4 = FUN_00e7d850(local_78 / (double)*(int *)(this_ptr + 0x164));
          *(void*)(this_ptr + 0x214) = uVar4;
          *(double *)(this_ptr + 0x230) = local_78;
        }
        local_a0 = local_a0 + (double)iVar24;
        local_90 = local_90 + iVar24;
        local_40 = (float)((int)local_40 + iVar24);
        iVar16 = iVar16 + 1;
        dVar21 = local_78;
      } while (iVar16 != 3);
      iVar5 = *(int *)(this_ptr + 0x15c) / 2;
      iVar16 = *(int *)(this_ptr + 0x210);
      iVar24 = *(int *)(this_ptr + 0x214);
      if ((iVar5 < iVar16) || (iVar5 < iVar24)) {
        do {
          do {
            iVar16 = iVar16 / 2;
            iVar24 = iVar24 / 2;
          } while (iVar5 < iVar16);
        } while (iVar5 < iVar24);
        *(int *)(this_ptr + 0x210) = iVar16;
        *(int *)(this_ptr + 0x214) = iVar24;
      }
      if (0 < *(int *)(this_ptr + 0x160)) {
        lVar8 = 0;
        do {
          ___bzero();
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(this_ptr + 0x160));
      }
    }
  }
  else {
    if (*(char *)(this_ptr + 600) == '\0') {
      iVar16 = *(int *)(this_ptr + 0x218);
      iVar24 = iVar16 + 3;
      if (-1 < iVar16) {
        iVar24 = iVar16;
      }
      *(int *)(this_ptr + 0x210) = iVar24 >> 2;
      *(int *)(this_ptr + 0x214) = iVar24 >> 2;
      iVar24 = *(int *)(this_ptr + 0x160);
    }
    else {
      *(void*)(this_ptr + 0x120) = 0xffffffff;
      plVar17 = (int64_t *)*param_6;
      if (plVar17 == (int64_t *)0x0) {
        auVar23._0_8_ = param_3 / g_023934d0;
        auVar23._8_8_ = auVar23._0_8_;
      }
      else {
        dVar21 = *(double *)(*(int64_t *)(this_ptr + 0x100) + 0x10) - local_78;
        local_78 = dVar21 * param_4;
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          plVar17 = (int64_t *)*param_6;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar17 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        local_78 = (double)(**(code **)(*plVar17 + 0x3d8))(local_78,0);
        dVar21 = dVar21 + local_78;
        plVar17 = (int64_t *)*param_6;
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          plVar17 = (int64_t *)*param_6;
          lVar8 = FUN_00e8b990();
          if (lVar8 != 0) {
            plVar17 = (int64_t *)plVar17[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
        }
        auVar23._0_8_ = (double)(**(code **)(*plVar17 + 0x3d8))(dVar21 * param_4,0);
        auVar23._8_8_ = local_78;
      }
      auVar25._0_8_ = (double)*(int *)(this_ptr + 0x164);
      auVar25._8_8_ = auVar25._0_8_;
      auVar27 = divpd(auVar23,auVar25);
      iVar24 = (int)(auVar27._0_8_ + g_0240d120);
      auVar27._0_8_ = CONCAT44((int)(auVar27._8_8_ + _UNK_0240d128),iVar24);
      auVar27._8_8_ = 0;
      uVar12 = extractps(auVar27,1);
      uVar22 = extractps(auVar27,1);
      *(void*)(this_ptr + 0x210) = uVar22;
      *(int *)(this_ptr + 0x214) = iVar24;
      *(int64_t *)(this_ptr + 0x230) = auVar23._0_8_;
      iVar16 = *(int *)(this_ptr + 0x15c) / 2;
      if ((iVar16 < (int)uVar12) || (iVar16 < iVar24)) {
        do {
          do {
            iVar24 = auVar27._8_4_;
            iVar5 = auVar27._12_4_;
            iVar11 = auVar27._0_4_ / 2;
            iVar26 = auVar27._4_4_ / 2;
            auVar27._0_8_ = CONCAT44(iVar26,iVar11);
            auVar27._8_4_ = iVar24 / 2;
            auVar27._12_4_ = iVar5 / 2;
          } while (iVar16 < iVar26);
        } while (iVar16 < iVar11);
        *(int *)(this_ptr + 0x210) = iVar26;
        *(int *)(this_ptr + 0x214) = iVar11;
      }
      iVar16 = (int)(auVar27._0_8_ >> 0x20) + (int)auVar27._0_8_;
      iVar24 = *(int *)(this_ptr + 0x160);
    }
    if (0 < iVar24) {
      lVar8 = 0;
      do {
        ___bzero();
        *(int64_t *)(*(int64_t *)(this_ptr + 0x1f8) + lVar8 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x150) + lVar8 * 8) + -4;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(this_ptr + 0x160));
    }
    FUN_012b6e60(*(void*)(this_ptr + 0x1f8),(int64_t)*(int *)(this_ptr + 0x164),
                 local_res18,
                 (int64_t)*(double *)(*(int64_t *)(this_ptr + 0x100) + 0x10) -
                 (int64_t)*(int *)(this_ptr + 0x164));
    fVar19 = g_0240d160;
    if (((*(int *)(*(int64_t *)(this_ptr + 0xf0) + 0xc) == 0) &&
        (lVar8 = local_res8 - (int64_t)*(double *)(*(int64_t *)(this_ptr + 0x100) + 0x10),
        -1 < lVar8)) && (lVar8 < iVar16)) {
      local_b8 = (int)lVar8;
      if (0 < iVar16 - local_b8) {
        uVar1 = *(uint *)(this_ptr + 0x160);
        if ((int)uVar1 < 1) {
          *(void*)(this_ptr + 0x264) = 0;
          return;
        }
        lVar13 = *local_88;
        auVar27._0_8_ = 0;
        fVar20 = g_02390124;
        do {
          lVar7 = lVar8 + auVar27._0_8_;
          uVar15 = 0;
          if (2 < (uint64_t)uVar1 - 1) {
            do {
              lVar2 = *(int64_t *)(lVar13 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              lVar2 = *(int64_t *)(lVar13 + 8 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              lVar2 = *(int64_t *)(lVar13 + 0x10 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              lVar2 = *(int64_t *)(lVar13 + 0x18 + uVar15 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              uVar15 = uVar15 + 4;
            } while ((uVar1 & 0xfffffffc) != uVar15);
          }
          if ((uint64_t)(uVar1 & 3) != 0) {
            uVar14 = 0;
            do {
              lVar2 = *(int64_t *)(lVar13 + uVar15 * 8 + uVar14 * 8);
              *(float *)(lVar2 + lVar7 * 4) = *(float *)(lVar2 + lVar7 * 4) * fVar20;
              uVar14 = uVar14 + 1;
            } while ((uVar1 & 3) != uVar14);
          }
          fVar20 = fVar20 * fVar19;
          auVar27._0_8_ = auVar27._0_8_ + 1;
        } while (auVar27._0_8_ != (uint)(iVar16 - local_b8));
      }
    }
    *(void*)(this_ptr + 0x264) = 0;
    if (0 < *(int *)(this_ptr + 0x160)) {
      lVar8 = 0;
      do {
        fVar19 = (float)(**(code **)(g_02786500 + 0x10))();
        if (g_02394274 < fVar19) {
          *(void*)(this_ptr + 0x264) = 1;
          return;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(this_ptr + 0x160));
    }
  }
  return;
}

