// Function: FUN_01267c40
// Address: 01267c40
// Size: 1128 bytes
// Class: MUSampledFunction

void FUN_01267c40(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_58;
  int64_t local_40;
  char local_38;
  
  if (NAN(param_1)) {
    FUN_00d64850();
    *(void*)(this_ptr + 0x120) = 0x7ff8000000000000;
    FUN_00d64910();
    if ((*(double *)(this_ptr + 0x130) == g_0238fee8) &&
       (!NAN(*(double *)(this_ptr + 0x130)) && !NAN(g_0238fee8))) {
      return;
    }
    FUN_00d64850();
    *(void*)(this_ptr + 0x130) = 0x3ff0000000000000;
    FUN_00d64910();
    return;
  }
  param_1 = param_1 - *(double *)(this_ptr + 0xe8);
  dVar4 = 0.0;
  if (0.0 <= param_1) {
    dVar4 = param_1;
  }
  uVar2 = -(uint64_t)(dVar4 < *(double *)(this_ptr + 0xf0));
  dVar4 = (double)(~uVar2 & (uint64_t)g_023908c8 | (uint64_t)dVar4 & uVar2);
  dVar3 = (double)FUN_01267080();
  dVar5 = dVar3;
  if (dVar3 <= dVar4) {
    dVar5 = dVar4;
  }
  local_58 = (double)(~-(uint64_t)(!NAN(dVar3) && !NAN(dVar3)) & (uint64_t)dVar4 |
                     (~-(uint64_t)(!NAN(dVar4) && !NAN(dVar4)) & (uint64_t)dVar4 |
                     (uint64_t)dVar5 & -(uint64_t)(!NAN(dVar4) && !NAN(dVar4))) &
                     -(uint64_t)(!NAN(dVar3) && !NAN(dVar3)));
  if (NAN(local_58)) {
    local_58 = g_023908c8;
    goto LAB_01267fdd;
  }
  FUN_01274c40(g_02391038);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01267d19;
    }
  }
  else if (local_40 != 0) {
LAB_01267d19:
    FUN_0125e7c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01267d5e;
      }
    }
    else if (local_40 != 0) {
LAB_01267d5e:
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_01267dd4;
        }
      }
      else if (local_40 != 0) {
LAB_01267dd4:
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
      goto LAB_01267f57;
    }
  }
  else if (local_40 != 0) {
LAB_01267f57:
    local_58 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013de8d0();
    FUN_00d50b20();
    local_58 = local_58 + dVar4;
  }
  if ((*(double *)(this_ptr + 0x120) == local_58) &&
     (!NAN(*(double *)(this_ptr + 0x120)) && !NAN(local_58))) {
    return;
  }
LAB_01267fdd:
  FUN_00d64850();
  *(double *)(this_ptr + 0x120) = local_58;
  FUN_00d64910();
  return;
}

