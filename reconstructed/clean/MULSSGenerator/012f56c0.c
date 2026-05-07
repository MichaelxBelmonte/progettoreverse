// Function: FUN_012f56c0
// Address: 012f56c0
// Size: 5254 bytes
// Class: MULSSGenerator

void FUN_012f56c0(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  void *pvVar9;
  int64_t *plVar10;
  undefined7 uVar12;
  int64_t lVar11;
  void* pVar13;
  int iVar14;
  uint32_t unaff_ESI;
  int64_t *this_ptr;
  uint8_t uVar15;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  uint32_t local_e0;
  int local_dc;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  uint64_t local_b0;
  void*local_a8;
  int64_t local_a0;
  int64_t local_98;
  char local_90 [8];
  int64_t local_88;
  uint64_t local_80;
  int local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_58;
  char local_50;
  int local_40;
  
  *(int *)((int64_t)this_ptr + 0x6c) = *(int *)((int64_t)this_ptr + 0x6c) + 1;
  local_e0 = unaff_ESI;
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar4 = g_02572370;
  local_b8 = puVar7;
  (*g_02572370)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar4)();
  local_a8 = puVar7;
  local_68 = FUN_012f75b0();
  local_a0 = FUN_012f7690();
  if (this_ptr[0xb] == 0) {
    local_58 = this_ptr[0x16];
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    FUN_00d243f0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar6 = this_ptr[0x16];
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar8 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        lVar11 = *(int64_t *)(lVar6 + 0x10);
        local_58 = *(int64_t *)(lVar11 + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar11);
        pVar13 = (void*)lVar11;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_90[0] == '\0') {
          if (local_98 == 0) goto LAB_012f5950;
          FUN_00d50b00();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
LAB_012f58d0:
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012754d0(local_68,local_a0);
          if (cVar5 == '\0') {
LAB_012f5a20:
            local_90[0] = '\0';
            local_98 = local_58;
            FUN_00d21140();
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_0129b690(local_68,local_a0);
            if (cVar5 == '\0') goto LAB_012f5a20;
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            lVar11 = local_98;
            lVar8 = this_ptr[0xb];
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (lVar11 != lVar8) goto LAB_012f5a20;
          }
          FUN_00d50b20();
        }
        else {
          if (local_98 != 0) goto LAB_012f58d0;
LAB_012f5950:
          local_90[0] = '\0';
          local_98 = local_58;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_001159b0();
      param_1 = (void*)lVar6;
    }
    lVar6 = local_58;
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e9900(local_68,local_a0);
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_d0 = 0;
    lVar8 = this_ptr[0x16];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar8;
    FUN_012f7770();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = local_58;
    if (local_58 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_70 = lVar6;
      local_40 = -1;
LAB_012f5ba3:
      lVar8 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (local_40 < *(int *)(lVar6 + 0xc)) {
        lVar11 = *(int64_t *)(lVar6 + 0x10);
        local_58 = *(int64_t *)(lVar11 + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar11);
        pVar13 = (void*)lVar11;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_0129b690(local_68,local_a0);
        if (cVar5 != '\0') {
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar8 = local_98;
          if (local_90[0] == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
              if ((local_90[0] != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012f5cd0;
            }
          }
          else if (local_98 != 0) {
LAB_012f5cd0:
            local_90[0] = '\0';
            local_98 = 0;
            local_88 = lVar8;
            local_80 = 0xffffffff;
            local_78 = 0;
            while( true ) {
              lVar8 = (int64_t)(int)local_80;
              iVar14 = (int)local_80 + 1;
              local_80 = CONCAT44(local_80._4_4_,iVar14);
              if (*(int *)(local_88 + 0xc) <= iVar14) break;
              local_c8 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar8 * 8);
              local_c0 = '\0';
              local_98 = local_c8;
              cVar5 = FUN_00d7a850();
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_001159b0();
                FUN_00d50b20();
                goto LAB_012f5ba3;
              }
              if (local_80._4_4_ != 0) {
                if (local_80._4_4_ < 1) {
                  iVar14 = -local_80._4_4_;
                }
                else {
                  local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                  FUN_00d23690();
                  local_78 = local_78 + local_80._4_4_;
                  iVar14 = 0;
                }
                local_80 = CONCAT44(iVar14,(int)local_80);
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          local_90[0] = '\0';
          local_98 = local_58;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_012f5ba3;
      }
      FUN_001159b0();
      lVar8 = local_70;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  puVar7 = local_b8;
  local_dc = *(int *)((int64_t)local_b8 + 0xc);
  pVar13 = 0;
  if (local_dc != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)puVar7 + 0xc) <= local_40) break;
      lVar8 = puVar7[2];
      local_58 = *(int64_t *)(lVar8 + 8 + lVar6 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar8);
      pVar13 = (void*)lVar8;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar6 = local_98;
      local_c8 = CONCAT71(local_c8._1_7_,local_90[0]);
      plVar10 = (int64_t *)local_90;
      if (local_90[0] == '\0') {
        plVar10 = &local_c8;
      }
      *(void*)plVar10 = 0;
      if ((local_90[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0129a1f0();
      if (((char)local_c8 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar13 = (void*)puVar7;
    FUN_012edae0();
  }
  if (*(int *)((int64_t)local_a8 + 0xc) == 0) {
    local_b0 = 0;
    local_70 = 0;
  }
  else {
    FUN_00d51d20();
    local_70 = local_58;
    if (local_58 == 0) {
      local_b0 = 0;
      if (local_50 != '\0') {
        local_b0 = 0;
      }
    }
    else {
      uVar12 = (undefined7)((uint64_t)local_58 >> 8);
      local_b0 = CONCAT71(uVar12,1);
      if (local_50 == '\0') {
        local_b0 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
    }
    FUN_01298e30();
    lVar6 = local_70;
    if (local_70 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar8 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar8 * 8);
        lVar8 = local_a8[2];
        lVar11 = *(int64_t *)(lVar8 + (int64_t)local_40 * 8);
        pvVar9 = _pthread_getspecific((void*)lVar8);
        pVar13 = (void*)lVar8;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        lVar8 = local_98;
        local_68 = lVar11;
        if ((((local_90[0] == '\0') && (local_98 != 0)) && (FUN_00d50b00(), local_90[0] != '\0')) &&
           (local_98 != 0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        lVar11 = local_98;
        if (local_90[0] == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_012f62f1;
          }
        }
        else if (local_98 != 0) {
LAB_012f62f1:
          local_90[0] = '\0';
          local_98 = 0;
          local_a0 = lVar11;
          local_88 = lVar11;
          local_80 = 0xffffffff;
          local_78 = 0;
          local_80._4_4_ = 0;
          while( true ) {
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar14 = -local_80._4_4_;
              }
              else {
                iVar14 = (int)local_80 - local_80._4_4_;
                local_80 = CONCAT44(local_80._4_4_,iVar14);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar14 = 0;
              }
              local_80 = CONCAT44(iVar14,(int)local_80);
            }
            lVar11 = (int64_t)(int)local_80;
            iVar14 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar14);
            if (*(int *)(local_88 + 0xc) <= iVar14) break;
            local_98 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + 8 + lVar11 * 8);
            lVar11 = *(int64_t *)(lVar8 + 0x10);
            lVar2 = *(int64_t *)(lVar11 + ((int64_t)iVar14 + (int64_t)local_78) * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            pVar13 = (void*)lVar11;
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            lVar11 = local_c8;
            if (((local_c0 == '\0') && (local_c8 != 0)) &&
               ((FUN_00d50b00(), local_c0 != '\0' && (local_c8 != 0)))) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef3f0();
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          pVar13 = (void*)lVar11;
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          local_68 = *(int64_t *)(local_68 + 0x20 + (uint64_t)(*(uint *)(lVar11 + 0x154) & 1) * 8)
          ;
        }
        FUN_0129a010();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
    lVar6 = local_70;
    FUN_012e6c30();
    pVar13 = (void*)lVar6;
    FUN_012e7fb0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_012e7fb0();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150ddd0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = local_70;
  if ((char)local_e0 == '\0') {
    local_68 = this_ptr[0x16];
    if (local_68 != 0) {
      uVar15 = 1;
      FUN_00d50b00();
      goto LAB_012f669d;
    }
    local_68 = 0;
    local_a0 = CONCAT71(local_a0._1_7_,1);
joined_r0x012f68e5:
    bVar3 = true;
joined_r0x012f68e5:
    if (local_dc == 0) goto LAB_012f6949;
  }
  else {
    if (((char)local_b0 == '\0') || (local_70 == 0)) {
      if (local_70 == 0) {
        local_a0 = CONCAT71(local_a0._1_7_,(char)local_b0);
        local_68 = local_70;
        goto joined_r0x012f68e5;
      }
      local_a0 = CONCAT71(local_a0._1_7_,(char)local_b0);
      iVar14 = *(int *)(local_70 + 0xc);
    }
    else {
      FUN_00d50b00();
      uVar15 = (uint8_t)local_b0;
      local_68 = lVar6;
LAB_012f669d:
      local_a0 = CONCAT71(local_a0._1_7_,uVar15);
      iVar14 = *(int *)(local_68 + 0xc);
      lVar6 = local_68;
    }
    local_68 = lVar6;
    if (iVar14 == 0) {
      bVar3 = false;
      goto joined_r0x012f68e5;
    }
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar8 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0129b6c0();
    }
    FUN_001159b0();
    local_110 = 0;
    local_108 = '\0';
    plVar10 = &local_110;
    FUN_01271d60(plVar10,1);
    pVar13 = (void*)plVar10;
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    local_100 = local_68;
    local_f8 = '\0';
    local_f0 = local_58;
    local_e8 = '\0';
    FUN_0127e4d0(g_023b67d8);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    bVar3 = false;
  }
  *(void*)((int64_t)this_ptr + 0x6b) = 0;
  (**(code **)(*this_ptr + 0x370))();
LAB_012f6949:
  lVar6 = this_ptr[0xb];
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    lVar6 = this_ptr[0xb];
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(int64_t *)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  iVar14 = *(int *)(local_58 + 0xc);
  lVar8 = this_ptr[0x17];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  iVar1 = *(int *)(local_98 + 0xc);
  if (local_90[0] != '\0') {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar14 != iVar1) {
    pvVar9 = _pthread_getspecific(pVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (this_ptr[0x17] != local_58) {
      FUN_00d64850();
      lVar8 = this_ptr[0x17];
      if (lVar8 != local_58) {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        this_ptr[0x17] = local_58;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar8 = FUN_00e8b990();
  if (lVar8 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)((int64_t)this_ptr + 0x6c) = *(int *)((int64_t)this_ptr + 0x6c) + -1;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_a0 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

