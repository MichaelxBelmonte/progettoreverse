// Function: FUN_014d26c0
// Address: 014d26c0
// Size: 2940 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

void FUN_014d26c0(void* param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void* pVar10;
  int64_t **pplVar11;
  int64_t *plVar12;
  char *pcVar13;
  int64_t *plVar14;
  int iVar15;
  int64_t *this_ptr;
  int64_t *plVar16;
  undefined7 uVar18;
  uint64_t uVar17;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float fVar21;
  char local_a8;
  undefined7 uStack_a7;
  char local_a0;
  int local_98;
  float local_94;
  int64_t *local_90;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  uint64_t local_50;
  int64_t *local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  (**(code **)(*this_ptr + 0x378))();
  plVar4 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == (int64_t *)0x0) {
    return;
  }
  local_80 = plVar4;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  plVar4 = local_78;
  if ((((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this_ptr + 1000))();
  if (cVar5 == '\0') goto LAB_014d3176;
  FUN_014bc340();
  local_88 = local_78;
  if (((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_70[0] != '\0' && (local_78 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_014bc420();
  local_90 = local_78;
  if (((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_70[0] != '\0' && (local_78 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this_ptr + 1000))();
  local_98 = -1;
  if ((cVar5 != '\0') && (lVar8 = **(int64_t **)(this_ptr[0x21] + 0x10), lVar8 != 0)) {
    FUN_00d50b00();
    local_98 = *(int *)(lVar8 + 0xc);
    FUN_00d50b20();
  }
  iVar6 = FUN_014c2f80();
  local_94 = (float)(**(code **)(*this_ptr + 0x3e0))();
  cVar5 = (**(code **)(*this_ptr + 1000))();
  if ((cVar5 != '\0') && (**(int64_t **)(this_ptr[0x21] + 0x10) != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this_ptr + 1000))();
  if (cVar5 != '\0') {
    FUN_00d23340();
    plVar12 = local_78;
    pcVar13 = &local_a8;
    if (local_70[0] != '\0') {
      pcVar13 = local_70;
    }
    local_a8 = local_70[0];
    *pcVar13 = '\0';
    if ((local_70[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 == '\0') && (plVar12 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar4 == (int64_t *)0x0) {
    local_50 = 0;
    local_40 = 0;
    local_48 = (int64_t *)0x0;
    bVar2 = true;
LAB_014d30af:
    bVar1 = 1;
    local_38 = (int64_t *)0x0;
  }
  else {
    local_98 = local_98 + -1;
    local_70[0] = '\0';
    local_78 = (int64_t *)0x0;
    local_68 = plVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_50 = 0;
    local_38 = (int64_t *)0x0;
    local_40 = 0;
    local_48 = (int64_t *)0x0;
    local_60._4_4_ = 0;
    fVar19 = g_0241fd58;
    fVar21 = g_0241fd58;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar15 = -local_60._4_4_;
        }
        else {
          iVar15 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar15);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar15 = 0;
        }
        local_60 = CONCAT44(iVar15,(int)local_60);
      }
      lVar8 = (int64_t)(int)local_60;
      iVar15 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar15);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar15) break;
      plVar12 = *(int64_t **)(local_68[2] + 8 + lVar8 * 8);
      local_78 = plVar12;
      if ((g_027c0170 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        g_02790158 = FUN_007ef2d0();
        g_02790140 = "MUAudioSourcePrincipalItem";
        g_02790148 = 0x138;
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
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar12 != (int64_t *)0x0) {
        (**(code **)(*plVar12 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar11 = &local_78;
        if (cVar5 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      plVar12 = *pplVar11;
      if ((plVar12 != (int64_t *)0x0) && (plVar12 != this_ptr)) {
        pvVar7 = _pthread_getspecific((void*)pplVar11);
        pVar10 = (void*)pplVar11;
        plVar14 = plVar12;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        cVar5 = (**(code **)(*plVar14 + 1000))();
        uVar17 = local_40;
        plVar14 = local_48;
        if (cVar5 != '\0') {
          if (local_88 == (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc420();
            if (CONCAT71(uStack_a7,local_a8) == 0) {
              pvVar7 = _pthread_getspecific(pVar10);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar15 = FUN_014c2f80();
              if (iVar15 != local_98) goto LAB_014d2be3;
              pvVar7 = _pthread_getspecific(pVar10);
              plVar16 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar16 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar20 = (float)(**(code **)(*plVar16 + 0x3e0))();
              if (fVar19 <= (float)((uint)(fVar20 - local_94) & g_02390140)) goto LAB_014d2be3;
              bVar3 = true;
              bVar2 = true;
            }
            else {
LAB_014d2be3:
              bVar3 = false;
              bVar2 = false;
            }
            if ((local_a0 != '\0') && (bVar2 = bVar3, CONCAT71(uStack_a7,local_a8) != 0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              pvVar7 = _pthread_getspecific(pVar10);
              plVar16 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar16 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar19 = (float)(**(code **)(*plVar16 + 0x3e0))();
              fVar19 = (float)((uint)(fVar19 - local_94) & g_02390140);
              uVar18 = (undefined7)(uVar17 >> 8);
              cVar5 = (char)uVar17;
              if (plVar12 == plVar14) {
                if (cVar5 == '\0') {
                  uVar17 = CONCAT71(uVar18,1);
                  FUN_00d50b00();
                }
              }
              else {
                FUN_00d50b00();
                uVar17 = CONCAT71(uVar18,1);
                if ((cVar5 == '\0') || (local_48 == (int64_t *)0x0)) {
                  local_48 = plVar12;
                }
                else {
                  FUN_00d50b20();
                  local_48 = plVar12;
                }
              }
            }
          }
          else {
            uVar17 = local_40 & 0xffffffff;
          }
          if (local_90 == (int64_t *)0x0) {
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc340();
            if (CONCAT71(uStack_a7,local_a8) == 0) {
              pvVar7 = _pthread_getspecific(pVar10);
              plVar14 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              cVar5 = (**(code **)(*plVar14 + 1000))();
              iVar15 = -1;
              if ((cVar5 != '\0') && (lVar8 = **(int64_t **)(plVar14[0x21] + 0x10), lVar8 != 0)) {
                FUN_00d50b00();
                iVar15 = *(int *)(lVar8 + 0xc);
                FUN_00d50b20();
              }
              if (iVar15 != iVar6 + 1) goto LAB_014d2ddd;
              pvVar7 = _pthread_getspecific(pVar10);
              plVar14 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar20 = (float)(**(code **)(*plVar14 + 0x3e0))();
              if (fVar21 <= (float)((uint)(fVar20 - local_94) & g_02390140)) goto LAB_014d2ddd;
              bVar3 = true;
              bVar2 = true;
            }
            else {
LAB_014d2ddd:
              bVar3 = false;
              bVar2 = false;
            }
            if ((local_a0 != '\0') && (bVar2 = bVar3, CONCAT71(uStack_a7,local_a8) != 0)) {
              FUN_00d50b20();
            }
            if (bVar2) {
              pvVar7 = _pthread_getspecific(pVar10);
              plVar14 = plVar12;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar14 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              uVar9 = (**(code **)(*plVar14 + 0x3e0))();
              fVar21 = (float)((uint)(extraout_XMM0_Da - local_94) & g_02390140);
              if (plVar12 == local_38) {
                if ((char)local_50 == '\0') {
                  local_50 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                uVar9 = FUN_00d50b00();
                if (((char)local_50 != '\0') && (local_38 != (int64_t *)0x0)) {
                  uVar9 = FUN_00d50b20();
                }
                local_50 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
                local_38 = plVar12;
              }
            }
          }
          local_40 = uVar17 & 0xffffffff;
        }
      }
    }
    plVar12 = local_68;
    FUN_01481520();
    pVar10 = (void*)plVar12;
    bVar2 = true;
    if (local_48 != (int64_t *)0x0) {
      cVar5 = FUN_014d36f0();
      pVar10 = (void*)plVar12;
      if (cVar5 == '\0') {
        bVar2 = false;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar12 = local_48;
        }
        pVar10 = (void*)plVar12;
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_014bc360();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_014bc2e0();
        bVar2 = false;
      }
    }
    if (local_38 == (int64_t *)0x0) goto LAB_014d30af;
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar10 = (void*)local_38;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = FUN_014d36f0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      bVar1 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_014bc2e0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_014bc360();
      bVar1 = 0;
    }
  }
  plVar12 = local_88;
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!(bool)((char)local_50 == '\0' | bVar1)) {
    FUN_00d50b20();
  }
  if ((char)local_40 != '\0' && !bVar2) {
    FUN_00d50b20();
  }
LAB_014d3176:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

