// Function: FUN_00492370
// Address: 00492370
// Size: 2632 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00492370(void* param_1,int param_2)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  int64_t **pplVar10;
  int64_t lVar11;
  int64_t *plVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  int64_t local_120;
  int64_t *local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  int64_t local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (param_2 == 0) {
    FUN_01caeae0();
    plVar8 = local_78;
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00490b50();
      plVar8 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(char *)(this_ptr + 0x27b) == '\0') {
        if (g_02708790 == 0) goto LAB_00492707;
        local_80 = g_02708790;
        FUN_00d50b00();
      }
      else if ((*(char *)(this_ptr + 0x27c) == '\0') && (*(char *)(this_ptr + 0x27a) == '\0')) {
        if (g_02708788 == 0) {
LAB_00492707:
          local_80 = 0;
        }
        else {
          local_80 = g_02708788;
          FUN_00d50b00();
        }
      }
      else {
        if (g_02708780 == 0) goto LAB_00492707;
        local_80 = g_02708780;
        FUN_00d50b00();
      }
      lVar11 = g_02708760;
      if (g_02708760 != 0) {
        FUN_00d50b00();
      }
      local_120 = lVar11;
      FUN_00083ea0(2,&local_120);
      FUN_000b4da0();
      lVar2 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = (int64_t *)&g_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &g_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      local_110 = local_80;
      local_108 = '\0';
      local_100 = lVar2;
      local_f8 = '\0';
      FUN_01e57360(&local_100,&local_110);
      plVar9 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_01caeae0();
        local_f0 = plVar9;
        local_e8 = '\0';
        FUN_01d64eb0();
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(char *)(this_ptr + 0x279) == '\0') goto LAB_004928d9;
  }
  else {
    if (*(char *)(this_ptr + 0x279) == '\0') {
LAB_004928d9:
      plVar8 = (int64_t *)0x0;
      goto LAB_004928db;
    }
    FUN_0048b260();
    plVar8 = local_78;
    if (local_70 == '\0') {
      if (local_78 == (int64_t *)0x0) goto LAB_004928d9;
      FUN_00d50b00();
      plVar9 = *(int64_t **)(this_ptr + 0x118);
      if (plVar9 != (int64_t *)0x0) goto LAB_004923d8;
LAB_004924fc:
      bVar1 = true;
      plVar8 = (int64_t *)0x0;
    }
    else {
      if (local_78 == (int64_t *)0x0) goto LAB_004928d9;
      plVar9 = *(int64_t **)(this_ptr + 0x118);
      if (plVar9 == (int64_t *)0x0) goto LAB_004924fc;
LAB_004923d8:
      local_118 = plVar8;
      FUN_00d50b00();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar10 = &local_78;
      FUN_01320d00();
      plVar8 = local_78;
      if ((g_026fdd70 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026e3238 = FUN_00115af0();
        g_026e3220 = "MUAudioFileSource";
        g_026e3228 = 0xa0;
        param_1 = 0x136df0;
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
        ___cxa_guard_release();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_0049256d:
        pplVar10 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_0049256d;
      }
      plVar8 = *pplVar10;
      if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar10 + 1) = 0;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        bVar1 = true;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123abe0();
        local_b0 = local_48;
        local_a8 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_a8 = '\x01';
        uVar4 = FUN_00742b20();
        pVar7 = 0;
        FUN_01500530(0,uVar4);
        plVar9 = local_78;
        if (local_70 == '\0') {
          if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
             (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_70 = '\0';
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        local_90 = plVar9;
        if (plVar9 == (int64_t *)0x0) {
LAB_00492a38:
          plVar9 = local_90;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b8c7f0();
          plVar12 = local_78;
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (int64_t *)0x0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0123b100();
            local_c0 = 0;
            local_b8 = '\0';
            FUN_00b8cce0();
            if ((local_b8 != '\0') && (local_c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar12 = (int64_t *)0x0;
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          local_a0 = local_48;
          local_98 = 0;
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_98 = '\x01';
          FUN_014fff90();
          plVar9 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((plVar9 != (int64_t *)0x0) &&
             (cVar3 = (**(code **)(*plVar9 + 0x398))(), cVar3 != '\0')) {
            (**(code **)(*plVar9 + 0x408))();
          }
          FUN_0047dd70();
          if (plVar9 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          bVar1 = false;
          if (local_90 == (int64_t *)0x0) goto LAB_00492c9b;
        }
        else {
          cVar3 = FUN_015039e0();
          lVar2 = g_02708798;
          lVar11 = g_02708778;
          if (cVar3 == '\0') {
            if (g_02708778 == 0) goto LAB_00492969;
            uVar13 = FUN_00d50b00();
          }
          else if (g_02708798 == 0) {
LAB_00492969:
            lVar11 = 0;
            uVar13 = extraout_XMM0_Da;
          }
          else {
            uVar13 = FUN_00d50b00();
            lVar11 = lVar2;
          }
          plVar9 = g_026f6fb0;
          if (g_026f6fb0 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          local_e0 = plVar9;
          local_d8 = '\x01';
          local_c8 = '\0';
          local_d0 = lVar11;
          FUN_01f6ca30(uVar13,&local_d0);
          plVar12 = local_78;
          if (local_70 == '\0') {
            if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
               (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_70 = '\0';
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          iVar5 = (**(code **)(*plVar12 + 0x5e0))();
          FUN_00d50b20();
          if (lVar11 != 0) {
            FUN_00d50b20();
          }
          if (iVar5 == 0) goto LAB_00492a38;
          bVar1 = true;
          plVar12 = local_90;
LAB_00492c9b:
          if (plVar12 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar9 >> 8),plVar8 != (int64_t *)0x0);
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (bVar1) goto LAB_004928db;
  }
  plVar8 = (int64_t *)CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
LAB_004928db:
  return (uint64_t)plVar8 & 0xffffffff;
}

