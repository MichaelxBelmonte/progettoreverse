// Function: FUN_00c324e0
// Address: 00c324e0
// Size: 590 bytes
// Class: GNOverloudTapedesk

void FUN_00c324e0(float param_1)

{
  int unaff_ESI;
  int64_t *this_ptr;
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = -1;
  fVar4 = 0.0;
  bVar1 = 0;
  if ((*(char *)((int64_t)this_ptr + 0xdc) != '\0') && (bVar1 = 0, unaff_ESI - 7U < 2)) {
    fVar4 = (float)(**(code **)(*this_ptr + 0x458))();
    fVar4 = param_1 - fVar4;
    bVar1 = 1;
    if (unaff_ESI == 7) {
      iVar2 = 8;
    }
    else if (unaff_ESI == 8) {
      iVar2 = 7;
    }
    else {
      bVar1 = 0;
    }
  }
  fVar3 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)unaff_ESI * 4);
  if ((fVar3 != param_1) || (NAN(fVar3) || NAN(param_1))) {
    *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)unaff_ESI * 4) = param_1;
    (**(code **)(*this_ptr + 0x638))(param_1);
    FUN_00b32040();
  }
  if (!(bool)(bVar1 & (fVar4 != 0.0 && *(char *)((int64_t)this_ptr + 0xdc) != '\0'))) {
    return;
  }
  fVar3 = *(float *)(this_ptr + 0x1c);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    fVar3 = (float)(**(code **)(*this_ptr + 0x458))();
  }
  fVar3 = fVar3 - fVar4;
  if ((0.0 <= fVar3) && (fVar3 <= g_02390124)) {
    *(void*)(this_ptr + 0x1c) = 0;
    fVar4 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4);
    if ((fVar4 == fVar3) && (!NAN(fVar4) && !NAN(fVar3))) {
      return;
    }
    *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4) = fVar3;
    (**(code **)(*this_ptr + 0x638))();
    FUN_00b32040();
    return;
  }
  if (((0.0 <= fVar3) || (*(float *)(this_ptr + 0x1c) != 0.0)) ||
     (NAN(*(float *)(this_ptr + 0x1c)))) {
    if (((fVar3 <= g_02390124) || (*(float *)(this_ptr + 0x1c) != 0.0)) ||
       (NAN(*(float *)(this_ptr + 0x1c)))) goto LAB_00c32718;
    fVar4 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4);
    if ((fVar4 == g_02390124) && (!NAN(fVar4) && !NAN(g_02390124))) goto LAB_00c32718;
    *(void*)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4) = 0x3f800000;
    fVar4 = g_02390124;
  }
  else {
    fVar4 = *(float *)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) goto LAB_00c32718;
    *(void*)(*(int64_t *)(this_ptr[0x13] + 0x10) + (int64_t)iVar2 * 4) = 0;
    fVar4 = 0.0;
  }
  (**(code **)(*this_ptr + 0x638))(fVar4);
  FUN_00b32040();
LAB_00c32718:
  *(float *)(this_ptr + 0x1c) = fVar3;
  return;
}

