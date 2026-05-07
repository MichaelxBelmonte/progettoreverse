// Function: FUN_00dbf000
// Address: 00dbf000
// Size: 2218 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "%f"
//   "%lld"
//   "&#x%X;"
//   "GNString"

int64_t * FUN_00dbf000(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void*puVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  void*puVar14;
  void*puVar15;
  void*puVar16;
  bool bVar17;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar18;
  uint32_t extraout_XMM0_Da_00;
  void*local_e8;
  uint32_t local_e0;
  ushort local_dc;
  void*local_d8;
  code *local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  void*local_70;
  char local_68;
  void*local_60;
  uint local_58;
  uint64_t local_50;
  ushort local_42;
  
  plVar12 = (int64_t *)*arg1;
  if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar12 == (int64_t *)0x0) {
LAB_00dbf053:
    plVar12 = &g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar12 = arg1;
    if (cVar6 == '\0') goto LAB_00dbf053;
  }
  lVar1 = *plVar12;
  lVar13 = plVar12[1];
  if (((char)lVar13 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
LAB_00dbf07e:
    local_c0 = '\0';
    local_c8 = lVar1;
    FUN_00ca2310();
    puVar3 = local_a8;
    if (local_a0 == '\0') {
      if (local_a8 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    iVar7 = FUN_00d8c7a0();
    if (iVar7 < 1) {
      *this_ptr = (int64_t)puVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      if (puVar3 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_d0 = g_025795c0;
      iVar7 = 0;
      local_d8 = &g_025795a8;
      puVar16 = puVar3;
      local_78 = lVar1;
      do {
        local_42 = FUN_00d8cbc0();
        if (local_42 < 0x80) {
          if (puVar3 != puVar16) {
            FUN_00d8ea20(extraout_XMM0_Da,1);
          }
        }
        else {
          uVar18 = extraout_XMM0_Da;
          if (puVar3 == puVar16) {
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = local_d8;
            uVar18 = (*local_d0)();
            if (puVar9 == puVar3) {
              uVar18 = FUN_00d50b20();
            }
            else {
              bVar17 = puVar16 != (void*)0x0;
              puVar16 = puVar9;
              if (bVar17) {
                uVar18 = FUN_00d50b20();
              }
            }
            if (iVar7 != 0) {
              FUN_00d97ce0(uVar18,iVar7);
              uVar5 = local_58;
              local_60 = local_70;
              local_58 = local_58 & 0xffffff00;
              if (local_68 == '\0') {
                if (local_70 != (void*)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58._1_3_ = SUB43(uVar5,1);
                local_68 = '\0';
              }
              local_58 = CONCAT31(local_58._1_3_,1);
              uVar18 = FUN_00d8dbf0();
              if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
                uVar18 = FUN_00d50b20();
              }
            }
          }
          local_e0 = 1;
          local_e8 = &g_0257c088;
          local_dc = local_42;
          FUN_00d8cb40(uVar18,&local_e8);
          local_98 = local_70;
          local_90 = 0;
          if (local_68 == '\0') {
            if (local_70 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_90 = '\x01';
          FUN_00d8dbf0();
          if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar8 = FUN_00d8c7a0();
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
      if (puVar3 != puVar16) {
        FUN_00d8c7d0();
      }
      *this_ptr = (int64_t)puVar16;
      *(void*)(this_ptr + 1) = 1;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar13 != '\0') {
      FUN_00d50b20();
    }
    return this_ptr;
  }
  if (lVar1 != 0) goto LAB_00dbf07e;
  plVar12 = (int64_t *)*arg1;
  FUN_00053ac0();
  if (plVar12 == (int64_t *)0x0) {
LAB_00dbf3e0:
    plVar12 = &g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    plVar12 = arg1;
    if (cVar6 == '\0') goto LAB_00dbf3e0;
  }
  lVar1 = plVar12[1];
  if (((char)lVar1 == '\0') || (*plVar12 == 0)) {
    if (*plVar12 == 0) {
      plVar12 = (int64_t *)*arg1;
      if ((g_0270c850 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d4348 = FUN_00d4fe50();
        g_026d4330 = "GNValue";
        g_026d4338 = 0x18;
        g_026d4340 = FUN_00053cb0;
        g_026d4350 = 0;
        ram_00000000026d4358 = 0;
        g_026d4360 = 0;
        ram_00000000026d4368 = 0;
        g_026d4370 = 0;
        ram_00000000026d4378 = 0;
        g_026d4380 = 0;
        ram_00000000026d4388 = 0;
        g_026d4390 = 0;
        ram_00000000026d4398 = 0;
        g_026d43a0 = 0;
        ram_00000000026d43a8 = 0;
        g_026d43b0 = 0;
        ram_00000000026d43b8 = 0;
        g_026d43c0 = 0;
        ram_00000000026d43c8 = 0;
        g_026d43d0 = 0;
        ram_00000000026d43d8 = 0;
        g_026d43e0 = 0;
        ram_00000000026d43e8 = 0;
        g_026d43f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar12 == (int64_t *)0x0) {
LAB_00dbf5da:
        arg1 = &g_02802688;
      }
      else {
        (**(code **)(*plVar12 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00dbf5da;
      }
      plVar12 = (int64_t *)*arg1;
      lVar1 = arg1[1];
      if (((char)lVar1 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b00();
LAB_00dbf644:
        (**(code **)(*plVar12 + 0x368))();
        local_88 = local_60;
        local_80 = 0;
        if ((char)local_58 == '\0') {
          if (local_60 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = local_58 & 0xffffff00;
        }
        local_80 = '\x01';
        FUN_00ca2310();
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((char)lVar1 == '\0') {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
      if (plVar12 != (int64_t *)0x0) goto LAB_00dbf644;
      goto LAB_00dbf479;
    }
  }
  else {
    FUN_00d50b00();
  }
  cVar6 = FUN_00dd6e50();
  lVar13 = g_02783b20;
  bVar17 = true;
  uVar10 = (uint64_t)((int)cVar6 - 0x49U);
  if ((int)cVar6 - 0x49U < 0x24) {
    if ((0x914000001U >> (uVar10 & 0x3f) & 1) == 0) {
      if ((0x28000000UL >> (uVar10 & 0x3f) & 1) == 0) {
        if (uVar10 != 0x19) goto LAB_00dbf464;
        cVar6 = FUN_00d45ad0();
        lVar2 = g_027e3c48;
        lVar13 = g_02787960;
        if (cVar6 == '\0') {
          *(void*)(this_ptr + 1) = 0;
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(this_ptr + 1) = 0;
          lVar13 = lVar2;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        *this_ptr = lVar13;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        if (g_02783b20 != 0) {
          FUN_00d50b00();
        }
        local_50 = FUN_00d45bc0();
        local_58 = 1;
        local_60 = &g_024de5e0;
        FUN_00d8cb40((int)local_50,&local_60);
        puVar4 = local_70;
        if ((((local_68 == '\0') && (local_70 != (void*)0x0)) &&
            (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_b8 = lVar13;
        local_b0 = '\0';
        cVar6 = FUN_00d8f400();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        puVar15 = puVar4;
        if (cVar6 != '\0') {
          FUN_00d8c7a0();
          FUN_00d8c7a0();
          uVar11 = FUN_00e7b4e0();
          FUN_00d8e3d0(extraout_XMM0_Da_00,uVar11);
          puVar15 = local_60;
          puVar14 = puVar4;
          if (puVar4 != local_60) {
            if ((char)local_58 != '\0') {
              if (puVar4 != (void*)0x0) {
                FUN_00d50b20();
              }
              goto LAB_00dbf737;
            }
            if (local_60 != (void*)0x0) {
              FUN_00d50b00();
            }
            puVar14 = puVar15;
            if (puVar4 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          puVar15 = puVar14;
          if (((char)local_58 != '\0') && (local_60 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00dbf737:
        *this_ptr = (int64_t)puVar15;
        *(void*)(this_ptr + 1) = 1;
        if (lVar13 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = FUN_00d45790();
      local_58 = 1;
      local_60 = &g_024da828;
      FUN_00d8cb40(&g_024da828,&local_60);
    }
    bVar17 = false;
  }
LAB_00dbf464:
  if ((char)lVar1 != '\0') {
    FUN_00d50b20();
  }
  if (!bVar17) {
    return this_ptr;
  }
LAB_00dbf479:
  FUN_00d8ede0();
  return this_ptr;
}

