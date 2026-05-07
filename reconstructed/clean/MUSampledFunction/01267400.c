// Function: FUN_01267400
// Address: 01267400
// Size: 1430 bytes
// Class: MUSampledFunction

void FUN_01267400(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  double dVar3;
  double local_68;
  double local_58;
  int64_t local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(void*)(this_ptr + 0x118) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(this_ptr + 0x128) == g_0238fee8) &&
       (!NAN(*(double *)(this_ptr + 0x128)) && !NAN(g_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(void*)(this_ptr + 0x128) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(this_ptr + 0xe8);
  dVar3 = *(double *)(this_ptr + 0xf0);
  if (param_1 <= *(double *)(this_ptr + 0xf0)) {
    dVar3 = param_1;
  }
  local_58 = (double)(~-(uint64_t)(0.0 < dVar3) & (uint64_t)g_023908c8 |
                     (uint64_t)dVar3 & -(uint64_t)(0.0 < dVar3));
  dVar3 = (double)FUN_012671f0();
  if (NAN(local_58)) {
    local_58 = g_023908c8;
    goto LAB_012678b2;
  }
  if (dVar3 < local_58) {
    uVar2 = -(uint64_t)(local_58 < *(double *)(this_ptr + 0xf0));
    local_68 = (double)(~uVar2 & (uint64_t)g_023908c8 | uVar2 & (uint64_t)local_58);
    if (NAN(local_68)) {
      local_68 = g_023908c8;
    }
    else {
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267509;
        }
      }
      else if (local_40 != 0) {
LAB_01267509:
        local_68 = (double)FUN_012685b0(local_68);
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013de8d0();
        FUN_00d50b20();
        local_68 = local_68 + dVar3;
      }
      if ((*(double *)(this_ptr + 0x120) == local_68) &&
         (!NAN(*(double *)(this_ptr + 0x120)) && !NAN(local_68))) goto LAB_012675bb;
    }
    FUN_00d64850();
    *(double *)(this_ptr + 0x120) = local_68;
    FUN_00d64910();
  }
LAB_012675bb:
  FUN_01268710();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_012675ec;
    }
  }
  else if (local_40 != 0) {
LAB_012675ec:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267631;
      }
    }
    else if (local_40 != 0) {
LAB_01267631:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_012676a7;
        }
      }
      else if (local_40 != 0) {
LAB_012676a7:
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e61a0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar1 = _pthread_getspecific(in_ECX);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013710d0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0126782a;
    }
  }
  else if (local_40 != 0) {
LAB_0126782a:
    local_58 = (double)FUN_012685b0(local_58);
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar3 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar3;
  }
  if ((*(double *)(this_ptr + 0x118) == local_58) &&
     (!NAN(*(double *)(this_ptr + 0x118)) && !NAN(local_58))) {
    return;
  }
LAB_012678b2:
  FUN_00d64850();
  *(double *)(this_ptr + 0x118) = local_58;
  FUN_00d64910();
  return;
}

