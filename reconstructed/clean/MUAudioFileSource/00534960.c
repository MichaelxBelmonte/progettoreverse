// Function: FUN_00534960
// Address: 00534960
// Size: 2083 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00534960(code *param_1)

{
  uint uVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t lVar4;
  code *pcVar5;
  char cVar6;
  void *pvVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  uint64_t uVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  undefined7 extraout_var_03;
  code *pcVar11;
  void*arg1;
  int64_t this_ptr;
  code *pcVar12;
  code **ppcVar13;
  uint64_t uVar14;
  code *pcVar15;
  bool bVar16;
  uint32_t uVar17;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  code *local_90;
  int64_t local_88;
  char local_80;
  code *local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  char local_40;
  byte local_31;
  
  FUN_00757c60();
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  pcVar12 = local_48;
  uVar10 = extraout_var;
  if (local_48 == 0x0) {
    bVar3 = true;
    pcVar12 = 0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      uVar10 = extraout_var_00;
      if ((local_40 == '\0') || (local_48 == 0x0)) goto LAB_00534a0d;
      FUN_00d50b20();
      uVar10 = extraout_var_01;
    }
    else {
      local_40 = '\0';
    }
    bVar3 = false;
  }
LAB_00534a0d:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
    uVar10 = extraout_var_02;
  }
  if (pcVar12 == 0x0) {
    pcVar12 = 0x0;
  }
  else {
    uVar1 = *(uint *)(pcVar12 + 0xc);
    if ((int)uVar1 < 1) {
      bVar16 = true;
      local_60 = 0;
      local_58 = 0x0;
      local_70 = 0;
      local_50 = 0x0;
      local_98 = 0;
      uVar9 = 0;
      local_78 = 0x0;
    }
    else {
      uVar14 = 0;
      local_78 = 0x0;
      local_68 = 0;
      pcVar15 = 0x0;
      local_98 = 0;
      local_50 = 0x0;
      local_70 = 0;
      local_58 = 0x0;
      local_60 = 0;
      local_90 = pcVar12;
      do {
        uVar9 = local_68 & 0xffffffff;
        pcVar12 = *(code **)(*(int64_t *)(pcVar12 + 0x10) + uVar14 * 8);
        local_48 = pcVar12;
        local_40 = '\0';
        uVar8 = 0;
        if ((g_026fdd70 == '\0') && (uVar8 = ___cxa_guard_acquire(), (int)uVar8 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          param_1 = FUN_00136df0;
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
          uVar8 = ___cxa_guard_release();
        }
        ppcVar13 = (code **)&g_02802688;
        if (pcVar12 != 0x0) {
          (**(code **)(*(int64_t *)pcVar12 + 0x360))();
          uVar8 = FUN_00e85ea0();
          ppcVar13 = &local_48;
          if ((char)uVar8 == '\0') {
            ppcVar13 = (code **)&g_02802688;
          }
        }
        pcVar12 = local_90;
        pcVar11 = *ppcVar13;
        cVar6 = (char)uVar9;
        if (pcVar11 == pcVar15) {
          pcVar5 = pcVar15;
          local_68 = uVar9;
          if ((cVar6 == '\0') && (pcVar11 != 0x0)) {
            pcVar11 = pcVar15;
            if (*(char *)(ppcVar13 + 1) != '\0') goto LAB_00534b45;
            local_68 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
            uVar9 = FUN_00d50b00();
          }
        }
        else if (*(char *)(ppcVar13 + 1) == '\0') {
          if (pcVar11 != 0x0) {
            uVar8 = FUN_00d50b00();
          }
          pcVar12 = local_90;
          local_68 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          pcVar5 = pcVar11;
          uVar9 = local_68;
          if ((cVar6 != '\0') && (pcVar15 != 0x0)) {
            uVar9 = FUN_00d50b20();
          }
        }
        else {
          if ((cVar6 != '\0') && (pcVar15 != 0x0)) {
            uVar8 = FUN_00d50b20();
          }
LAB_00534b45:
          *(void*)(ppcVar13 + 1) = 0;
          uVar9 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          pcVar5 = pcVar11;
          local_68 = uVar9;
          pcVar12 = local_90;
        }
        pcVar15 = pcVar5;
        if ((local_40 != '\0') && (local_48 != 0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if (pcVar15 != 0x0) {
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          pcVar11 = local_48;
          if (local_48 == local_50) {
            if (((byte)local_60 == 0) && (local_48 != 0x0)) {
              pcVar11 = local_50;
              if (local_40 != '\0') goto LAB_00534c85;
              local_31 = 1;
              FUN_00d50b00();
            }
            else {
              local_31 = (byte)local_60;
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != 0x0) {
                FUN_00d50b00();
              }
              local_31 = 1;
              if (((byte)local_60 != '\0') && (local_50 != 0x0)) {
                FUN_00d50b20();
                local_50 = pcVar11;
                goto LAB_00534d00;
              }
            }
            else {
              if (((byte)local_60 != 0) && (local_50 != 0x0)) {
                FUN_00d50b20();
              }
LAB_00534c85:
              local_40 = '\0';
              local_31 = 1;
            }
            local_31 = 1;
            local_50 = pcVar11;
          }
LAB_00534d00:
          if ((local_40 != '\0') && (local_48 != 0x0)) {
            FUN_00d50b20();
          }
          if (local_50 == 0x0) {
            local_60 = (uint64_t)local_31;
            uVar9 = 0;
            local_50 = 0x0;
          }
          else {
            cVar6 = (**(code **)(*(int64_t *)local_50 + 0x398))();
            if (cVar6 == '\0') {
              plVar2 = (int64_t *)*arg1;
              uVar17 = (**(code **)(*(int64_t *)local_50 + 0x388))();
              lVar4 = local_88;
              local_a0 = 0;
              if (local_80 == '\0') {
                if (local_88 != 0) {
                  uVar17 = FUN_00d50b00();
                }
              }
              else {
                local_80 = '\0';
              }
              local_a0 = '\x01';
              local_a8 = lVar4;
              uVar8 = (**(code **)(*plVar2 + 0x400))(uVar17,&local_a8);
              pcVar11 = local_48;
              uVar10 = (undefined7)((uint64_t)lVar4 >> 8);
              if (local_48 == local_58) {
                pcVar11 = local_58;
                if (((char)local_70 == '\0') && (local_48 != 0x0)) {
                  if (local_40 != '\0') goto LAB_00534df0;
                  FUN_00d50b00();
                  pcVar11 = local_58;
                  goto joined_r0x00534f3e;
                }
                uVar9 = local_70 & 0xffffffff;
joined_r0x00534e4d:
                local_58 = pcVar11;
                if ((local_40 == '\0') || (local_48 == 0x0)) {
                  local_70 = uVar9 & 0xffffffff;
                }
                else {
                  FUN_00d50b20();
                  local_70 = uVar9 & 0xffffffff;
                }
              }
              else {
                if (local_40 == '\0') {
                  if (local_48 != 0x0) {
                    FUN_00d50b00();
                  }
                  uVar9 = CONCAT71(uVar10,1);
                  if ((char)local_70 != '\0') {
                    if (local_58 == 0x0) goto joined_r0x00534e4d;
                    FUN_00d50b20();
                  }
joined_r0x00534f3e:
                  uVar9 = CONCAT71(uVar10,1);
                  goto joined_r0x00534e4d;
                }
                if (((char)local_70 != '\0') && (local_58 != 0x0)) {
                  uVar8 = FUN_00d50b20();
                }
LAB_00534df0:
                local_40 = '\0';
                local_70 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                local_58 = pcVar11;
              }
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              cVar6 = (**(code **)(*(int64_t *)local_58 + 0x398))();
              if (cVar6 != '\0') {
                if (local_78 == 0x0) {
                  (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
                  FUN_00cb1f10();
                  local_78 = local_48;
                  param_1 = local_48;
                  if (local_48 == 0x0) {
                    local_78 = 0x0;
                  }
                  else if (local_40 == '\0') {
                    uVar8 = FUN_00d50b00();
                    local_98 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
                    if ((local_40 != '\0') && (local_48 != 0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_40 = '\0';
                    local_98 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                  FUN_00db3260();
                }
                pvVar7 = _pthread_getspecific((void*)param_1);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0123bd60();
              }
            }
            uVar9 = (uint64_t)local_31;
            local_60 = uVar9;
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar1 != uVar14);
      bVar16 = local_78 == 0x0;
      if (!bVar16) {
        FUN_00db3270();
        uVar9 = FUN_00db3760();
      }
      if (((char)local_68 != '\0') && (pcVar15 != 0x0)) {
        uVar9 = FUN_00d50b20();
      }
    }
    if (!bVar3) {
      uVar9 = FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_58 != 0x0)) {
      uVar9 = FUN_00d50b20();
    }
    if (((byte)local_60 != '\0') && (local_50 != 0x0)) {
      uVar9 = FUN_00d50b20();
    }
    pcVar12 = local_78;
    uVar10 = (undefined7)(uVar9 >> 8);
    if (!(bool)((char)local_98 == '\0' | bVar16)) {
      FUN_00d50b20();
      uVar10 = extraout_var_03;
    }
  }
  return CONCAT71(uVar10,pcVar12 != 0x0);
}

