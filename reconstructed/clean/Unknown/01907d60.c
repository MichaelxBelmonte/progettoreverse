// Function: FUN_01907d60
// Address: 01907d60
// Size: 1149 bytes
// Class: Unknown

void FUN_01907d60(double param_1,double param_2,double param_3,double param_4)

{
  void*puVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  void*this_ptr;
  double dVar7;
  double dVar8;
  double in_XMM4_Qa;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x2572358;
  *puVar1 = &g_02572358;
  (*g_02572370)();
  FUN_00e7bcc0();
  lVar2 = FUN_00e7cd00(param_1);
  dVar7 = (double)FUN_00e7c860();
  if ((double)((uint64_t)(param_1 - dVar7) & g_023908f0) <= g_0241ad28) {
    FUN_01907b60(param_2);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00e7b820();
    dVar7 = (double)FUN_00e7c860();
    FUN_01907b60(param_4 - (param_3 - dVar7) * in_XMM4_Qa);
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00e7cd00(param_3);
    dVar7 = (double)FUN_00e7c860();
    if (g_0241ad28 < (double)((uint64_t)(param_3 - dVar7) & g_023908f0)) {
      dVar7 = (double)FUN_00e7c860();
      FUN_01907b60(param_2 - (param_1 - dVar7) * in_XMM4_Qa);
      if ((local_30 == '\0') && (local_38 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      FUN_00e7b820();
      pvVar3 = _pthread_getspecific(pVar6);
      lVar5 = local_38;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar5 = *(int64_t *)(local_38 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      dVar7 = *(double *)(lVar5 + 0x40);
      dVar8 = (double)FUN_00e7c860();
      FUN_01907b60(dVar7 + dVar8 * in_XMM4_Qa);
      if ((local_40 == '\0') && (lVar2 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      *this_ptr = puVar1;
      *(void*)(this_ptr + 1) = 1;
      if (local_38 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    FUN_00e7b970();
    dVar7 = (double)FUN_00e7c860();
    FUN_01907b60(param_2 - (param_1 - dVar7) * in_XMM4_Qa);
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_01907b60(param_4);
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

