// Function: FUN_004f0450
// Address: 004f0450
// Size: 1588 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

double FUN_004f0450(uint64_t param_1,double param_2)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void* pVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  char *pcVar11;
  uint64_t uVar12;
  int64_t *this_ptr;
  double dVar13;
  double local_a8;
  int64_t local_a0;
  char local_98 [8];
  int64_t *local_90;
  int local_88;
  int iStack_84;
  int local_80;
  double local_78;
  int64_t *local_70;
  uint64_t local_68;
  uint local_5c;
  double local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38 [8];
  
  local_a8 = (double)FUN_004f01b0();
  if (*(int *)(*this_ptr + 0xc) == 1) {
    FUN_00d23310();
    pVar8 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_98[0]);
    pcVar11 = local_38;
    if (local_98[0] != '\0') {
      pcVar11 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar11 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    local_70 = local_50;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_38[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (int64_t *)0x0) {
      local_98[0] = '\0';
      local_90 = local_70;
      local_88 = -1;
      iStack_84 = 0;
      local_80 = 0;
      local_5c = 0xffffff01;
      local_68 = 0;
      local_40 = (int64_t *)0x0;
      local_58 = 0.0;
      dVar13 = 0.0;
LAB_004f05cf:
      while( true ) {
        iVar2 = iStack_84;
        if (iStack_84 != 0) {
          if (iStack_84 < 1) {
            iStack_84 = -iStack_84;
          }
          else {
            local_88 = local_88 - iStack_84;
            FUN_00d23690(dVar13,iStack_84);
            local_80 = local_80 + iVar2;
            iStack_84 = 0;
          }
        }
        local_88 = local_88 + 1;
        if (*(int *)((int64_t)local_90 + 0xc) <= local_88) break;
        pVar8 = (void*)local_90[2];
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_0125e7c0();
        if (local_48 == '\0') goto LAB_004f0680;
        if (local_50 != (int64_t *)0x0) goto LAB_004f06b0;
      }
      plVar10 = local_90;
      FUN_001159b0();
      FUN_00d50b20();
      plVar4 = local_40;
      if ((local_40 != (int64_t *)0x0) && ((local_58 != 0.0 || (NAN(local_58))))) {
        pvVar3 = _pthread_getspecific((void*)plVar10);
        plVar4 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar4 = local_40, lVar5 != 0)) {
          plVar10 = local_40;
          plVar4 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        pVar8 = (void*)plVar10;
        lVar5 = (**(code **)(*plVar4 + 0x378))();
        plVar4 = local_40;
        pvVar3 = _pthread_getspecific(pVar8);
        plVar10 = plVar4;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar10 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        dVar13 = (double)(**(code **)(*plVar10 + 0x370))();
        uVar12 = lVar5 - (int64_t)(dVar13 * (param_2 - local_58));
        uVar7 = -uVar12;
        if (0 < (int64_t)uVar12) {
          uVar7 = uVar12;
        }
        if (uVar7 < 2) {
          local_a8 = local_a8 + local_58;
        }
      }
      if (((char)local_68 != '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return local_a8;
LAB_004f0680:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b00();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_004f06b0:
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_013de8d0();
    if ((dVar13 != g_02390448) || (NAN(dVar13) || NAN(g_02390448))) {
      local_78 = local_58;
    }
    else {
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = (double)FUN_01264310();
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_013def20();
      dVar13 = local_78 - dVar13;
      if ((local_5c & 1) == 0) {
        local_78 = local_58;
        if (local_58 < dVar13) {
          local_78 = dVar13;
        }
      }
      else {
        local_5c = 0;
        local_78 = dVar13;
      }
      if (local_40 == (int64_t *)0x0) {
        pvVar3 = _pthread_getspecific(pVar8);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013df6b0();
        plVar4 = local_50;
        if ((g_026fdd70 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
          ___cxa_guard_release();
        }
        pplVar9 = (int64_t **)&g_02802688;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x360))();
          cVar1 = FUN_00e85ea0();
          pplVar9 = &local_50;
          if (cVar1 == '\0') {
            pplVar9 = (int64_t **)&g_02802688;
          }
        }
        plVar4 = *pplVar9;
        local_40 = plVar4;
        if (plVar4 == (int64_t *)0x0) {
          local_40 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(pplVar9 + 1) == '\0') {
            plVar4 = (int64_t *)FUN_00d50b00();
          }
          else {
            *(void*)(pplVar9 + 1) = 0;
          }
          local_68 = CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    local_58 = local_78;
    dVar13 = local_78;
  }
  goto LAB_004f05cf;
}

