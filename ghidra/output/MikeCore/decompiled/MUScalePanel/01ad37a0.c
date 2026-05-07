// Function: FUN_01ad37a0
// Address: 01ad37a0
// Size: 1150 bytes
// Class: MUScalePanel


void FUN_01ad37a0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  longlong *local_48;
  char local_40;
  float local_38;
  float local_34;
  
  if ((longlong *)unaff_RDI[0x44] != (longlong *)0x0) {
    if ((int)unaff_RDI[0x32] == -1000000) {
      (**(code **)(*(longlong *)unaff_RDI[0x44] + 0x928))(0);
      FUN_01b2fee0(0);
      FUN_01b2fef0(0);
      FUN_01b2fea0();
    }
    else {
      FUN_01ad3cb0();
      plVar2 = local_48;
      if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = (float)FUN_01742280();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = (float)FUN_01742280();
      plVar1 = (longlong *)unaff_RDI[0x44];
      _exp2f((local_38 - local_34) * DAT_023941f4);
      (**(code **)(*plVar1 + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + DAT_02394248) - local_34) * DAT_023941f4);
      FUN_01b2fef0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + DAT_023908ec) - local_34) * DAT_023941f4);
      FUN_01b2fee0();
      FUN_01b2fea0();
      lVar3 = unaff_RDI[0x32];
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_01743090(local_38);
      if ((int)lVar3 == iVar5) {
        FUN_01b2fec0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + DAT_02394248) - local_34) * DAT_023941f4);
        FUN_01b2ff00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + DAT_02394248) - local_34) * DAT_023941f4);
        FUN_01b2ff10();
      }
      else {
        FUN_01b2fec0();
      }
      uVar10 = FUN_01b2fe70();
      *(undefined4 *)(unaff_RDI + 0x50) = uVar10;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x44] + 0x998))();
  }
  if ((int)unaff_RDI[0x32] == -1000000) {
    bVar8 = false;
  }
  else {
    bVar8 = (int)unaff_RDI[0x32] != *(int *)((longlong)unaff_RDI + 0x184);
  }
  pplVar7 = &local_48;
  (**(code **)(*unaff_RDI + 0x7b8))();
  plVar2 = local_48;
  FUN_00074a70();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01ad3bb4;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01ad3bb4:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    if (bVar8) {
      (**(code **)(*plVar2 + 0x960))();
    }
    else {
      (**(code **)(*plVar2 + 0x968))();
    }
    FUN_00d50b20();
  }
  return;
}


