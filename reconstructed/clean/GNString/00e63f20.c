// Function: FUN_00e63f20
// Address: 00e63f20
// Size: 3609 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e63f20(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar7;
  int iVar8;
  int64_t local_248;
  int64_t local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  int64_t local_140;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int local_a4;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40;
  int local_38;
  
  FUN_00d3ecc0();
  plVar5 = local_70;
  local_238 = g_027ebc70;
  if (g_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_230 = '\x01';
  cVar4 = (**(code **)(*plVar5 + 0x50))();
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar5 = local_70;
    local_178 = g_026fce70;
    if (g_026fce70 != 0) {
      FUN_00d50b00();
    }
    local_170 = '\x01';
    cVar4 = (**(code **)(*plVar5 + 0x50))();
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d30620();
      FUN_00d305f0();
      local_b8 = local_a0;
      local_b0 = 0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_b0 = '\x01';
      FUN_00d301b0();
      local_c8 = local_88;
      local_c0 = 0;
      plVar5 = g_026fb918;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
          plVar5 = g_026fb918;
        }
      }
      else {
        local_80 = '\0';
      }
      local_c0 = '\x01';
      g_026fb918 = plVar5;
      if (plVar5 != (int64_t *)0x0) {
        local_c0 = '\x01';
        FUN_00d50b00();
      }
      local_68 = '\0';
      local_70 = plVar5;
      FUN_00ca0840();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_00e64a80;
  }
  FUN_00d403d0();
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027ebc70;
  if (g_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_228 = lVar3;
  local_220 = '\x01';
  FUN_00d3ecf0();
  local_e8 = local_88;
  local_e0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_e0 = '\x01';
  plVar5 = &local_e8;
  FUN_00d41040(plVar5,&local_228);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x30) == 0) {
    return;
  }
  pplVar7 = &local_70;
  FUN_00d3ecf0();
  plVar1 = local_70;
  FUN_00098010();
  if (plVar1 == (int64_t *)0x0) {
LAB_00e64203:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00e64203;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00e19880();
    local_90 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e64442;
      }
    }
    else if (local_70 != (int64_t *)0x0) {
LAB_00e64442:
      local_a4 = 0;
      local_78 = plVar1;
      if (*(int64_t *)(this_ptr + 0x20) != 0) {
        FUN_00e00960();
        plVar5 = local_70;
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00e6450e;
          }
        }
        else if (local_70 != (int64_t *)0x0) {
LAB_00e6450e:
          local_a4 = *(int *)((int64_t)plVar5 + 0xc);
          FUN_00d50b20();
        }
      }
      plVar5 = local_90;
      FUN_00e63050();
      iVar8 = 0;
      if (*(int64_t *)(this_ptr + 0x20) != 0) {
        local_218 = plVar5;
        local_210 = '\0';
        local_208 = 0;
        local_200 = '\0';
        FUN_00dfe080(&local_208,&local_218);
        plVar5 = local_70;
        if (local_68 == '\0') {
          if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
             (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
        }
        if ((local_200 != '\0') && (local_208 != 0)) {
          FUN_00d50b20();
        }
        if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar8 = 0;
        if (plVar5 != (int64_t *)0x0) {
          iVar8 = *(int *)((int64_t)plVar5 + 0xc);
          FUN_00d50b20();
        }
      }
      if (iVar8 != local_a4) {
        if ((((((local_a4 == 0x1d) && (iVar8 == 0x1b)) || ((local_a4 == 0x1d && (iVar8 == 0x19))))
             || ((local_a4 == 0x1d && (iVar8 == 0x16)))) || ((local_a4 == 0x1b && (iVar8 == 0x19))))
           || (((local_a4 == 0x1b && (iVar8 == 0x16)) || ((local_a4 == 0x19 && (iVar8 == 0x16))))))
        {
          FUN_00d403d0();
          lVar3 = local_88;
          local_1f8 = g_027257e0;
          if (g_027257e0 != 0) {
            FUN_00d50b00();
          }
          local_1f0 = '\x01';
          FUN_00d50b00();
          lVar2 = g_02725880;
          local_240 = lVar3;
          if (g_02725880 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_02725888;
          local_140 = lVar2;
          if (g_02725888 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar2;
          local_148 = lVar3;
          local_248 = lVar3;
          FUN_00e7a1d0(&local_248,&local_a4,4);
          local_70 = (int64_t *)&g_0258f440;
          local_38 = iVar8;
          FUN_0036bfe0();
          local_d8 = local_a0;
          lVar3 = local_148;
          local_d0 = 0;
          if (local_98 == '\0') {
            if (local_a0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_d0 = '\x01';
          FUN_00d40470(&local_d8,&stack0xfffffffffffffed8,1,3);
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          local_70 = (int64_t *)&g_0258f408;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_70 = &g_024c5048;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if (local_140 != 0) {
            FUN_00d50b20();
          }
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d403d0();
          local_1e8 = g_02787850;
          if (g_02787850 != 0) {
            FUN_00d50b00();
          }
          local_1e0 = '\x01';
          FUN_00d50b00();
          local_1d8 = 0;
          local_1d0 = '\0';
          FUN_00d40470(&local_1d8,&stack0xfffffffffffffee8,1,3);
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00e64a80;
  }
  pplVar7 = &local_70;
  FUN_00d3ecf0();
  plVar1 = local_70;
  FUN_00e721e0();
  if (plVar1 == (int64_t *)0x0) {
LAB_00e642ae:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00e642ae;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_00e64a80;
  if (*(int64_t *)(this_ptr + 0x48) != 0) {
    *(void*)(this_ptr + 0x48) = 0;
    FUN_00d50b20();
  }
  FUN_00dcd070();
  plVar1 = local_70;
  local_90 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_00e647d1;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00e647a8:
    cVar4 = FUN_00e34250();
    if ((cVar4 == '\0') && (cVar4 = FUN_00e34240(), cVar4 == '\0')) {
      FUN_00e63050();
      if (*(int64_t **)(this_ptr + 0x20) != (int64_t *)0x0) {
        local_1c8 = plVar1;
        local_1c0 = '\0';
        (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x398))();
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(this_ptr + 0x38) != 0) {
        *(void*)(this_ptr + 0x38) = 0;
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_1b8 = g_0270d078;
      if (g_0270d078 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = '\x01';
      FUN_00d50b00();
      local_1a8 = 0;
      local_1a0 = '\0';
      FUN_00d40470(&local_1a8,&stack0xfffffffffffffef8,1,3);
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78 = (int64_t *)((uint64_t)local_78 & 0xffffffff00000000);
LAB_00e6483a:
      FUN_00d403d0();
      local_198 = g_02787860;
      if (g_02787860 != 0) {
        FUN_00d50b00();
      }
      local_190 = '\x01';
      FUN_00d50b00();
      local_188 = 0;
      local_180 = '\0';
      FUN_00d40470(&local_188,&stack0xffffffffffffff08,1,3);
      if ((local_180 != '\0') && (local_188 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_78 != '\0') goto LAB_00e64938;
    }
    FUN_00d50b20();
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_00e647a8;
LAB_00e647d1:
    cVar4 = FUN_00e34250();
    uVar6 = CONCAT71((int7)((uint64_t)plVar5 >> 8),1);
    local_78 = (int64_t *)CONCAT44(local_78._4_4_,(int)uVar6);
    if (cVar4 != '\0') goto LAB_00e6483a;
    cVar4 = FUN_00e34240();
    local_78 = (int64_t *)CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)uVar6 >> 8),1));
    if ((cVar4 != '\0') || (*(int64_t *)(this_ptr + 0x38) == 0)) goto LAB_00e6483a;
    FUN_00d50b00();
    FUN_00dcd060();
    FUN_00e658e0();
    FUN_00d50b20();
  }
LAB_00e64938:
  FUN_00d50b20();
LAB_00e64a80:
  local_168 = *arg1;
  local_160 = '\0';
  FUN_00d530a0();
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  return;
}

