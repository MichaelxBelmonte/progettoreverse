// Function: FUN_012cb710
// Address: 012cb710
// Size: 1372 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"

void* FUN_012cb710(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  char cVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t *plVar5;
  void* pVar6;
  code *pcVar7;
  int iVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  int64_t **pplVar10;
  int64_t local_a8;
  char local_a0;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  local_38 = param_2;
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if (*(int64_t *)(arg1 + 0x48) == 0) {
      bVar1 = false;
      plVar9 = (int64_t *)0x0;
    }
    else {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_60 = *(int64_t *)(arg1 + 0x48);
      local_58 = 0xffffffff;
      local_50 = 0;
      bVar1 = false;
      plVar9 = (int64_t *)0x0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar8 = -local_58._4_4_;
          }
          else {
            iVar8 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar8);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar8 = 0;
          }
          local_58 = CONCAT44(iVar8,(int)local_58);
        }
        lVar3 = (int64_t)(int)local_58;
        iVar8 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar8);
        if (*(int *)(local_60 + 0xc) <= iVar8) break;
        pcVar7 = *(code **)(local_60 + 0x10);
        plVar5 = *(int64_t **)(pcVar7 + lVar3 * 8 + 8);
        local_70 = plVar5;
        if ((g_026fdd70 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
          g_026e3238 = FUN_00115af0();
          g_026e3220 = "MUAudioFileSource";
          g_026e3228 = 0xa0;
          pcVar7 = FUN_00136df0;
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
        pVar6 = (void*)pcVar7;
        pplVar10 = (int64_t **)&g_02802688;
        if (plVar5 != (int64_t *)0x0) {
          (**(code **)(*plVar5 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar10 = &local_70;
          if (cVar2 == '\0') {
            pplVar10 = (int64_t **)&g_02802688;
          }
        }
        plVar5 = *pplVar10;
        if (plVar5 == plVar9) {
          if ((!bVar1) && (plVar5 != (int64_t *)0x0)) {
            plVar5 = plVar9;
            if (*(char *)(pplVar10 + 1) != '\0') goto LAB_012cb865;
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar5 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar9 = plVar5;
              bVar1 = true;
              goto LAB_012cb8c0;
            }
          }
          else {
            if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_012cb865:
            *(void*)(pplVar10 + 1) = 0;
          }
          plVar9 = plVar5;
          bVar1 = true;
        }
LAB_012cb8c0:
        if (plVar9 != (int64_t *)0x0) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123b100();
          lVar3 = *local_38;
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (local_a8 == lVar3) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar1) {
              FUN_00d50b00();
            }
            *this_ptr = plVar9;
            *(void*)(this_ptr + 1) = 1;
            FUN_00115e00();
            return this_ptr;
          }
        }
      }
      FUN_00115e00();
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00115cd0();
    pVar6 = 0x25ccea8;
    *plVar5 = (int64_t)&g_025ccea8;
    plVar5[0x13] = 0;
    plVar5[0xd] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *(void*)((int64_t)plVar5 + 0x84) = 0;
    *(void*)((int64_t)plVar5 + 0x8c) = 0;
    (*g_025ccec0)();
    if (plVar5 == plVar9) {
      plVar5 = plVar9;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    else if ((bVar1) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123b010();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b88600();
    local_48 = local_70;
    local_40 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_40 = '\x01';
    FUN_0123ab70();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123af90();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00b7a710();
    FUN_0123afd0();
    FUN_012cb4b0();
    pvVar4 = _pthread_getspecific(pVar6);
    plVar9 = plVar5;
    if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar9 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar9 + 0x3d0))();
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  return this_ptr;
}

