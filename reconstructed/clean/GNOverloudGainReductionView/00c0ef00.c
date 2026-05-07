// Function: FUN_00c0ef00
// Address: 00c0ef00
// Size: 547 bytes
// Class: GNOverloudGainReductionView

void FUN_00c0ef00(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int64_t **pplVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  pplVar5 = &local_48;
  (**(code **)(*this_ptr + 0x5d0))();
  local_38 = local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b3c6f0(param_1);
  plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)unaff_ESI * 8);
  local_40 = '\0';
  local_48 = plVar1;
  FUN_00c4d260();
  if (plVar1 == (int64_t *)0x0) {
LAB_00c0efb3:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c0efb3;
  }
  plVar2 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
    if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = local_38;
  if (((unaff_ESI == 0) && (this_ptr[0x17] != 0)) && (plVar2 != (int64_t *)0x0)) {
    if (local_38[0x19] == 0) {
      (**(code **)(*(int64_t *)plVar2[0x11] + 0x998))();
      (**(code **)(*(int64_t *)plVar2[0x12] + 0x998))();
      lVar3 = g_0276c280;
      plVar2 = (int64_t *)this_ptr[0x17];
      if (g_0276c280 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x958))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)plVar2[0x11] + 0x998))();
      (**(code **)(*(int64_t *)plVar2[0x12] + 0x998))();
      lVar3 = g_0276c290;
      plVar2 = (int64_t *)this_ptr[0x17];
      if (g_0276c290 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x958))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (plVar2 == (int64_t *)0x0) goto LAB_00c0efff;
  FUN_00d50b20();
LAB_00c0efff:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

