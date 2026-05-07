// Function: FUN_012cce00
// Address: 012cce00
// Size: 4151 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_012cce00(uint32_t param_1)

{
  int64_t ******pppppplVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  void*puVar8;
  int64_t *******ppppppplVar9;
  void* pVar10;
  int64_t *******in_RCX;
  code *pcVar11;
  char *pcVar12;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *******ppppppplVar13;
  int64_t *******ppppppplVar14;
  bool bVar15;
  int64_t local_60;
  char local_58;
  int64_t *******local_50;
  int64_t ******local_48;
  int64_t *******local_40;
  int64_t ******local_38;
  
  pVar10 = (void*)in_RCX;
  ppppppplVar13 = *(int64_t ********)(this_ptr + 0x40);
  if (ppppppplVar13 == (int64_t *******)0x0) {
    if (*(int64_t *)(this_ptr + 0x68) == 0) {
      param_1 = FUN_01240d70();
      ppppppplVar14 = *(int64_t ********)(this_ptr + 0x68);
      ppppppplVar9 = ppppppplVar14;
      if (ppppppplVar14 != local_50) {
        if ((char)local_48 == '\0') {
          if (local_50 == (int64_t *******)0x0) {
            ppppppplVar9 = (int64_t *******)0x0;
            goto LAB_012cce61;
          }
          param_1 = FUN_00d50b00();
          in_RCX = *(int64_t ********)(this_ptr + 0x68);
          *(int64_t ********)(this_ptr + 0x68) = local_50;
          ppppppplVar9 = local_50;
        }
        else {
          local_48._0_1_ = '\0';
          ppppppplVar9 = local_50;
LAB_012cce61:
          *(int64_t ********)(this_ptr + 0x68) = ppppppplVar9;
          in_RCX = ppppppplVar14;
        }
        if (in_RCX != (int64_t *******)0x0) {
          param_1 = FUN_00d50b20();
          ppppppplVar9 = local_50;
        }
      }
      if (((char)local_48 != '\0') && (ppppppplVar9 != (int64_t *******)0x0)) {
        param_1 = FUN_00d50b20();
      }
    }
    lVar7 = g_027bed58;
    if (g_027bed58 != 0) {
      param_1 = FUN_00d50b00();
    }
    FUN_012c9770(param_1,0);
    if ((local_50 != (int64_t *******)0x0) && (ppppppplVar13 = local_50, (char)local_48 == '\0')) {
      FUN_00d50b00();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)in_RCX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar6 = _pthread_getspecific((void*)in_RCX);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012407c0();
    FUN_00d23310();
    ppppppplVar14 = local_50;
    pVar10 = (void*)CONCAT71((int7)((uint64_t)in_RCX >> 8),(char)local_48);
    pcVar12 = (char *)&local_38;
    if ((char)local_48 != '\0') {
      pcVar12 = (char *)&local_48;
    }
    local_38._0_1_ = (char)local_48;
    *pcVar12 = '\0';
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 == '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
      FUN_00d50b00();
    }
    FUN_012e89e0();
    if (ppppppplVar14 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_012ca540();
  }
  else {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (*(int *)((int64_t)local_50 + 0xc) == 0) {
    bVar15 = true;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    bVar15 = *(int *)(local_60 + 0xc) != 0;
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar15) goto LAB_012cdd8e;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_012e57e0();
  pcVar11 = (uint64_t)uVar4;
  FUN_012c9ae0(pcVar11,0);
  local_40 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b00();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pcVar11 = local_40;
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57e0();
  FUN_012e57a0();
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pcVar11 = local_40;
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8a60();
  ppppppplVar14 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (int64_t *******)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48._0_1_ = '\0';
  }
  FUN_012e89e0();
  if (ppppppplVar14 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar5 = *(int *)((int64_t)local_50 + 0xc);
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    lVar7 = g_0276c080;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar7 = g_0276c080;
    }
    g_0276c080 = lVar7;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_012e5f80();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    lVar7 = g_0276ce70;
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
      lVar7 = g_0276ce70;
    }
    g_0276ce70 = lVar7;
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_012e5f80();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e89e0();
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  ppppppplVar14 = local_50;
  if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
    FUN_00d50b20();
  }
  if (ppppppplVar14 == (int64_t *******)0x0) {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7900();
  }
  if (unaff_SIL != '\0') {
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    ppppppplVar14 = (int64_t *******)&local_50;
    FUN_012e78c0();
    ppppppplVar9 = local_50;
    if ((g_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027e77e8 = FUN_0015ef90();
      g_027e77d0 = "MULSSGenerator";
      g_027e77d8 = 0x70;
      pcVar11 = FUN_0015ef30;
      g_027e77e0 = FUN_0015ef30;
      g_027e77f0 = 0;
      ram_00000000027e77f8 = 0;
      g_027e7800 = 0;
      ram_00000000027e7808 = 0;
      g_027e7810 = 0;
      ram_00000000027e7818 = 0;
      g_027e7820 = 0;
      ram_00000000027e7828 = 0;
      g_027e7830 = 0;
      ram_00000000027e7838 = 0;
      g_027e7840 = 0;
      ram_00000000027e7848 = 0;
      g_027e7850 = 0;
      ram_00000000027e7858 = 0;
      g_027e7860 = 0;
      ram_00000000027e7868 = 0;
      g_027e7870 = 0;
      ram_00000000027e7878 = 0;
      g_027e7880 = 0;
      ram_00000000027e7888 = 0;
      g_027e7890 = 0;
      ___cxa_guard_release();
    }
    if (ppppppplVar9 == (int64_t *******)0x0) {
LAB_012cd677:
      ppppppplVar14 = (int64_t *******)&g_02802688;
    }
    else {
      (*(*ppppppplVar9)[0x6c])();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_012cd677;
    }
    pppppplVar1 = *ppppppplVar14;
    if (*(char *)(ppppppplVar14 + 1) == '\0') {
      if (pppppplVar1 != (int64_t ******)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(ppppppplVar14 + 1) = 0;
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (pppppplVar1 != (int64_t ******)0x0) {
      pvVar6 = _pthread_getspecific((void*)pcVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c6cb0();
      ppppppplVar14 = local_50;
      if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (ppppppplVar14 == (int64_t *******)0x0) {
        pvVar6 = _pthread_getspecific((void*)pcVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar8 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        pcVar11 = &g_02607248;
        *puVar8 = &g_02607248;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[0xe] = 0;
        *(void*)((int64_t)puVar8 + 0x76) = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0x12] = 0;
        puVar8[0x13] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 0;
        puVar8[0x16] = 0;
        puVar8[0x17] = 0;
        puVar8[0x18] = 0;
        puVar8[0x19] = 0;
        puVar8[0x1a] = 0;
        (*g_02607260)();
        FUN_012c64a0();
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific((void*)pcVar11);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pcVar11 = local_40;
  }
  FUN_012e6520();
  pcVar2 = g_02607260;
  while( true ) {
    pVar10 = (void*)pcVar11;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar5 = *(int *)((int64_t)local_50 + 0xc);
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    ppppppplVar14 = local_40;
    if (iVar5 == 0) break;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    ppppppplVar14 = local_50;
    local_38._0_1_ = (char)local_48;
    pcVar11 = &local_38;
    ppppppplVar9 = &local_48;
    if ((char)local_48 == '\0') {
      ppppppplVar9 = (int64_t *******)pcVar11;
    }
    *ppppppplVar9 = (code)0x0;
    if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_38 == '\0') && (ppppppplVar14 != (int64_t *******)0x0)) {
      FUN_00d50b00();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      pcVar11 = local_40;
    }
    FUN_012e6520();
    if (unaff_SIL != '\0') {
      pvVar6 = _pthread_getspecific((void*)pcVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e78c0();
      ppppppplVar9 = local_50;
      if ((g_0270c820 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        ___cxa_guard_release();
      }
      pcVar11 = &g_02802688;
      if (ppppppplVar9 != (int64_t *******)0x0) {
        (*(*ppppppplVar9)[0x6c])();
        cVar3 = FUN_00e85ea0();
        pcVar11 = &local_50;
        if (cVar3 == '\0') {
          pcVar11 = &g_02802688;
        }
      }
      pppppplVar1 = *(int64_t *******)pcVar11;
      if (*((int64_t)pcVar11 + 8) == (code)0x0) {
        if (pppppplVar1 != (int64_t ******)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *((int64_t)pcVar11 + 8) = (code)0x0;
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
        FUN_00d50b20();
      }
      if (pppppplVar1 != (int64_t ******)0x0) {
        pvVar6 = _pthread_getspecific((void*)pcVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c6cb0();
        ppppppplVar9 = local_50;
        if (((char)local_48 != '\0') && (local_50 != (int64_t *******)0x0)) {
          FUN_00d50b20();
        }
        if (ppppppplVar9 == (int64_t *******)0x0) {
          pvVar6 = _pthread_getspecific((void*)pcVar11);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar8 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar8 = &g_02607248;
          puVar8[7] = 0;
          puVar8[8] = 0;
          puVar8[9] = 0;
          puVar8[10] = 0;
          puVar8[0xb] = 0;
          puVar8[0xc] = 0;
          puVar8[0xd] = 0;
          puVar8[0xe] = 0;
          *(void*)((int64_t)puVar8 + 0x76) = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = 0;
          puVar8[0x12] = 0;
          puVar8[0x13] = 0;
          puVar8[0x14] = 0;
          puVar8[0x15] = 0;
          puVar8[0x16] = 0;
          puVar8[0x17] = 0;
          puVar8[0x18] = 0;
          puVar8[0x19] = 0;
          puVar8[0x1a] = 0;
          (*pcVar2)();
          FUN_012c64a0();
          if (puVar8 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    if (ppppppplVar14 != (int64_t *******)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_012ca540();
  if (ppppppplVar14 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
LAB_012cdd8e:
  if (ppppppplVar13 != (int64_t *******)0x0) {
    FUN_00d50b20();
  }
  return;
}

