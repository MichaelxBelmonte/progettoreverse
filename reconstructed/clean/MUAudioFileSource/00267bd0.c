// Function: FUN_00267bd0
// Address: 00267bd0
// Size: 2428 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

uint64_t FUN_00267bd0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int iVar8;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t **pplVar9;
  bool bVar10;
  uint32_t uVar11;
  int64_t local_b8;
  char local_b0;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_2 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar9 = &local_68;
    FUN_01320d00();
    plVar1 = local_68;
    if ((g_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
    if (plVar1 == (int64_t *)0x0) {
LAB_00267c79:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_00267c79;
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_68 + 0x450))();
    if (cVar2 == '\0') {
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        if (*(int64_t *)(arg1 + 0x1c0) != 0) {
          FUN_006f3f00();
          plVar6 = local_68;
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (int64_t *)0x0) {
            if (*(int64_t *)(arg1 + 0x1c0) == 0) {
              local_38 = '\0';
              local_40 = 0;
            }
            else {
              FUN_006f3f00();
            }
            FUN_00757c60();
            local_78 = local_68;
            plVar6 = local_68;
            if (local_68 == (int64_t *)0x0) {
              bVar10 = true;
              local_78 = (int64_t *)0x0;
            }
            else {
              if (local_60 == '\0') {
                FUN_00d50b00();
                bVar10 = false;
                if ((local_60 == '\0') || (local_68 == (int64_t *)0x0)) goto LAB_00267dd8;
                FUN_00d50b20();
              }
              else {
                local_60 = '\0';
              }
              bVar10 = false;
            }
LAB_00267dd8:
            param_1 = (void*)plVar6;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_78 != (int64_t *)0x0) {
              pvVar3 = _pthread_getspecific(param_1);
              if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                param_1 = (void*)local_78;
              }
              FUN_012cb1b0();
              plVar6 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *)0x0) {
                  FUN_00d50b00();
                  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_00268258;
                }
              }
              else if (local_68 != (int64_t *)0x0) {
LAB_00268258:
                local_60 = '\0';
                local_68 = (int64_t *)0x0;
                local_58 = plVar6;
                local_50 = 0xffffffff;
                local_48 = 0;
                while( true ) {
                  lVar4 = (int64_t)(int)local_50;
                  iVar8 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,iVar8);
                  if (*(int *)((int64_t)local_58 + 0xc) <= iVar8) break;
                  lVar7 = local_58[2];
                  local_68 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
                  pvVar3 = _pthread_getspecific((void*)lVar7);
                  pVar5 = (void*)lVar7;
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  uVar11 = FUN_012e7210();
                  if (local_80 == '\0') {
                    if (local_88 != 0) {
                      uVar11 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_80 = '\0';
                  }
                  local_b8 = *param_2;
                  local_b0 = '\0';
                  FUN_004fb4a0(uVar11,&local_b8);
                  lVar4 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0))
                    {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if (local_88 != 0) {
                    FUN_00d50b20();
                  }
                  if ((local_80 != '\0') && (local_88 != 0)) {
                    FUN_00d50b20();
                  }
                  if (lVar4 != 0) {
                    pvVar3 = _pthread_getspecific(pVar5);
                    if (pvVar3 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e6000();
                    FUN_00d50b20();
                    FUN_000be170();
                    FUN_00d50b20();
                    if (!bVar10) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                    return this_ptr;
                  }
                  if (local_50._4_4_ != 0) {
                    if (local_50._4_4_ < 1) {
                      iVar8 = -local_50._4_4_;
                    }
                    else {
                      local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                      FUN_00d23690();
                      local_48 = local_48 + local_50._4_4_;
                      iVar8 = 0;
                    }
                    local_50 = CONCAT44(iVar8,(int)local_50);
                  }
                }
                plVar6 = local_58;
                FUN_000be170();
                param_1 = (void*)plVar6;
                FUN_00d50b20();
              }
              if (!bVar10) {
                FUN_00d50b20();
              }
              goto LAB_00267ce0;
            }
          }
        }
        goto LAB_00267e34;
      }
    }
    else {
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00267ce0:
      if (plVar1 != (int64_t *)0x0) {
LAB_00267e34:
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123b100();
        if (local_68 == (int64_t *)0x0) {
          bVar10 = false;
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b88600();
          bVar10 = local_40 != 0;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar10) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          FUN_00b88600();
          (**(code **)(*local_68 + 0x468))();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return this_ptr;
        }
        FUN_00d50b20();
      }
    }
  }
  FUN_00226f20();
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00267f8f;
    }
LAB_00268001:
    bVar10 = true;
  }
  else {
    if (local_68 == (int64_t *)0x0) goto LAB_00268001;
LAB_00267f8f:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01657380();
    if (local_68 == (int64_t *)0x0) {
      bVar10 = false;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      bVar10 = local_40 != 0;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar10) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01667b90();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0026819a;
    }
    bVar10 = false;
  }
  FUN_00d8ede0();
  if (bVar10) {
    return this_ptr;
  }
LAB_0026819a:
  FUN_00d50b20();
  return this_ptr;
}

