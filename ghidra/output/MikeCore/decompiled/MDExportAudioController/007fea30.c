// Function: FUN_007fea30
// Address: 007fea30
// Size: 1760 bytes
// Class: MDExportAudioController


void FUN_007fea30(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  double local_48;
  longlong local_38;
  char local_30;
  
  plVar1 = (longlong *)(unaff_RDI + 0x18);
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    plVar4 = (longlong *)*plVar1;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar4 = (longlong *)*plVar1;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar6 = (**(code **)(*plVar4 + 0x378))();
    *(undefined8 *)(unaff_RDI + 0x20) = uVar6;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_0152e9b0(0);
    *(undefined8 *)(unaff_RDI + 0x20) = uVar6;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    plVar4 = (longlong *)*plVar1;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar4 = (longlong *)*plVar1;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    dVar7 = (double)(**(code **)(*plVar4 + 0x380))();
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_0152e9b0(0);
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar8 = (double)FUN_01259650();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    if (local_38 == 0) {
      bVar5 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      bVar5 = local_58 != 0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_48 = dVar7 - dVar8;
    if (bVar5) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = (double)FUN_0152e9b0(0);
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar9 = (double)FUN_01259650();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      local_48 = local_48 - dVar9;
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar9 = (double)FUN_012646c0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_0125a280();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259520();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    dVar9 = (dVar9 - dVar10) / (dVar11 - dVar12);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_012646c0();
    dVar7 = local_48 * dVar9 + (dVar7 - dVar8) * (DAT_0238fee8 - dVar9) + dVar10;
  }
  *(double *)(unaff_RDI + 0x28) = dVar7;
  return;
}


