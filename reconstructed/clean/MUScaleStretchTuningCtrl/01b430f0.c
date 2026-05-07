// Function: FUN_01b430f0
// Address: 01b430f0
// Size: 965 bytes
// Class: MUScaleStretchTuningCtrl

uint32_t FUN_01b430f0(uint64_t param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* in_ECX;
  int64_t lVar6;
  int64_t lVar7;
  double dVar8;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar7 = local_60;
  if (param_2 == 0) goto LAB_01b43469;
  param_1 = FUN_01ad3cb0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01b43469;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_01b43469;
  FUN_01b43d80();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01b432e7;
    FUN_00d50b00();
LAB_01b43222:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    do {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_48) {
        lVar5 = lVar7;
        FUN_01a81420();
        in_ECX = (void*)lVar5;
        bVar1 = false;
        goto joined_r0x01b43327;
      }
      lVar6 = *(int64_t *)(lVar7 + 0x10);
      local_60 = *(int64_t *)(lVar6 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar6);
      in_ECX = (void*)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_013faf20();
    } while ((dVar8 == g_02390448) && (!NAN(dVar8) && !NAN(g_02390448)));
    FUN_01a81420();
    bVar1 = false;
LAB_01b43359:
    bVar2 = false;
  }
  else {
    if (local_60 != 0) goto LAB_01b43222;
LAB_01b432e7:
    bVar1 = true;
joined_r0x01b43327:
    if (lVar7 == 0) goto LAB_01b43359;
    lVar7 = 0;
    FUN_00d50b20();
    bVar2 = true;
  }
  FUN_01af1380();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017703a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b07460();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2 && lVar7 != 0) {
    FUN_00d50b20();
  }
  param_1 = FUN_00d50b20();
LAB_01b43469:
  uVar3 = FUN_01ad0160(param_1,param_2 & 0xff);
  return uVar3;
}

