// Function: FUN_013f5f90
// Address: 013f5f90
// Size: 820 bytes
// Class: MUDataPointFunction


undefined8 FUN_013f5f90(pthread_key_t param_1)

{
  longlong lVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  longlong unaff_RDI;
  double dVar5;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  double local_48;
  double local_40;
  char local_38 [8];
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) != 0) {
    FUN_00d23310();
    local_38[0] = local_68[0];
    pcVar2 = local_68;
    if (local_68[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_013faed0();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar2 = local_68;
    if (local_68[0] == '\0') {
      pcVar2 = local_38;
    }
    local_38[0] = local_68[0];
    *pcVar2 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (double)FUN_013faf20();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      local_68[0] = '\0';
      local_50 = 0;
      local_58 = 0;
      local_60 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          if (iVar4 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_013faed0();
            if ((local_40 != dVar5) || (NAN(local_40) || NAN(dVar5))) {
LAB_013f61a9:
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faed0();
              if (dVar5 <= local_40) goto LAB_013f62c2;
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faf20();
              if (dVar5 <= local_48) goto LAB_013f62c2;
            }
            else {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faf20();
              if ((local_48 != dVar5) || (NAN(local_48) || NAN(dVar5))) goto LAB_013f61a9;
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_013faed0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_48 = (double)FUN_013faf20();
            if (NAN(local_40)) {
LAB_013f62c2:
              FUN_01a81420();
              return 0;
            }
          }
          iVar4 = iVar4 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_01a81420();
    }
  }
  return 1;
}


