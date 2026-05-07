// Function: FUN_019b61e0
// Address: 019b61e0
// Size: 2712 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


uint64_t FUN_019b61e0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  uint uVar10;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
  char local_38;
  
  plVar4 = (int64_t *)*arg1;
  cVar6 = (char)arg1[1];
  if ((cVar6 == '\0') || (plVar4 == (int64_t *)0x0)) {
    if (plVar4 != (int64_t *)0x0) goto LAB_019b6242;
    plVar4 = (int64_t *)*arg1;
    cVar1 = (char)arg1[1];
    if (plVar4 != (int64_t *)0x0) goto LAB_019b63e9;
LAB_019b6648:
    lVar3 = *arg1;
  }
  else {
    FUN_00d50b00();
LAB_019b6242:
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_01263cf0();
      if (cVar1 == '\0') {
        if (plVar4 != (int64_t *)0x0) goto LAB_019b6391;
        goto LAB_019b6666;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012640f0();
      if (local_40 == plVar4) {
        if ((cVar6 == '\0') && (local_40 != (int64_t *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_019b6340;
          }
          goto LAB_019b622f;
        }
joined_r0x019b6363:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar7 = cVar6 != '\0';
          cVar6 = '\x01';
          if (bVar7) {
            FUN_00d50b20();
LAB_019b6340:
            cVar6 = '\x01';
            goto joined_r0x019b6363;
          }
        }
        else {
          if (cVar6 != '\0') {
            FUN_00d50b20();
          }
LAB_019b622f:
          local_38 = '\0';
          cVar6 = '\x01';
        }
      }
    } while (plVar4 != (int64_t *)0x0);
    plVar4 = (int64_t *)*arg1;
    cVar1 = (char)arg1[1];
    if (plVar4 == (int64_t *)0x0) goto LAB_019b6648;
LAB_019b63e9:
    cVar6 = cVar1;
    if ((cVar6 != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar4 == (int64_t *)0x0) goto LAB_019b6648;
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_01263cf0();
      if (cVar1 == '\0') goto LAB_019b6391;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      if (local_40 == plVar4) {
        if ((cVar6 == '\0') && (local_40 != (int64_t *)0x0)) {
          cVar6 = '\x01';
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_019b6550;
          }
        }
        else {
joined_r0x019b6586:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar7 = cVar6 != '\0';
          cVar6 = '\x01';
          if (bVar7) {
            FUN_00d50b20();
LAB_019b6550:
            cVar6 = '\x01';
            goto joined_r0x019b6586;
          }
        }
        else {
          bVar7 = cVar6 != '\0';
          cVar6 = '\x01';
          if (bVar7) {
            FUN_00d50b20();
            cVar6 = '\x01';
          }
        }
      }
    } while (plVar4 != (int64_t *)0x0);
LAB_019b6666:
    lVar3 = *arg1;
  }
  bVar7 = true;
  if (lVar3 != 0) {
LAB_019b667a:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if (local_40 == (int64_t *)0x0) {
      bVar8 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar8 = local_60 != 0;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar8) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      plVar4 = local_40;
      if (local_40 != (int64_t *)0x0) {
        do {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_014bc070();
          if (cVar1 == '\0') {
            plVar5 = local_40;
            if (local_40 != (int64_t *)0x0) goto LAB_019b69ca;
            goto LAB_019b6caa;
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc340();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        } while (local_40 != (int64_t *)0x0);
        plVar4 = (int64_t *)0x0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar5 = plVar4;
      if (local_40 == plVar4) {
LAB_019b6b78:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar5 = local_40;
          if (plVar4 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_019b6b78;
        }
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        plVar5 = local_40;
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      while (plVar5 != (int64_t *)0x0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_014bc070();
        if (cVar1 == '\0') goto LAB_019b69ca;
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        if (local_40 == plVar5) {
LAB_019b6c8a:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            plVar5 = local_40;
            goto LAB_019b6c8a;
          }
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
    }
  }
LAB_019b6caa:
  uVar10 = (**(code **)(*this_ptr + 0xc40))();
  arg1 = (int64_t *)(uint64_t)uVar10;
  goto LAB_019b6cbc;
LAB_019b6391:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_0125a2d0();
  if (cVar1 == '\0') {
    bVar7 = false;
    if (*arg1 == 0) goto LAB_019b6caa;
    goto LAB_019b667a;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_0125a2c0();
  arg1 = (int64_t *)(uint64_t)uVar10;
  bVar7 = false;
  if (cVar6 == '\0') goto LAB_019b6cd0;
  goto LAB_019b6cc4;
LAB_019b69ca:
  pvVar2 = _pthread_getspecific(param_1);
  plVar4 = plVar5;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar4 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  fVar9 = (float)(**(code **)(*plVar4 + 0x3e0))();
  if (!NAN(fVar9)) {
    pvVar2 = _pthread_getspecific(param_1);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    uVar10 = (**(code **)(*plVar5 + 0x3e0))();
    arg1 = (int64_t *)(uint64_t)uVar10;
  }
  FUN_00d50b20();
  if (NAN(fVar9)) goto LAB_019b6caa;
LAB_019b6cbc:
  if (cVar6 != '\0') {
LAB_019b6cc4:
    if (!bVar7) {
      FUN_00d50b20();
    }
  }
LAB_019b6cd0:
  return (uint64_t)arg1 & 0xffffffff;
}

