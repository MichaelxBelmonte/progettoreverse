// Function: FUN_015b8f00
// Address: 015b8f00
// Size: 972 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


float FUN_015b8f00(float param_1,char param_2)

{
  int iVar1;
  void *pvVar2;
  void* in_ECX;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_38;
  float local_34;
  
  lVar3 = (int64_t)unaff_ESI;
  local_38 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar3 * 4);
  fVar4 = (float)FUN_015bcfa0(local_38,&local_38);
  fVar6 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar3 * 4);
  param_1 = param_1 / fVar6;
  fVar7 = (float)(-(uint)(param_1 < g_02394274) & (uint)g_02390d34 |
                 ~-(uint)(param_1 < g_02394274) & (uint)param_1);
  if (fVar7 < g_02390124) {
    fVar7 = g_02390124 / fVar7;
  }
  fVar5 = g_02390d34;
  if (fVar7 <= g_02390d34) {
    fVar5 = fVar7;
  }
  fVar5 = g_02390d34 - fVar5;
  fVar6 = local_38 / fVar6;
  if (0.0 < fVar4) {
    if (g_02390124 < fVar4) {
      fVar6 = g_02390124 / fVar6;
      fVar4 = g_02390d34 - fVar4;
    }
    else {
      fVar5 = 0.0;
    }
  }
  if (0 < unaff_ESI) {
    param_1 = (float)_powf(param_1);
  }
  if (*(int *)(this_ptr + 0x40) == 3) {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_34 = (float)FUN_017f2da0();
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_017f2d90();
    local_34 = local_34 * (float)iVar1;
    fVar7 = (float)_exp2f((float)(unaff_ESI + 0x23) * g_023908e0 * g_023941f4);
    local_34 = (fVar7 * g_023941f8) / local_34;
  }
  else {
    local_34 = (float)unaff_ESI;
  }
  if ((unaff_ESI < 1) || (local_34 <= 0.0)) goto LAB_015b9197;
  if (0.0 < fVar4) {
    fVar7 = (float)_powf();
    fVar7 = (g_02390124 / fVar7) /
            *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10) + lVar3 * 4);
    if ((*(int *)(this_ptr + 0x40) == 3) && (local_34 < g_02390124)) {
      fVar7 = (float)_powf(fVar7,local_34 * local_34);
    }
    fVar7 = (float)_powf(fVar7);
    param_1 = param_1 * fVar7;
    if (0.0 < fVar5) goto LAB_015b9250;
LAB_015b916e:
    if (param_2 == '\0') goto LAB_015b9186;
LAB_015b9287:
    fVar6 = (float)_powf(local_34);
    param_1 = param_1 * fVar6 * local_34;
    if (param_1 <= g_0240e34c) goto LAB_015b9197;
  }
  else {
    if (fVar5 <= 0.0) goto LAB_015b916e;
LAB_015b9250:
    _powf(fVar6);
    fVar6 = (float)_powf();
    param_1 = param_1 * fVar6;
    if (param_2 != '\0') goto LAB_015b9287;
LAB_015b9186:
    if (param_1 <= g_0240e34c) goto LAB_015b9197;
  }
  param_1 = g_0240e34c;
LAB_015b9197:
  if (param_2 != '\0') {
    param_1 = param_1 * *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) + lVar3 * 4
                                  );
  }
  return param_1;
}

