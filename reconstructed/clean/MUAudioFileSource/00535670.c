// Function: FUN_00535670
// Address: 00535670
// Size: 2212 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00535670(void* param_1)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  void *pvVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  undefined7 uVar12;
  undefined7 extraout_var;
  void* pVar13;
  int64_t **pplVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  char unaff_SIL;
  int64_t this_ptr;
  uint64_t uVar17;
  uint32_t uVar18;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  uint64_t local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar10 = *(int64_t *)(this_ptr + 0x110);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d590();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  local_68 = plVar1;
  FUN_00757c60();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_012cb480();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  uVar11 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
  bVar3 = true;
  bVar2 = true;
  if (((plVar5 == (int64_t *)0x0) || (plVar1 == (int64_t *)0x0)) ||
     (uVar11 = (uint64_t)*(uint *)((int64_t)plVar5 + 0xc),
     (int)*(uint *)((int64_t)plVar5 + 0xc) < 1)) {
    plVar16 = (int64_t *)0x0;
    cVar6 = '\0';
  }
  else {
    uVar17 = 0;
    local_58 = (int64_t *)0x0;
    local_60 = (int64_t *)0x0;
    local_70 = 0;
    do {
      plVar1 = *(int64_t **)(plVar5[2] + uVar17 * 8);
      local_40 = plVar1;
      local_38 = '\0';
      uVar9 = 0;
      if ((g_026fdd70 == '\0') && (uVar9 = ___cxa_guard_acquire(), (int)uVar9 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        g_026e3230 = FUN_00136df0;
        g_026e3240 = 0;
        ram_00000000026e3248 = 0;
        g_026e3250 = 0;
        ram_00000000026e3258 = 0;
        g_026e3260 = 0;
        ram_00000000026e3268 = 0;
        g_026e3270 = 0;
        ram_00000000026e3278 = 0;
        g_026e3280 = 0;
        ram_00000000026e3288 = 0;
        g_026e3290 = 0;
        ram_00000000026e3298 = 0;
        g_026e32a0 = 0;
        ram_00000000026e32a8 = 0;
        g_026e32b0 = 0;
        ram_00000000026e32b8 = 0;
        g_026e32c0 = 0;
        ram_00000000026e32c8 = 0;
        g_026e32d0 = 0;
        ram_00000000026e32d8 = 0;
        g_026e32e0 = 0;
        uVar9 = ___cxa_guard_release();
      }
      pplVar14 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar9 = FUN_00e85ea0();
        pplVar14 = &local_40;
        if ((char)uVar9 == '\0') {
          pplVar14 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar14;
      if (*(char *)(pplVar14 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar14 + 1) = 0;
      }
      pVar13 = (void*)pplVar14;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        pvVar7 = _pthread_getspecific(pVar13);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        plVar16 = local_40;
        if (local_40 == (int64_t *)0x0) {
          local_80 = 0;
          cVar6 = '\0';
          plVar4 = (int64_t *)0x0;
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          else {
            local_38 = '\0';
          }
          uVar8 = (**(code **)(*plVar16 + 0x398))();
          cVar6 = (char)uVar8;
          local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          plVar4 = plVar16;
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          (**(code **)(*plVar4 + 0x3f0))();
          plVar15 = local_40;
          if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_78 = plVar15;
          cVar6 = (**(code **)(*local_68 + 0x50))();
          plVar15 = local_78;
          if (cVar6 == '\0') {
            if (local_60 == (int64_t *)0x0) {
              (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
              FUN_00cb1f10();
              local_60 = local_40;
              plVar15 = local_40;
              if (local_40 == (int64_t *)0x0) {
                local_60 = (int64_t *)0x0;
              }
              else if (local_38 == '\0') {
                uVar8 = FUN_00d50b00();
                local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
                local_70 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
              }
              pVar13 = (void*)plVar15;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              FUN_00db3260();
            }
            if (unaff_SIL == '\0') {
              pvVar7 = _pthread_getspecific(pVar13);
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              local_58 = plVar1;
              uVar18 = (**(code **)(*plVar4 + 0x388))();
              local_90 = local_50;
              local_88 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_88 = '\x01';
              (**(code **)(*local_68 + 0x400))(uVar18,&local_90);
              plVar1 = local_40;
              local_98 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              plVar15 = local_78;
              local_98 = '\x01';
              local_a0 = plVar1;
              uVar8 = FUN_0123bf50();
              if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar8 = FUN_00d50b20();
              }
            }
            else {
              pvVar7 = _pthread_getspecific(pVar13);
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                plVar1 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
              }
              local_58 = plVar1;
              uVar18 = (**(code **)(*plVar4 + 0x388))();
              local_b0 = local_50;
              local_a8 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_a8 = '\x01';
              (**(code **)(*local_68 + 0x400))(uVar18,&local_b0);
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              plVar15 = local_78;
              uVar8 = FUN_0123bf80();
              if (plVar1 != (int64_t *)0x0) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                uVar8 = FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                uVar8 = FUN_00d50b20();
              }
            }
            local_58 = (int64_t *)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          }
          if (plVar15 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar9 = FUN_00d50b20();
        if ((plVar16 != (int64_t *)0x0) && (plVar4 != (int64_t *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
      }
      plVar16 = local_60;
      plVar1 = local_68;
      uVar17 = uVar17 + 1;
    } while (uVar11 != uVar17);
    cVar6 = (char)local_70;
    if (((uint64_t)local_58 & 1) != 0) {
      FUN_00b34cb0();
      uVar9 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        uVar9 = FUN_00d50b20();
      }
    }
    if (plVar16 == (int64_t *)0x0) {
      plVar16 = (int64_t *)0x0;
      uVar11 = uVar9;
    }
    else {
      FUN_00db3270();
      uVar11 = FUN_00db3760();
      bVar3 = false;
      bVar2 = false;
    }
  }
  if (plVar5 != (int64_t *)0x0) {
    uVar11 = FUN_00d50b20();
    bVar2 = bVar3;
  }
  if (plVar1 != (int64_t *)0x0) {
    uVar11 = FUN_00d50b20();
  }
  uVar12 = (undefined7)(uVar11 >> 8);
  if (cVar6 != '\0' && !bVar2) {
    FUN_00d50b20();
    uVar12 = extraout_var;
  }
  return CONCAT71(uVar12,plVar16 != (int64_t *)0x0);
}

