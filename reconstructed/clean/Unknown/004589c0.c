// Function: FUN_004589c0
// Address: 004589c0
// Size: 2079 bytes
// Class: Unknown

void FUN_004589c0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  double dVar8;
  int64_t local_98;
  char local_90;
  uint64_t local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar1 = local_58;
  lVar4 = this_ptr[0xc];
  if ((lVar4 != 0) || (lVar4 = this_ptr[6], lVar4 != 0)) {
    FUN_00d50b00();
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(char *)(lVar4 + 0x249) != '\0') {
    cVar2 = FUN_0053b6e0();
    if (cVar2 == '\0') {
      cVar2 = FUN_0053b720();
      if (cVar2 == '\0') {
        dVar8 = *(double *)(lVar4 + 0x260);
        if ((dVar8 != (double)this_ptr[8]) || (NAN(dVar8) || NAN((double)this_ptr[8]))) {
          this_ptr[8] = (int64_t)dVar8;
          if (this_ptr[0xd] != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990(dVar8);
            }
            dVar8 = (double)FUN_016553c0(dVar8);
          }
          this_ptr[7] = (int64_t)dVar8;
          cVar2 = FUN_0053b6c0();
          if ((cVar2 == '\0') && ((char)this_ptr[9] != '\0')) {
            FUN_00d403d0();
            lVar7 = g_026fe420;
            if (g_026fe420 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b00();
            local_98 = 0;
            local_90 = '\0';
            plVar6 = &local_98;
            FUN_00d40470(plVar6,&stack0xffffffffffffff78,1,3);
            param_1 = (void*)plVar6;
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (lVar7 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          *(void*)(this_ptr + 9) = 1;
        }
      }
    }
    else if (*(char *)((int64_t)this_ptr + 0x74) != '\0') {
      FUN_0052f190();
      lVar7 = (**(code **)(*local_58 + 0x5e0))();
      this_ptr[7] = lVar7;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00b34cb0();
  cVar2 = (**(code **)(*local_58 + 0x18))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar2 != '\0') && ((double)this_ptr[10] <= *(double *)(lVar4 + 0x260))) {
    (**(code **)(*this_ptr + 0x390))();
    this_ptr[10] = 0x7ff8000000000000;
  }
  if ((int)this_ptr[0xe] == 2) {
    lVar4 = this_ptr[0xc];
    if (lVar4 == 0) {
      lVar4 = this_ptr[6];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    lVar4 = *(int64_t *)(lVar4 + 0x308);
    FUN_00d50b20();
    if (lVar4 != 0) goto LAB_004591d2;
  }
  FUN_00b34cb0();
  cVar2 = (**(code **)(*local_58 + 0x38))();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_004591d2;
  cVar2 = FUN_0052f170();
  if ((NAN((double)this_ptr[0xf])) ||
     (dVar8 = (double)FUN_00e7d6f0(), dVar8 < (double)this_ptr[0xf] + g_023934c8)) {
    if (cVar2 == '\0') goto LAB_004591d2;
  }
  else {
    this_ptr[0xf] = 0x7ff8000000000000;
  }
  FUN_005174e0();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_005174e0();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = FUN_01320130();
  if (this_ptr[0xd] != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = FUN_016553c0(local_70);
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = FUN_013201a0();
  if (this_ptr[0xd] != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = FUN_016553c0(local_78);
  }
  FUN_0053a8d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dcab0(local_78,local_70);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0053a8d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_002dcf40();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(char *)((int64_t)this_ptr + 0x74) != '\0') {
    FUN_00453670();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00458fe0;
      }
    }
    else if (local_58 != (int64_t *)0x0) {
LAB_00458fe0:
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)plVar1 + 0xc) <= local_40) break;
        lVar7 = plVar1[2];
        local_58 = *(int64_t **)(lVar7 + 8 + lVar4 * 8);
        FUN_0053a8d0();
        pVar5 = (void*)lVar7;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_002dcab0(local_78,local_70);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        FUN_0053a8d0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_002dcf40();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
  }
  FUN_005174e0();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_005174e0();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00324d40();
LAB_004591d2:
  FUN_00d50b20();
  return;
}

