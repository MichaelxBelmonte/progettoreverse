// ===================================================================
// MDAudioSourceInsp — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 0015dc00
// ============================================================
// Function: FUN_0015dc00
// Address: 0015dc00
// Size: 962 bytes
// Class: MDAudioSourceInsp

void FUN_0015dc00(double param_1,double param_2)

{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  void* in_ECX;
  int64_t this_ptr;
  bool bVar4;
  double dVar5;
  double dVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  if (param_2 <= param_1) {
    return;
  }
  FUN_0054ddc0();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    bVar2 = false;
    local_70 = 0;
LAB_0015defa:
    bVar4 = false;
    local_48 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    if (local_48 == 0) {
      local_70 = 0;
      bVar2 = false;
      bVar4 = false;
    }
    else {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_70 == 0) {
        local_70 = 0;
        bVar2 = false;
        bVar4 = false;
        if (local_68 != '\0') {
          local_70 = 0;
          bVar2 = false;
          bVar4 = false;
        }
      }
      else if (local_68 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        bVar4 = local_70 != 0;
      }
      else {
        bVar4 = true;
        bVar2 = true;
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar4) goto LAB_0015defa;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e9900(g_023944d8 + param_1,(param_2 - param_1) + g_023944e0);
    if (local_48 == 0) goto LAB_0015defa;
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    bVar4 = true;
    if (*(int *)(local_48 + 0xc) != 0) {
      dVar5 = (double)FUN_01266200();
      dVar6 = (double)FUN_012664b0();
      if (dVar5 < dVar6) {
        if (((param_1 < param_2) && (dVar5 <= param_1)) && (param_2 <= dVar6)) {
          bVar4 = true;
          goto LAB_0015df11;
        }
        bVar4 = true;
        if ((param_1 < param_2) &&
           (((param_1 <= dVar5 && (dVar5 < param_2)) || ((param_1 < dVar6 && (dVar5 <= param_2))))))
        {
          if (param_1 < dVar5) {
            FUN_0054ec70();
          }
          bVar4 = true;
          if (dVar6 < param_2) {
            FUN_0054ec70();
          }
          goto LAB_0015df11;
        }
      }
    }
  }
  FUN_0054ec70(param_1,param_2);
LAB_0015df11:
  if ((bVar2) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0015d630
// ============================================================
// Function: FUN_0015d630
// Address: 0015d630
// Size: 831 bytes
// Class: MDAudioSourceInsp

void* FUN_0015d630(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t arg1;
  void*this_ptr;
  void* pVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x88) != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_0015d981;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_0015d981;
    if (0 < *(int *)(local_a0 + 0xc)) {
      pVar6 = 0;
      do {
        lVar2 = local_58;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_0015d820;
          }
        }
        else if (local_58 != 0) {
LAB_0015d820:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar5 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(int64_t *)(lVar2 + 0x10);
            local_58 = *(int64_t *)(lVar1 + 8 + lVar5 * 8);
            pvVar4 = _pthread_getspecific((void*)lVar1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef640();
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_00d235a0();
            if (local_68 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar6 = pVar6 + 1;
      } while ((int)pVar6 < *(int *)(local_a0 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
LAB_0015d981:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0015f220
// ============================================================
// Function: FUN_0015f220
// Address: 0015f220
// Size: 1479 bytes
// Class: MDAudioSourceInsp
// String references:
//   "handleEditAudioSource"
//   "handleAudioSourceTransients"
//   "handleAudioSourceFormantsUp"
//   "handleAudioSourceFormantsDown"
//   "MDAudioSourceInsp"

void FUN_0015f220(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_02804440 = "handleEditAudioSource";
      g_02804448 = &g_026e3e68;
      g_02804450 = 0;
      g_02804458 = &g_026e3f30;
      g_02804460 = FUN_00162860;
      g_02804468 = FUN_00161780;
      g_02804470 = 0;
      ram_0000000002804478 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804488 = "handleAudioSourceTransients";
      g_02804490 = &g_026e3e68;
      g_02804498 = 0;
      g_028044a0 = &g_026e3f30;
      g_028044a8 = FUN_00162860;
      g_028044b0 = FUN_00161fe0;
      g_028044b8 = 0;
      ram_00000000028044c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028044d0 = "handleAudioSourceFormantsUp";
      g_028044d8 = &g_026e3e68;
      g_028044e0 = 0;
      g_028044e8 = &g_026e3f30;
      g_028044f0 = FUN_00162860;
      g_028044f8 = FUN_001621b0;
      g_02804500 = 0;
      ram_0000000002804508 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02804518 = "handleAudioSourceFormantsDown";
      g_02804520 = &g_026e3e68;
      g_02804528 = 0;
      g_02804530 = &g_026e3f30;
      g_02804538 = FUN_00162860;
      g_02804540 = FUN_00162380;
      g_02804548 = 0;
      ram_0000000002804550 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

