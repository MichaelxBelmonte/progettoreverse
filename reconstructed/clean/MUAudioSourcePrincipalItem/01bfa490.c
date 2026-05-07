// Function: FUN_01bfa490
// Address: 01bfa490
// Size: 773 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

uint32_t FUN_01bfa490(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t **pplVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  int64_t *local_48;
  char local_40;
  uint32_t local_34;
  
  local_34 = g_02390124;
  if (*this_ptr == 0) {
    return g_02390124;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) {
      return local_34;
    }
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == (int64_t *)0x0) {
    return local_34;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01bfa5a5;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_01bfa5a5:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar4 = &local_48;
    FUN_013dd6a0();
    plVar5 = local_48;
    if ((g_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02790158 = FUN_007ef2d0();
      g_02790140 = "MUAudioSourcePrincipalItem";
      g_02790148 = 0x138;
      param_1 = 0x10fe5c0;
      g_02790150 = FUN_010fe5c0;
      g_02790160 = 0;
      ram_0000000002790168 = 0;
      g_02790170 = 0;
      ram_0000000002790178 = 0;
      g_02790180 = 0;
      ram_0000000002790188 = 0;
      g_02790190 = 0;
      ram_0000000002790198 = 0;
      g_027901a0 = 0;
      ram_00000000027901a8 = 0;
      g_027901b0 = 0;
      ram_00000000027901b8 = 0;
      g_027901c0 = 0;
      ram_00000000027901c8 = 0;
      g_027901d0 = 0;
      ram_00000000027901d8 = 0;
      g_027901e0 = 0;
      ram_00000000027901e8 = 0;
      g_027901f0 = 0;
      ram_00000000027901f8 = 0;
      g_02790200 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (int64_t *)0x0) {
      pplVar4 = &g_02802688;
      plVar5 = g_02802688;
      if (g_02802690 == '\0') goto LAB_01bfa653;
LAB_01bfa628:
      *(void*)(pplVar4 + 1) = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar4 = &g_02802688;
      }
      plVar5 = *pplVar4;
      if (*(char *)(pplVar4 + 1) != '\0') goto LAB_01bfa628;
LAB_01bfa653:
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      local_34 = g_02390124;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = FUN_014bc150();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01bfa6cf;
  }
  local_34 = g_02390124;
LAB_01bfa6cf:
  FUN_00d50b20();
  return local_34;
}

