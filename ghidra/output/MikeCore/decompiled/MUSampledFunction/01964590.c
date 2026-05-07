// Function: FUN_01964590
// Address: 01964590
// Size: 813 bytes
// Class: MUSampledFunction


float FUN_01964590(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  float fVar6;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  float local_48;
  float local_44;
  longlong *local_40;
  char local_38;
  float local_2c;
  
  FUN_01989f80();
  local_2c = (float)(**(code **)(&UNK_00001418 + *local_40))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  plVar3 = local_40;
  lVar2 = *(longlong *)(unaff_RDI + 0x178);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_44 = (float)(**(code **)(*plVar3 + 0xc38))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2c == 0.0) && (!NAN(local_2c))) {
    if ((*(float *)(unaff_RDI + 0x1d0) == DAT_02390124) &&
       (!NAN(*(float *)(unaff_RDI + 0x1d0)) && !NAN(DAT_02390124))) {
      local_2c = *(float *)(unaff_RDI + 0x1d0);
      fVar6 = local_44;
      if ((local_2c == DAT_02390124) && (!NAN(local_2c) && !NAN(DAT_02390124))) {
        return local_44;
      }
      goto LAB_01964847;
    }
  }
  uVar5 = FUN_01989f80();
  local_50 = 0;
  local_58 = *(longlong *)(unaff_RDI + 0x178);
  if (local_58 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_50 = '\x01';
  FUN_019d4fe0(uVar5,&local_58);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    fVar6 = local_2c * local_44 + (DAT_02390124 - local_2c) * local_44;
    local_2c = *(float *)(unaff_RDI + 0x1d0);
    if ((local_2c == DAT_02390124) && (!NAN(local_2c) && !NAN(DAT_02390124))) {
      return fVar6;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    plVar4 = plVar3;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar4 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    pvVar1 = _pthread_getspecific(param_1);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar3 + 0x3a8))(local_44);
    local_48 = (float)(**(code **)(*plVar4 + 0x3a0))();
    FUN_00d50b20();
    fVar6 = local_48 * local_2c + (DAT_02390124 - local_2c) * local_44;
    local_2c = *(float *)(unaff_RDI + 0x1d0);
    if ((local_2c == DAT_02390124) && (!NAN(local_2c) && !NAN(DAT_02390124))) {
      return fVar6;
    }
  }
LAB_01964847:
  FUN_01989f80(fVar6);
  local_48 = (float)(**(code **)(*local_40 + 0xcd8))();
  local_2c = (float)_powf(local_2c,DAT_02391090);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return local_2c * (local_44 - local_48) + local_48;
}


