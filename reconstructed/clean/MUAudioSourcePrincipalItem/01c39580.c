// Function: FUN_01c39580
// Address: 01c39580
// Size: 791 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

void FUN_01c39580(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *local_40;
  char local_38;
  
  FUN_01c399a0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01c3960c;
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_01c3960c:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01c3968d;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
LAB_01c3968d:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01c397d3;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01c3976f;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01c396c5:
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pplVar5 = &local_40;
    FUN_013dd6a0();
    plVar4 = local_40;
    if ((g_027c0170 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02790158 = FUN_007ef2d0();
      g_02790140 = "MUAudioSourcePrincipalItem";
      g_02790148 = 0x138;
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
    if (plVar4 == (int64_t *)0x0) {
      pplVar5 = &g_02802688;
      *(void*)(this_ptr + 1) = 0;
      plVar4 = g_02802688;
      if (g_02802690 != '\0') goto LAB_01c39759;
LAB_01c39798:
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *this_ptr = (int64_t)plVar4;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') {
        pplVar5 = &g_02802688;
      }
      *(void*)(this_ptr + 1) = 0;
      plVar4 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01c39798;
LAB_01c39759:
      *this_ptr = (int64_t)plVar4;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != (int64_t *)0x0) goto LAB_01c396c5;
LAB_01c3976f:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  FUN_00d50b20();
LAB_01c397d3:
  FUN_00d50b20();
  return;
}

