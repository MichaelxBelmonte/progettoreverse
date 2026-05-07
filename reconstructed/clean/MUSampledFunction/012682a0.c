// Function: FUN_012682a0
// Address: 012682a0
// Size: 696 bytes
// Class: MUSampledFunction

void FUN_012682a0(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  double dVar2;
  double dVar3;
  int64_t local_48;
  char local_40;
  double local_38;
  double local_28;
  
  local_28 = (double)FUN_01267080();
  dVar2 = (double)FUN_012671f0();
  dVar3 = g_023908c8;
  if (NAN(local_28)) {
joined_r0x0126854d:
    if (local_28 <= 0.0) goto LAB_01268331;
LAB_01268317:
    dVar3 = *(double *)(this_ptr + 0xf0);
    if (*(double *)(this_ptr + 0xf0) < local_28) goto LAB_01268331;
    local_38 = 0.0;
    if (0.0 <= dVar2) goto LAB_0126834c;
LAB_0126835a:
    dVar2 = local_28;
    if (local_28 <= local_38) {
      dVar2 = local_38;
    }
    local_38 = (double)(~-(uint64_t)(!NAN(local_28) && !NAN(local_28)) & (uint64_t)local_38 |
                       (uint64_t)dVar2 & -(uint64_t)(!NAN(local_28) && !NAN(local_28)));
  }
  else {
    if (dVar2 < local_28) {
      local_28 = (local_28 + dVar2) * g_023942d0;
      dVar2 = local_28;
      goto joined_r0x0126854d;
    }
    if (0.0 < local_28) goto LAB_01268317;
LAB_01268331:
    local_38 = 0.0;
    local_28 = dVar3;
    if (dVar2 < 0.0) goto LAB_0126835a;
LAB_0126834c:
    local_38 = dVar2;
    if (!NAN(local_38)) goto LAB_0126835a;
  }
  if (*(double *)(this_ptr + 0xf0) <= local_38) {
    local_38 = g_023908c8;
  }
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_012684aa;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_012684aa;
  if (!NAN(local_28)) {
    local_28 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar2 = (double)FUN_013de8d0();
    local_28 = local_28 + dVar2;
  }
  if (!NAN(local_38)) {
    local_38 = (double)FUN_012685b0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar2 = (double)FUN_013de8d0();
    local_38 = local_38 + dVar2;
  }
  FUN_00d50b20();
LAB_012684aa:
  if ((*(double *)(this_ptr + 0x118) != local_28) ||
     (NAN(*(double *)(this_ptr + 0x118)) || NAN(local_28))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x118) = local_28;
    FUN_00d64910();
  }
  if ((*(double *)(this_ptr + 0x120) != local_38) ||
     (NAN(*(double *)(this_ptr + 0x120)) || NAN(local_38))) {
    FUN_00d64850();
    *(double *)(this_ptr + 0x120) = local_38;
    FUN_00d64910();
  }
  return;
}

