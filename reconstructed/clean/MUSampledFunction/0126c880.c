// Function: FUN_0126c880
// Address: 0126c880
// Size: 1084 bytes
// Class: MUSampledFunction

double FUN_0126c880(double param_1,double param_2)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* in_ECX;
  int64_t this_ptr;
  float fVar5;
  double dVar6;
  double dVar7;
  int64_t local_60;
  char local_58;
  double local_50;
  double local_38;
  
  fVar1 = *(float *)(this_ptr + 0x138);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return param_1;
  }
  FUN_0125e7c0();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return param_1;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return param_1;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_013dee00();
  fVar5 = g_02390d00;
  if (g_02390d00 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar5 = (fVar5 + g_02390124) * g_0239109c + g_02391090;
  local_38 = param_1;
  if ((cVar2 == '\0') && (cVar2 = FUN_01263cf0(), cVar2 == '\0')) {
    dVar6 = *(double *)(this_ptr + 0xf0) + g_0241b6a8;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013dee60();
    if (cVar2 == '\0') {
      local_50 = g_0240cfd8;
LAB_0126cad9:
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_013deec0();
      if (cVar2 == '\0') {
        dVar6 = dVar6 + g_0241b6a8;
      }
      else {
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar4 = FUN_013ded90();
        pvVar3 = _pthread_getspecific(in_ECX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_013de950();
        dVar6 = (double)FUN_01264500(dVar6 * (double)lVar4);
        if (dVar6 < param_2) {
          if (0.0 <= fVar1) goto LAB_0126c990;
          local_38 = (double)fVar5;
          if (param_2 < dVar6 + g_0241b6a8) {
            local_38 = local_38 +
                       (((dVar6 + g_0241b6a8) - param_2) / g_0241b6a8) *
                       (g_0238fee8 - local_38);
          }
          goto LAB_0126c982;
        }
      }
      if (fVar1 <= 0.0) goto LAB_0126c990;
      fVar5 = g_02390124;
      if (fVar1 <= g_02390124) {
        fVar5 = fVar1;
      }
      local_38 = (double)(g_02390124 - fVar5);
      if (g_0241b6a8 + param_2 <= dVar6) {
        if (g_0241b6b0 + param_2 < local_50) {
          local_38 = local_38 +
                     (((local_50 + g_0241b6a8) - param_2) / g_0241b6a8) *
                     (g_0238fee8 - local_38);
        }
        goto LAB_0126c982;
      }
      dVar7 = g_0238fee8 - local_38;
      local_50 = dVar6 + g_0241b6b0;
    }
    else {
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013ded30();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_013de950();
      local_50 = (double)FUN_01264500(dVar7 * (double)lVar4);
      if (local_50 <= param_2) goto LAB_0126cad9;
      if (0.0 <= fVar1) goto LAB_0126c990;
      local_38 = (double)fVar5;
      local_50 = local_50 + g_0241b6b0;
      if (param_2 <= local_50) goto LAB_0126c982;
      dVar7 = g_0238fee8 - local_38;
    }
    local_38 = local_38 + ((param_2 - local_50) / g_0241b6a8) * dVar7;
  }
  else {
    if (0.0 <= fVar1) goto LAB_0126c990;
    local_38 = (double)fVar5;
  }
LAB_0126c982:
  local_38 = param_1 * local_38;
LAB_0126c990:
  FUN_00d50b20();
  return local_38;
}

