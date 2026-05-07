// Function: FUN_016d1460
// Address: 016d1460
// Size: 810 bytes
// Class: Unknown

void FUN_016d1460(double param_1,double param_2,uint64_t param_3,void *param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  uint64_t in_RCX;
  int64_t lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int *in_stack_ffffffffffffff88;
  double local_58;
  int64_t local_40;
  code *local_38;
  
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165be20();
  dVar6 = (double)FUN_016cefb0();
  dVar7 = (double)FUN_016d0590();
  pvVar4 = _pthread_getspecific((void*)in_RCX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  lVar2 = local_40;
  if (((((char)local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar1 = *(int *)(lVar2 + 0xc);
  FUN_00c8e690();
  lVar3 = local_40;
  if ((((char)local_38 == '\0') && (local_40 != 0)) &&
     ((FUN_00d50b00(), (char)local_38 != '\0' && (local_40 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (*(int *)(lVar2 + 0xc) < 1) {
    local_58 = 0.0;
  }
  else {
    in_stack_ffffffffffffff88 = (int *)(g_023b4df8 / dVar6);
    local_58 = 0.0;
    lVar5 = 0;
    do {
      pvVar4 = _pthread_getspecific((void*)in_RCX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = FUN_019079b0();
      FUN_00e7b970();
      dVar6 = (double)FUN_00e7c860();
      pvVar4 = _pthread_getspecific((void*)in_RCX);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_01907950();
      dVar6 = (double)((uint64_t)((dVar6 * (double)in_stack_ffffffffffffff88 + dVar7) - dVar8) &
                      g_023908f0);
      *(double *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 8) = dVar6;
      if (dVar6 <= local_58) {
        dVar6 = local_58;
      }
      local_58 = dVar6;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar2 + 0xc));
  }
  local_40 = 0;
  local_38 = FUN_00e8b590;
  _qsort_r(&local_40,8,0x1708ec0,param_4,in_stack_ffffffffffffff88);
  dVar7 = (local_58 / param_1) *
          *(double *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)(iVar1 / 2) * 8);
  FUN_00d50b20();
  FUN_00d50b20();
  dVar6 = g_02411138;
  if (param_2 / g_02411138 < dVar7) {
    dVar6 = param_2 / dVar7;
  }
  _log10(dVar6);
  return;
}

