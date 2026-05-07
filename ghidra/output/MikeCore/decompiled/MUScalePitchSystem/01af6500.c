// Function: FUN_01af6500
// Address: 01af6500
// Size: 1024 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01af680b) */
/* WARNING: Removing unreachable block (ram,0x01af6814) */
/* WARNING: Removing unreachable block (ram,0x01af65df) */
/* WARNING: Removing unreachable block (ram,0x01af65e8) */

void FUN_01af6500(pthread_key_t param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_40;
  piVar1 = (int *)((longlong)unaff_RDI + 0x2fc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_01ad3cb0();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    if (lVar6 == 0) {
      lVar6 = unaff_RDI[99];
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    FUN_00cb1f10();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00db6540();
    if ((cVar4 != '\0') && (cVar4 = FUN_00db3680(), cVar4 == '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0173f250();
      if (cVar4 == '\0') {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173ef00();
        iVar2 = *(int *)((longlong)local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (1 < iVar2) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01738240();
          pvVar5 = _pthread_getspecific(param_1);
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            param_1 = (pthread_key_t)
                      *(undefined8 *)
                       (local_80 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          uVar8 = FUN_00e7bdb0();
          uVar9 = FUN_00e7bdb0();
          local_40 = local_60;
          local_38 = '\0';
          FUN_012502a0(uVar9,uVar8,1);
          param_1 = (pthread_key_t)uVar9;
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*unaff_RDI + 0x928))();
      pvVar5 = _pthread_getspecific(param_1);
      plVar10 = local_40;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar10 + 0x3f8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


