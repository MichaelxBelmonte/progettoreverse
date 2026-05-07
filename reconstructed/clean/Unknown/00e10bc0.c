// Function: FUN_00e10bc0
// Address: 00e10bc0
// Size: 3374 bytes
// Class: Unknown
// String references:
//   "getVariablesForClassname: class for variable not registered:%@"
//   "getVariablesForClassname: delimiters not found for variable of class:%@"

void* FUN_00e10bc0(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  void*puVar8;
  void*puVar9;
  uint64_t uVar10;
  uint *puVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar15;
  int64_t *local_b8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  uint64_t local_88;
  uint32_t local_7c;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint local_58 [2];
  int64_t local_50;
  char local_48;
  uint64_t local_40;
  byte local_31;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  pcVar5 = g_02572370;
  (*g_02572370)();
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*pcVar5)();
  (**(code **)(*arg1 + 0x370))();
  plVar15 = local_a0;
  if (local_98 == '\0') {
    if (local_a0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  FUN_00ddb860();
  plVar13 = local_60;
  if ((char)local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = local_58[0] & 0xffffff00;
  }
  if (plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = '\0';
  local_a0 = (int64_t *)0x0;
  local_90 = plVar13;
  FUN_00c80cd0();
  local_b8 = local_60;
  if (local_60 == (int64_t *)0x0) {
    local_7c = 1;
    local_b8 = (int64_t *)0x0;
  }
  else {
    if ((char)local_58[0] == '\0') {
      FUN_00d50b00();
      local_7c = 0;
      if (((char)local_58[0] == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_00e10dcf;
      FUN_00d50b20();
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
    }
    local_7c = 0;
  }
LAB_00e10dcf:
  lVar14 = g_027816e8;
  if ((char)local_7c != '\0') {
    if (g_027816e8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *param_2;
    local_58[0] = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_00cc7b40();
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e12c50();
  local_68 = local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar3 = true;
    local_68 = (int64_t *)0x0;
    local_88 = 0;
  }
  else {
    if ((char)local_58[0] == '\0') {
      uVar10 = FUN_00d50b00();
      bVar3 = false;
      local_88 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if (((char)local_58[0] == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_00e10f09;
      FUN_00d50b20();
    }
    else {
      local_58[0] = local_58[0] & 0xffffff00;
      local_88 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
    }
    bVar3 = false;
  }
LAB_00e10f09:
  lVar14 = g_027816e8;
  if (bVar3) {
    if (g_027816e8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *param_2;
    local_58[0] = 1;
    local_60 = &g_024c5048;
    local_48 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_00cc7b40();
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  local_40 = 0;
  plVar15 = (int64_t *)0x0;
  do {
    do {
      cVar7 = (**(code **)(*local_90 + 0x388))();
      if ((cVar7 != '\0') || (cVar7 = (**(code **)(*local_90 + 0x3b8))(&local_a0,0), cVar7 == '\0'))
      {
        iVar1 = *(int *)((int64_t)puVar9 + 0xc);
        if (iVar1 == 0) {
          *this_ptr = puVar8;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          if (0 < iVar1) {
            lVar14 = 0;
            do {
              FUN_00e12970();
              (**(code **)(*arg1 + 0x390))();
              lVar14 = lVar14 + 1;
            } while (lVar14 < *(int *)((int64_t)puVar9 + 0xc));
          }
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
        }
        if ((char)local_7c == '\0' && local_b8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (((byte)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (!bVar3 && local_68 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((iVar1 != 0) && (puVar8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        return this_ptr;
      }
      (**(code **)(*local_90 + 0x380))();
      FUN_00d8c7a0();
      (**(code **)(*local_90 + 0x3d0))();
      plVar13 = local_a0;
      FUN_00d23310();
      plVar4 = local_60;
      local_78 = (char)local_58[0];
      puVar11 = local_58;
      if ((char)local_58[0] == '\0') {
        puVar11 = (uint *)&local_78;
      }
      *(void*)puVar11 = 0;
      if (((char)local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*plVar13 + 0x50))();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar12 = local_40;
      if (cVar7 != '\0') {
        FUN_00c811e0();
        plVar13 = local_60;
        if (local_60 == plVar15) {
          local_31 = (byte)local_40;
          if (((byte)local_40 == 0) && (local_60 != (int64_t *)0x0)) {
            plVar13 = plVar15;
            if ((char)local_58[0] != '\0') goto LAB_00e11182;
            local_31 = 1;
            FUN_00d50b00();
          }
        }
        else {
          if ((char)local_58[0] == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_31 = 1;
            if (((byte)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar15 = plVar13;
              goto LAB_00e111d0;
            }
          }
          else {
            if (((byte)local_40 != 0) && (plVar15 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e11182:
            local_58[0] = local_58[0] & 0xffffff00;
          }
          local_31 = 1;
          plVar15 = plVar13;
        }
LAB_00e111d0:
        if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar6 = local_31;
        local_40 = (uint64_t)local_31;
        (**(code **)(*plVar15 + 0x18))();
        local_40 = (uint64_t)bVar6;
        FUN_00e12960();
        FUN_00d23340();
        plVar4 = local_60;
        plVar13 = local_90;
        local_78 = (char)local_58[0];
        puVar11 = local_58;
        if ((char)local_58[0] == '\0') {
          puVar11 = (uint *)&local_78;
        }
        *(void*)puVar11 = 0;
        if (((char)local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = (uint64_t)local_31;
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d23340();
          plVar4 = local_60;
          local_78 = (char)local_58[0];
          puVar11 = local_58;
          if ((char)local_58[0] == '\0') {
            puVar11 = (uint *)&local_78;
          }
          *(void*)puVar11 = 0;
          if (((char)local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 == '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00e128e0();
          uVar12 = (uint64_t)local_31;
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if (*(int *)((int64_t)local_68 + 0xc) == 1) {
          FUN_00e10a70();
          plVar4 = local_60;
          if (((char)local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          cVar7 = (**(code **)(*plVar13 + 0x3e0))();
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar6 = local_31;
          if (cVar7 == '\0') {
            uVar12 = (uint64_t)local_31;
          }
          else {
            local_40 = (uint64_t)local_31;
            (**(code **)(*plVar13 + 0x380))();
            local_40 = (uint64_t)bVar6;
            FUN_00e12980();
            (**(code **)(*arg1 + 0x370))();
            FUN_00e12970();
            FUN_00e129a0();
            FUN_00e7b4e0();
            FUN_00d8e3d0();
            plVar13 = local_60;
            if ((char)local_58[0] == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58[0] = local_58[0] & 0xffffff00;
            }
            uVar12 = (uint64_t)local_31;
            (**(code **)(*plVar15 + 0x388))();
            if (plVar13 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
              FUN_00d50b20();
            }
            local_58[0] = local_58[0] & 0xffffff00;
            local_60 = plVar15;
            FUN_00d21140();
            if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_58[0] = local_58[0] & 0xffffff00;
          local_60 = plVar15;
          FUN_00d21140();
          if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_40 = uVar12;
      plVar13 = local_a0;
      FUN_00d23340();
      plVar4 = local_60;
      local_78 = (char)local_58[0];
      puVar11 = local_58;
      if ((char)local_58[0] == '\0') {
        puVar11 = (uint *)&local_78;
      }
      *(void*)puVar11 = 0;
      if (((char)local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 == '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      cVar7 = (**(code **)(*plVar13 + 0x50))();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    } while (cVar7 == '\0');
    FUN_00d23340();
    plVar13 = local_60;
    local_78 = (char)local_58[0];
    puVar11 = local_58;
    if ((char)local_58[0] == '\0') {
      puVar11 = (uint *)&local_78;
    }
    *(void*)puVar11 = 0;
    if (((char)local_58[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
      puVar11 = (uint *)FUN_00d50b20();
    }
    if (plVar13 == plVar15) {
      puVar11 = (uint *)0x0;
      if (((byte)local_40 == '\0') && (plVar13 != (int64_t *)0x0)) {
        plVar13 = plVar15;
        if (local_78 == '\0') {
          puVar11 = (uint *)FUN_00d50b00();
        }
        goto LAB_00e11660;
      }
      plVar4 = plVar15;
      if ((local_78 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_78 == '\0') {
        if (plVar13 != (int64_t *)0x0) {
          puVar11 = (uint *)FUN_00d50b00();
        }
        if (((byte)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
          puVar11 = (uint *)FUN_00d50b20();
        }
      }
      else if (((byte)local_40 != '\0') && (plVar15 != (int64_t *)0x0)) {
        puVar11 = (uint *)FUN_00d50b20();
      }
LAB_00e11660:
      local_40 = CONCAT71((int7)((uint64_t)puVar11 >> 8),1);
      plVar4 = plVar13;
    }
    plVar15 = (int64_t *)0x0;
    if (plVar4 != (int64_t *)0x0) {
      local_58[0] = local_58[0] & 0xffffff00;
      local_60 = plVar4;
      FUN_00d21140();
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_90 + 0x380))();
      FUN_00e12980();
      (**(code **)(*arg1 + 0x370))();
      FUN_00e12970();
      FUN_00e129a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      plVar15 = local_60;
      if ((char)local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = local_58[0] & 0xffffff00;
      }
      (**(code **)(*plVar4 + 0x388))();
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
      plVar15 = plVar4;
    }
  } while( true );
}

