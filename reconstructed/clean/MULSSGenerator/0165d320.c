// Function: FUN_0165d320
// Address: 0165d320
// Size: 784 bytes
// Class: MULSSGenerator

double FUN_0165d320(double param_1,uint64_t param_2)

{
  uint64_t uVar1;
  void *pvVar2;
  void* pVar3;
  void*puVar4;
  double *arg1;
  double dVar5;
  uint64_t uVar6;
  double dVar7;
  uint8_t local_68 [8];
  uint8_t local_60 [4];
  int local_5c;
  int64_t local_58;
  char local_50;
  double local_48;
  int64_t local_40;
  char local_38;
  
  local_48 = param_1;
  FUN_0123fd00();
  uVar1 = FUN_00e7cd00(local_48);
  puVar4 = local_68;
  FUN_0165d150(puVar4,uVar1,0,local_60);
  local_40 = local_58;
  pVar3 = (void*)puVar4;
  local_38 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0165d393;
    }
    local_40 = 0;
  }
  else {
LAB_0165d393:
    local_38 = '\x01';
    if (local_40 != 0) {
      if ((local_5c != 0) && (dVar5 = (double)FUN_00e7c860(), dVar5 <= local_48)) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar4 = local_68;
        FUN_01253c10(puVar4,&local_40,local_60,param_2);
        pVar3 = (void*)puVar4;
      }
      dVar5 = (double)FUN_00e7c860();
      local_48 = local_48 - dVar5;
      if (arg1 != (double *)0x0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123fff0();
        uVar6 = FUN_00e7c860();
        dVar5 = (double)_fmod(local_48);
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_58 = FUN_0123ffb0();
        dVar7 = (double)FUN_00e7c860();
        *arg1 = (double)(-(uint64_t)(dVar5 < 0.0) &
                              (uint64_t)((double)(uVar6 & g_023908f0) + dVar5) |
                             ~-(uint64_t)(dVar5 < 0.0) & (uint64_t)dVar5) * dVar7;
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_00e7c860();
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_58 = FUN_0123ffb0();
      dVar7 = (double)FUN_00e7c860();
      local_48 = local_48 * dVar7 + dVar5;
      if (local_38 == '\0') {
        return local_48;
      }
      goto LAB_0165d60e;
    }
  }
  local_38 = '\x01';
  if (arg1 != (double *)0x0) {
    dVar5 = (double)_fmod(local_48);
    *arg1 = (double)(~-(uint64_t)(dVar5 < 0.0) & (uint64_t)dVar5 |
                         (uint64_t)(g_023b1e98 + dVar5) & -(uint64_t)(dVar5 < 0.0));
  }
LAB_0165d60e:
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return local_48;
}

