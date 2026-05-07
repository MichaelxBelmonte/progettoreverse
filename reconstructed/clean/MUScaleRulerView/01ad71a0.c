// Function: FUN_01ad71a0
// Address: 01ad71a0
// Size: 3181 bytes
// Class: MUScaleRulerView

void FUN_01ad71a0(void)

{
  char cVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint64_t uVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *plVar11;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  float fVar14;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  uint32_t local_e0;
  uint32_t local_dc;
  int64_t *local_d8;
  int64_t local_d0;
  int64_t *local_c8;
  char local_c0;
  int local_b8;
  uint32_t uStack_b4;
  char local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_90;
  int local_88;
  float local_84;
  char local_70;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0) {
    local_58 = (int64_t *)0x0;
    bVar5 = false;
    local_40 = (int64_t *)0x0;
    local_a0 = 0;
    local_90 = 0;
    local_48 = (int64_t *)0x0;
    local_70 = '\0';
    goto LAB_01ad7437;
  }
  FUN_01a1d6e0();
  uVar7 = (**(code **)(*(int64_t *)CONCAT44(uStack_b4,local_b8) + 0xe70))();
  if (local_40 == (int64_t *)0x0) {
    bVar3 = true;
    local_a0 = 0;
  }
  else if (local_38 == '\0') {
    uVar7 = FUN_00d50b00();
    bVar3 = false;
    local_a0 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
  }
  else {
    local_a0 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    local_38 = '\0';
    bVar3 = false;
  }
  uVar7 = local_a0;
  if ((local_b0 != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (local_40 == (int64_t *)0x0 || bVar3) {
    local_90 = 0;
  }
  else {
    local_90 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  iVar6 = (**(code **)(*local_40 + 0xd20))();
  if (iVar6 == 0) {
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ad73d0:
    local_70 = '\0';
    local_48 = (int64_t *)0x0;
    bVar5 = false;
    local_58 = (int64_t *)0x0;
  }
  else {
    cVar1 = *(char *)(this_ptr + 0x1da);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') goto LAB_01ad73d0;
    FUN_01a1d6e0();
    (**(code **)(*(int64_t *)CONCAT44(uStack_b4,local_b8) + 0xe30))();
    local_58 = local_40;
    plVar11 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar4 = true;
      local_58 = (int64_t *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
      bVar5 = true;
    }
    else {
      local_38 = '\0';
      bVar5 = true;
      bVar4 = false;
    }
    pVar10 = (void*)plVar11;
    if ((local_b0 != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 == (int64_t *)0x0) || (*(int *)((int64_t)local_58 + 0xc) == 0)) {
      if (local_40 == (int64_t *)0x0) {
        local_70 = '\0';
        local_48 = (int64_t *)0x0;
      }
      else {
        if (!bVar3) {
          FUN_00d50b00();
        }
        local_70 = (char)local_a0;
        local_48 = local_40;
      }
    }
    else if (bVar4) {
      local_70 = '\0';
      local_48 = local_58;
    }
    else {
      FUN_00d50b00();
      local_70 = '\x01';
      local_48 = local_58;
    }
    uVar13 = FUN_01a1d6e0();
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    FUN_01a296f0(uVar13,0);
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = *(int64_t *)(this_ptr + 0x2a0);
    if (((local_d0 != 0) && (local_48 != (int64_t *)0x0)) &&
       (*(int *)((int64_t)local_48 + 0xc) != 0)) {
      FUN_00d50b00();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017402f0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_d8 = local_40;
      FUN_01a1d6e0();
      local_dc = (**(code **)(*local_40 + 0xd20))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((int64_t)local_48 + 0xc)) {
        lVar12 = 0;
        do {
          local_88 = 0;
          lVar2 = *(int64_t *)(local_48[2] + lVar12 * 8);
          plVar11 = local_48;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          pVar10 = (void*)plVar11;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e930();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b00();
          }
          bVar3 = true;
          if (*arg1 == 0) {
LAB_01ad78e0:
            local_a8 = 0;
LAB_01ad78f2:
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar14 = (float)FUN_0125a2c0();
            bVar4 = true;
            local_84 = fVar14;
            if (!bVar3) goto LAB_01ad7ae1;
            if (local_40 != (int64_t *)0x0) {
              bVar4 = true;
              pvVar8 = _pthread_getspecific(pVar10);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar10 = (void*)local_40;
              }
              local_88 = FUN_0152e220();
            }
          }
          else {
            local_158 = '\0';
            local_160 = lVar2;
            uVar13 = FUN_007a2fc0(uVar13,&local_160);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            if (local_40 == (int64_t *)0x0) goto LAB_01ad78e0;
            local_148 = '\0';
            local_150 = lVar2;
            uVar13 = FUN_007a2fc0(uVar13,&local_150);
            local_60 = local_40;
            plVar11 = local_40;
            if (local_40 == (int64_t *)0x0) {
              local_a8 = 0;
              local_60 = (int64_t *)0x0;
            }
            else if (local_38 == '\0') {
              uVar7 = FUN_00d50b00();
              local_a8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
              uVar13 = extraout_XMM0_Da;
            }
            else {
              local_38 = '\0';
              local_a8 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
            }
            pVar10 = (void*)plVar11;
            if ((local_148 != '\0') && (local_150 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = g_027e3ba0;
            if (local_60 == (int64_t *)0x0) goto LAB_01ad78f2;
            if (g_027e3ba0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_140 = lVar9;
            local_138 = '\x01';
            uVar13 = FUN_000175c0(uVar13,&local_140);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = g_027e3ba0;
            if (local_40 == (int64_t *)0x0) {
              bVar3 = false;
              goto LAB_01ad78f2;
            }
            if (g_027e3ba0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_130 = lVar9;
            local_128 = '\x01';
            FUN_000175c0(uVar13,&local_130);
            fVar14 = (float)FUN_00d459e0();
            local_84 = fVar14;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              fVar14 = (float)FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              fVar14 = (float)FUN_00d50b20();
            }
LAB_01ad7ae1:
            lVar9 = g_027e3bb8;
            if (g_027e3bb8 != 0) {
              fVar14 = (float)FUN_00d50b00();
            }
            local_120 = lVar9;
            local_118 = '\x01';
            uVar13 = FUN_000175c0(fVar14,&local_120);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = g_027e3bb8;
            if (local_40 == (int64_t *)0x0) {
              bVar4 = false;
            }
            else {
              if (g_027e3bb8 != 0) {
                uVar13 = FUN_00d50b00();
              }
              local_110 = lVar9;
              local_108 = '\x01';
              FUN_000175c0(uVar13,&local_110);
              local_88 = FUN_00d45870();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              bVar4 = false;
            }
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = FUN_0173fd40(local_84);
          iVar6 = local_88;
          local_b8 = local_b8 - local_88;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_100 = local_d8;
          local_f8 = '\0';
          pVar10 = 0;
          local_84 = (float)FUN_0173fdf0(local_84 - (float)(iVar6 * 100),local_e0,g_02390d00,
                                         local_b8);
          if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            pvVar8 = _pthread_getspecific(pVar10);
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pVar10 = (void*)local_40;
            }
            FUN_0152df60();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a580(local_84);
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((char)local_a8 != '\0' && !bVar4) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)((int64_t)local_48 + 0xc));
      }
      if (local_d8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_f0 = local_40;
  local_e8 = '\0';
  FUN_012879b0();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0x1da) == '\0') {
    *(void*)(this_ptr + 0x1d8) = 0;
  }
  *(void*)(this_ptr + 0x1da) = 0;
LAB_01ad7437:
  FUN_00d50b20();
  if ((local_70 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

