// Function: FUN_01a082c0
// Address: 01a082c0
// Size: 1964 bytes
// Class: Unknown

void FUN_01a082c0(void* param_1)

{
  uint8_t auVar1 [16];
  char cVar2;
  void *pvVar3;
  int64_t *this_ptr;
  bool bVar4;
  double dVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  int64_t local_a8;
  char local_a0;
  double local_98;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  double local_58;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(*this_ptr + 0x928))();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_98 = (double)FUN_0125a280();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  cVar2 = (**(code **)((int64_t)&dylib_command_00001288.cmd + *local_30))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    (**(code **)(*this_ptr + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_0125a280();
    (**(code **)(*this_ptr + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_01264380();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_0125a280();
    (**(code **)(*this_ptr + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (double)FUN_01264170();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_58 = local_58 + local_68;
  if ((char)this_ptr[0x2f] != '\0') {
    (**(code **)(*this_ptr + 0x928))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_30 == (int64_t *)0x0) {
      bVar4 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x928))();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar4 = local_a8 != 0;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar4) {
      (**(code **)(*this_ptr + 0x928))();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_012f7cb0();
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 < dVar5) {
        (**(code **)(*this_ptr + 0x928))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = (double)FUN_012f7cb0();
        if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x928))();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_012f9490();
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (dVar5 < local_58) {
        (**(code **)(*this_ptr + 0x928))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = (double)FUN_012f9490();
        if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_01989f80();
  FUN_01a080d0();
  uVar6 = (**(code **)(*local_30 + 0xbf8))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  uVar7 = (**(code **)(*local_30 + 0x938))(local_98);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  uVar8 = (**(code **)(*local_30 + 0x938))(local_58);
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68._0_4_ = (float)uVar6;
  local_68._4_4_ = (uint32_t)((uint64_t)uVar6 >> 0x20);
  uStack_60 = (uint32_t)extraout_XMM0_Qb;
  uStack_5c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar11._8_8_ = extraout_XMM0_Qb_00;
  auVar11._0_8_ = uVar7;
  auVar1._8_8_ = extraout_XMM0_Qb_01;
  auVar1._0_8_ = uVar8;
  auVar10._4_12_ = auVar1._4_12_;
  auVar10._0_4_ = (float)uVar8 - (float)uVar7;
  auVar9._4_4_ = local_68._4_4_;
  auVar9._0_4_ = (float)local_68 + g_023b1d84;
  auVar9._8_4_ = uStack_60;
  auVar9._12_4_ = uStack_5c;
  auVar9 = insertps(auVar11,auVar9,0x10);
  auVar11 = blendps(auVar10,g_023b27d0,0xe);
  FUN_00d051c0(auVar9._0_8_,auVar11._0_8_);
  (**(code **)(*this_ptr + 0x4d0))();
  return;
}

