// Function: FUN_0126c880
// Address: 0126c880
// Size: 1084 bytes
// Class: MUSampledFunction


/* WARNING: Removing unreachable block (ram,0x0126c8ee) */
/* WARNING: Removing unreachable block (ram,0x0126c8f7) */

double FUN_0126c880(double param_1,double param_2)

{
  float fVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong unaff_RDI;
  float fVar5;
  double dVar6;
  double dVar7;
  longlong local_60;
  char local_58;
  double local_50;
  double local_38;
  
  fVar1 = *(float *)(unaff_RDI + 0x138);
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
  fVar5 = DAT_02390d00;
  if (DAT_02390d00 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar5 = (fVar5 + DAT_02390124) * DAT_0239109c + DAT_02391090;
  local_38 = param_1;
  if ((cVar2 == '\0') && (cVar2 = FUN_01263cf0(), cVar2 == '\0')) {
    dVar6 = *(double *)(unaff_RDI + 0xf0) + DAT_0241b6a8;
    pvVar3 = _pthread_getspecific(in_ECX);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013dee60();
    if (cVar2 == '\0') {
      local_50 = DAT_0240cfd8;
LAB_0126cad9:
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_013deec0();
      if (cVar2 == '\0') {
        dVar6 = dVar6 + DAT_0241b6a8;
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
          if (param_2 < dVar6 + DAT_0241b6a8) {
            local_38 = local_38 +
                       (((dVar6 + DAT_0241b6a8) - param_2) / DAT_0241b6a8) *
                       (DAT_0238fee8 - local_38);
          }
          goto LAB_0126c982;
        }
      }
      if (fVar1 <= 0.0) goto LAB_0126c990;
      fVar5 = DAT_02390124;
      if (fVar1 <= DAT_02390124) {
        fVar5 = fVar1;
      }
      local_38 = (double)(DAT_02390124 - fVar5);
      if (DAT_0241b6a8 + param_2 <= dVar6) {
        if (DAT_0241b6b0 + param_2 < local_50) {
          local_38 = local_38 +
                     (((local_50 + DAT_0241b6a8) - param_2) / DAT_0241b6a8) *
                     (DAT_0238fee8 - local_38);
        }
        goto LAB_0126c982;
      }
      dVar7 = DAT_0238fee8 - local_38;
      local_50 = dVar6 + DAT_0241b6b0;
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
      local_50 = local_50 + DAT_0241b6b0;
      if (param_2 <= local_50) goto LAB_0126c982;
      dVar7 = DAT_0238fee8 - local_38;
    }
    local_38 = local_38 + ((param_2 - local_50) / DAT_0241b6a8) * dVar7;
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


