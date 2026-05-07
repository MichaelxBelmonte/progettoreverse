// Function: FUN_012ebd30
// Address: 012ebd30
// Size: 643 bytes
// Class: MULSSGenerator


ulonglong FUN_012ebd30(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  double dVar5;
  double dVar6;
  double local_48;
  
  if ((char)unaff_RDI[0x28] != '\0') {
    (**(code **)(*unaff_RDI + 0x1a0))();
  }
  lVar4 = unaff_RDI[0x27];
  if (lVar4 == 0) {
LAB_012ebde4:
    lVar4 = unaff_RDI[0x16];
    dVar5 = DAT_023b4830;
    if (lVar4 != 0) {
      dVar6 = DAT_023b4830;
      if (0 < *(int *)(lVar4 + 0xc)) {
        local_48 = DAT_023b4830;
        iVar3 = 0;
        do {
          pvVar1 = _pthread_getspecific(param_1);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_01259520();
          if (dVar6 <= local_48) {
            dVar6 = local_48;
          }
          iVar3 = iVar3 + 1;
          local_48 = dVar6;
        } while (iVar3 < *(int *)(lVar4 + 0xc));
      }
      dVar5 = (double)FUN_001159b0();
      lVar4 = unaff_RDI[0x15];
      goto joined_r0x012ebf88;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar4 = unaff_RDI[0x27];
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x38) == '\0') goto LAB_012ebde4;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_0152a000();
  }
  lVar4 = unaff_RDI[0x15];
  dVar6 = dVar5;
joined_r0x012ebf88:
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0xc)) {
      iVar3 = 0;
      local_48 = dVar6;
      do {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012ebd30();
        if (dVar5 <= local_48) {
          dVar5 = local_48;
        }
        iVar3 = iVar3 + 1;
        dVar6 = dVar5;
        local_48 = dVar5;
      } while (iVar3 < *(int *)(lVar4 + 0xc));
    }
    FUN_000be170(dVar5);
  }
  return -(ulonglong)(DAT_023b4830 != dVar6) & (ulonglong)dVar6;
}


