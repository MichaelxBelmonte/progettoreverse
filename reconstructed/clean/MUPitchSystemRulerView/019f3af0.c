// Function: FUN_019f3af0
// Address: 019f3af0
// Size: 936 bytes
// Class: MUPitchSystemRulerView

void* FUN_019f3af0(uint64_t param_1,double param_2)

{
  bool bVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  void*puVar5;
  int64_t *in_RDX;
  int64_t *arg1;
  void*this_ptr;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  
  dVar7 = (double)(**(code **)(*arg1 + 0xa50))();
  if (((char)arg1[0x9f] != '\0') || (cVar2 = FUN_019a9840(), cVar2 == '\0')) {
    (**(code **)(*arg1 + 0x9b8))(dVar7,param_2);
    return this_ptr;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*in_RDX == 0) {
    (**(code **)(*arg1 + 0x988))();
    if (local_78 == 0) goto LAB_019f3e9e;
    bVar1 = true;
    if (local_70 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_000ba510();
    if (local_78 == 0) {
      bVar1 = false;
    }
    else if (local_70 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      param_2 = param_2 + dVar7;
      iVar6 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f7cb0();
        pvVar4 = _pthread_getspecific((void*)puVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_012f9490();
        if ((dVar8 <= param_2) && (dVar7 <= dVar9)) {
          pvVar4 = _pthread_getspecific((void*)puVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = dVar7;
          if (dVar7 <= dVar8) {
            dVar10 = dVar8;
          }
          dVar8 = param_2;
          if (dVar9 <= param_2) {
            dVar8 = dVar9;
          }
          FUN_012e9900(dVar10,dVar8 - dVar10);
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          FUN_00d214d0();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_78 + 0xc));
    }
    FUN_000be170();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar1) {
      return this_ptr;
    }
    FUN_00d50b20();
    return this_ptr;
  }
LAB_019f3e9e:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

